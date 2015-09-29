#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//2.4 GHz Radio
    namespace NonetasksTxen{    ///<Enable RADIO in TX mode
        using Addr = Register::Address<0x40001000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRxen{    ///<Enable RADIO in RX mode
        using Addr = Register::Address<0x40001004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStart{    ///<Start RADIO
        using Addr = Register::Address<0x40001008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop RADIO
        using Addr = Register::Address<0x4000100c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksDisable{    ///<Disable RADIO
        using Addr = Register::Address<0x40001010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRssistart{    ///<Start the RSSI and take one single sample of the receive signal strength.
        using Addr = Register::Address<0x40001014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRssistop{    ///<Stop the RSSI measurement
        using Addr = Register::Address<0x40001018,0xffffffff,0,unsigned>;
    }
    namespace NonetasksBcstart{    ///<Start the bit counter
        using Addr = Register::Address<0x4000101c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksBcstop{    ///<Stop the bit counter
        using Addr = Register::Address<0x40001020,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReady{    ///<RADIO has ramped up and is ready to be started
        using Addr = Register::Address<0x40001100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAddress{    ///<Address sent or received
        using Addr = Register::Address<0x40001104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPayload{    ///<Packet payload sent or received
        using Addr = Register::Address<0x40001108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<Packet sent or received
        using Addr = Register::Address<0x4000110c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDisabled{    ///<RADIO has been disabled
        using Addr = Register::Address<0x40001110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDevmatch{    ///<A device address match occurred on the last received packet
        using Addr = Register::Address<0x40001114,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDevmiss{    ///<No device address match occurred on the last received packet
        using Addr = Register::Address<0x40001118,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRssiend{    ///<Sampling of receive signal strength complete. A new RSSI sample is ready for readout from the "RADIO.RSSISAMPLE"  register
        using Addr = Register::Address<0x4000111c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsBcmatch{    ///<Bit counter reached bit count value specified in the "RADIO.BCC"  register
        using Addr = Register::Address<0x40001128,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCrcok{    ///<Packet received with CRC ok
        using Addr = Register::Address<0x40001130,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsCrcerror{    ///<Packet received with CRC error
        using Addr = Register::Address<0x40001134,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcut register
        using Addr = Register::Address<0x40001200,0xfffffe80,0,unsigned>;
        ///Shortcut between EVENTS_READY event and TASKS_START task
        enum class readyStartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace readyStartValC{
            constexpr MPL::Value<readyStartVal,readyStartVal::disabled> disabled{};
            constexpr MPL::Value<readyStartVal,readyStartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyStartVal> readyStart{}; 
        ///Shortcut between EVENTS_END event and TASKS_DISABLE task
        enum class endDisableVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endDisableValC{
            constexpr MPL::Value<endDisableVal,endDisableVal::disabled> disabled{};
            constexpr MPL::Value<endDisableVal,endDisableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endDisableVal> endDisable{}; 
        ///Shortcut between EVENTS_DISABLED event and TASKS_TXEN task
        enum class disabledTxenVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace disabledTxenValC{
            constexpr MPL::Value<disabledTxenVal,disabledTxenVal::disabled> disabled{};
            constexpr MPL::Value<disabledTxenVal,disabledTxenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,disabledTxenVal> disabledTxen{}; 
        ///Shortcut between EVENTS_DISABLED event and TASKS_RXEN task
        enum class disabledRxenVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace disabledRxenValC{
            constexpr MPL::Value<disabledRxenVal,disabledRxenVal::disabled> disabled{};
            constexpr MPL::Value<disabledRxenVal,disabledRxenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,disabledRxenVal> disabledRxen{}; 
        ///Shortcut between EVENTS_ADDRESS event and TASKS_RSSISTART task
        enum class addressRssistartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace addressRssistartValC{
            constexpr MPL::Value<addressRssistartVal,addressRssistartVal::disabled> disabled{};
            constexpr MPL::Value<addressRssistartVal,addressRssistartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,addressRssistartVal> addressRssistart{}; 
        ///Shortcut between EVENTS_END event and TASKS_START task
        enum class endStartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace endStartValC{
            constexpr MPL::Value<endStartVal,endStartVal::disabled> disabled{};
            constexpr MPL::Value<endStartVal,endStartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,endStartVal> endStart{}; 
        ///Shortcut between EVENTS_ADDRESS event and TASKS_BCSTART task
        enum class addressBcstartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace addressBcstartValC{
            constexpr MPL::Value<addressBcstartVal,addressBcstartVal::disabled> disabled{};
            constexpr MPL::Value<addressBcstartVal,addressBcstartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,addressBcstartVal> addressBcstart{}; 
        ///Shortcut between EVENTS_DISABLED event and TASKS_RSSISTOP task
        enum class disabledRssistopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        namespace disabledRssistopValC{
            constexpr MPL::Value<disabledRssistopVal,disabledRssistopVal::disabled> disabled{};
            constexpr MPL::Value<disabledRssistopVal,disabledRssistopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,disabledRssistopVal> disabledRssistop{}; 
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40001304,0xffffcb00,0,unsigned>;
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
        ///Write '1' to Enable interrupt on EVENTS_ADDRESS event
        enum class addressVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace addressValC{
            constexpr MPL::Value<addressVal,addressVal::disabled> disabled{};
            constexpr MPL::Value<addressVal,addressVal::enabled> enabled{};
            constexpr MPL::Value<addressVal,addressVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,addressVal> address{}; 
        ///Write '1' to Enable interrupt on EVENTS_PAYLOAD event
        enum class payloadVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace payloadValC{
            constexpr MPL::Value<payloadVal,payloadVal::disabled> disabled{};
            constexpr MPL::Value<payloadVal,payloadVal::enabled> enabled{};
            constexpr MPL::Value<payloadVal,payloadVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,payloadVal> payload{}; 
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,endVal> end{}; 
        ///Write '1' to Enable interrupt on EVENTS_DISABLED event
        enum class disabledVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace disabledValC{
            constexpr MPL::Value<disabledVal,disabledVal::disabled> disabled{};
            constexpr MPL::Value<disabledVal,disabledVal::enabled> enabled{};
            constexpr MPL::Value<disabledVal,disabledVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,disabledVal> disabled{}; 
        ///Write '1' to Enable interrupt on EVENTS_DEVMATCH event
        enum class devmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace devmatchValC{
            constexpr MPL::Value<devmatchVal,devmatchVal::disabled> disabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::enabled> enabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,devmatchVal> devmatch{}; 
        ///Write '1' to Enable interrupt on EVENTS_DEVMISS event
        enum class devmissVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace devmissValC{
            constexpr MPL::Value<devmissVal,devmissVal::disabled> disabled{};
            constexpr MPL::Value<devmissVal,devmissVal::enabled> enabled{};
            constexpr MPL::Value<devmissVal,devmissVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,devmissVal> devmiss{}; 
        ///Write '1' to Enable interrupt on EVENTS_RSSIEND event
        enum class rssiendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace rssiendValC{
            constexpr MPL::Value<rssiendVal,rssiendVal::disabled> disabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::enabled> enabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rssiendVal> rssiend{}; 
        ///Write '1' to Enable interrupt on EVENTS_BCMATCH event
        enum class bcmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace bcmatchValC{
            constexpr MPL::Value<bcmatchVal,bcmatchVal::disabled> disabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::enabled> enabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,bcmatchVal> bcmatch{}; 
        ///Write '1' to Enable interrupt on EVENTS_CRCOK event
        enum class crcokVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace crcokValC{
            constexpr MPL::Value<crcokVal,crcokVal::disabled> disabled{};
            constexpr MPL::Value<crcokVal,crcokVal::enabled> enabled{};
            constexpr MPL::Value<crcokVal,crcokVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,crcokVal> crcok{}; 
        ///Write '1' to Enable interrupt on EVENTS_CRCERROR event
        enum class crcerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        namespace crcerrorValC{
            constexpr MPL::Value<crcerrorVal,crcerrorVal::disabled> disabled{};
            constexpr MPL::Value<crcerrorVal,crcerrorVal::enabled> enabled{};
            constexpr MPL::Value<crcerrorVal,crcerrorVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,crcerrorVal> crcerror{}; 
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40001308,0xffffcb00,0,unsigned>;
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
        ///Write '1' to Clear interrupt on EVENTS_ADDRESS event
        enum class addressVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace addressValC{
            constexpr MPL::Value<addressVal,addressVal::disabled> disabled{};
            constexpr MPL::Value<addressVal,addressVal::enabled> enabled{};
            constexpr MPL::Value<addressVal,addressVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,addressVal> address{}; 
        ///Write '1' to Clear interrupt on EVENTS_PAYLOAD event
        enum class payloadVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace payloadValC{
            constexpr MPL::Value<payloadVal,payloadVal::disabled> disabled{};
            constexpr MPL::Value<payloadVal,payloadVal::enabled> enabled{};
            constexpr MPL::Value<payloadVal,payloadVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,payloadVal> payload{}; 
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class endVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,endVal> end{}; 
        ///Write '1' to Clear interrupt on EVENTS_DISABLED event
        enum class disabledVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace disabledValC{
            constexpr MPL::Value<disabledVal,disabledVal::disabled> disabled{};
            constexpr MPL::Value<disabledVal,disabledVal::enabled> enabled{};
            constexpr MPL::Value<disabledVal,disabledVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,disabledVal> disabled{}; 
        ///Write '1' to Clear interrupt on EVENTS_DEVMATCH event
        enum class devmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace devmatchValC{
            constexpr MPL::Value<devmatchVal,devmatchVal::disabled> disabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::enabled> enabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,devmatchVal> devmatch{}; 
        ///Write '1' to Clear interrupt on EVENTS_DEVMISS event
        enum class devmissVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace devmissValC{
            constexpr MPL::Value<devmissVal,devmissVal::disabled> disabled{};
            constexpr MPL::Value<devmissVal,devmissVal::enabled> enabled{};
            constexpr MPL::Value<devmissVal,devmissVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,devmissVal> devmiss{}; 
        ///Write '1' to Clear interrupt on EVENTS_RSSIEND event
        enum class rssiendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace rssiendValC{
            constexpr MPL::Value<rssiendVal,rssiendVal::disabled> disabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::enabled> enabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rssiendVal> rssiend{}; 
        ///Write '1' to Clear interrupt on EVENTS_BCMATCH event
        enum class bcmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace bcmatchValC{
            constexpr MPL::Value<bcmatchVal,bcmatchVal::disabled> disabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::enabled> enabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,bcmatchVal> bcmatch{}; 
        ///Write '1' to Clear interrupt on EVENTS_CRCOK event
        enum class crcokVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace crcokValC{
            constexpr MPL::Value<crcokVal,crcokVal::disabled> disabled{};
            constexpr MPL::Value<crcokVal,crcokVal::enabled> enabled{};
            constexpr MPL::Value<crcokVal,crcokVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,crcokVal> crcok{}; 
        ///Write '1' to Clear interrupt on EVENTS_CRCERROR event
        enum class crcerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        namespace crcerrorValC{
            constexpr MPL::Value<crcerrorVal,crcerrorVal::disabled> disabled{};
            constexpr MPL::Value<crcerrorVal,crcerrorVal::enabled> enabled{};
            constexpr MPL::Value<crcerrorVal,crcerrorVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,crcerrorVal> crcerror{}; 
    }
    namespace Nonecrcstatus{    ///<CRC status
        using Addr = Register::Address<0x40001400,0xfffffffe,0,unsigned>;
        ///CRC status of packet received
        enum class crcstatusVal {
            crcerror=0x00000000,     ///<Packet received with CRC error
            crcok=0x00000001,     ///<Packet received with CRC ok
        };
        namespace crcstatusValC{
            constexpr MPL::Value<crcstatusVal,crcstatusVal::crcerror> crcerror{};
            constexpr MPL::Value<crcstatusVal,crcstatusVal::crcok> crcok{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,crcstatusVal> crcstatus{}; 
    }
    namespace Nonerxmatch{    ///<Received address
        using Addr = Register::Address<0x40001408,0xfffffff8,0,unsigned>;
        ///Received address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rxmatch{}; 
    }
    namespace Nonerxcrc{    ///<CRC field of previously received packet
        using Addr = Register::Address<0x4000140c,0xff000000,0,unsigned>;
        ///CRC field of previously received packet
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Nonedai{    ///<Device address match index
        using Addr = Register::Address<0x40001410,0xfffffff8,0,unsigned>;
        ///Device address match index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dai{}; 
    }
    namespace Nonepacketptr{    ///<Packet pointer
        using Addr = Register::Address<0x40001504,0x00000000,0,unsigned>;
        ///Packet pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> packetptr{}; 
    }
    namespace Nonefrequency{    ///<Frequency
        using Addr = Register::Address<0x40001508,0xffffff80,0,unsigned>;
        ///Radio channel frequency
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Nonetxpower{    ///<Output power
        using Addr = Register::Address<0x4000150c,0xffffff00,0,unsigned>;
        ///RADIO output power.
        enum class txpowerVal {
            pos4dbm=0x00000004,     ///<+4 dBm
            pos3dbm=0x00000003,     ///<+3 dBm
            v0dbm=0x00000000,     ///<0 dBm
            neg4dbm=0x000000fc,     ///<-4 dBm
            neg8dbm=0x000000f8,     ///<-8 dBm
            neg12dbm=0x000000f4,     ///<-12 dBm
            neg16dbm=0x000000f0,     ///<-16 dBm
            neg20dbm=0x000000ec,     ///<-20 dBm
            neg30dbm=0x000000d8,     ///<Deprecated enumerator -  -40 dBm
            neg40dbm=0x000000d8,     ///<-40 dBm
        };
        namespace txpowerValC{
            constexpr MPL::Value<txpowerVal,txpowerVal::pos4dbm> pos4dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::pos3dbm> pos3dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::v0dbm> v0dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg4dbm> neg4dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg8dbm> neg8dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg12dbm> neg12dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg16dbm> neg16dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg20dbm> neg20dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg30dbm> neg30dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg40dbm> neg40dbm{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,txpowerVal> txpower{}; 
    }
    namespace Nonemode{    ///<Data rate and modulation
        using Addr = Register::Address<0x40001510,0xfffffff0,0,unsigned>;
        ///Radio data rate and modulation setting. The radio supports Frequency-shift Keying (FSK) modulation.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Nonepcnf0{    ///<Packet configuration register 0
        using Addr = Register::Address<0x40001514,0xfee0fef0,0,unsigned>;
        ///Length on air of LENGTH field in number of bits.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lflen{}; 
        ///Length on air of S0 field in number of bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s0len{}; 
        ///Length on air of S1 field in number of bits.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> s1len{}; 
        ///Include or exclude S1 field in RAM
        enum class s1inclVal {
            automatic=0x00000000,     ///<Include S1 field in RAM only if S1LEN > 0
            include=0x00000001,     ///<Always include S1 field in RAM independent of S1LEN
        };
        namespace s1inclValC{
            constexpr MPL::Value<s1inclVal,s1inclVal::automatic> automatic{};
            constexpr MPL::Value<s1inclVal,s1inclVal::include> include{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,s1inclVal> s1incl{}; 
        ///Length of preamble on air. Decision point: "RADIO.TASKS_START"  task
        enum class plenVal {
            v8bit=0x00000000,     ///<8-bit preamble
            v16bit=0x00000001,     ///<16-bit preamble
        };
        namespace plenValC{
            constexpr MPL::Value<plenVal,plenVal::v8bit> v8bit{};
            constexpr MPL::Value<plenVal,plenVal::v16bit> v16bit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,plenVal> plen{}; 
    }
    namespace Nonepcnf1{    ///<Packet configuration register 1
        using Addr = Register::Address<0x40001518,0xfcf80000,0,unsigned>;
        ///Maximum length of packet payload. If the packet payload is larger than MAXLEN, the radio will truncate the payload to MAXLEN.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxlen{}; 
        ///Static length in number of bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> statlen{}; 
        ///Base address length in number of bytes
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> balen{}; 
        ///On air endianness of packet, this applies to the S0, LENGTH, S1 and the PAYLOAD fields.
        enum class endianVal {
            little=0x00000000,     ///<Least Significant bit on air first
            big=0x00000001,     ///<Most significant bit on air first
        };
        namespace endianValC{
            constexpr MPL::Value<endianVal,endianVal::little> little{};
            constexpr MPL::Value<endianVal,endianVal::big> big{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,endianVal> endian{}; 
        ///Enable or disable packet whitening
        enum class whiteenVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace whiteenValC{
            constexpr MPL::Value<whiteenVal,whiteenVal::disabled> disabled{};
            constexpr MPL::Value<whiteenVal,whiteenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,whiteenVal> whiteen{}; 
    }
    namespace Nonebase0{    ///<Base address 0
        using Addr = Register::Address<0x4000151c,0x00000000,0,unsigned>;
        ///Base address 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> base0{}; 
    }
    namespace Nonebase1{    ///<Base address 1
        using Addr = Register::Address<0x40001520,0x00000000,0,unsigned>;
        ///Base address 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> base1{}; 
    }
    namespace Noneprefix0{    ///<Prefixes bytes for logical addresses 0-3
        using Addr = Register::Address<0x40001524,0x00000000,0,unsigned>;
        ///Address prefix 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap0{}; 
        ///Address prefix 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap1{}; 
        ///Address prefix 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap2{}; 
        ///Address prefix 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap3{}; 
    }
    namespace Noneprefix1{    ///<Prefixes bytes for logical addresses 4-7
        using Addr = Register::Address<0x40001528,0x00000000,0,unsigned>;
        ///Address prefix 4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap4{}; 
        ///Address prefix 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap5{}; 
        ///Address prefix 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap6{}; 
        ///Address prefix 7.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap7{}; 
    }
    namespace Nonetxaddress{    ///<Transmit address select
        using Addr = Register::Address<0x4000152c,0xfffffff8,0,unsigned>;
        ///Transmit address select
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txaddress{}; 
    }
    namespace Nonerxaddresses{    ///<Receive address select
        using Addr = Register::Address<0x40001530,0xffffff00,0,unsigned>;
        ///Enable or disable reception on logical address 0.
        enum class addr0Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr0ValC{
            constexpr MPL::Value<addr0Val,addr0Val::disabled> disabled{};
            constexpr MPL::Value<addr0Val,addr0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,addr0Val> addr0{}; 
        ///Enable or disable reception on logical address 1.
        enum class addr1Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr1ValC{
            constexpr MPL::Value<addr1Val,addr1Val::disabled> disabled{};
            constexpr MPL::Value<addr1Val,addr1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,addr1Val> addr1{}; 
        ///Enable or disable reception on logical address 2.
        enum class addr2Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr2ValC{
            constexpr MPL::Value<addr2Val,addr2Val::disabled> disabled{};
            constexpr MPL::Value<addr2Val,addr2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,addr2Val> addr2{}; 
        ///Enable or disable reception on logical address 3.
        enum class addr3Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr3ValC{
            constexpr MPL::Value<addr3Val,addr3Val::disabled> disabled{};
            constexpr MPL::Value<addr3Val,addr3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,addr3Val> addr3{}; 
        ///Enable or disable reception on logical address 4.
        enum class addr4Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr4ValC{
            constexpr MPL::Value<addr4Val,addr4Val::disabled> disabled{};
            constexpr MPL::Value<addr4Val,addr4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,addr4Val> addr4{}; 
        ///Enable or disable reception on logical address 5.
        enum class addr5Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr5ValC{
            constexpr MPL::Value<addr5Val,addr5Val::disabled> disabled{};
            constexpr MPL::Value<addr5Val,addr5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,addr5Val> addr5{}; 
        ///Enable or disable reception on logical address 6.
        enum class addr6Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr6ValC{
            constexpr MPL::Value<addr6Val,addr6Val::disabled> disabled{};
            constexpr MPL::Value<addr6Val,addr6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,addr6Val> addr6{}; 
        ///Enable or disable reception on logical address 7.
        enum class addr7Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        namespace addr7ValC{
            constexpr MPL::Value<addr7Val,addr7Val::disabled> disabled{};
            constexpr MPL::Value<addr7Val,addr7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,addr7Val> addr7{}; 
    }
    namespace Nonecrccnf{    ///<CRC configuration
        using Addr = Register::Address<0x40001534,0xfffffefc,0,unsigned>;
        ///CRC length in number of bytes.
        enum class lenVal {
            disabled=0x00000000,     ///<CRC length is zero and CRC calculation is disabled
            one=0x00000001,     ///<CRC length is one byte and CRC calculation is enabled
            two=0x00000002,     ///<CRC length is two bytes and CRC calculation is enabled
            three=0x00000003,     ///<CRC length is three bytes and CRC calculation is enabled
        };
        namespace lenValC{
            constexpr MPL::Value<lenVal,lenVal::disabled> disabled{};
            constexpr MPL::Value<lenVal,lenVal::one> one{};
            constexpr MPL::Value<lenVal,lenVal::two> two{};
            constexpr MPL::Value<lenVal,lenVal::three> three{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lenVal> len{}; 
        ///Include or exclude packet address field out of CRC calculation.
        enum class skipaddrVal {
            include=0x00000000,     ///<CRC calculation includes address field
            skip=0x00000001,     ///<CRC calculation does not include address field. The CRC calculation will start at the first byte after the address.
        };
        namespace skipaddrValC{
            constexpr MPL::Value<skipaddrVal,skipaddrVal::include> include{};
            constexpr MPL::Value<skipaddrVal,skipaddrVal::skip> skip{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,skipaddrVal> skipaddr{}; 
    }
    namespace Nonecrcpoly{    ///<CRC polynomial
        using Addr = Register::Address<0x40001538,0xff000000,0,unsigned>;
        ///CRC polynomial
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Nonecrcinit{    ///<CRC initial value
        using Addr = Register::Address<0x4000153c,0xff000000,0,unsigned>;
        ///CRC initial value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcinit{}; 
    }
    namespace Noneunused0{    ///<Unspecified
        using Addr = Register::Address<0x40001540,0xffffffff,0,unsigned>;
    }
    namespace Nonetifs{    ///<Inter Frame Spacing in us
        using Addr = Register::Address<0x40001544,0xffffff00,0,unsigned>;
        ///Inter Frame Spacing in us
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tifs{}; 
    }
    namespace Nonerssisample{    ///<RSSI sample
        using Addr = Register::Address<0x40001548,0xffffff80,0,unsigned>;
        ///RSSI sample
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rssisample{}; 
    }
    namespace Nonestate{    ///<Current radio state
        using Addr = Register::Address<0x40001550,0xfffffff0,0,unsigned>;
        ///Current radio state
        enum class stateVal {
            disabled=0x00000000,     ///<RADIO is in the Disabled state
            rxru=0x00000001,     ///<RADIO is in the RXRU state
            rxidle=0x00000002,     ///<RADIO is in the RXIDLE state
            rx=0x00000003,     ///<RADIO is in the RX state
            rxdisable=0x00000004,     ///<RADIO is in the RXDISABLED state
            txru=0x00000009,     ///<RADIO is in the TXRU state
            txidle=0x0000000a,     ///<RADIO is in the TXIDLE state
            tx=0x0000000b,     ///<RADIO is in the TX state
            txdisable=0x0000000c,     ///<RADIO is in the TXDISABLED state
        };
        namespace stateValC{
            constexpr MPL::Value<stateVal,stateVal::disabled> disabled{};
            constexpr MPL::Value<stateVal,stateVal::rxru> rxru{};
            constexpr MPL::Value<stateVal,stateVal::rxidle> rxidle{};
            constexpr MPL::Value<stateVal,stateVal::rx> rx{};
            constexpr MPL::Value<stateVal,stateVal::rxdisable> rxdisable{};
            constexpr MPL::Value<stateVal,stateVal::txru> txru{};
            constexpr MPL::Value<stateVal,stateVal::txidle> txidle{};
            constexpr MPL::Value<stateVal,stateVal::tx> tx{};
            constexpr MPL::Value<stateVal,stateVal::txdisable> txdisable{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,stateVal> state{}; 
    }
    namespace Nonedatawhiteiv{    ///<Data whitening initial value
        using Addr = Register::Address<0x40001554,0xffffff80,0,unsigned>;
        ///Data whitening initial value. Bit 6 is hard-wired to '1', writing '0' to it has no effect, and it will always be read back and used by the device as '1'.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> datawhiteiv{}; 
    }
    namespace Nonebcc{    ///<Bit counter compare
        using Addr = Register::Address<0x40001560,0x00000000,0,unsigned>;
        ///Bit counter compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bcc{}; 
    }
    namespace Nonedab0{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001600,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab1{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001604,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab2{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001608,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab3{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x4000160c,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab4{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001610,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab5{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001614,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab6{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001618,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab7{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x4000161c,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedap0{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001620,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap1{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001624,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap2{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001628,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap3{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x4000162c,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap4{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001630,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap5{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001634,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap6{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001638,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap7{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x4000163c,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedacnf{    ///<Device address match configuration
        using Addr = Register::Address<0x40001640,0xffff0000,0,unsigned>;
        ///Enable or disable device address matching using device address 0
        enum class ena0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena0ValC{
            constexpr MPL::Value<ena0Val,ena0Val::disabled> disabled{};
            constexpr MPL::Value<ena0Val,ena0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ena0Val> ena0{}; 
        ///Enable or disable device address matching using device address 1
        enum class ena1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena1ValC{
            constexpr MPL::Value<ena1Val,ena1Val::disabled> disabled{};
            constexpr MPL::Value<ena1Val,ena1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ena1Val> ena1{}; 
        ///Enable or disable device address matching using device address 2
        enum class ena2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena2ValC{
            constexpr MPL::Value<ena2Val,ena2Val::disabled> disabled{};
            constexpr MPL::Value<ena2Val,ena2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ena2Val> ena2{}; 
        ///Enable or disable device address matching using device address 3
        enum class ena3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena3ValC{
            constexpr MPL::Value<ena3Val,ena3Val::disabled> disabled{};
            constexpr MPL::Value<ena3Val,ena3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ena3Val> ena3{}; 
        ///Enable or disable device address matching using device address 4
        enum class ena4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena4ValC{
            constexpr MPL::Value<ena4Val,ena4Val::disabled> disabled{};
            constexpr MPL::Value<ena4Val,ena4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ena4Val> ena4{}; 
        ///Enable or disable device address matching using device address 5
        enum class ena5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena5ValC{
            constexpr MPL::Value<ena5Val,ena5Val::disabled> disabled{};
            constexpr MPL::Value<ena5Val,ena5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ena5Val> ena5{}; 
        ///Enable or disable device address matching using device address 6
        enum class ena6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena6ValC{
            constexpr MPL::Value<ena6Val,ena6Val::disabled> disabled{};
            constexpr MPL::Value<ena6Val,ena6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ena6Val> ena6{}; 
        ///Enable or disable device address matching using device address 7
        enum class ena7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        namespace ena7ValC{
            constexpr MPL::Value<ena7Val,ena7Val::disabled> disabled{};
            constexpr MPL::Value<ena7Val,ena7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ena7Val> ena7{}; 
        ///TxAdd for device address 0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txadd0{}; 
        ///TxAdd for device address 1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txadd1{}; 
        ///TxAdd for device address 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txadd2{}; 
        ///TxAdd for device address 3
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txadd3{}; 
        ///TxAdd for device address 4
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txadd4{}; 
        ///TxAdd for device address 5
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txadd5{}; 
        ///TxAdd for device address 6
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txadd6{}; 
        ///TxAdd for device address 7
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txadd7{}; 
    }
    namespace Nonemodecnf0{    ///<Radio mode configuration register 0
        using Addr = Register::Address<0x40001650,0xfffffcfe,0,unsigned>;
        ///Radio ramp-up time
        enum class ruVal {
            default_=0x00000000,     ///<Default ramp-up time, compatible with nRF51
            fast=0x00000001,     ///<Fast ramp-up, see product specification for more information
        };
        namespace ruValC{
            constexpr MPL::Value<ruVal,ruVal::default_> default_{};
            constexpr MPL::Value<ruVal,ruVal::fast> fast{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ruVal> ru{}; 
        ///Default TX value
        enum class dtxVal {
            b1=0x00000000,     ///<Transmit '1'
            b0=0x00000001,     ///<Transmit '0'
            center=0x00000002,     ///<Transmit center frequency
        };
        namespace dtxValC{
            constexpr MPL::Value<dtxVal,dtxVal::b1> b1{};
            constexpr MPL::Value<dtxVal,dtxVal::b0> b0{};
            constexpr MPL::Value<dtxVal,dtxVal::center> center{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,dtxVal> dtx{}; 
    }
    namespace Nonepower{    ///<Peripheral power control
        using Addr = Register::Address<0x40001ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again.
        enum class powerVal {
            disabled=0x00000000,     ///<Peripheral is powered off
            enabled=0x00000001,     ///<Peripheral is powered on
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
