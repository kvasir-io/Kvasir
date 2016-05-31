#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Synchronous Serial Controller 0
    namespace Ssc0Cr{    ///<Control Register
        using Addr = Register::Address<0xfffbc000,0xffff7cfc,0x00000000,unsigned>;
        ///Receive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxen{}; 
        ///Receive Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxdis{}; 
        ///Transmit Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txen{}; 
        ///Transmit Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txdis{}; 
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swrst{}; 
    }
    namespace Ssc0Cmr{    ///<Clock Mode Register
        using Addr = Register::Address<0xfffbc004,0xfffff000,0x00000000,unsigned>;
        ///Clock Divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace Ssc0Rcmr{    ///<Receive Clock Mode Register
        using Addr = Register::Address<0xfffbc010,0x0000e000,0x00000000,unsigned>;
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
    namespace Ssc0Rfmr{    ///<Receive Frame Mode Register
        using Addr = Register::Address<0xfffbc014,0xfe80f040,0x00000000,unsigned>;
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
    }
    namespace Ssc0Tcmr{    ///<Transmit Clock Mode Register
        using Addr = Register::Address<0xfffbc018,0x0000f000,0x00000000,unsigned>;
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
    namespace Ssc0Tfmr{    ///<Transmit Frame Mode Register
        using Addr = Register::Address<0xfffbc01c,0xfe00f040,0x00000000,unsigned>;
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
    }
    namespace Ssc0Rhr{    ///<Receive Holding Register
        using Addr = Register::Address<0xfffbc020,0x00000000,0x00000000,unsigned>;
        ///Receive Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdat{}; 
    }
    namespace Ssc0Thr{    ///<Transmit Holding Register
        using Addr = Register::Address<0xfffbc024,0x00000000,0x00000000,unsigned>;
        ///Transmit Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdat{}; 
    }
    namespace Ssc0Rshr{    ///<Receive Sync. Holding Register
        using Addr = Register::Address<0xfffbc030,0xffff0000,0x00000000,unsigned>;
        ///Receive Synchronization Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsdat{}; 
    }
    namespace Ssc0Tshr{    ///<Transmit Sync. Holding Register
        using Addr = Register::Address<0xfffbc034,0xffff0000,0x00000000,unsigned>;
        ///Transmit Synchronization Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tsdat{}; 
    }
    namespace Ssc0Rc0r{    ///<Receive Compare 0 Register
        using Addr = Register::Address<0xfffbc038,0xffff0000,0x00000000,unsigned>;
        ///Receive Compare Data 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp0{}; 
    }
    namespace Ssc0Rc1r{    ///<Receive Compare 1 Register
        using Addr = Register::Address<0xfffbc03c,0xffff0000,0x00000000,unsigned>;
        ///Receive Compare Data 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cp1{}; 
    }
    namespace Ssc0Sr{    ///<Status Register
        using Addr = Register::Address<0xfffbc040,0xfffcf000,0x00000000,unsigned>;
        ///Transmit Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Transmit Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///End of Transmission
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Receive Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Receive Overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovrun{}; 
        ///End of Reception
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Receive Buffer Full
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
        ///Compare 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp0{}; 
        ///Compare 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp1{}; 
        ///Transmit Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txsyn{}; 
        ///Receive Sync
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsyn{}; 
        ///Transmit Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txen{}; 
        ///Receive Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxen{}; 
    }
    namespace Ssc0Ier{    ///<Interrupt Enable Register
        using Addr = Register::Address<0xfffbc044,0xfffff000,0x00000000,unsigned>;
        ///Transmit Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///End of Transmission Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Receive Ready Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovrun{}; 
        ///End of Reception Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
        ///Compare 0 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp0{}; 
        ///Compare 1 Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp1{}; 
        ///Tx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsyn{}; 
    }
    namespace Ssc0Idr{    ///<Interrupt Disable Register
        using Addr = Register::Address<0xfffbc048,0xfffff000,0x00000000,unsigned>;
        ///Transmit Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///End of Transmission Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Receive Ready Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovrun{}; 
        ///End of Reception Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
        ///Compare 0 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp0{}; 
        ///Compare 1 Interrupt Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp1{}; 
        ///Tx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsyn{}; 
    }
    namespace Ssc0Imr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0xfffbc04c,0xfffff000,0x00000000,unsigned>;
        ///Transmit Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txrdy{}; 
        ///Transmit Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txempty{}; 
        ///End of Transmission Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endtx{}; 
        ///Transmit Buffer Empty Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txbufe{}; 
        ///Receive Ready Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxrdy{}; 
        ///Receive Overrun Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ovrun{}; 
        ///End of Reception Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> endrx{}; 
        ///Receive Buffer Full Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxbuff{}; 
        ///Compare 0 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp0{}; 
        ///Compare 1 Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cp1{}; 
        ///Tx Sync Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txsyn{}; 
        ///Rx Sync Interrupt Mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxsyn{}; 
    }
    namespace Ssc0Rpr{    ///<Receive Pointer Register
        using Addr = Register::Address<0xfffbc100,0x00000000,0x00000000,unsigned>;
        ///Receive Pointer Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxptr{}; 
    }
    namespace Ssc0Rcr{    ///<Receive Counter Register
        using Addr = Register::Address<0xfffbc104,0xffff0000,0x00000000,unsigned>;
        ///Receive Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxctr{}; 
    }
    namespace Ssc0Tpr{    ///<Transmit Pointer Register
        using Addr = Register::Address<0xfffbc108,0x00000000,0x00000000,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txptr{}; 
    }
    namespace Ssc0Tcr{    ///<Transmit Counter Register
        using Addr = Register::Address<0xfffbc10c,0xffff0000,0x00000000,unsigned>;
        ///Transmit Counter Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txctr{}; 
    }
    namespace Ssc0Rnpr{    ///<Receive Next Pointer Register
        using Addr = Register::Address<0xfffbc110,0x00000000,0x00000000,unsigned>;
        ///Receive Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> rxnptr{}; 
    }
    namespace Ssc0Rncr{    ///<Receive Next Counter Register
        using Addr = Register::Address<0xfffbc114,0xffff0000,0x00000000,unsigned>;
        ///Receive Next Counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxnctr{}; 
    }
    namespace Ssc0Tnpr{    ///<Transmit Next Pointer Register
        using Addr = Register::Address<0xfffbc118,0x00000000,0x00000000,unsigned>;
        ///Transmit Next Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txnptr{}; 
    }
    namespace Ssc0Tncr{    ///<Transmit Next Counter Register
        using Addr = Register::Address<0xfffbc11c,0xffff0000,0x00000000,unsigned>;
        ///Transmit Counter Next
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txnctr{}; 
    }
    namespace Ssc0Ptcr{    ///<Transfer Control Register
        using Addr = Register::Address<0xfffbc120,0xfffffcfc,0x00000000,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxten{}; 
        ///Receiver Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxtdis{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txten{}; 
        ///Transmitter Transfer Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txtdis{}; 
    }
    namespace Ssc0Ptsr{    ///<Transfer Status Register
        using Addr = Register::Address<0xfffbc124,0xfffffefe,0x00000000,unsigned>;
        ///Receiver Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxten{}; 
        ///Transmitter Transfer Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> txten{}; 
    }
}
