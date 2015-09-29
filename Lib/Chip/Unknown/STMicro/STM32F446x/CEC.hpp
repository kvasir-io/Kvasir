#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HDMI-CEC controller
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40006c00,0xfffffff8,0,unsigned>;
        ///Tx End Of Message
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txeom{}; 
        ///Tx start of message
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txsom{}; 
        ///CEC Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cecen{}; 
    }
    namespace Nonecfgr{    ///<configuration register
        using Addr = Register::Address<0x40006c04,0x0000fe00,0,unsigned>;
        ///Signal Free Time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sft{}; 
        ///Rx-Tolerance
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rxtol{}; 
        ///Rx-stop on bit rising
              error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> brestp{}; 
        ///Generate error-bit on bit rising
              error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bregen{}; 
        ///Generate Error-Bit on Long Bit Period
              Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lbpegen{}; 
        ///Avoid Error-Bit Generation in
              Broadcast
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> brdnogen{}; 
        ///SFT Option Bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> sftop{}; 
        ///Own addresses
              configuration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,16),Register::ReadWriteAccess,unsigned> oar{}; 
        ///Listen mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lstn{}; 
    }
    namespace Nonetxdr{    ///<Tx data register
        using Addr = Register::Address<0x40006c08,0xffffff00,0,unsigned>;
        ///Tx Data register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txd{}; 
    }
    namespace Nonerxdr{    ///<Rx Data Register
        using Addr = Register::Address<0x40006c0c,0xffffff00,0,unsigned>;
        ///CEC Rx Data Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdr{}; 
    }
    namespace Noneisr{    ///<Interrupt and Status Register
        using Addr = Register::Address<0x40006c10,0xffffe000,0,unsigned>;
        ///Tx-Missing acknowledge
              error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txacke{}; 
        ///Tx-Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerr{}; 
        ///Tx-Buffer Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudr{}; 
        ///End of Transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txend{}; 
        ///Tx-Byte Request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbr{}; 
        ///Arbitration Lost
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Rx-Missing Acknowledge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxacke{}; 
        ///Rx-Long Bit Period Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpe{}; 
        ///Rx-Short Bit period error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpe{}; 
        ///Rx-Bit rising error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bre{}; 
        ///Rx-Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovr{}; 
        ///End Of Reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxend{}; 
        ///Rx-Byte Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbr{}; 
    }
    namespace Noneier{    ///<interrupt enable register
        using Addr = Register::Address<0x40006c14,0xffffe000,0,unsigned>;
        ///Tx-Missing Acknowledge Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txackie{}; 
        ///Tx-Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txerrie{}; 
        ///Tx-Underrun interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txudrie{}; 
        ///Tx-End of message interrupt
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txendie{}; 
        ///Tx-Byte Request Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txbrie{}; 
        ///Arbitration Lost Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> arblstie{}; 
        ///Rx-Missing Acknowledge Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxackie{}; 
        ///Long Bit Period Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbpeie{}; 
        ///Short Bit Period Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sbpeie{}; 
        ///Bit Rising Error Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> breie{}; 
        ///Rx-Buffer Overrun Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rxovrie{}; 
        ///End Of Reception Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxendie{}; 
        ///Rx-Byte Received Interrupt
              Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxbrie{}; 
    }
}
