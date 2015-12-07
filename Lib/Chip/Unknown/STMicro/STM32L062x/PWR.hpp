#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Power control
    namespace Nonecr{    ///<power control register
        using Addr = Register::Address<0x40007000,0xffff8000,0,unsigned>;
        ///Low-power deep sleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> lpds{}; 
        namespace LpdsValC{
        }
        ///Power down deepsleep
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pdds{}; 
        namespace PddsValC{
        }
        ///Clear wakeup flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cwuf{}; 
        namespace CwufValC{
        }
        ///Clear standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> csbf{}; 
        namespace CsbfValC{
        }
        ///Power voltage detector
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pvde{}; 
        namespace PvdeValC{
        }
        ///PVD level selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> pls{}; 
        namespace PlsValC{
        }
        ///Disable backup domain write
              protection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> dbp{}; 
        namespace DbpValC{
        }
        ///Flash power down in Stop
              mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> fpds{}; 
        namespace FpdsValC{
        }
        ///Fast wakeup
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fwu{}; 
        namespace FwuValC{
        }
        ///Voltage scaling range
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> vos{}; 
        namespace VosValC{
        }
        ///Deep sleep mode with Flash memory kept
              off
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dsEeKoff{}; 
        namespace DseekoffValC{
        }
        ///Low power run mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> lprun{}; 
        namespace LprunValC{
        }
    }
    namespace Nonecsr{    ///<power control/status register
        using Addr = Register::Address<0x40007004,0xfffffcc0,0,unsigned>;
        ///Backup regulator enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bre{}; 
        namespace BreValC{
        }
        ///Enable WKUP pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ewup{}; 
        namespace EwupValC{
        }
        ///Backup regulator ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> brr{}; 
        namespace BrrValC{
        }
        ///PVD output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pvdo{}; 
        namespace PvdoValC{
        }
        ///Standby flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sbf{}; 
        namespace SbfValC{
        }
        ///Wakeup flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wuf{}; 
        namespace WufValC{
        }
        ///Voltage Scaling select
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> vosf{}; 
        namespace VosfValC{
        }
        ///Regulator LP flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> reglpf{}; 
        namespace ReglpfValC{
        }
    }
}
