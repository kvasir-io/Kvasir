#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Flash
    namespace FlashAcr{    ///<Access control register
        using Addr = Register::Address<0x40022000,0xffff80f8,0x00000000,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prften{}; 
        ///Instruction cache enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> icen{}; 
        ///Data cache enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dcen{}; 
        ///Instruction cache reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icrst{}; 
        ///Data cache reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dcrst{}; 
        ///Flash Power-down mode during Low-power              run mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runPd{}; 
        ///Flash Power-down mode during Low-power              sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sleepPd{}; 
    }
    namespace FlashPdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40022004,0x00000000,0x00000000,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
    }
    namespace FlashKeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022008,0x00000000,0x00000000,unsigned>;
        ///KEYR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr{}; 
    }
    namespace FlashOptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x4002200c,0x00000000,0x00000000,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
    }
    namespace FlashSr{    ///<Status register
        using Addr = Register::Address<0x40022010,0xfffe3c04,0x00000000,unsigned>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eop{}; 
        ///Operation error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> operr{}; 
        ///Programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> progerr{}; 
        ///Write protected error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrperr{}; 
        ///Programming alignment              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        ///Size error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sizerr{}; 
        ///Programming sequence error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgserr{}; 
        ///Fast programming data miss              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> miserr{}; 
        ///Fast programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fasterr{}; 
        ///PCROP read error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rderr{}; 
        ///Option validity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> optverr{}; 
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsy{}; 
    }
    namespace FlashCr{    ///<Flash control register
        using Addr = Register::Address<0x40022014,0x30f87000,0x00000000,unsigned>;
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        ///Page erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        ///Bank 1 Mass erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer1{}; 
        ///Page number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> pnb{}; 
        ///Bank erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bker{}; 
        ///Bank 2 Mass erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mer2{}; 
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> start{}; 
        ///Options modification start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> optstrt{}; 
        ///Fast programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fstpg{}; 
        ///End of operation interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eopie{}; 
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errie{}; 
        ///PCROP read error interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rderrie{}; 
        ///Force the option byte              loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
        ///Options Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> optlock{}; 
        ///FLASH_CR Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
    }
    namespace FlashEccr{    ///<Flash ECC register
        using Addr = Register::Address<0x40022018,0x3ee00000,0x00000000,unsigned>;
        ///ECC fail address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> addrEcc{}; 
        ///ECC fail bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bkEcc{}; 
        ///System Flash ECC fail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> sysfEcc{}; 
        ///ECC correction interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eccie{}; 
        ///ECC correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eccc{}; 
        ///ECC detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eccd{}; 
    }
    namespace FlashOptr{    ///<Flash option register
        using Addr = Register::Address<0x40022020,0xfc40c800,0x00000000,unsigned>;
        ///Read protection level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdp{}; 
        ///BOR reset Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> borLev{}; 
        ///nRST_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        ///Independent watchdog              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idwgSw{}; 
        ///Independent watchdog counter freeze in              Stop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iwdgStop{}; 
        ///Independent watchdog counter freeze in              Standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iwdgStdby{}; 
        ///Window watchdog selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> wwdgSw{}; 
        ///Dual-bank boot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bfb2{}; 
        ///Dual-Bank on 512 KB or 256 KB Flash              memory devices
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dualbank{}; 
        ///Boot configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nboot1{}; 
        ///SRAM2 parity check enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sram2Pe{}; 
        ///SRAM2 Erase when system              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sram2Rst{}; 
    }
    namespace FlashPcrop1sr{    ///<Flash Bank 1 PCROP Start address          register
        using Addr = Register::Address<0x40022024,0xffff0000,0x00000000,unsigned>;
        ///Bank 1 PCROP area start              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop1Strt{}; 
    }
    namespace FlashPcrop1er{    ///<Flash Bank 1 PCROP End address          register
        using Addr = Register::Address<0x40022028,0x7fff0000,0x00000000,unsigned>;
        ///Bank 1 PCROP area end              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop1End{}; 
        ///PCROP area preserved when RDP level              decreased
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pcropRdp{}; 
    }
    namespace FlashWrp1ar{    ///<Flash Bank 1 WRP area A address          register
        using Addr = Register::Address<0x4002202c,0xff00ff00,0x00000000,unsigned>;
        ///Bank 1 WRP first area              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã¢â‚¬Å“AÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬              start offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp1aStrt{}; 
        ///Bank 1 WRP first area A end              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp1aEnd{}; 
    }
    namespace FlashWrp1br{    ///<Flash Bank 1 WRP area B address          register
        using Addr = Register::Address<0x40022030,0xff00ff00,0x00000000,unsigned>;
        ///Bank 1 WRP second area B end              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp1bStrt{}; 
        ///Bank 1 WRP second area B start              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp1bEnd{}; 
    }
    namespace FlashPcrop2sr{    ///<Flash Bank 2 PCROP Start address          register
        using Addr = Register::Address<0x40022044,0xffff0000,0x00000000,unsigned>;
        ///Bank 2 PCROP area start              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop2Strt{}; 
    }
    namespace FlashPcrop2er{    ///<Flash Bank 2 PCROP End address          register
        using Addr = Register::Address<0x40022048,0xffff0000,0x00000000,unsigned>;
        ///Bank 2 PCROP area end              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop2End{}; 
    }
    namespace FlashWrp2ar{    ///<Flash Bank 2 WRP area A address          register
        using Addr = Register::Address<0x4002204c,0xff00ff00,0x00000000,unsigned>;
        ///Bank 2 WRP first area A start              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp2aStrt{}; 
        ///Bank 2 WRP first area A end              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp2aEnd{}; 
    }
    namespace FlashWrp2br{    ///<Flash Bank 2 WRP area B address          register
        using Addr = Register::Address<0x40022050,0xff00ff00,0x00000000,unsigned>;
        ///Bank 2 WRP second area B start              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp2bStrt{}; 
        ///Bank 2 WRP second area B end              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp2bEnd{}; 
    }
}
