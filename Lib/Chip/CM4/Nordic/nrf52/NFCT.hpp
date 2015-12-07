#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//NFC-A compatible radio
    namespace NonetasksActivate{    ///<Activate NFC peripheral for incoming and outgoing frames, change state to activated
        using Addr = Register::Address<0x40005000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksDisable{    ///<Disable NFC peripheral
        using Addr = Register::Address<0x40005004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksSense{    ///<Enable NFC sense field mode, change state to sense mode
        using Addr = Register::Address<0x40005008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStarttx{    ///<Start transmission of a outgoing frame, change state to transmit
        using Addr = Register::Address<0x4000500c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksEnablerxdata{    ///<Initializes the EasyDMA for receive.
        using Addr = Register::Address<0x4000501c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksGoidle{    ///<Force state machine to IDLE state
        using Addr = Register::Address<0x40005024,0xffffffff,0,unsigned>;
    }
    namespace NonetasksGosleep{    ///<Force state machine to SLEEP_A state
        using Addr = Register::Address<0x40005028,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReady{    ///<The NFC peripheral is ready to receive and send frames
        using Addr = Register::Address<0x40005100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsFielddetected{    ///<Remote NFC field detected
        using Addr = Register::Address<0x40005104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsFieldlost{    ///<Remote NFC field lost
        using Addr = Register::Address<0x40005108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxframestart{    ///<Marks the start of the first symbol of a transmitted frame
        using Addr = Register::Address<0x4000510c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsTxframeend{    ///<Marks the end of the last transmitted on-air symbol of a frame
        using Addr = Register::Address<0x40005110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxframestart{    ///<Marks the end of the first symbol of a received frame
        using Addr = Register::Address<0x40005114,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxframeend{    ///<Received data have been checked (CRC, parity) and transferred to RAM, and EasyDMA has ended accessing the RX buffer
        using Addr = Register::Address<0x40005118,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsError{    ///<NFC error reported. The ERRORSTATUS register contains details on the source of the error.
        using Addr = Register::Address<0x4000511c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRxerror{    ///<NFC RX frame error reported. The FRAMESTATUS.RX register contains details on the source of the error.
        using Addr = Register::Address<0x40005128,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndrx{    ///<RX buffer (as defined by PACKETPTR and MAXLEN) in Data RAM full.
        using Addr = Register::Address<0x4000512c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEndtx{    ///<Transmission of data in RAM has ended, and EasyDMA has ended accessing the TX buffer
        using Addr = Register::Address<0x40005130,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAutocolresstarted{    ///<Auto collision resolution process has started
        using Addr = Register::Address<0x40005138,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCollision{    ///<NFC Auto collision resolution error reported.
        using Addr = Register::Address<0x40005148,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsSelected{    ///<NFC Auto collision resolution successfully completed
        using Addr = Register::Address<0x4000514c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsStarted{    ///<EasyDMA is ready to receive or send frames.
        using Addr = Register::Address<0x40005150,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40005200,0xfffffffc,0,unsigned>;
        ///Shortcut between EVENTS_FIELDDETECTED event and TASKS_ACTIVATE task
        enum class FielddetectedactivateVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FielddetectedactivateVal> fielddetectedActivate{}; 
        namespace FielddetectedactivateValC{
            constexpr Register::FieldValue<decltype(fielddetectedActivate),FielddetectedactivateVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fielddetectedActivate),FielddetectedactivateVal::enabled> enabled{};
        }
        ///Shortcut between EVENTS_FIELDLOST event and TASKS_SENSE task
        enum class FieldlostsenseVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FieldlostsenseVal> fieldlostSense{}; 
        namespace FieldlostsenseValC{
            constexpr Register::FieldValue<decltype(fieldlostSense),FieldlostsenseVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fieldlostSense),FieldlostsenseVal::enabled> enabled{};
        }
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40005300,0xffe3a300,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready),ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_FIELDDETECTED event
        enum class FielddetectedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FielddetectedVal> fielddetected{}; 
        namespace FielddetectedValC{
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_FIELDLOST event
        enum class FieldlostVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FieldlostVal> fieldlost{}; 
        namespace FieldlostValC{
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TXFRAMESTART event
        enum class TxframestartVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxframestartVal> txframestart{}; 
        namespace TxframestartValC{
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_TXFRAMEEND event
        enum class TxframeendVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxframeendVal> txframeend{}; 
        namespace TxframeendValC{
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_RXFRAMESTART event
        enum class RxframestartVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxframestartVal> rxframestart{}; 
        namespace RxframestartValC{
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_RXFRAMEEND event
        enum class RxframeendVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxframeendVal> rxframeend{}; 
        namespace RxframeendValC{
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_RXERROR event
        enum class RxerrorVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxerrorVal> rxerror{}; 
        namespace RxerrorValC{
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_ENDRX event
        enum class EndrxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_ENDTX event
        enum class EndtxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_AUTOCOLRESSTARTED event
        enum class AutocolresstartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AutocolresstartedVal> autocolresstarted{}; 
        namespace AutocolresstartedValC{
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_COLLISION event
        enum class CollisionVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CollisionVal> collision{}; 
        namespace CollisionValC{
            constexpr Register::FieldValue<decltype(collision),CollisionVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(collision),CollisionVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_SELECTED event
        enum class SelectedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SelectedVal> selected{}; 
        namespace SelectedValC{
            constexpr Register::FieldValue<decltype(selected),SelectedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(selected),SelectedVal::enabled> enabled{};
        }
        ///Enable or disable interrupt on EVENTS_STARTED event
        enum class StartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started),StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::enabled> enabled{};
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40005304,0xffe3a300,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready),ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_FIELDDETECTED event
        enum class FielddetectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FielddetectedVal> fielddetected{}; 
        namespace FielddetectedValC{
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_FIELDLOST event
        enum class FieldlostVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FieldlostVal> fieldlost{}; 
        namespace FieldlostValC{
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TXFRAMESTART event
        enum class TxframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxframestartVal> txframestart{}; 
        namespace TxframestartValC{
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_TXFRAMEEND event
        enum class TxframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxframeendVal> txframeend{}; 
        namespace TxframeendValC{
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RXFRAMESTART event
        enum class RxframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxframestartVal> rxframestart{}; 
        namespace RxframestartValC{
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RXFRAMEEND event
        enum class RxframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxframeendVal> rxframeend{}; 
        namespace RxframeendValC{
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_RXERROR event
        enum class RxerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxerrorVal> rxerror{}; 
        namespace RxerrorValC{
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDRX event
        enum class EndrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_ENDTX event
        enum class EndtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_AUTOCOLRESSTARTED event
        enum class AutocolresstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AutocolresstartedVal> autocolresstarted{}; 
        namespace AutocolresstartedValC{
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_COLLISION event
        enum class CollisionVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CollisionVal> collision{}; 
        namespace CollisionValC{
            constexpr Register::FieldValue<decltype(collision),CollisionVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(collision),CollisionVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(collision),CollisionVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_SELECTED event
        enum class SelectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SelectedVal> selected{}; 
        namespace SelectedValC{
            constexpr Register::FieldValue<decltype(selected),SelectedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(selected),SelectedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(selected),SelectedVal::set> set{};
        }
        ///Write '1' to Enable interrupt on EVENTS_STARTED event
        enum class StartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started),StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::set> set{};
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40005308,0xffe3a300,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready),ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready),ReadyVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_FIELDDETECTED event
        enum class FielddetectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FielddetectedVal> fielddetected{}; 
        namespace FielddetectedValC{
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(fielddetected),FielddetectedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_FIELDLOST event
        enum class FieldlostVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,FieldlostVal> fieldlost{}; 
        namespace FieldlostValC{
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(fieldlost),FieldlostVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TXFRAMESTART event
        enum class TxframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxframestartVal> txframestart{}; 
        namespace TxframestartValC{
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txframestart),TxframestartVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_TXFRAMEEND event
        enum class TxframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,TxframeendVal> txframeend{}; 
        namespace TxframeendValC{
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(txframeend),TxframeendVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RXFRAMESTART event
        enum class RxframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxframestartVal> rxframestart{}; 
        namespace RxframestartValC{
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxframestart),RxframestartVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RXFRAMEEND event
        enum class RxframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,RxframeendVal> rxframeend{}; 
        namespace RxframeendValC{
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxframeend),RxframeendVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class ErrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ErrorVal> error{}; 
        namespace ErrorValC{
            constexpr Register::FieldValue<decltype(error),ErrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(error),ErrorVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_RXERROR event
        enum class RxerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,RxerrorVal> rxerror{}; 
        namespace RxerrorValC{
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rxerror),RxerrorVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDRX event
        enum class EndrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,EndrxVal> endrx{}; 
        namespace EndrxValC{
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endrx),EndrxVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_ENDTX event
        enum class EndtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,EndtxVal> endtx{}; 
        namespace EndtxValC{
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(endtx),EndtxVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_AUTOCOLRESSTARTED event
        enum class AutocolresstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,AutocolresstartedVal> autocolresstarted{}; 
        namespace AutocolresstartedValC{
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(autocolresstarted),AutocolresstartedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_COLLISION event
        enum class CollisionVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,CollisionVal> collision{}; 
        namespace CollisionValC{
            constexpr Register::FieldValue<decltype(collision),CollisionVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(collision),CollisionVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(collision),CollisionVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_SELECTED event
        enum class SelectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,SelectedVal> selected{}; 
        namespace SelectedValC{
            constexpr Register::FieldValue<decltype(selected),SelectedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(selected),SelectedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(selected),SelectedVal::clear> clear{};
        }
        ///Write '1' to Clear interrupt on EVENTS_STARTED event
        enum class StartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,StartedVal> started{}; 
        namespace StartedValC{
            constexpr Register::FieldValue<decltype(started),StartedVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(started),StartedVal::clear> clear{};
        }
    }
    namespace Noneerrorstatus{    ///<NFC Error Status register
        using Addr = Register::Address<0x40005404,0xffffffb0,0,unsigned>;
        ///No STARTTX task triggered before expiration of the time set in FRAMEDELAYMAX
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> framedelaytimeout{}; 
        namespace FramedelaytimeoutValC{
        }
        ///The received pulse does not match a valid NFC-A symbol
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> invalidnfcsymbol{}; 
        namespace InvalidnfcsymbolValC{
        }
        ///Field level is too high at max load resistance
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nfcfieldtoostrong{}; 
        namespace NfcfieldtoostrongValC{
        }
        ///Field level is too low at min load resistance
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nfcfieldtooweak{}; 
        namespace NfcfieldtooweakValC{
        }
        ///No valid End of Frame detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoferror{}; 
        namespace EoferrorValC{
        }
    }
    namespace Nonecurrentloadctrl{    ///<Current value driven to the NFC Load Control
        using Addr = Register::Address<0x40005430,0xffffffc0,0,unsigned>;
        ///Current value driven to the NFC Load Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> currentloadctrl{}; 
        namespace CurrentloadctrlValC{
        }
    }
    namespace Nonefieldpresent{    ///<Indicates the presence or not of a valid field
        using Addr = Register::Address<0x4000543c,0xfffffffc,0,unsigned>;
        ///Indicates the presence or not of a valid field. Linked to the FIELDDETECTED and FIELDLOST events.
        enum class FieldpresentVal {
            nofield=0x00000000,     ///<No valid field detected
            fieldpresent=0x00000001,     ///<Valid field detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,FieldpresentVal> fieldpresent{}; 
        namespace FieldpresentValC{
            constexpr Register::FieldValue<decltype(fieldpresent),FieldpresentVal::nofield> nofield{};
            constexpr Register::FieldValue<decltype(fieldpresent),FieldpresentVal::fieldpresent> fieldpresent{};
        }
        ///Indicates if the low level has locked to the field
        enum class LockdetectVal {
            notlocked=0x00000000,     ///<Not locked to field
            locked=0x00000001,     ///<Locked to field
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,LockdetectVal> lockdetect{}; 
        namespace LockdetectValC{
            constexpr Register::FieldValue<decltype(lockdetect),LockdetectVal::notlocked> notlocked{};
            constexpr Register::FieldValue<decltype(lockdetect),LockdetectVal::locked> locked{};
        }
    }
    namespace Noneframedelaymin{    ///<Minimum frame delay
        using Addr = Register::Address<0x40005504,0xffff0000,0,unsigned>;
        ///Minimum frame delay in number of 13.56 MHz clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> framedelaymin{}; 
        namespace FramedelayminValC{
        }
    }
    namespace Noneframedelaymax{    ///<Maximum frame delay
        using Addr = Register::Address<0x40005508,0xffff0000,0,unsigned>;
        ///Maximum frame delay in number of 13.56 MHz clocks
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> framedelaymax{}; 
        namespace FramedelaymaxValC{
        }
    }
    namespace Noneframedelaymode{    ///<Configuration register for the Frame Delay Timer
        using Addr = Register::Address<0x4000550c,0xfffffffc,0,unsigned>;
        ///Configuration register for the Frame Delay Timer
        enum class FramedelaymodeVal {
            freerun=0x00000000,     ///<Transmission is independent of frame timer and will start when the STARTTX task is triggered. No timeout.
            window=0x00000001,     ///<Frame is transmitted between FRAMEDELAYMIN and FRAMEDELAYMAX
            exactval=0x00000002,     ///<Frame is transmitted exactly at FRAMEDELAYMAX
            windowgrid=0x00000003,     ///<Frame is transmitted on a bit grid between FRAMEDELAYMIN and FRAMEDELAYMAX
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,FramedelaymodeVal> framedelaymode{}; 
        namespace FramedelaymodeValC{
            constexpr Register::FieldValue<decltype(framedelaymode),FramedelaymodeVal::freerun> freerun{};
            constexpr Register::FieldValue<decltype(framedelaymode),FramedelaymodeVal::window> window{};
            constexpr Register::FieldValue<decltype(framedelaymode),FramedelaymodeVal::exactval> exactval{};
            constexpr Register::FieldValue<decltype(framedelaymode),FramedelaymodeVal::windowgrid> windowgrid{};
        }
    }
    namespace Nonepacketptr{    ///<Packet pointer for TXD and RXD data storage in Data RAM
        using Addr = Register::Address<0x40005510,0x00000000,0,unsigned>;
        ///Packet pointer for TXD and RXD data storage in Data RAM. This address is a byte aligned RAM address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptr{}; 
        namespace PtrValC{
        }
    }
    namespace Nonemaxlen{    ///<Size of allocated for TXD and RXD data storage buffer in Data RAM
        using Addr = Register::Address<0x40005514,0xfffffe00,0,unsigned>;
        ///Size of allocated for TXD and RXD data storage buffer in Data RAM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> maxlen{}; 
        namespace MaxlenValC{
        }
    }
    namespace Nonenfcid1Last{    ///<Last NFCID1 part (4, 7 or 10 bytes ID)
        using Addr = Register::Address<0x40005590,0x00000000,0,unsigned>;
        ///NFCID1 byte Z (very last byte sent)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nfcid1Z{}; 
        namespace Nfcid1zValC{
        }
        ///NFCID1 byte Y
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nfcid1Y{}; 
        namespace Nfcid1yValC{
        }
        ///NFCID1 byte X
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nfcid1X{}; 
        namespace Nfcid1xValC{
        }
        ///NFCID1 byte W
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> nfcid1W{}; 
        namespace Nfcid1wValC{
        }
    }
    namespace Nonenfcid12ndLast{    ///<Second last NFCID1 part (7 or 10 bytes ID)
        using Addr = Register::Address<0x40005594,0xff000000,0,unsigned>;
        ///NFCID1 byte V
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nfcid1V{}; 
        namespace Nfcid1vValC{
        }
        ///NFCID1 byte U
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nfcid1U{}; 
        namespace Nfcid1uValC{
        }
        ///NFCID1 byte T
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nfcid1T{}; 
        namespace Nfcid1tValC{
        }
    }
    namespace Nonenfcid13rdLast{    ///<Third last NFCID1 part (10 bytes ID)
        using Addr = Register::Address<0x40005598,0xff000000,0,unsigned>;
        ///NFCID1 byte S
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nfcid1S{}; 
        namespace Nfcid1sValC{
        }
        ///NFCID1 byte R
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nfcid1R{}; 
        namespace Nfcid1rValC{
        }
        ///NFCID1 byte Q
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nfcid1Q{}; 
        namespace Nfcid1qValC{
        }
    }
    namespace Noneautocolresconfig{    ///<Controls the Auto collision resolution function. This setting must be done before the NFCT peripheral is enabled.
        using Addr = Register::Address<0x4000559c,0xfffffffc,0,unsigned>;
        ///Enables/disables Auto collision resolution
        enum class ModeVal {
            enabled=0x00000000,     ///<Auto collision resolution enabled
            disabled=0x00000001,     ///<Auto collision resolution disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::disabled> disabled{};
        }
        ///Enables/disables Auto collision resolution short frame (any frames less than 7 bits) noise filter
        enum class FilterVal {
            off=0x00000000,     ///<Auto collision resolution short frame noise filter disabled
            on=0x00000001,     ///<Auto collision resolution ignores any frames less than 7 bits
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,FilterVal> filter{}; 
        namespace FilterValC{
            constexpr Register::FieldValue<decltype(filter),FilterVal::off> off{};
            constexpr Register::FieldValue<decltype(filter),FilterVal::on> on{};
        }
    }
    namespace Nonesensres{    ///<NFC-A SENS_RES auto-response settings
        using Addr = Register::Address<0x400055a0,0xffff0000,0,unsigned>;
        ///Bit frame SDD as defined by the b5:b1 of byte 1 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification
        enum class BitframesddVal {
            sdd00000=0x00000000,     ///<SDD pattern 00000
            sdd00001=0x00000001,     ///<SDD pattern 00001
            sdd00010=0x00000002,     ///<SDD pattern 00010
            sdd00100=0x00000004,     ///<SDD pattern 00100
            sdd01000=0x00000008,     ///<SDD pattern 01000
            sdd10000=0x00000010,     ///<SDD pattern 10000
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,BitframesddVal> bitframesdd{}; 
        namespace BitframesddValC{
            constexpr Register::FieldValue<decltype(bitframesdd),BitframesddVal::sdd00000> sdd00000{};
            constexpr Register::FieldValue<decltype(bitframesdd),BitframesddVal::sdd00001> sdd00001{};
            constexpr Register::FieldValue<decltype(bitframesdd),BitframesddVal::sdd00010> sdd00010{};
            constexpr Register::FieldValue<decltype(bitframesdd),BitframesddVal::sdd00100> sdd00100{};
            constexpr Register::FieldValue<decltype(bitframesdd),BitframesddVal::sdd01000> sdd01000{};
            constexpr Register::FieldValue<decltype(bitframesdd),BitframesddVal::sdd10000> sdd10000{};
        }
        ///Reserved for future use. Shall be 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfu5{}; 
        namespace Rfu5ValC{
        }
        ///NFCID1 size. This value is used by the Auto collision resolution engine.
        enum class NfcidsizeVal {
            nfcid1single=0x00000000,     ///<NFCID1 size: single (4 bytes)
            nfcid1double=0x00000001,     ///<NFCID1 size: double (7 bytes)
            nfcid1triple=0x00000002,     ///<NFCID1 size: triple (10 bytes)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,NfcidsizeVal> nfcidsize{}; 
        namespace NfcidsizeValC{
            constexpr Register::FieldValue<decltype(nfcidsize),NfcidsizeVal::nfcid1single> nfcid1single{};
            constexpr Register::FieldValue<decltype(nfcidsize),NfcidsizeVal::nfcid1double> nfcid1double{};
            constexpr Register::FieldValue<decltype(nfcidsize),NfcidsizeVal::nfcid1triple> nfcid1triple{};
        }
        ///Tag platform configuration as defined by the b4:b1 of byte 2 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> platfconfig{}; 
        namespace PlatfconfigValC{
        }
        ///Reserved for future use. Shall be 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rfu74{}; 
        namespace Rfu74ValC{
        }
    }
    namespace Noneselres{    ///<NFC-A SEL_RES auto-response settings
        using Addr = Register::Address<0x400055a4,0xffffff00,0,unsigned>;
        ///Reserved for future use. Shall be 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rfu10{}; 
        namespace Rfu10ValC{
        }
        ///Cascade bit (controlled by hardware, write has no effect)
        enum class CascadeVal {
            complete=0x00000000,     ///<NFCID1 complete
            notcomplete=0x00000001,     ///<NFCID1 not complete
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CascadeVal> cascade{}; 
        namespace CascadeValC{
            constexpr Register::FieldValue<decltype(cascade),CascadeVal::complete> complete{};
            constexpr Register::FieldValue<decltype(cascade),CascadeVal::notcomplete> notcomplete{};
        }
        ///Reserved for future use. Shall be 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rfu43{}; 
        namespace Rfu43ValC{
        }
        ///Protocol as defined by the b7:b6 of SEL_RES response in the NFC Forum, NFC Digital Protocol Technical Specification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> protocol{}; 
        namespace ProtocolValC{
        }
        ///Reserved for future use. Shall be 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfu7{}; 
        namespace Rfu7ValC{
        }
    }
}
