#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Synchronous Serial Controller 0
    namespace Ssc0Cr{    ///<Control Register
        using Addr = Register::Address<0xf0008000,0xffff7cfc,0,unsigned>;
        ///Receive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxen{}; 
        namespace RxenValC{
        }
        ///Receive Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxdis{}; 
        namespace RxdisValC{
        }
        ///Transmit Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
        ///Transmit Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txdis{}; 
        namespace TxdisValC{
        }
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
    }
    namespace Ssc0Cmr{    ///<Clock Mode Register
        using Addr = Register::Address<0xf0008004,0xfffff000,0,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> div{}; 
        namespace DivValC{
        }
    }
    namespace Ssc0Rcmr{    ///<Receive Clock Mode Register
        using Addr = Register::Address<0xf0008010,0x0000e000,0,unsigned>;
        ///Receive Clock Selection
        enum class CksVal {
            mck=0x00000000,     ///<Divided Clock
            tk=0x00000001,     ///<TK Clock signal
            rk=0x00000002,     ///<RK pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CksVal> cks{}; 
        namespace CksValC{
            constexpr Register::FieldValue<decltype(cks),CksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cks),CksVal::tk> tk{};
            constexpr Register::FieldValue<decltype(cks),CksVal::rk> rk{};
        }
        ///Receive Clock Output Mode Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cko{}; 
        namespace CkoValC{
        }
        ///Receive Clock Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cki{}; 
        namespace CkiValC{
        }
        ///Receive Clock Gating Selection
        enum class CkgVal {
            continuous=0x00000000,     ///<None
            enRfLow=0x00000001,     ///<Receive Clock enabled only if RF Pin is Low
            enRfHigh=0x00000002,     ///<Receive Clock enabled only if RF Pin is High
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CkgVal> ckg{}; 
        namespace CkgValC{
            constexpr Register::FieldValue<decltype(ckg),CkgVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(ckg),CkgVal::enRfLow> enRfLow{};
            constexpr Register::FieldValue<decltype(ckg),CkgVal::enRfHigh> enRfHigh{};
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
            constexpr Register::FieldValue<decltype(start),StartVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(start),StartVal::transmit> transmit{};
            constexpr Register::FieldValue<decltype(start),StartVal::rfLow> rfLow{};
            constexpr Register::FieldValue<decltype(start),StartVal::rfHigh> rfHigh{};
            constexpr Register::FieldValue<decltype(start),StartVal::rfFalling> rfFalling{};
            constexpr Register::FieldValue<decltype(start),StartVal::rfRising> rfRising{};
            constexpr Register::FieldValue<decltype(start),StartVal::rfLevel> rfLevel{};
            constexpr Register::FieldValue<decltype(start),StartVal::rfEdge> rfEdge{};
            constexpr Register::FieldValue<decltype(start),StartVal::cmp0> cmp0{};
        }
        ///Receive Stop Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> stop{}; 
        namespace StopValC{
        }
        ///Receive Start Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sttdly{}; 
        namespace SttdlyValC{
        }
        ///Receive Period Divider Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> period{}; 
        namespace PeriodValC{
        }
    }
    namespace Ssc0Rfmr{    ///<Receive Frame Mode Register
        using Addr = Register::Address<0xf0008014,0x0e80f040,0,unsigned>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> datlen{}; 
        namespace DatlenValC{
        }
        ///Loop Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> loop{}; 
        namespace LoopValC{
        }
        ///Most Significant Bit First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msbf{}; 
        namespace MsbfValC{
        }
        ///Data Number per Frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> datnb{}; 
        namespace DatnbValC{
        }
        ///Receive Frame Sync Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fslen{}; 
        namespace FslenValC{
        }
        ///Receive Frame Sync Output Selection
        enum class FsosVal {
            none=0x00000000,     ///<None, RF pin is an input
            negative=0x00000001,     ///<Negative Pulse, RF pin is an output
            positive=0x00000002,     ///<Positive Pulse, RF pin is an output
            low=0x00000003,     ///<Driven Low during data transfer, RF pin is an output
            high=0x00000004,     ///<Driven High during data transfer, RF pin is an output
            toggling=0x00000005,     ///<Toggling at each start of data transfer, RF pin is an output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,FsosVal> fsos{}; 
        namespace FsosValC{
            constexpr Register::FieldValue<decltype(fsos),FsosVal::none> none{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::negative> negative{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::low> low{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::high> high{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::toggling> toggling{};
        }
        ///Frame Sync Edge Detection
        enum class FsedgeVal {
            positive=0x00000000,     ///<Positive Edge Detection
            negative=0x00000001,     ///<Negative Edge Detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FsedgeVal> fsedge{}; 
        namespace FsedgeValC{
            constexpr Register::FieldValue<decltype(fsedge),FsedgeVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsedge),FsedgeVal::negative> negative{};
        }
        ///FSLEN Field Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fslenExt{}; 
        namespace FslenextValC{
        }
    }
    namespace Ssc0Tcmr{    ///<Transmit Clock Mode Register
        using Addr = Register::Address<0xf0008018,0x0000f000,0,unsigned>;
        ///Transmit Clock Selection
        enum class CksVal {
            mck=0x00000000,     ///<Divided Clock
            rk=0x00000001,     ///<RK Clock signal
            tk=0x00000002,     ///<TK pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CksVal> cks{}; 
        namespace CksValC{
            constexpr Register::FieldValue<decltype(cks),CksVal::mck> mck{};
            constexpr Register::FieldValue<decltype(cks),CksVal::rk> rk{};
            constexpr Register::FieldValue<decltype(cks),CksVal::tk> tk{};
        }
        ///Transmit Clock Output Mode Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,2),Register::ReadWriteAccess,unsigned> cko{}; 
        namespace CkoValC{
        }
        ///Transmit Clock Inversion
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cki{}; 
        namespace CkiValC{
        }
        ///Transmit Clock Gating Selection
        enum class CkgVal {
            continuous=0x00000000,     ///<None
            enTfLow=0x00000001,     ///<Transmit Clock enabled only if TF pin is Low
            enTfHigh=0x00000002,     ///<Transmit Clock enabled only if TF pin is High
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,CkgVal> ckg{}; 
        namespace CkgValC{
            constexpr Register::FieldValue<decltype(ckg),CkgVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(ckg),CkgVal::enTfLow> enTfLow{};
            constexpr Register::FieldValue<decltype(ckg),CkgVal::enTfHigh> enTfHigh{};
        }
        ///Transmit Start Selection
        enum class StartVal {
            continuous=0x00000000,     ///<Continuous, as soon as a word is written in the SSC_THR Register (if Transmit is enabled), and immediately after the end of transfer of the previous data.
            receive=0x00000001,     ///<Receive start
            tfLow=0x00000002,     ///<Detection of a low level on TF signal
            tfHigh=0x00000003,     ///<Detection of a high level on TF signal
            tfFalling=0x00000004,     ///<Detection of a falling edge on TF signal
            tfRising=0x00000005,     ///<Detection of a rising edge on TF signal
            tfLevel=0x00000006,     ///<Detection of any level change on TF signal
            tfEdge=0x00000007,     ///<Detection of any edge on TF signal
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,StartVal> start{}; 
        namespace StartValC{
            constexpr Register::FieldValue<decltype(start),StartVal::continuous> continuous{};
            constexpr Register::FieldValue<decltype(start),StartVal::receive> receive{};
            constexpr Register::FieldValue<decltype(start),StartVal::tfLow> tfLow{};
            constexpr Register::FieldValue<decltype(start),StartVal::tfHigh> tfHigh{};
            constexpr Register::FieldValue<decltype(start),StartVal::tfFalling> tfFalling{};
            constexpr Register::FieldValue<decltype(start),StartVal::tfRising> tfRising{};
            constexpr Register::FieldValue<decltype(start),StartVal::tfLevel> tfLevel{};
            constexpr Register::FieldValue<decltype(start),StartVal::tfEdge> tfEdge{};
        }
        ///Transmit Start Delay
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sttdly{}; 
        namespace SttdlyValC{
        }
        ///Transmit Period Divider Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> period{}; 
        namespace PeriodValC{
        }
    }
    namespace Ssc0Tfmr{    ///<Transmit Frame Mode Register
        using Addr = Register::Address<0xf000801c,0x0e00f040,0,unsigned>;
        ///Data Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> datlen{}; 
        namespace DatlenValC{
        }
        ///Data Default Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> datdef{}; 
        namespace DatdefValC{
        }
        ///Most Significant Bit First
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msbf{}; 
        namespace MsbfValC{
        }
        ///Data Number per frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> datnb{}; 
        namespace DatnbValC{
        }
        ///Transmit Frame Sync Length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fslen{}; 
        namespace FslenValC{
        }
        ///Transmit Frame Sync Output Selection
        enum class FsosVal {
            none=0x00000000,     ///<None, TF pin is an input
            negative=0x00000001,     ///<Negative Pulse, TF pin is an output
            positive=0x00000002,     ///<Positive Pulse,TF pin is an output
            low=0x00000003,     ///<TF pin Driven Low during data transfer
            high=0x00000004,     ///<TF pin Driven High during data transfer
            toggling=0x00000005,     ///<TF pin Toggles at each start of data transfer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,FsosVal> fsos{}; 
        namespace FsosValC{
            constexpr Register::FieldValue<decltype(fsos),FsosVal::none> none{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::negative> negative{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::low> low{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::high> high{};
            constexpr Register::FieldValue<decltype(fsos),FsosVal::toggling> toggling{};
        }
        ///Frame Sync Data Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> fsden{}; 
        namespace FsdenValC{
        }
        ///Frame Sync Edge Detection
        enum class FsedgeVal {
            positive=0x00000000,     ///<Positive Edge Detection
            negative=0x00000001,     ///<Negative Edge Detection
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,FsedgeVal> fsedge{}; 
        namespace FsedgeValC{
            constexpr Register::FieldValue<decltype(fsedge),FsedgeVal::positive> positive{};
            constexpr Register::FieldValue<decltype(fsedge),FsedgeVal::negative> negative{};
        }
        ///FSLEN Field Extension
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,28),Register::ReadWriteAccess,unsigned> fslenExt{}; 
        namespace FslenextValC{
        }
    }
    namespace Ssc0Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xf0008020,0x00000000,0,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rdat{}; 
        namespace RdatValC{
        }
    }
    namespace Ssc0Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xf0008024,0x00000000,0,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tdat{}; 
        namespace TdatValC{
        }
    }
    namespace Ssc0Rshr{    ///<Receive Sync. Holding Register
        using Addr = Register::Address<0xf0008030,0xffff0000,0,unsigned>;
        ///Receive Synchronization Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rsdat{}; 
        namespace RsdatValC{
        }
    }
    namespace Ssc0Tshr{    ///<Transmit Sync. Holding Register
        using Addr = Register::Address<0xf0008034,0xffff0000,0,unsigned>;
        ///Transmit Synchronization Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsdat{}; 
        namespace TsdatValC{
        }
    }
    namespace Ssc0Rc0r{    ///<Receive Compare 0 Register
        using Addr = Register::Address<0xf0008038,0xffff0000,0,unsigned>;
        ///Receive Compare Data 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp0{}; 
        namespace Cp0ValC{
        }
    }
    namespace Ssc0Rc1r{    ///<Receive Compare 1 Register
        using Addr = Register::Address<0xf000803c,0xffff0000,0,unsigned>;
        ///Receive Compare Data 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp1{}; 
        namespace Cp1ValC{
        }
    }
    namespace Ssc0Sr{    ///<Status Register
        using Addr = Register::Address<0xf0008040,0xfffcf0cc,0,unsigned>;
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Transmit Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Receive Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        namespace Cp0ValC{
        }
        ///Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        namespace Cp1ValC{
        }
        ///Transmit Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        namespace TxsynValC{
        }
        ///Receive Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
        namespace RxsynValC{
        }
        ///Transmit Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
        ///Receive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> rxen{}; 
        namespace RxenValC{
        }
    }
    namespace Ssc0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xf0008044,0xfffff0cc,0,unsigned>;
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Transmit Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Receive Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        namespace Cp0ValC{
        }
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        namespace Cp1ValC{
        }
        ///Tx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        namespace TxsynValC{
        }
        ///Rx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
        namespace RxsynValC{
        }
    }
    namespace Ssc0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xf0008048,0xfffff0cc,0,unsigned>;
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Transmit Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Receive Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///Compare 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        namespace Cp0ValC{
        }
        ///Compare 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        namespace Cp1ValC{
        }
        ///Tx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        namespace TxsynValC{
        }
        ///Rx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
        namespace RxsynValC{
        }
    }
    namespace Ssc0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xf000804c,0xfffff0cc,0,unsigned>;
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrdy{}; 
        namespace TxrdyValC{
        }
        ///Transmit Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txempty{}; 
        namespace TxemptyValC{
        }
        ///Receive Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxrdy{}; 
        namespace RxrdyValC{
        }
        ///Receive Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovrun{}; 
        namespace OvrunValC{
        }
        ///Compare 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cp0{}; 
        namespace Cp0ValC{
        }
        ///Compare 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> cp1{}; 
        namespace Cp1ValC{
        }
        ///Tx Sync Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txsyn{}; 
        namespace TxsynValC{
        }
        ///Rx Sync Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rxsyn{}; 
        namespace RxsynValC{
        }
    }
    namespace Ssc0Wpmr{    ///<Write Protect Mode Register
        using Addr = Register::Address<0xf00080e4,0x000000fe,0,unsigned>;
        ///Write Protect Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wpen{}; 
        namespace WpenValC{
        }
        ///Write Protect KEY
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,8),Register::ReadWriteAccess,unsigned> wpkey{}; 
        namespace WpkeyValC{
        }
    }
    namespace Ssc0Wpsr{    ///<Write Protect Status Register
        using Addr = Register::Address<0xf00080e8,0xffffffff,0,unsigned>;
    }
}
