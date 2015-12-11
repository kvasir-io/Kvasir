#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HDMI-CEC controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40007800,0xfffffff8,0,unsigned>;
        ///Tx End Of Message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txeom{}; 
        ///Tx start of message
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txsom{}; 
        ///CEC Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cecen{}; 
    }
    namespace Nonecfgr{    ///<configuration register
        using Addr = Register::Address<0x40007804,0xfffff000,0,unsigned>;
        ///Generate Error-Bit on Long Bit Period
              Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> lbpegen{}; 
        ///Generate error-bit on bit rising
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> bregen{}; 
        ///Rx-stop on bit rising
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> brestp{}; 
        ///Rx-Tolerance
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> rxtol{}; 
        ///Signal Free Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> sft{}; 
        ///Listen mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lstn{}; 
        ///Own Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> oar{}; 
    }
    namespace Nonetxdr{    ///<Tx data register
        using Addr = Register::Address<0x40007808,0xffffff00,0,unsigned>;
        ///Tx Data register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonerxdr{    ///<Rx Data Register
        using Addr = Register::Address<0x4000780c,0xffffff00,0,unsigned>;
        ///CEC Rx Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdr{}; 
    }
    namespace Noneisr{    ///<Interrupt and Status Register
        using Addr = Register::Address<0x40007810,0xffffe000,0,unsigned>;
        ///Tx-Missing acknowledge
              error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txacke{}; 
        ///Tx-Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Tx-Buffer Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudr{}; 
        ///End of Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txend{}; 
        ///Tx-Byte Request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbr{}; 
        ///Arbitration Lost
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Rx-Missing Acknowledge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxacke{}; 
        ///Rx-Long Bit Period Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpe{}; 
        ///Rx-Short Bit period error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpe{}; 
        ///Rx-Bit rising error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bre{}; 
        ///Rx-Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovr{}; 
        ///End Of Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxend{}; 
        ///Rx-Byte Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbr{}; 
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x40007814,0xffffe000,0,unsigned>;
        ///Tx-Missing Acknowledge Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txackie{}; 
        ///Tx-Error Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerrie{}; 
        ///Tx-Underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudrie{}; 
        ///Tx-End of message interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txendie{}; 
        ///Tx-Byte Request Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbrie{}; 
        ///Arbitration Lost Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblstie{}; 
        ///Rx-Missing Acknowledge Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxackie{}; 
        ///Long Bit Period Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpeie{}; 
        ///Short Bit Period Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpeie{}; 
        ///Bit Rising Error Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> breie{}; 
        ///Rx-Buffer Overrun Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovrie{}; 
        ///End Of Reception Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxendie{}; 
        ///Rx-Byte Received Interrupt
              Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbrie{}; 
    }
}
