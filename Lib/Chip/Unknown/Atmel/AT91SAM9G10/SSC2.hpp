#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Controller 2
    namespace Ssc2Cr{    ///<Control Register
        using Addr = Register::Address<0xfffc4000,0xffff7cfc,0,unsigned>;
        ///Receive Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Receive Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///Transmit Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Transmit Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace Ssc2Cmr{    ///<Clock Mode Register
        using Addr = Register::Address<0xfffc4004,0xfffff000,0,unsigned>;
        ///Clock Divider
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Ssc2Rcmr{    ///<Receive Clock Mode Register
        using Addr = Register::Address<0xfffc4010,0x0000e000,0,unsigned>;
        ///Receive Clock Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cks{}; 
        ///Receive Clock Output Mode Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cko{}; 
        ///Receive Clock Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cki{}; 
        ///Receive Clock Gating Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ckg{}; 
        ///Receive Start Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> start{}; 
        ///Receive Stop Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Receive Start Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sttdly{}; 
        ///Receive Period Divider Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> period{}; 
    }
    namespace Ssc2Rfmr{    ///<Receive Frame Mode Register
        using Addr = Register::Address<0xfffc4014,0xfe80f040,0,unsigned>;
        ///Data Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> datlen{}; 
        ///Loop Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> loop{}; 
        ///Most Significant Bit First
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msbf{}; 
        ///Data Number per Frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> datnb{}; 
        ///Receive Frame Sync Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fslen{}; 
        ///Receive Frame Sync Output Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> fsos{}; 
        ///Frame Sync Edge Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsedge{}; 
    }
    namespace Ssc2Tcmr{    ///<Transmit Clock Mode Register
        using Addr = Register::Address<0xfffc4018,0x0000f000,0,unsigned>;
        ///Transmit Clock Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> cks{}; 
        ///Transmit Clock Output Mode Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cko{}; 
        ///Transmit Clock Inversion
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cki{}; 
        ///Transmit Clock Gating Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> ckg{}; 
        ///Transmit Start Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> start{}; 
        ///Transmit Start Delay
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sttdly{}; 
        ///Transmit Period Divider Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> period{}; 
    }
    namespace Ssc2Tfmr{    ///<Transmit Frame Mode Register
        using Addr = Register::Address<0xfffc401c,0xfe00f040,0,unsigned>;
        ///Data Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> datlen{}; 
        ///Data Default Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> datdef{}; 
        ///Most Significant Bit First
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msbf{}; 
        ///Data Number per frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> datnb{}; 
        ///Transmit Frame Syn Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fslen{}; 
        ///Transmit Frame Sync Output Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> fsos{}; 
        ///Frame Sync Data Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fsden{}; 
        ///Frame Sync Edge Detection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fsedge{}; 
    }
    namespace Ssc2Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xfffc4020,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdat{}; 
    }
    namespace Ssc2Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xfffc4024,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdat{}; 
    }
    namespace Ssc2Rshr{    ///<Receive Sync. Holding Register
        using Addr = Register::Address<0xfffc4030,0xffff0000,0,unsigned>;
        ///Receive Synchronization Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rsdat{}; 
    }
    namespace Ssc2Tshr{    ///<Transmit Sync. Holding Register
        using Addr = Register::Address<0xfffc4034,0xffff0000,0,unsigned>;
        ///Transmit Synchronization Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsdat{}; 
    }
    namespace Ssc2Rc0r{    ///<Receive Compare 0 Register
        using Addr = Register::Address<0xfffc4038,0xffff0000,0,unsigned>;
        ///Receive Compare Data 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp0{}; 
    }
    namespace Ssc2Rc1r{    ///<Receive Compare 1 Register
        using Addr = Register::Address<0xfffc403c,0xffff0000,0,unsigned>;
        ///Receive Compare Data 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp1{}; 
    }
    namespace Ssc2Sr{    ///<Status Register
        using Addr = Register::Address<0xfffc4040,0xfffcf000,0,unsigned>;
        ///Transmit Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///End of Transmission
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Receive Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///End of Reception
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Compare 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Transmit Sync
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Receive Sync
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
        ///Transmit Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Receive Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxen{}; 
    }
    namespace Ssc2Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffc4044,0xfffff000,0,unsigned>;
        ///Transmit Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///End of Transmission Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Receive Ready Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///End of Reception Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Tx Sync Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
    }
    namespace Ssc2Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffc4048,0xfffff000,0,unsigned>;
        ///Transmit Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///End of Transmission Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Receive Ready Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///End of Reception Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Compare 0 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1 Interrupt Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Tx Sync Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
    }
    namespace Ssc2Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffc404c,0xfffff000,0,unsigned>;
        ///Transmit Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///End of Transmission Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txbufe{}; 
        ///Receive Ready Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///End of Reception Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rxbuff{}; 
        ///Compare 0 Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1 Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Tx Sync Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
    }
    namespace Ssc2Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffc4100,0x00000000,0,unsigned>;
        ///Receive Pointer Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Ssc2Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffc4104,0xffff0000,0,unsigned>;
        ///Receive Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Ssc2Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffc4108,0x00000000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Ssc2Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffc410c,0xffff0000,0,unsigned>;
        ///Transmit Counter Register
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Ssc2Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffc4110,0x00000000,0,unsigned>;
        ///Receive Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Ssc2Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffc4114,0xffff0000,0,unsigned>;
        ///Receive Next Counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Ssc2Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffc4118,0x00000000,0,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Ssc2Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffc411c,0xffff0000,0,unsigned>;
        ///Transmit Counter Next
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Ssc2Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffc4120,0xfffffcfc,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txtdis{}; 
    }
    namespace Ssc2Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffc4124,0xfffffefe,0,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txten{}; 
    }
}
