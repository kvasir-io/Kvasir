#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HDMI-CEC controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40007800,0xfffffff8,0,unsigned>;
        ///Tx End Of Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txeom{}; 
        namespace TxeomValC{
        }
        ///Tx start of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txsom{}; 
        namespace TxsomValC{
        }
        ///CEC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cecen{}; 
        namespace CecenValC{
        }
    }
    namespace Nonecfgr{    ///<configuration register
        using Addr = Register::Address<0x40007804,0xfffff000,0,unsigned>;
        ///Generate Error-Bit on Long Bit Period
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lbpegen{}; 
        namespace LbpegenValC{
        }
        ///Generate error-bit on bit rising
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bregen{}; 
        namespace BregenValC{
        }
        ///Rx-stop on bit rising
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> brestp{}; 
        namespace BrestpValC{
        }
        ///Rx-Tolerance
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxtol{}; 
        namespace RxtolValC{
        }
        ///Signal Free Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> sft{}; 
        namespace SftValC{
        }
        ///Listen mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lstn{}; 
        namespace LstnValC{
        }
        ///Own Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> oar{}; 
        namespace OarValC{
        }
    }
    namespace Nonetxdr{    ///<Tx data register
        using Addr = Register::Address<0x40007808,0xffffff00,0,unsigned>;
        ///Tx Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
        namespace TxdValC{
        }
    }
    namespace Nonerxdr{    ///<Rx Data Register
        using Addr = Register::Address<0x4000780c,0xffffff00,0,unsigned>;
        ///CEC Rx Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdr{}; 
        namespace RxdrValC{
        }
    }
    namespace Noneisr{    ///<Interrupt and Status Register
        using Addr = Register::Address<0x40007810,0xffffe000,0,unsigned>;
        ///Tx-Missing acknowledge
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txacke{}; 
        namespace TxackeValC{
        }
        ///Tx-Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Tx-Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudr{}; 
        namespace TxudrValC{
        }
        ///End of Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txend{}; 
        namespace TxendValC{
        }
        ///Tx-Byte Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbr{}; 
        namespace TxbrValC{
        }
        ///Arbitration Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblst{}; 
        namespace ArblstValC{
        }
        ///Rx-Missing Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxacke{}; 
        namespace RxackeValC{
        }
        ///Rx-Long Bit Period Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpe{}; 
        namespace LbpeValC{
        }
        ///Rx-Short Bit period error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpe{}; 
        namespace SbpeValC{
        }
        ///Rx-Bit rising error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bre{}; 
        namespace BreValC{
        }
        ///Rx-Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovr{}; 
        namespace RxovrValC{
        }
        ///End Of Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxend{}; 
        namespace RxendValC{
        }
        ///Rx-Byte Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbr{}; 
        namespace RxbrValC{
        }
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x40007814,0xffffe000,0,unsigned>;
        ///Tx-Missing Acknowledge Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txackie{}; 
        namespace TxackieValC{
        }
        ///Tx-Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerrie{}; 
        namespace TxerrieValC{
        }
        ///Tx-Underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudrie{}; 
        namespace TxudrieValC{
        }
        ///Tx-End of message interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txendie{}; 
        namespace TxendieValC{
        }
        ///Tx-Byte Request Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbrie{}; 
        namespace TxbrieValC{
        }
        ///Arbitration Lost Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblstie{}; 
        namespace ArblstieValC{
        }
        ///Rx-Missing Acknowledge Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxackie{}; 
        namespace RxackieValC{
        }
        ///Long Bit Period Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpeie{}; 
        namespace LbpeieValC{
        }
        ///Short Bit Period Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpeie{}; 
        namespace SbpeieValC{
        }
        ///Bit Rising Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> breie{}; 
        namespace BreieValC{
        }
        ///Rx-Buffer Overrun Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovrie{}; 
        namespace RxovrieValC{
        }
        ///End Of Reception Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxendie{}; 
        namespace RxendieValC{
        }
        ///Rx-Byte Received Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbrie{}; 
        namespace RxbrieValC{
        }
    }
}
