#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Two-wire Interface
    namespace TwiCr{    ///<Control Register
        using Addr = Register::Address<0xfffac000,0xffffff00,0,unsigned>;
        ///Send a START Condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> start{}; 
        ///Send a STOP Condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> stop{}; 
        ///TWI Master Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msen{}; 
        ///TWI Master Mode Disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msdis{}; 
        ///TWI Slave Mode Enabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sven{}; 
        ///TWI Slave Mode Disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> svdis{}; 
        ///SMBUS Quick Command
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> quick{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace TwiMmr{    ///<Master Mode Register
        using Addr = Register::Address<0xfffac004,0xff80ecff,0,unsigned>;
        ///Internal Device Address Size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> iadrsz{}; 
        ///Master Read Direction
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> mread{}; 
        ///Device Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace TwiSmr{    ///<Slave Mode Register
        using Addr = Register::Address<0xfffac008,0xff80ffff,0,unsigned>;
        ///Slave Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace TwiIadr{    ///<Internal Address Register
        using Addr = Register::Address<0xfffac00c,0xff000000,0,unsigned>;
        ///Internal Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> iadr{}; 
    }
    namespace TwiCwgr{    ///<Clock Waveform Generator Register
        using Addr = Register::Address<0xfffac010,0xfff80000,0,unsigned>;
        ///Clock Low Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cldiv{}; 
        ///Clock High Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> chdiv{}; 
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace TwiSr{    ///<Status Register
        using Addr = Register::Address<0xfffac020,0xfffff080,0,unsigned>;
        ///Transmission Completed (automatically set / reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready (automatically set / reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready (automatically set / reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Read (automatically set / reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> svread{}; 
        ///Slave Access (automatically set / reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access (clear on read)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error (clear on read)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledged (clear on read)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost (clear on read)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State (automatically set / reset)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclws{}; 
        ///End Of Slave Access (clear on read)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
    }
    namespace TwiIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffac024,0xfffff088,0,unsigned>;
        ///Transmission Completed Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Access Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
    }
    namespace TwiIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffac028,0xfffff088,0,unsigned>;
        ///Transmission Completed Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Access Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
    }
    namespace TwiImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffac02c,0xfffff088,0,unsigned>;
        ///Transmission Completed Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txcomp{}; 
        ///Receive Holding Register Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Transmit Holding Register Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Slave Access Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> svacc{}; 
        ///General Call Access Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gacc{}; 
        ///Overrun Error Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ovre{}; 
        ///Not Acknowledge Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> nack{}; 
        ///Arbitration Lost Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> arblst{}; 
        ///Clock Wait State Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> sclWs{}; 
        ///End Of Slave Access Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> eosacc{}; 
    }
    namespace TwiRhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xfffac030,0xffffff00,0,unsigned>;
        ///Master or Slave Receive Holding Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxdata{}; 
    }
    namespace TwiThr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xfffac034,0xffffff00,0,unsigned>;
        ///Master or Slave Transmit Holding Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
}
