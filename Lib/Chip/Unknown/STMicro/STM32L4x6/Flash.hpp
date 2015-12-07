#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Access control register
        using Addr = Register::Address<0x40022000,0xffff80f8,0,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prften{}; 
        namespace PrftenValC{
        }
        ///Instruction cache enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> icen{}; 
        namespace IcenValC{
        }
        ///Data cache enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dcen{}; 
        namespace DcenValC{
        }
        ///Instruction cache reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> icrst{}; 
        namespace IcrstValC{
        }
        ///Data cache reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dcrst{}; 
        namespace DcrstValC{
        }
        ///Flash Power-down mode during Low-power
              run mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> runPd{}; 
        namespace RunpdValC{
        }
        ///Flash Power-down mode during Low-power
              sleep mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> sleepPd{}; 
        namespace SleeppdValC{
        }
    }
    namespace Nonepdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40022004,0x00000000,0,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
        namespace PdkeyrValC{
        }
    }
    namespace Nonekeyr{    ///<Flash key register
        using Addr = Register::Address<0x40022008,0x00000000,0,unsigned>;
        ///KEYR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> keyr{}; 
        namespace KeyrValC{
        }
    }
    namespace Noneoptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x4002200c,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
        namespace OptkeyrValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40022010,0xfffe3c04,0,unsigned>;
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///Operation error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> operr{}; 
        namespace OperrValC{
        }
        ///Programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> progerr{}; 
        namespace ProgerrValC{
        }
        ///Write protected error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wrperr{}; 
        namespace WrperrValC{
        }
        ///Programming alignment
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        namespace PgaerrValC{
        }
        ///Size error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> sizerr{}; 
        namespace SizerrValC{
        }
        ///Programming sequence error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pgserr{}; 
        namespace PgserrValC{
        }
        ///Fast programming data miss
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> miserr{}; 
        namespace MiserrValC{
        }
        ///Fast programming error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fasterr{}; 
        namespace FasterrValC{
        }
        ///PCROP read error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rderr{}; 
        namespace RderrValC{
        }
        ///Option validity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> optverr{}; 
        namespace OptverrValC{
        }
        ///Busy
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
    }
    namespace Nonecr{    ///<Flash control register
        using Addr = Register::Address<0x40022014,0x30f87000,0,unsigned>;
        ///Programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pg{}; 
        namespace PgValC{
        }
        ///Page erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> per{}; 
        namespace PerValC{
        }
        ///Bank 1 Mass erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mer1{}; 
        namespace Mer1ValC{
        }
        ///Page number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,3),Register::ReadWriteAccess,unsigned> pnb{}; 
        namespace PnbValC{
        }
        ///Bank erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> bker{}; 
        namespace BkerValC{
        }
        ///Bank 2 Mass erase
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mer2{}; 
        namespace Mer2ValC{
        }
        ///Start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Options modification start
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> optstrt{}; 
        namespace OptstrtValC{
        }
        ///Fast programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> fstpg{}; 
        namespace FstpgValC{
        }
        ///End of operation interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///PCROP read error interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> rderrie{}; 
        namespace RderrieValC{
        }
        ///Force the option byte
              loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
        namespace ObllaunchValC{
        }
        ///Options Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> optlock{}; 
        namespace OptlockValC{
        }
        ///FLASH_CR Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lock{}; 
        namespace LockValC{
        }
    }
    namespace Noneeccr{    ///<Flash ECC register
        using Addr = Register::Address<0x40022018,0x3ee00000,0,unsigned>;
        ///ECC fail address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> addrEcc{}; 
        namespace AddreccValC{
        }
        ///ECC fail bank
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bkEcc{}; 
        namespace BkeccValC{
        }
        ///System Flash ECC fail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sysfEcc{}; 
        namespace SysfeccValC{
        }
        ///ECC correction interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> eccie{}; 
        namespace EccieValC{
        }
        ///ECC correction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> eccc{}; 
        namespace EcccValC{
        }
        ///ECC detection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eccd{}; 
        namespace EccdValC{
        }
    }
    namespace Noneoptr{    ///<Flash option register
        using Addr = Register::Address<0x40022020,0xfc40c800,0,unsigned>;
        ///Read protection level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdp{}; 
        namespace RdpValC{
        }
        ///BOR reset Level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> borLev{}; 
        namespace BorlevValC{
        }
        ///nRST_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> nrstStop{}; 
        namespace NrststopValC{
        }
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        namespace NrststdbyValC{
        }
        ///Independent watchdog
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idwgSw{}; 
        namespace IdwgswValC{
        }
        ///Independent watchdog counter freeze in
              Stop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> iwdgStop{}; 
        namespace IwdgstopValC{
        }
        ///Independent watchdog counter freeze in
              Standby mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iwdgStdby{}; 
        namespace IwdgstdbyValC{
        }
        ///Window watchdog selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> wwdgSw{}; 
        namespace WwdgswValC{
        }
        ///Dual-bank boot
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bfb2{}; 
        namespace Bfb2ValC{
        }
        ///Dual-Bank on 512 KB or 256 KB Flash
              memory devices
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> dualbank{}; 
        namespace DualbankValC{
        }
        ///Boot configuration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> nboot1{}; 
        namespace Nboot1ValC{
        }
        ///SRAM2 parity check enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> sram2Pe{}; 
        namespace Sram2peValC{
        }
        ///SRAM2 Erase when system
              reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> sram2Rst{}; 
        namespace Sram2rstValC{
        }
    }
    namespace Nonepcrop1sr{    ///<Flash Bank 1 PCROP Start address
          register
        using Addr = Register::Address<0x40022024,0xffff0000,0,unsigned>;
        ///Bank 1 PCROP area start
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop1Strt{}; 
        namespace Pcrop1strtValC{
        }
    }
    namespace Nonepcrop1er{    ///<Flash Bank 1 PCROP End address
          register
        using Addr = Register::Address<0x40022028,0x7fff0000,0,unsigned>;
        ///Bank 1 PCROP area end
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop1End{}; 
        namespace Pcrop1endValC{
        }
        ///PCROP area preserved when RDP level
              decreased
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> pcropRdp{}; 
        namespace PcroprdpValC{
        }
    }
    namespace Nonewrp1ar{    ///<Flash Bank 1 WRP area A address
          register
        using Addr = Register::Address<0x4002202c,0xff00ff00,0,unsigned>;
        ///Bank 1 WRP first area
              ÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬ÃƒÆ’Ã†â€™ÃƒÂ¢Ã¢â€šÂ¬Ã‚Â¦ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã¢â‚¬Å“AÃƒÆ’Ã†â€™Ãƒâ€ Ã¢â‚¬â„¢ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã†â€™Ãƒâ€šÃ‚Â¢ÃƒÆ’Ã‚Â¢ÃƒÂ¢Ã¢â‚¬Å¡Ã‚Â¬Ãƒâ€¦Ã‚Â¡ÃƒÆ’Ã¢â‚¬Å¡Ãƒâ€šÃ‚Â¬
              start offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp1aStrt{}; 
        namespace Wrp1astrtValC{
        }
        ///Bank 1 WRP first area A end
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp1aEnd{}; 
        namespace Wrp1aendValC{
        }
    }
    namespace Nonewrp1br{    ///<Flash Bank 1 WRP area B address
          register
        using Addr = Register::Address<0x40022030,0xff00ff00,0,unsigned>;
        ///Bank 1 WRP second area B end
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp1bStrt{}; 
        namespace Wrp1bstrtValC{
        }
        ///Bank 1 WRP second area B start
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp1bEnd{}; 
        namespace Wrp1bendValC{
        }
    }
    namespace Nonepcrop2sr{    ///<Flash Bank 2 PCROP Start address
          register
        using Addr = Register::Address<0x40022044,0xffff0000,0,unsigned>;
        ///Bank 2 PCROP area start
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop2Strt{}; 
        namespace Pcrop2strtValC{
        }
    }
    namespace Nonepcrop2er{    ///<Flash Bank 2 PCROP End address
          register
        using Addr = Register::Address<0x40022048,0xffff0000,0,unsigned>;
        ///Bank 2 PCROP area end
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pcrop2End{}; 
        namespace Pcrop2endValC{
        }
    }
    namespace Nonewrp2ar{    ///<Flash Bank 2 WRP area A address
          register
        using Addr = Register::Address<0x4002204c,0xff00ff00,0,unsigned>;
        ///Bank 2 WRP first area A start
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp2aStrt{}; 
        namespace Wrp2astrtValC{
        }
        ///Bank 2 WRP first area A end
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp2aEnd{}; 
        namespace Wrp2aendValC{
        }
    }
    namespace Nonewrp2br{    ///<Flash Bank 2 WRP area B address
          register
        using Addr = Register::Address<0x40022050,0xff00ff00,0,unsigned>;
        ///Bank 2 WRP second area B start
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> wrp2bStrt{}; 
        namespace Wrp2bstrtValC{
        }
        ///Bank 2 WRP second area B end
              offset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> wrp2bEnd{}; 
        namespace Wrp2bendValC{
        }
    }
}
