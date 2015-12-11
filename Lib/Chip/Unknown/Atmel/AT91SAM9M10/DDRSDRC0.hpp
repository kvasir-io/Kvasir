#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DDR_SDR SDRAM Controller 0
    namespace Ddrsdrc0Mr{    ///<DDRSDRC Mode Register
        using Addr = Register::Address<0xffffe600,0xfffffff8,0,unsigned>;
        ///DDRSDRC Command Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Ddrsdrc0Rtr{    ///<DDRSDRC Refresh Timer Register
        using Addr = Register::Address<0xffffe604,0xfffff000,0,unsigned>;
        ///DDRSDRC Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace Ddrsdrc0Cr{    ///<DDRSDRC Configuration Register
        using Addr = Register::Address<0xffffe608,0xfffa8c00,0,unsigned>;
        ///Number of Column Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nc{}; 
        ///Number of Row Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> nr{}; 
        ///CAS Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> cas{}; 
        ///Reset DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dll{}; 
        ///Output Driver Impedance Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dic{}; 
        ///Disable DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> disDll{}; 
        ///Off-chip Driver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ocd{}; 
        ///External Bus Interface is Shared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ebishare{}; 
        ///ACTIVE Bank X to Burst Stop Read Access Bank Y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> actbst{}; 
    }
    namespace Ddrsdrc0Tpr0{    ///<DDRSDRC Timing Parameter 0 Register
        using Addr = Register::Address<0xffffe60c,0x00000000,0,unsigned>;
        ///Active to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tras{}; 
        ///Row to Column Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> trcd{}; 
        ///Write Recovery Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> twr{}; 
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trc{}; 
        ///Row Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trp{}; 
        ///Active bankA to Active bankB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trrd{}; 
        ///Internal Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> twtr{}; 
        ///Reduce Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reduceWrrd{}; 
        ///Load Mode Register Command to Active or Refresh Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> tmrd{}; 
    }
    namespace Ddrsdrc0Tpr1{    ///<DDRSDRC Timing Parameter 1 Register
        using Addr = Register::Address<0xffffe610,0xf00000e0,0,unsigned>;
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        ///Exit Self Refresh Delay to Non-read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsnr{}; 
        ///ExiT Self Refresh Delay to Read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txsrd{}; 
        ///Exit Power-down Delay to First Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> txp{}; 
    }
    namespace Ddrsdrc0Tpr2{    ///<DDRSDRC Timing Parameter 2 Register
        using Addr = Register::Address<0xffffe614,0xffff8000,0,unsigned>;
        ///Exit Active Power Down Delay to Read Command in Mode "Fast Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txard{}; 
        ///Exit Active Power Down Delay to Read Command in Mode "Slow Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txards{}; 
        ///Row Precharge All Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trpa{}; 
        ///Read to Precharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trtp{}; 
    }
    namespace Ddrsdrc0Lpr{    ///<DDRSDRC Low-power Register
        using Addr = Register::Address<0xffffe61c,0xffcec088,0,unsigned>;
        ///Low-power Command Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lpcb{}; 
        ///Clock Frozen Command Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clkFr{}; 
        ///Partial Array Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pasr{}; 
        ///Temperature Compensated Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tcr{}; 
        ///Drive Strength
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ds{}; 
        ///Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> timeout{}; 
        ///Active Power Down Exit Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> apde{}; 
        ///Update Load Mode Register and Extended Mode Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> updMr{}; 
    }
    namespace Ddrsdrc0Md{    ///<DDRSDRC Memory Device Register
        using Addr = Register::Address<0xffffe620,0xffffffe8,0,unsigned>;
        ///Memory Device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> md{}; 
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbw{}; 
    }
    namespace Ddrsdrc0Dll{    ///<DDRSDRC DLL Information Register
        using Addr = Register::Address<0xffffe624,0xffff00f8,0,unsigned>;
        ///DLL Master Delay Increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdinc{}; 
        ///DLL Master Delay Decrement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mddec{}; 
        ///DLL Master Delay Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdovf{}; 
        ///DLL Master Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mdval{}; 
    }
    namespace Ddrsdrc0Hs{    ///<DDRSDRC High Speed Register
        using Addr = Register::Address<0xffffe62c,0xfffffffb,0,unsigned>;
        ///Anticip Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disAnticipRead{}; 
    }
    namespace Ddrsdrc0Delay0{    ///<DDRSDRC Delay I/O Register
        using Addr = Register::Address<0xffffe640,0x00000000,0,unsigned>;
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> delay1{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> delay2{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay3{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> delay4{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> delay5{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> delay6{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> delay7{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> delay8{}; 
    }
    namespace Ddrsdrc0Delay1{    ///<DDRSDRC Delay I/O Register
        using Addr = Register::Address<0xffffe644,0x00000000,0,unsigned>;
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> delay1{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> delay2{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay3{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> delay4{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> delay5{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> delay6{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> delay7{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> delay8{}; 
    }
    namespace Ddrsdrc0Delay2{    ///<DDRSDRC Delay I/O Register
        using Addr = Register::Address<0xffffe648,0x00000000,0,unsigned>;
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> delay1{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> delay2{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay3{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> delay4{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> delay5{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> delay6{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> delay7{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> delay8{}; 
    }
    namespace Ddrsdrc0Delay3{    ///<DDRSDRC Delay I/O Register
        using Addr = Register::Address<0xffffe64c,0x00000000,0,unsigned>;
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> delay1{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> delay2{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> delay3{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> delay4{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> delay5{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> delay6{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> delay7{}; 
        ///Delay1..Delay8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> delay8{}; 
    }
    namespace Ddrsdrc0Wpmr{    ///<DDRSDRC Write Protect Mode Register
        using Addr = Register::Address<0xffffe6e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace Ddrsdrc0Wpsr{    ///<DDRSDRC Write Protect Status Register
        using Addr = Register::Address<0xffffe6e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
