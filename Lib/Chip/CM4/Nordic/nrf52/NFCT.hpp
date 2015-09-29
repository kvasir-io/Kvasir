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
        enum class fielddetectedActivateVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace fielddetectedActivateValC{
            constexpr MPL::Value<fielddetectedActivateVal,fielddetectedActivateVal::disabled> disabled{};
            constexpr MPL::Value<fielddetectedActivateVal,fielddetectedActivateVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fielddetectedActivateVal> fielddetectedActivate{}; 
        ///Shortcut between EVENTS_FIELDLOST event and TASKS_SENSE task
        enum class fieldlostSenseVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace fieldlostSenseValC{
            constexpr MPL::Value<fieldlostSenseVal,fieldlostSenseVal::disabled> disabled{};
            constexpr MPL::Value<fieldlostSenseVal,fieldlostSenseVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fieldlostSenseVal> fieldlostSense{}; 
    }
    namespace Noneinten{    ///<Enable or disable interrupt
        using Addr = Register::Address<0x40005300,0xffe3a300,0,unsigned>;
        ///Enable or disable interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Enable or disable interrupt on EVENTS_FIELDDETECTED event
        enum class fielddetectedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace fielddetectedValC{
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::disabled> disabled{};
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fielddetectedVal> fielddetected{}; 
        ///Enable or disable interrupt on EVENTS_FIELDLOST event
        enum class fieldlostVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace fieldlostValC{
            constexpr MPL::Value<fieldlostVal,fieldlostVal::disabled> disabled{};
            constexpr MPL::Value<fieldlostVal,fieldlostVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fieldlostVal> fieldlost{}; 
        ///Enable or disable interrupt on EVENTS_TXFRAMESTART event
        enum class txframestartVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace txframestartValC{
            constexpr MPL::Value<txframestartVal,txframestartVal::disabled> disabled{};
            constexpr MPL::Value<txframestartVal,txframestartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txframestartVal> txframestart{}; 
        ///Enable or disable interrupt on EVENTS_TXFRAMEEND event
        enum class txframeendVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace txframeendValC{
            constexpr MPL::Value<txframeendVal,txframeendVal::disabled> disabled{};
            constexpr MPL::Value<txframeendVal,txframeendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txframeendVal> txframeend{}; 
        ///Enable or disable interrupt on EVENTS_RXFRAMESTART event
        enum class rxframestartVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace rxframestartValC{
            constexpr MPL::Value<rxframestartVal,rxframestartVal::disabled> disabled{};
            constexpr MPL::Value<rxframestartVal,rxframestartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxframestartVal> rxframestart{}; 
        ///Enable or disable interrupt on EVENTS_RXFRAMEEND event
        enum class rxframeendVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace rxframeendValC{
            constexpr MPL::Value<rxframeendVal,rxframeendVal::disabled> disabled{};
            constexpr MPL::Value<rxframeendVal,rxframeendVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxframeendVal> rxframeend{}; 
        ///Enable or disable interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,errorVal> error{}; 
        ///Enable or disable interrupt on EVENTS_RXERROR event
        enum class rxerrorVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace rxerrorValC{
            constexpr MPL::Value<rxerrorVal,rxerrorVal::disabled> disabled{};
            constexpr MPL::Value<rxerrorVal,rxerrorVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxerrorVal> rxerror{}; 
        ///Enable or disable interrupt on EVENTS_ENDRX event
        enum class endrxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Enable or disable interrupt on EVENTS_ENDTX event
        enum class endtxVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,endtxVal> endtx{}; 
        ///Enable or disable interrupt on EVENTS_AUTOCOLRESSTARTED event
        enum class autocolresstartedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace autocolresstartedValC{
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::disabled> disabled{};
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,autocolresstartedVal> autocolresstarted{}; 
        ///Enable or disable interrupt on EVENTS_COLLISION event
        enum class collisionVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace collisionValC{
            constexpr MPL::Value<collisionVal,collisionVal::disabled> disabled{};
            constexpr MPL::Value<collisionVal,collisionVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,collisionVal> collision{}; 
        ///Enable or disable interrupt on EVENTS_SELECTED event
        enum class selectedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace selectedValC{
            constexpr MPL::Value<selectedVal,selectedVal::disabled> disabled{};
            constexpr MPL::Value<selectedVal,selectedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,selectedVal> selected{}; 
        ///Enable or disable interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40005304,0xffe3a300,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Write '1' to Enable interrupt on EVENTS_FIELDDETECTED event
        enum class fielddetectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace fielddetectedValC{
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::disabled> disabled{};
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::enabled> enabled{};
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fielddetectedVal> fielddetected{}; 
        ///Write '1' to Enable interrupt on EVENTS_FIELDLOST event
        enum class fieldlostVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace fieldlostValC{
            constexpr MPL::Value<fieldlostVal,fieldlostVal::disabled> disabled{};
            constexpr MPL::Value<fieldlostVal,fieldlostVal::enabled> enabled{};
            constexpr MPL::Value<fieldlostVal,fieldlostVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fieldlostVal> fieldlost{}; 
        ///Write '1' to Enable interrupt on EVENTS_TXFRAMESTART event
        enum class txframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txframestartValC{
            constexpr MPL::Value<txframestartVal,txframestartVal::disabled> disabled{};
            constexpr MPL::Value<txframestartVal,txframestartVal::enabled> enabled{};
            constexpr MPL::Value<txframestartVal,txframestartVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txframestartVal> txframestart{}; 
        ///Write '1' to Enable interrupt on EVENTS_TXFRAMEEND event
        enum class txframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace txframeendValC{
            constexpr MPL::Value<txframeendVal,txframeendVal::disabled> disabled{};
            constexpr MPL::Value<txframeendVal,txframeendVal::enabled> enabled{};
            constexpr MPL::Value<txframeendVal,txframeendVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txframeendVal> txframeend{}; 
        ///Write '1' to Enable interrupt on EVENTS_RXFRAMESTART event
        enum class rxframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxframestartValC{
            constexpr MPL::Value<rxframestartVal,rxframestartVal::disabled> disabled{};
            constexpr MPL::Value<rxframestartVal,rxframestartVal::enabled> enabled{};
            constexpr MPL::Value<rxframestartVal,rxframestartVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxframestartVal> rxframestart{}; 
        ///Write '1' to Enable interrupt on EVENTS_RXFRAMEEND event
        enum class rxframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxframeendValC{
            constexpr MPL::Value<rxframeendVal,rxframeendVal::disabled> disabled{};
            constexpr MPL::Value<rxframeendVal,rxframeendVal::enabled> enabled{};
            constexpr MPL::Value<rxframeendVal,rxframeendVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxframeendVal> rxframeend{}; 
        ///Write '1' to Enable interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,errorVal> error{}; 
        ///Write '1' to Enable interrupt on EVENTS_RXERROR event
        enum class rxerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rxerrorValC{
            constexpr MPL::Value<rxerrorVal,rxerrorVal::disabled> disabled{};
            constexpr MPL::Value<rxerrorVal,rxerrorVal::enabled> enabled{};
            constexpr MPL::Value<rxerrorVal,rxerrorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxerrorVal> rxerror{}; 
        ///Write '1' to Enable interrupt on EVENTS_ENDRX event
        enum class endrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
            constexpr MPL::Value<endrxVal,endrxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Write '1' to Enable interrupt on EVENTS_ENDTX event
        enum class endtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
            constexpr MPL::Value<endtxVal,endtxVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,endtxVal> endtx{}; 
        ///Write '1' to Enable interrupt on EVENTS_AUTOCOLRESSTARTED event
        enum class autocolresstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace autocolresstartedValC{
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::disabled> disabled{};
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::enabled> enabled{};
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,autocolresstartedVal> autocolresstarted{}; 
        ///Write '1' to Enable interrupt on EVENTS_COLLISION event
        enum class collisionVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace collisionValC{
            constexpr MPL::Value<collisionVal,collisionVal::disabled> disabled{};
            constexpr MPL::Value<collisionVal,collisionVal::enabled> enabled{};
            constexpr MPL::Value<collisionVal,collisionVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,collisionVal> collision{}; 
        ///Write '1' to Enable interrupt on EVENTS_SELECTED event
        enum class selectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace selectedValC{
            constexpr MPL::Value<selectedVal,selectedVal::disabled> disabled{};
            constexpr MPL::Value<selectedVal,selectedVal::enabled> enabled{};
            constexpr MPL::Value<selectedVal,selectedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,selectedVal> selected{}; 
        ///Write '1' to Enable interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40005308,0xffe3a300,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class readyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Write '1' to Clear interrupt on EVENTS_FIELDDETECTED event
        enum class fielddetectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace fielddetectedValC{
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::disabled> disabled{};
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::enabled> enabled{};
            constexpr MPL::Value<fielddetectedVal,fielddetectedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,fielddetectedVal> fielddetected{}; 
        ///Write '1' to Clear interrupt on EVENTS_FIELDLOST event
        enum class fieldlostVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace fieldlostValC{
            constexpr MPL::Value<fieldlostVal,fieldlostVal::disabled> disabled{};
            constexpr MPL::Value<fieldlostVal,fieldlostVal::enabled> enabled{};
            constexpr MPL::Value<fieldlostVal,fieldlostVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,fieldlostVal> fieldlost{}; 
        ///Write '1' to Clear interrupt on EVENTS_TXFRAMESTART event
        enum class txframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txframestartValC{
            constexpr MPL::Value<txframestartVal,txframestartVal::disabled> disabled{};
            constexpr MPL::Value<txframestartVal,txframestartVal::enabled> enabled{};
            constexpr MPL::Value<txframestartVal,txframestartVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txframestartVal> txframestart{}; 
        ///Write '1' to Clear interrupt on EVENTS_TXFRAMEEND event
        enum class txframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace txframeendValC{
            constexpr MPL::Value<txframeendVal,txframeendVal::disabled> disabled{};
            constexpr MPL::Value<txframeendVal,txframeendVal::enabled> enabled{};
            constexpr MPL::Value<txframeendVal,txframeendVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,txframeendVal> txframeend{}; 
        ///Write '1' to Clear interrupt on EVENTS_RXFRAMESTART event
        enum class rxframestartVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxframestartValC{
            constexpr MPL::Value<rxframestartVal,rxframestartVal::disabled> disabled{};
            constexpr MPL::Value<rxframestartVal,rxframestartVal::enabled> enabled{};
            constexpr MPL::Value<rxframestartVal,rxframestartVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxframestartVal> rxframestart{}; 
        ///Write '1' to Clear interrupt on EVENTS_RXFRAMEEND event
        enum class rxframeendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxframeendValC{
            constexpr MPL::Value<rxframeendVal,rxframeendVal::disabled> disabled{};
            constexpr MPL::Value<rxframeendVal,rxframeendVal::enabled> enabled{};
            constexpr MPL::Value<rxframeendVal,rxframeendVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,rxframeendVal> rxframeend{}; 
        ///Write '1' to Clear interrupt on EVENTS_ERROR event
        enum class errorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace errorValC{
            constexpr MPL::Value<errorVal,errorVal::disabled> disabled{};
            constexpr MPL::Value<errorVal,errorVal::enabled> enabled{};
            constexpr MPL::Value<errorVal,errorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,errorVal> error{}; 
        ///Write '1' to Clear interrupt on EVENTS_RXERROR event
        enum class rxerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rxerrorValC{
            constexpr MPL::Value<rxerrorVal,rxerrorVal::disabled> disabled{};
            constexpr MPL::Value<rxerrorVal,rxerrorVal::enabled> enabled{};
            constexpr MPL::Value<rxerrorVal,rxerrorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,rxerrorVal> rxerror{}; 
        ///Write '1' to Clear interrupt on EVENTS_ENDRX event
        enum class endrxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endrxValC{
            constexpr MPL::Value<endrxVal,endrxVal::disabled> disabled{};
            constexpr MPL::Value<endrxVal,endrxVal::enabled> enabled{};
            constexpr MPL::Value<endrxVal,endrxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,endrxVal> endrx{}; 
        ///Write '1' to Clear interrupt on EVENTS_ENDTX event
        enum class endtxVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endtxValC{
            constexpr MPL::Value<endtxVal,endtxVal::disabled> disabled{};
            constexpr MPL::Value<endtxVal,endtxVal::enabled> enabled{};
            constexpr MPL::Value<endtxVal,endtxVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,endtxVal> endtx{}; 
        ///Write '1' to Clear interrupt on EVENTS_AUTOCOLRESSTARTED event
        enum class autocolresstartedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace autocolresstartedValC{
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::disabled> disabled{};
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::enabled> enabled{};
            constexpr MPL::Value<autocolresstartedVal,autocolresstartedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,autocolresstartedVal> autocolresstarted{}; 
        ///Write '1' to Clear interrupt on EVENTS_COLLISION event
        enum class collisionVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace collisionValC{
            constexpr MPL::Value<collisionVal,collisionVal::disabled> disabled{};
            constexpr MPL::Value<collisionVal,collisionVal::enabled> enabled{};
            constexpr MPL::Value<collisionVal,collisionVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,collisionVal> collision{}; 
        ///Write '1' to Clear interrupt on EVENTS_SELECTED event
        enum class selectedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace selectedValC{
            constexpr MPL::Value<selectedVal,selectedVal::disabled> disabled{};
            constexpr MPL::Value<selectedVal,selectedVal::enabled> enabled{};
            constexpr MPL::Value<selectedVal,selectedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,selectedVal> selected{}; 
        ///Write '1' to Clear interrupt on EVENTS_STARTED event
        enum class startedVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace startedValC{
            constexpr MPL::Value<startedVal,startedVal::disabled> disabled{};
            constexpr MPL::Value<startedVal,startedVal::enabled> enabled{};
            constexpr MPL::Value<startedVal,startedVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,startedVal> started{}; 
    }
    namespace Noneerrorstatus{    ///<NFC Error Status register
        using Addr = Register::Address<0x40005404,0xffffffb0,0,unsigned>;
        ///No STARTTX task triggered before expiration of the time set in FRAMEDELAYMAX
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> framedelaytimeout{}; 
        ///The received pulse does not match a valid NFC-A symbol
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> invalidnfcsymbol{}; 
        ///Field level is too high at max load resistance
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nfcfieldtoostrong{}; 
        ///Field level is too low at min load resistance
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> nfcfieldtooweak{}; 
        ///No valid End of Frame detected
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> eoferror{}; 
    }
    namespace Nonecurrentloadctrl{    ///<Current value driven to the NFC Load Control
        using Addr = Register::Address<0x40005430,0xffffffc0,0,unsigned>;
        ///Current value driven to the NFC Load Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> currentloadctrl{}; 
    }
    namespace Nonefieldpresent{    ///<Indicates the presence or not of a valid field
        using Addr = Register::Address<0x4000543c,0xfffffffc,0,unsigned>;
        ///Indicates the presence or not of a valid field. Linked to the FIELDDETECTED and FIELDLOST events.
        enum class fieldpresentVal {
            nofield=0x00000000,     ///<No valid field detected
            fieldpresent=0x00000001,     ///<Valid field detected
        };
        namespace fieldpresentValC{
            constexpr MPL::Value<fieldpresentVal,fieldpresentVal::nofield> nofield{};
            constexpr MPL::Value<fieldpresentVal,fieldpresentVal::fieldpresent> fieldpresent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,fieldpresentVal> fieldpresent{}; 
        ///Indicates if the low level has locked to the field
        enum class lockdetectVal {
            notlocked=0x00000000,     ///<Not locked to field
            locked=0x00000001,     ///<Locked to field
        };
        namespace lockdetectValC{
            constexpr MPL::Value<lockdetectVal,lockdetectVal::notlocked> notlocked{};
            constexpr MPL::Value<lockdetectVal,lockdetectVal::locked> locked{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,lockdetectVal> lockdetect{}; 
    }
    namespace Noneframedelaymin{    ///<Minimum frame delay
        using Addr = Register::Address<0x40005504,0xffff0000,0,unsigned>;
        ///Minimum frame delay in number of 13.56 MHz clocks
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> framedelaymin{}; 
    }
    namespace Noneframedelaymax{    ///<Maximum frame delay
        using Addr = Register::Address<0x40005508,0xffff0000,0,unsigned>;
        ///Maximum frame delay in number of 13.56 MHz clocks
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> framedelaymax{}; 
    }
    namespace Noneframedelaymode{    ///<Configuration register for the Frame Delay Timer
        using Addr = Register::Address<0x4000550c,0xfffffffc,0,unsigned>;
        ///Configuration register for the Frame Delay Timer
        enum class framedelaymodeVal {
            freerun=0x00000000,     ///<Transmission is independent of frame timer and will start when the STARTTX task is triggered. No timeout.
            window=0x00000001,     ///<Frame is transmitted between FRAMEDELAYMIN and FRAMEDELAYMAX
            exactval=0x00000002,     ///<Frame is transmitted exactly at FRAMEDELAYMAX
            windowgrid=0x00000003,     ///<Frame is transmitted on a bit grid between FRAMEDELAYMIN and FRAMEDELAYMAX
        };
        namespace framedelaymodeValC{
            constexpr MPL::Value<framedelaymodeVal,framedelaymodeVal::freerun> freerun{};
            constexpr MPL::Value<framedelaymodeVal,framedelaymodeVal::window> window{};
            constexpr MPL::Value<framedelaymodeVal,framedelaymodeVal::exactval> exactval{};
            constexpr MPL::Value<framedelaymodeVal,framedelaymodeVal::windowgrid> windowgrid{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,framedelaymodeVal> framedelaymode{}; 
    }
    namespace Nonepacketptr{    ///<Packet pointer for TXD and RXD data storage in Data RAM
        using Addr = Register::Address<0x40005510,0x00000000,0,unsigned>;
        ///Packet pointer for TXD and RXD data storage in Data RAM. This address is a byte aligned RAM address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> ptr{}; 
    }
    namespace Nonemaxlen{    ///<Size of allocated for TXD and RXD data storage buffer in Data RAM
        using Addr = Register::Address<0x40005514,0xfffffe00,0,unsigned>;
        ///Size of allocated for TXD and RXD data storage buffer in Data RAM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> maxlen{}; 
    }
    namespace Nonenfcid1Last{    ///<Last NFCID1 part (4, 7 or 10 bytes ID)
        using Addr = Register::Address<0x40005590,0x00000000,0,unsigned>;
        ///NFCID1 byte Z (very last byte sent)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nfcid1Z{}; 
        ///NFCID1 byte Y
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nfcid1Y{}; 
        ///NFCID1 byte X
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nfcid1X{}; 
        ///NFCID1 byte W
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> nfcid1W{}; 
    }
    namespace Nonenfcid12ndLast{    ///<Second last NFCID1 part (7 or 10 bytes ID)
        using Addr = Register::Address<0x40005594,0xff000000,0,unsigned>;
        ///NFCID1 byte V
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nfcid1V{}; 
        ///NFCID1 byte U
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nfcid1U{}; 
        ///NFCID1 byte T
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nfcid1T{}; 
    }
    namespace Nonenfcid13rdLast{    ///<Third last NFCID1 part (10 bytes ID)
        using Addr = Register::Address<0x40005598,0xff000000,0,unsigned>;
        ///NFCID1 byte S
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> nfcid1S{}; 
        ///NFCID1 byte R
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> nfcid1R{}; 
        ///NFCID1 byte Q
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nfcid1Q{}; 
    }
    namespace Noneautocolresconfig{    ///<Controls the Auto collision resolution function. This setting must be done before the NFCT peripheral is enabled.
        using Addr = Register::Address<0x4000559c,0xfffffffc,0,unsigned>;
        ///Enables/disables Auto collision resolution
        enum class modeVal {
            enabled=0x00000000,     ///<Auto collision resolution enabled
            disabled=0x00000001,     ///<Auto collision resolution disabled
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::enabled> enabled{};
            constexpr MPL::Value<modeVal,modeVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Enables/disables Auto collision resolution short frame (any frames less than 7 bits) noise filter
        enum class filterVal {
            off=0x00000000,     ///<Auto collision resolution short frame noise filter disabled
            on=0x00000001,     ///<Auto collision resolution ignores any frames less than 7 bits
        };
        namespace filterValC{
            constexpr MPL::Value<filterVal,filterVal::off> off{};
            constexpr MPL::Value<filterVal,filterVal::on> on{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,filterVal> filter{}; 
    }
    namespace Nonesensres{    ///<NFC-A SENS_RES auto-response settings
        using Addr = Register::Address<0x400055a0,0xffff0000,0,unsigned>;
        ///Bit frame SDD as defined by the b5:b1 of byte 1 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification
        enum class bitframesddVal {
            sdd00000=0x00000000,     ///<SDD pattern 00000
            sdd00001=0x00000001,     ///<SDD pattern 00001
            sdd00010=0x00000002,     ///<SDD pattern 00010
            sdd00100=0x00000004,     ///<SDD pattern 00100
            sdd01000=0x00000008,     ///<SDD pattern 01000
            sdd10000=0x00000010,     ///<SDD pattern 10000
        };
        namespace bitframesddValC{
            constexpr MPL::Value<bitframesddVal,bitframesddVal::sdd00000> sdd00000{};
            constexpr MPL::Value<bitframesddVal,bitframesddVal::sdd00001> sdd00001{};
            constexpr MPL::Value<bitframesddVal,bitframesddVal::sdd00010> sdd00010{};
            constexpr MPL::Value<bitframesddVal,bitframesddVal::sdd00100> sdd00100{};
            constexpr MPL::Value<bitframesddVal,bitframesddVal::sdd01000> sdd01000{};
            constexpr MPL::Value<bitframesddVal,bitframesddVal::sdd10000> sdd10000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,bitframesddVal> bitframesdd{}; 
        ///Reserved for future use. Shall be 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rfu5{}; 
        ///NFCID1 size. This value is used by the Auto collision resolution engine.
        enum class nfcidsizeVal {
            nfcid1single=0x00000000,     ///<NFCID1 size: single (4 bytes)
            nfcid1double=0x00000001,     ///<NFCID1 size: double (7 bytes)
            nfcid1triple=0x00000002,     ///<NFCID1 size: triple (10 bytes)
        };
        namespace nfcidsizeValC{
            constexpr MPL::Value<nfcidsizeVal,nfcidsizeVal::nfcid1single> nfcid1single{};
            constexpr MPL::Value<nfcidsizeVal,nfcidsizeVal::nfcid1double> nfcid1double{};
            constexpr MPL::Value<nfcidsizeVal,nfcidsizeVal::nfcid1triple> nfcid1triple{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,nfcidsizeVal> nfcidsize{}; 
        ///Tag platform configuration as defined by the b4:b1 of byte 2 in SENS_RES response in the NFC Forum, NFC Digital Protocol Technical Specification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> platfconfig{}; 
        ///Reserved for future use. Shall be 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> rfu74{}; 
    }
    namespace Noneselres{    ///<NFC-A SEL_RES auto-response settings
        using Addr = Register::Address<0x400055a4,0xffffff00,0,unsigned>;
        ///Reserved for future use. Shall be 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rfu10{}; 
        ///Cascade bit (controlled by hardware, write has no effect)
        enum class cascadeVal {
            complete=0x00000000,     ///<NFCID1 complete
            notcomplete=0x00000001,     ///<NFCID1 not complete
        };
        namespace cascadeValC{
            constexpr MPL::Value<cascadeVal,cascadeVal::complete> complete{};
            constexpr MPL::Value<cascadeVal,cascadeVal::notcomplete> notcomplete{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,cascadeVal> cascade{}; 
        ///Reserved for future use. Shall be 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> rfu43{}; 
        ///Protocol as defined by the b7:b6 of SEL_RES response in the NFC Forum, NFC Digital Protocol Technical Specification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> protocol{}; 
        ///Reserved for future use. Shall be 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rfu7{}; 
    }
}
