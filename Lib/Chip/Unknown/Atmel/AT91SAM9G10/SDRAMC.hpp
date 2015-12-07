#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SDRAM Controller
    namespace SdramcMr{    ///<SDRAMC Mode Register
        using Addr = Register::Address<0xffffea00,0xfffffff8,0,unsigned>;
        ///SDRAMC Command Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace SdramcTr{    ///<SDRAMC Refresh Timer Register
        using Addr = Register::Address<0xffffea04,0xfffff000,0,unsigned>;
        ///SDRAMC Refresh Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace SdramcCr{    ///<SDRAMC Configuration Register
        using Addr = Register::Address<0xffffea08,0x00000000,0,unsigned>;
        ///Number of Column Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> nc{}; 
        namespace NcValC{
        }
        ///Number of Row Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> nr{}; 
        namespace NrValC{
        }
        ///Number of Banks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nb{}; 
        namespace NbValC{
        }
        ///CAS Latency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> cas{}; 
        namespace CasValC{
        }
        ///Data Bus Width
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dbw{}; 
        namespace DbwValC{
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
        ///Row to Column Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> trcd{}; 
        namespace TrcdValC{
        }
        ///Active to Precharge Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> tras{}; 
        namespace TrasValC{
        }
        ///Exit Self Refresh to Active Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> txsr{}; 
        namespace TxsrValC{
        }
    }
    namespace SdramcLpr{    ///<SDRAMC Low Power Register
        using Addr = Register::Address<0xffffea10,0xffffc08c,0,unsigned>;
        ///Low-power Configuration Bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> lpcb{}; 
        namespace LpcbValC{
        }
        ///Partial Array Self-refresh (only for low-power SDRAM)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> pasr{}; 
        namespace PasrValC{
        }
        ///Temperature Compensated Self-Refresh (only for low-power SDRAM)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> tcsr{}; 
        namespace TcsrValC{
        }
        ///Drive Strength (only for low-power SDRAM)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> ds{}; 
        namespace DsValC{
        }
        ///Time to define when low-power mode is enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,12),Register::ReadWriteAccess,unsigned> timeout{}; 
        namespace TimeoutValC{
        }
    }
    namespace SdramcIer{    ///<SDRAMC Interrupt Enable Register
        using Addr = Register::Address<0xffffea14,0xfffffffe,0,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
    }
    namespace SdramcIdr{    ///<SDRAMC Interrupt Disable Register
        using Addr = Register::Address<0xffffea18,0xfffffffe,0,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
    }
    namespace SdramcImr{    ///<SDRAMC Interrupt Mask Register
        using Addr = Register::Address<0xffffea1c,0xfffffffe,0,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
    }
    namespace SdramcIsr{    ///<SDRAMC Interrupt Status Register
        using Addr = Register::Address<0xffffea20,0xfffffffe,0,unsigned>;
        ///Refresh Error Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> res{}; 
        namespace ResValC{
        }
    }
    namespace SdramcMdr{    ///<SDRAMC Memory Device Register
        using Addr = Register::Address<0xffffea24,0xfffffffc,0,unsigned>;
        ///Memory Device Type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
    }
}
