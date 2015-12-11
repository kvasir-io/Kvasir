#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Controller
    namespace SscCr{    ///<Control Register
        using Addr = Register::Address<0x40004000,0xffff7cfc,0,unsigned>;
        ///Receive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxen{}; 
        ///Receive Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxdis{}; 
        ///Transmit Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Transmit Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txdis{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace SscCmr{    ///<Clock Mode Register
        using Addr = Register::Address<0x40004004,0xfffff000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace SscRcmr{    ///<Receive Clock Mode Register
        using Addr = Register::Address<0x40004010,0x0000e000,0,unsigned>;
        ///Receive Clock Selection
        enum class CksVal {
            mck=0x00000000,     ///<Divided Clock
            tk=0x00000001,     ///<TK Clock signal
            rk=0x00000002,     ///<RK pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CksVal> cks{}; 
        namespace CksValC{
            constexpr Register::FieldValue<decltype(cks)::Type,CksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cks)::Type,CksVal::tk> tk{};
            constexpr Register::FieldValue<decltype(cks)::Type,CksVal::rk> rk{};
        }
        ///Receive Clock Output Mode Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cko{}; 
        ///Receive Clock Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cki{}; 
        ///Receive Clock Gating Selection
        enum class CkgVal {
            none=0x00000000,     ///<None
            continuous=0x00000001,     ///<Continuous Receive Clock
            transfer=0x00000002,     ///<Receive Clock only during data transfers
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CkgVal> ckg{}; 
        namespace CkgValC{
            constexpr Register::FieldValue<decltype(ckg)::Type,CkgVal::none> none{};
            constexpr Register::FieldValue<decltype(ckg)::Type,CkgVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(ckg)::Type,CkgVal::transfer> transfer{};
        }
        ///Receive Start Selection
        enum class StartVal {
            continuous=0x00000000,     ///<Continuous, as soon as the receiver is enabled, and immediately after the end of transfer of the previous data.
            transmit=0x00000001,     ///<Transmit start
            rfLow=0x00000002,     ///<Detection of a low level on RF signal
            rfHigh=0x00000003,     ///<Detection of a high level on RF signal
            rfFalling=0x00000004,     ///<Detection of a falling edge on RF signal
            rfRising=0x00000005,     ///<Detection of a rising edge on RF signal
            rfLevel=0x00000006,     ///<Detection of any level change on RF signal
            rfEdge=0x00000007,     ///<Detection of any edge on RF signal
            cmp0=0x00000008,     ///<Compare 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::transmit> transmit{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfLow> rfLow{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfHigh> rfHigh{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfFalling> rfFalling{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfRising> rfRising{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfLevel> rfLevel{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfEdge> rfEdge{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::cmp0> cmp0{};
        }
        ///Receive Stop Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> stop{}; 
        ///Receive Start Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sttdly{}; 
        ///Receive Period Divider Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> period{}; 
    }
    namespace SscRfmr{    ///<Receive Frame Mode Register
        using Addr = Register::Address<0x40004014,0x0e80f040,0,unsigned>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> datlen{}; 
        ///Loop Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> loop{}; 
        ///Most Significant Bit First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msbf{}; 
        ///Data Number per Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> datnb{}; 
        ///Receive Frame Sync Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fslen{}; 
        ///Receive Frame Sync Output Selection
        enum class FsosVal {
            none=0x00000000,     ///<None
            negative=0x00000001,     ///<Negative Pulse
            positive=0x00000002,     ///<Positive Pulse
            low=0x00000003,     ///<Driven Low during data transfer
            high=0x00000004,     ///<Driven High during data transfer
            toggling=0x00000005,     ///<Toggling at each start of data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,FsosVal> fsos{}; 
        namespace FsosValC{
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::none> none{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::negative> negative{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::low> low{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::high> high{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::toggling> toggling{};
        }
        ///Frame Sync Edge Detection
        enum class FsedgeVal {
            positive=0x00000000,     ///<Positive Edge Detection
            negative=0x00000001,     ///<Negative Edge Detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FsedgeVal> fsedge{}; 
        namespace FsedgeValC{
            constexpr Register::FieldValue<decltype(fsedge)::Type,FsedgeVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsedge)::Type,FsedgeVal::negative> negative{};
        }
        ///FSLEN Field Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fslenExt{}; 
    }
    namespace SscTcmr{    ///<Transmit Clock Mode Register
        using Addr = Register::Address<0x40004018,0x0000f000,0,unsigned>;
        ///Transmit Clock Selection
        enum class CksVal {
            mck=0x00000000,     ///<Divided Clock
            tk=0x00000001,     ///<TK Clock signal
            rk=0x00000002,     ///<RK pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CksVal> cks{}; 
        namespace CksValC{
            constexpr Register::FieldValue<decltype(cks)::Type,CksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cks)::Type,CksVal::tk> tk{};
            constexpr Register::FieldValue<decltype(cks)::Type,CksVal::rk> rk{};
        }
        ///Transmit Clock Output Mode Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cko{}; 
        ///Transmit Clock Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cki{}; 
        ///Transmit Clock Gating Selection
        enum class CkgVal {
            none=0x00000000,     ///<None
            continuous=0x00000001,     ///<Transmit Clock enabled only if TF Low
            transfer=0x00000002,     ///<Transmit Clock enabled only if TF High
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CkgVal> ckg{}; 
        namespace CkgValC{
            constexpr Register::FieldValue<decltype(ckg)::Type,CkgVal::none> none{};
            constexpr Register::FieldValue<decltype(ckg)::Type,CkgVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(ckg)::Type,CkgVal::transfer> transfer{};
        }
        ///Transmit Start Selection
        enum class StartVal {
            continuous=0x00000000,     ///<Continuous, as soon as a word is written in the SSC_THR Register (if Transmit is enabled), and immediately after the end of transfer of the previous data.
            receive=0x00000001,     ///<Receive start
            rfLow=0x00000002,     ///<Detection of a low level on TF signal
            rfHigh=0x00000003,     ///<Detection of a high level on TF signal
            rfFalling=0x00000004,     ///<Detection of a falling edge on TF signal
            rfRising=0x00000005,     ///<Detection of a rising edge on TF signal
            rfLevel=0x00000006,     ///<Detection of any level change on TF signal
            rfEdge=0x00000007,     ///<Detection of any edge on TF signal
            cmp0=0x00000008,     ///<Compare 0
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::receive> receive{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfLow> rfLow{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfHigh> rfHigh{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfFalling> rfFalling{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfRising> rfRising{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfLevel> rfLevel{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::rfEdge> rfEdge{};
            constexpr Register::FieldValue<decltype(start)::Type,StartVal::cmp0> cmp0{};
        }
        ///Transmit Start Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sttdly{}; 
        ///Transmit Period Divider Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> period{}; 
    }
    namespace SscTfmr{    ///<Transmit Frame Mode Register
        using Addr = Register::Address<0x4000401c,0x0e00f040,0,unsigned>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> datlen{}; 
        ///Data Default Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> datdef{}; 
        ///Most Significant Bit First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msbf{}; 
        ///Data Number per frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> datnb{}; 
        ///Transmit Frame Sync Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fslen{}; 
        ///Transmit Frame Sync Output Selection
        enum class FsosVal {
            none=0x00000000,     ///<None
            negative=0x00000001,     ///<Negative Pulse
            positive=0x00000002,     ///<Positive Pulse
            low=0x00000003,     ///<Driven Low during data transfer
            high=0x00000004,     ///<Driven High during data transfer
            toggling=0x00000005,     ///<Toggling at each start of data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,FsosVal> fsos{}; 
        namespace FsosValC{
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::none> none{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::negative> negative{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::low> low{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::high> high{};
            constexpr Register::FieldValue<decltype(fsos)::Type,FsosVal::toggling> toggling{};
        }
        ///Frame Sync Data Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fsden{}; 
        ///Frame Sync Edge Detection
        enum class FsedgeVal {
            positive=0x00000000,     ///<Positive Edge Detection
            negative=0x00000001,     ///<Negative Edge Detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FsedgeVal> fsedge{}; 
        namespace FsedgeValC{
            constexpr Register::FieldValue<decltype(fsedge)::Type,FsedgeVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsedge)::Type,FsedgeVal::negative> negative{};
        }
        ///FSLEN Field Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fslenExt{}; 
    }
    namespace SscRhr{    ///<Receive Holding Register
        using Addr = Register::Address<0x40004020,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdat{}; 
    }
    namespace SscThr{    ///<Transmit Holding Register
        using Addr = Register::Address<0x40004024,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdat{}; 
    }
    namespace SscRshr{    ///<Receive Sync. Holding Register
        using Addr = Register::Address<0x40004030,0xffff0000,0,unsigned>;
        ///Receive Synchronization Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rsdat{}; 
    }
    namespace SscTshr{    ///<Transmit Sync. Holding Register
        using Addr = Register::Address<0x40004034,0xffff0000,0,unsigned>;
        ///Transmit Synchronization Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsdat{}; 
    }
    namespace SscRc0r{    ///<Receive Compare 0 Register
        using Addr = Register::Address<0x40004038,0xffff0000,0,unsigned>;
        ///Receive Compare Data 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp0{}; 
    }
    namespace SscRc1r{    ///<Receive Compare 1 Register
        using Addr = Register::Address<0x4000403c,0xffff0000,0,unsigned>;
        ///Receive Compare Data 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp1{}; 
    }
    namespace SscSr{    ///<Status Register
        using Addr = Register::Address<0x40004040,0xfffcf0cc,0,unsigned>;
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Transmit Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Receive Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
        ///Transmit Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txen{}; 
        ///Receive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxen{}; 
    }
    namespace SscIer{    ///<Interrupt Enable Register
        using Addr = Register::Address<0x40004044,0xfffff0cc,0,unsigned>;
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Tx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
    }
    namespace SscIdr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0x40004048,0xfffff0cc,0,unsigned>;
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///Compare 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Tx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
    }
    namespace SscImr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x4000404c,0xfffff0cc,0,unsigned>;
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        ///Receive Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        ///Compare 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        ///Compare 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        ///Tx Sync Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
    }
    namespace SscWpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0x400040e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
    }
    namespace SscWpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0x400040e8,0xff0000fe,0,unsigned>;
        ///Write Protect Violation Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpvs{}; 
        ///Write Protect Violation Source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> wpvsrc{}; 
    }
}
