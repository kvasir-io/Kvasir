#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//DDR_SDR SDRAM Controller
    namespace DdrsdrcMr{    ///<DDRSDRC Mode Register
        using Addr = Register::Address<0xffffe800,0xfffffff8,0,unsigned>;
        ///DDRSDRC Command Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace DdrsdrcRtr{    ///<DDRSDRC Refresh Timer Register
        using Addr = Register::Address<0xffffe804,0xfffff000,0,unsigned>;
        ///DDRSDRC Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace DdrsdrcCr{    ///<DDRSDRC Configuration Register
        using Addr = Register::Address<0xffffe808,0xffaa8c00,0,unsigned>;
        ///Number of Column Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nc{}; 
        namespace NcValC{
        }
        ///Number of Row Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> nr{}; 
        namespace NrValC{
        }
        ///CAS Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> cas{}; 
        namespace CasValC{
        }
        ///Reset DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dll{}; 
        namespace DllValC{
        }
        ///Output Driver Impedance Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dic{}; 
        namespace DicValC{
        }
        ///Disable DLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> disDll{}; 
        namespace DisdllValC{
        }
        ///Off-chip Driver
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> ocd{}; 
        namespace OcdValC{
        }
        ///External Bus Interface is Shared
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> ebishare{}; 
        namespace EbishareValC{
        }
        ///ACTIVE Bank X to Burst Stop Read Access Bank Y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> actbst{}; 
        namespace ActbstValC{
        }
        ///Number of Banks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> nb{}; 
        namespace NbValC{
        }
        ///Type of Decoding
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> decod{}; 
        namespace DecodValC{
        }
    }
    namespace DdrsdrcTpr0{    ///<DDRSDRC Timing Parameter 0 Register
        using Addr = Register::Address<0xffffe80c,0x00000000,0,unsigned>;
        ///Active to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tras{}; 
        namespace TrasValC{
        }
        ///Row to Column Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> trcd{}; 
        namespace TrcdValC{
        }
        ///Write Recovery Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> twr{}; 
        namespace TwrValC{
        }
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> trc{}; 
        namespace TrcValC{
        }
        ///Row Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> trp{}; 
        namespace TrpValC{
        }
        ///Active bankA to Active bankB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trrd{}; 
        namespace TrrdValC{
        }
        ///Internal Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> twtr{}; 
        namespace TwtrValC{
        }
        ///Reduce Write to Read Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reduceWrrd{}; 
        namespace ReducewrrdValC{
        }
        ///Load Mode Register Command to Active or Refresh Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> tmrd{}; 
        namespace TmrdValC{
        }
    }
    namespace DdrsdrcTpr1{    ///<DDRSDRC Timing Parameter 1 Register
        using Addr = Register::Address<0xffffe810,0xf00000e0,0,unsigned>;
        ///Row Cycle Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> trfc{}; 
        namespace TrfcValC{
        }
        ///Exit Self Refresh Delay to Non-read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txsnr{}; 
        namespace TxsnrValC{
        }
        ///ExiT Self Refresh Delay to Read Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txsrd{}; 
        namespace TxsrdValC{
        }
        ///Exit Power-down Delay to First Command
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> txp{}; 
        namespace TxpValC{
        }
    }
    namespace DdrsdrcTpr2{    ///<DDRSDRC Timing Parameter 2 Register
        using Addr = Register::Address<0xffffe814,0xfff08000,0,unsigned>;
        ///Exit Active Power Down Delay to Read Command in Mode "Fast Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> txard{}; 
        namespace TxardValC{
        }
        ///Exit Active Power Down Delay to Read Command in Mode "Slow Exit".
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> txards{}; 
        namespace TxardsValC{
        }
        ///Row Precharge All Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> trpa{}; 
        namespace TrpaValC{
        }
        ///Read to Precharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> trtp{}; 
        namespace TrtpValC{
        }
        ///Four Active window
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> tfaw{}; 
        namespace TfawValC{
        }
    }
    namespace DdrsdrcLpr{    ///<DDRSDRC Low-power Register
        using Addr = Register::Address<0xffffe81c,0xffcec888,0,unsigned>;
        ///Low-power Command Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lpcb{}; 
        namespace LpcbValC{
        }
        ///Clock Frozen Command Bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clkFr{}; 
        namespace ClkfrValC{
        }
        ///Partial Array Self Refresh
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pasr{}; 
        namespace PasrValC{
        }
        ///Drive Strength
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> ds{}; 
        namespace DsValC{
        }
        ///Low Power Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
        ///Active Power Down Exit Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> apde{}; 
        namespace ApdeValC{
        }
        ///Update Load Mode Register and Extended Mode Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> updMr{}; 
        namespace UpdmrValC{
        }
    }
    namespace DdrsdrcMd{    ///<DDRSDRC Memory Device Register
        using Addr = Register::Address<0xffffe820,0xffffffe8,0,unsigned>;
        ///Memory Device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
        }
    }
    namespace DdrsdrcDll{    ///<DDRSDRC DLL Information Register
        using Addr = Register::Address<0xffffe824,0xffff00f8,0,unsigned>;
        ///DLL Master Delay Increment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mdinc{}; 
        namespace MdincValC{
        }
        ///DLL Master Delay Decrement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mddec{}; 
        namespace MddecValC{
        }
        ///DLL Master Delay Overflow Flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mdovf{}; 
        namespace MdovfValC{
        }
        ///DLL Master Delay Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> mdval{}; 
        namespace MdvalValC{
        }
    }
    namespace DdrsdrcHs{    ///<DDRSDRC High Speed Register
        using Addr = Register::Address<0xffffe82c,0xfffffffb,0,unsigned>;
        ///Anticip Read Access
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> disAnticipRead{}; 
        namespace DisanticipreadValC{
        }
    }
    namespace DdrsdrcWpmr{    ///<DDRSDRC Write Protect Mode Register
        using Addr = Register::Address<0xffffe8e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace DdrsdrcWpsr{    ///<DDRSDRC Write Protect Status Register
        using Addr = Register::Address<0xffffe8e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        namespace WpvsValC{
        }
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
        namespace WpvsrcValC{
        }
    }
}
