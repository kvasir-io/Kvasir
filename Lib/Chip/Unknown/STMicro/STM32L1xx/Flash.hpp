#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Flash
    namespace Noneacr{    ///<Access control register
        using Addr = Register::Address<0x40023c00,0xffffffe0,0,unsigned>;
        ///Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> latency{}; 
        namespace LatencyValC{
        }
        ///Prefetch enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prften{}; 
        namespace PrftenValC{
        }
        ///64-bit access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> acc64{}; 
        namespace Acc64ValC{
        }
        ///Flash mode during Sleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sleepPd{}; 
        namespace SleeppdValC{
        }
        ///Flash mode during Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> runPd{}; 
        namespace RunpdValC{
        }
    }
    namespace Nonepecr{    ///<Program/erase control register
        using Addr = Register::Address<0x40023c04,0xfff878e0,0,unsigned>;
        ///FLASH_PECR and data EEPROM
              lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pelock{}; 
        namespace PelockValC{
        }
        ///Program memory lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> prglock{}; 
        namespace PrglockValC{
        }
        ///Option bytes block lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> optlock{}; 
        namespace OptlockValC{
        }
        ///Program memory selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> prog{}; 
        namespace ProgValC{
        }
        ///Data EEPROM selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
        ///Fixed time data write for Byte, Half
              Word and Word programming
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ftdw{}; 
        namespace FtdwValC{
        }
        ///Page or Double Word erase
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> erase{}; 
        namespace EraseValC{
        }
        ///Half Page/Double Word programming
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fprg{}; 
        namespace FprgValC{
        }
        ///Parallel bank mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> parallelbank{}; 
        namespace ParallelbankValC{
        }
        ///End of programming interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eopie{}; 
        namespace EopieValC{
        }
        ///Error interrupt enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        ///Launch the option byte
              loading
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oblLaunch{}; 
        namespace ObllaunchValC{
        }
    }
    namespace Nonepdkeyr{    ///<Power down key register
        using Addr = Register::Address<0x40023c08,0x00000000,0,unsigned>;
        ///RUN_PD in FLASH_ACR key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdkeyr{}; 
        namespace PdkeyrValC{
        }
    }
    namespace Nonepekeyr{    ///<Program/erase key register
        using Addr = Register::Address<0x40023c0c,0x00000000,0,unsigned>;
        ///FLASH_PEC and data EEPROM
              key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pekeyr{}; 
        namespace PekeyrValC{
        }
    }
    namespace Noneprgkeyr{    ///<Program memory key register
        using Addr = Register::Address<0x40023c10,0x00000000,0,unsigned>;
        ///Program memory key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> prgkeyr{}; 
        namespace PrgkeyrValC{
        }
    }
    namespace Noneoptkeyr{    ///<Option byte key register
        using Addr = Register::Address<0x40023c14,0x00000000,0,unsigned>;
        ///Option byte key
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> optkeyr{}; 
        namespace OptkeyrValC{
        }
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x40023c18,0xffffe0f0,0,unsigned>;
        ///Write/erase operations in
              progress
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bsy{}; 
        namespace BsyValC{
        }
        ///End of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eop{}; 
        namespace EopValC{
        }
        ///End of high voltage
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endhv{}; 
        namespace EndhvValC{
        }
        ///Flash memory module ready after low
              power mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ready{}; 
        namespace ReadyValC{
        }
        ///Write protected error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wrperr{}; 
        namespace WrperrValC{
        }
        ///Programming alignment
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pgaerr{}; 
        namespace PgaerrValC{
        }
        ///Size error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sizerr{}; 
        namespace SizerrValC{
        }
        ///Option validity error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> optverr{}; 
        namespace OptverrValC{
        }
        ///Option UserValidity Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> optverrusr{}; 
        namespace OptverrusrValC{
        }
    }
    namespace Noneobr{    ///<Option byte register
        using Addr = Register::Address<0x40023c1c,0xff00ff00,0,unsigned>;
        ///Read protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rdprt{}; 
        namespace RdprtValC{
        }
        ///BOR_LEV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> borLev{}; 
        namespace BorlevValC{
        }
        ///IWDG_SW
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iwdgSw{}; 
        namespace IwdgswValC{
        }
        ///nRTS_STOP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> nrtsStop{}; 
        namespace NrtsstopValC{
        }
        ///nRST_STDBY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> nrstStdby{}; 
        namespace NrststdbyValC{
        }
        ///Boot From Bank 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> bfb2{}; 
        namespace Bfb2ValC{
        }
    }
    namespace Nonewrpr1{    ///<Write protection register
        using Addr = Register::Address<0x40023c20,0x00000000,0,unsigned>;
        ///Write protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp1{}; 
        namespace Wrp1ValC{
        }
    }
    namespace Nonewrpr2{    ///<Write protection register
        using Addr = Register::Address<0x40023c80,0x00000000,0,unsigned>;
        ///WRP2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp2{}; 
        namespace Wrp2ValC{
        }
    }
    namespace Nonewrpr3{    ///<Write protection register
        using Addr = Register::Address<0x40023c84,0x00000000,0,unsigned>;
        ///WRP3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> wrp3{}; 
        namespace Wrp3ValC{
        }
    }
}
