#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-Analog Converter Controller
    namespace DaccCr{    ///<Control Register
        using Addr = Register::Address<0x4003c000,0xfffffffe,0,unsigned>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace DaccMr{    ///<Mode Register
        using Addr = Register::Address<0x4003c004,0x000000c0,0,unsigned>;
        ///Trigger Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trgen{}; 
        ///Trigger Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///DAC enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dacen{}; 
        ///Word Transfer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> word{}; 
        ///Startup Time Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> startup{}; 
        ///DAC Clock Divider for Internal Trigger
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> clkdiv{}; 
    }
    namespace DaccCdr{    ///<Conversion Data Register
        using Addr = Register::Address<0x4003c008,0x00000000,0,unsigned>;
        ///Data to Convert
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> data{}; 
    }
    namespace DaccIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x4003c00c,0xfffffff8,0,unsigned>;
        ///Transmission Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of PDC Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Buffer Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x4003c010,0xfffffff8,0,unsigned>;
        ///Transmission Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of PDC Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Buffer Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4003c014,0xfffffff8,0,unsigned>;
        ///Transmission Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of PDC Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Buffer Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccIsr{    ///<Interrupt Status Register
        using Addr = Register::Address<0x4003c018,0xfffffff8,0,unsigned>;
        ///Transmission Ready Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///End of PDC Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Buffer Empty Interrupt Flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txbufe{}; 
    }
    namespace DaccWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x4003c0e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace DaccWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x4003c0e8,0xffff00fe,0,unsigned>;
        ///Write protection error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wproterr{}; 
        ///Write protection error address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> wprotaddr{}; 
    }
    namespace DaccTpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0x4003c108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace DaccTcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0x4003c10c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace DaccTnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0x4003c118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace DaccTncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0x4003c11c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace DaccPtcr{    ///<Transfer Control Register
        using Addr = Register::Address<0x4003c120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace DaccPtsr{    ///<Transfer Status Register
        using Addr = Register::Address<0x4003c124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
