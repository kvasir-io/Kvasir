#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Serial controller 2
    namespace Nonesc2Isr{    ///<Serial controller interrupt status
          register
        using Addr = Register::Address<0x4000a80c,0xffff8000,0,unsigned>;
        ///PE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///FE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> fe{}; 
        namespace FeValC{
        }
        ///TXULODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txulodb{}; 
        namespace TxulodbValC{
        }
        ///TXULODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txuloda{}; 
        namespace TxulodaValC{
        }
        ///RXULODB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxulodb{}; 
        namespace RxulodbValC{
        }
        ///RXULODA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxuloda{}; 
        namespace RxulodaValC{
        }
        ///NACK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        namespace NackValC{
        }
        ///CMDFIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdfin{}; 
        namespace CmdfinValC{
        }
        ///BTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btf{}; 
        namespace BtfValC{
        }
        ///BRF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brf{}; 
        namespace BrfValC{
        }
        ///UDR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udr{}; 
        namespace UdrValC{
        }
        ///OVR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovr{}; 
        namespace OvrValC{
        }
        ///IDLE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idle{}; 
        namespace IdleValC{
        }
        ///TXE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
        ///RXNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxne{}; 
        namespace RxneValC{
        }
    }
    namespace Nonesc2Ier{    ///<Serial controller interrupt enable
          register
        using Addr = Register::Address<0x4000a84c,0xffff8000,0,unsigned>;
        ///PEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> peie{}; 
        namespace PeieValC{
        }
        ///FEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> feie{}; 
        namespace FeieValC{
        }
        ///TXULODBIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txulodbie{}; 
        namespace TxulodbieValC{
        }
        ///TXULODAIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txulodaie{}; 
        namespace TxulodaieValC{
        }
        ///RXULODBIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxulodbie{}; 
        namespace RxulodbieValC{
        }
        ///RXULODAIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxulodaie{}; 
        namespace RxulodaieValC{
        }
        ///NACKIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nackie{}; 
        namespace NackieValC{
        }
        ///CMDFINIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cmdfinie{}; 
        namespace CmdfinieValC{
        }
        ///BTFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> btfie{}; 
        namespace BtfieValC{
        }
        ///BRFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> brfie{}; 
        namespace BrfieValC{
        }
        ///UDRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> udrie{}; 
        namespace UdrieValC{
        }
        ///OVRIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ovrie{}; 
        namespace OvrieValC{
        }
        ///IDLEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idleie{}; 
        namespace IdleieValC{
        }
        ///TXEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txeie{}; 
        namespace TxeieValC{
        }
        ///RXNEIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxneie{}; 
        namespace RxneieValC{
        }
    }
    namespace Nonesc2Icr{    ///<Serial controller interrupt control
          register
        using Addr = Register::Address<0x4000a858,0xfffffff8,0,unsigned>;
        ///IDLELEVEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idlelevel{}; 
        namespace IdlelevelValC{
        }
        ///TXELEVEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txelevel{}; 
        namespace TxelevelValC{
        }
        ///RXNELEVEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxnelevel{}; 
        namespace RxnelevelValC{
        }
    }
    namespace Nonesc2Dr{    ///<Serial controller data
          register
        using Addr = Register::Address<0x4000c03c,0xffffff00,0,unsigned>;
        ///DR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dr{}; 
        namespace DrValC{
        }
    }
    namespace Nonesc2Cr{    ///<Serial controller control
          register
        using Addr = Register::Address<0x4000c054,0xfffffffc,0,unsigned>;
        ///MODE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mode{}; 
        namespace ModeValC{
        }
    }
    namespace Nonesc2Crr1{    ///<Serial controller clock rate register
          1
        using Addr = Register::Address<0x4000c060,0xfffffff0,0,unsigned>;
        ///LIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lin{}; 
        namespace LinValC{
        }
    }
    namespace Nonesc2Crr2{    ///<Serial controller clock rate register
          2
        using Addr = Register::Address<0x4000c064,0xfffffff0,0,unsigned>;
        ///EXP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> exp{}; 
        namespace ExpValC{
        }
    }
}
