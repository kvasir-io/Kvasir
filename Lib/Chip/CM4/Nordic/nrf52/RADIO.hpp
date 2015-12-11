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
        enum class ReadystartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadystartVal> readyStart{}; 
        namespace ReadystartValC{
            constexpr Register::FieldValue<decltype(readyStart)::Type,ReadystartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readyStart)::Type,ReadystartVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_END event and TASKS_DISABLE task
        enum class EnddisableVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnddisableVal> endDisable{}; 
        namespace EnddisableValC{
            constexpr Register::FieldValue<decltype(endDisable)::Type,EnddisableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endDisable)::Type,EnddisableVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_DISABLED event and TASKS_TXEN task
        enum class DisabledtxenVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DisabledtxenVal> disabledTxen{}; 
        namespace DisabledtxenValC{
            constexpr Register::FieldValue<decltype(disabledTxen)::Type,DisabledtxenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabledTxen)::Type,DisabledtxenVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_DISABLED event and TASKS_RXEN task
        enum class DisabledrxenVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DisabledrxenVal> disabledRxen{}; 
        namespace DisabledrxenValC{
            constexpr Register::FieldValue<decltype(disabledRxen)::Type,DisabledrxenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabledRxen)::Type,DisabledrxenVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_ADDRESS event and TASKS_RSSISTART task
        enum class AddressrssistartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AddressrssistartVal> addressRssistart{}; 
        namespace AddressrssistartValC{
            constexpr Register::FieldValue<decltype(addressRssistart)::Type,AddressrssistartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addressRssistart)::Type,AddressrssistartVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_END event and TASKS_START task
        enum class EndstartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EndstartVal> endStart{}; 
        namespace EndstartValC{
            constexpr Register::FieldValue<decltype(endStart)::Type,EndstartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endStart)::Type,EndstartVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_ADDRESS event and TASKS_BCSTART task
        enum class AddressbcstartVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AddressbcstartVal> addressBcstart{}; 
        namespace AddressbcstartValC{
            constexpr Register::FieldValue<decltype(addressBcstart)::Type,AddressbcstartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addressBcstart)::Type,AddressbcstartVal::enabled> enabled{};
        }
        }
        ///Shortcut between EVENTS_DISABLED event and TASKS_RSSISTOP task
        enum class DisabledrssistopVal {
            disabled=0x00000000,     ///<Disable shortcut
            enabled=0x00000001,     ///<Enable shortcut
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DisabledrssistopVal> disabledRssistop{}; 
        namespace DisabledrssistopValC{
            constexpr Register::FieldValue<decltype(disabledRssistop)::Type,DisabledrssistopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabledRssistop)::Type,DisabledrssistopVal::enabled> enabled{};
        }
        }
    }
    namespace Noneintenset{    ///<Enable interrupt
        using Addr = Register::Address<0x40001304,0xffffcb00,0,unsigned>;
        ///Write '1' to Enable interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_ADDRESS event
        enum class AddressVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AddressVal> address{}; 
        namespace AddressValC{
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_PAYLOAD event
        enum class PayloadVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PayloadVal> payload{}; 
        namespace PayloadValC{
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_DISABLED event
        enum class DisabledVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DisabledVal> disabled{}; 
        namespace DisabledValC{
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_DEVMATCH event
        enum class DevmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DevmatchVal> devmatch{}; 
        namespace DevmatchValC{
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_DEVMISS event
        enum class DevmissVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DevmissVal> devmiss{}; 
        namespace DevmissValC{
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_RSSIEND event
        enum class RssiendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RssiendVal> rssiend{}; 
        namespace RssiendValC{
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_BCMATCH event
        enum class BcmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,BcmatchVal> bcmatch{}; 
        namespace BcmatchValC{
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CRCOK event
        enum class CrcokVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CrcokVal> crcok{}; 
        namespace CrcokValC{
            constexpr Register::FieldValue<decltype(crcok)::Type,CrcokVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crcok)::Type,CrcokVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(crcok)::Type,CrcokVal::set> set{};
        }
        }
        ///Write '1' to Enable interrupt on EVENTS_CRCERROR event
        enum class CrcerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            set=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CrcerrorVal> crcerror{}; 
        namespace CrcerrorValC{
            constexpr Register::FieldValue<decltype(crcerror)::Type,CrcerrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crcerror)::Type,CrcerrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(crcerror)::Type,CrcerrorVal::set> set{};
        }
        }
    }
    namespace Noneintenclr{    ///<Disable interrupt
        using Addr = Register::Address<0x40001308,0xffffcb00,0,unsigned>;
        ///Write '1' to Clear interrupt on EVENTS_READY event
        enum class ReadyVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_ADDRESS event
        enum class AddressVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AddressVal> address{}; 
        namespace AddressValC{
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_PAYLOAD event
        enum class PayloadVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PayloadVal> payload{}; 
        namespace PayloadValC{
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_END event
        enum class EndVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_DISABLED event
        enum class DisabledVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DisabledVal> disabled{}; 
        namespace DisabledValC{
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_DEVMATCH event
        enum class DevmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DevmatchVal> devmatch{}; 
        namespace DevmatchValC{
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_DEVMISS event
        enum class DevmissVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DevmissVal> devmiss{}; 
        namespace DevmissValC{
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_RSSIEND event
        enum class RssiendVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RssiendVal> rssiend{}; 
        namespace RssiendValC{
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_BCMATCH event
        enum class BcmatchVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,BcmatchVal> bcmatch{}; 
        namespace BcmatchValC{
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CRCOK event
        enum class CrcokVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,CrcokVal> crcok{}; 
        namespace CrcokValC{
            constexpr Register::FieldValue<decltype(crcok)::Type,CrcokVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crcok)::Type,CrcokVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(crcok)::Type,CrcokVal::clear> clear{};
        }
        }
        ///Write '1' to Clear interrupt on EVENTS_CRCERROR event
        enum class CrcerrorVal {
            disabled=0x00000000,     ///<Read: Disabled
            enabled=0x00000001,     ///<Read: Enabled
            clear=0x00000001,     ///<Disable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CrcerrorVal> crcerror{}; 
        namespace CrcerrorValC{
            constexpr Register::FieldValue<decltype(crcerror)::Type,CrcerrorVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(crcerror)::Type,CrcerrorVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(crcerror)::Type,CrcerrorVal::clear> clear{};
        }
        }
    }
    namespace Nonecrcstatus{    ///<CRC status
        using Addr = Register::Address<0x40001400,0xfffffffe,0,unsigned>;
        ///CRC status of packet received
        enum class CrcstatusVal {
            crcerror=0x00000000,     ///<Packet received with CRC error
            crcok=0x00000001,     ///<Packet received with CRC ok
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CrcstatusVal> crcstatus{}; 
        namespace CrcstatusValC{
            constexpr Register::FieldValue<decltype(crcstatus)::Type,CrcstatusVal::crcerror> crcerror{};
            constexpr Register::FieldValue<decltype(crcstatus)::Type,CrcstatusVal::crcok> crcok{};
        }
        }
    }
    namespace Nonerxmatch{    ///<Received address
        using Addr = Register::Address<0x40001408,0xfffffff8,0,unsigned>;
        ///Received address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rxmatch{}; 
    }
    namespace Nonerxcrc{    ///<CRC field of previously received packet
        using Addr = Register::Address<0x4000140c,0xff000000,0,unsigned>;
        ///CRC field of previously received packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Nonedai{    ///<Device address match index
        using Addr = Register::Address<0x40001410,0xfffffff8,0,unsigned>;
        ///Device address match index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dai{}; 
    }
    namespace Nonepacketptr{    ///<Packet pointer
        using Addr = Register::Address<0x40001504,0x00000000,0,unsigned>;
        ///Packet pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> packetptr{}; 
    }
    namespace Nonefrequency{    ///<Frequency
        using Addr = Register::Address<0x40001508,0xffffff80,0,unsigned>;
        ///Radio channel frequency
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Nonetxpower{    ///<Output power
        using Addr = Register::Address<0x4000150c,0xffffff00,0,unsigned>;
        ///RADIO output power.
        enum class TxpowerVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,TxpowerVal> txpower{}; 
        namespace TxpowerValC{
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::pos4dbm> pos4dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::pos3dbm> pos3dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::v0dbm> v0dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg4dbm> neg4dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg8dbm> neg8dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg12dbm> neg12dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg16dbm> neg16dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg20dbm> neg20dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg30dbm> neg30dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg40dbm> neg40dbm{};
        }
        }
    }
    namespace Nonemode{    ///<Data rate and modulation
        using Addr = Register::Address<0x40001510,0xfffffff0,0,unsigned>;
        ///Radio data rate and modulation setting. The radio supports Frequency-shift Keying (FSK) modulation.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> mode{}; 
    }
    namespace Nonepcnf0{    ///<Packet configuration register 0
        using Addr = Register::Address<0x40001514,0xfee0fef0,0,unsigned>;
        ///Length on air of LENGTH field in number of bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lflen{}; 
        ///Length on air of S0 field in number of bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s0len{}; 
        ///Length on air of S1 field in number of bits.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> s1len{}; 
        ///Include or exclude S1 field in RAM
        enum class S1inclVal {
            automatic=0x00000000,     ///<Include S1 field in RAM only if S1LEN > 0
            include=0x00000001,     ///<Always include S1 field in RAM independent of S1LEN
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,S1inclVal> s1incl{}; 
        namespace S1inclValC{
            constexpr Register::FieldValue<decltype(s1incl)::Type,S1inclVal::automatic> automatic{};
            constexpr Register::FieldValue<decltype(s1incl)::Type,S1inclVal::include> include{};
        }
        }
        ///Length of preamble on air. Decision point: "RADIO.TASKS_START"  task
        enum class PlenVal {
            v8bit=0x00000000,     ///<8-bit preamble
            v16bit=0x00000001,     ///<16-bit preamble
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PlenVal> plen{}; 
        namespace PlenValC{
            constexpr Register::FieldValue<decltype(plen)::Type,PlenVal::v8bit> v8bit{};
            constexpr Register::FieldValue<decltype(plen)::Type,PlenVal::v16bit> v16bit{};
        }
        }
    }
    namespace Nonepcnf1{    ///<Packet configuration register 1
        using Addr = Register::Address<0x40001518,0xfcf80000,0,unsigned>;
        ///Maximum length of packet payload. If the packet payload is larger than MAXLEN, the radio will truncate the payload to MAXLEN.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxlen{}; 
        ///Static length in number of bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> statlen{}; 
        ///Base address length in number of bytes
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> balen{}; 
        ///On air endianness of packet, this applies to the S0, LENGTH, S1 and the PAYLOAD fields.
        enum class EndianVal {
            little=0x00000000,     ///<Least Significant bit on air first
            big=0x00000001,     ///<Most significant bit on air first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,EndianVal> endian{}; 
        namespace EndianValC{
            constexpr Register::FieldValue<decltype(endian)::Type,EndianVal::little> little{};
            constexpr Register::FieldValue<decltype(endian)::Type,EndianVal::big> big{};
        }
        }
        ///Enable or disable packet whitening
        enum class WhiteenVal {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WhiteenVal> whiteen{}; 
        namespace WhiteenValC{
            constexpr Register::FieldValue<decltype(whiteen)::Type,WhiteenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(whiteen)::Type,WhiteenVal::enabled> enabled{};
        }
        }
    }
    namespace Nonebase0{    ///<Base address 0
        using Addr = Register::Address<0x4000151c,0x00000000,0,unsigned>;
        ///Base address 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> base0{}; 
    }
    namespace Nonebase1{    ///<Base address 1
        using Addr = Register::Address<0x40001520,0x00000000,0,unsigned>;
        ///Base address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> base1{}; 
    }
    namespace Noneprefix0{    ///<Prefixes bytes for logical addresses 0-3
        using Addr = Register::Address<0x40001524,0x00000000,0,unsigned>;
        ///Address prefix 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap0{}; 
        ///Address prefix 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap1{}; 
        ///Address prefix 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap2{}; 
        ///Address prefix 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap3{}; 
    }
    namespace Noneprefix1{    ///<Prefixes bytes for logical addresses 4-7
        using Addr = Register::Address<0x40001528,0x00000000,0,unsigned>;
        ///Address prefix 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap4{}; 
        ///Address prefix 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap5{}; 
        ///Address prefix 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap6{}; 
        ///Address prefix 7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap7{}; 
    }
    namespace Nonetxaddress{    ///<Transmit address select
        using Addr = Register::Address<0x4000152c,0xfffffff8,0,unsigned>;
        ///Transmit address select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txaddress{}; 
    }
    namespace Nonerxaddresses{    ///<Receive address select
        using Addr = Register::Address<0x40001530,0xffffff00,0,unsigned>;
        ///Enable or disable reception on logical address 0.
        enum class Addr0Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Addr0Val> addr0{}; 
        namespace Addr0ValC{
            constexpr Register::FieldValue<decltype(addr0)::Type,Addr0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr0)::Type,Addr0Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 1.
        enum class Addr1Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Addr1Val> addr1{}; 
        namespace Addr1ValC{
            constexpr Register::FieldValue<decltype(addr1)::Type,Addr1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr1)::Type,Addr1Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 2.
        enum class Addr2Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Addr2Val> addr2{}; 
        namespace Addr2ValC{
            constexpr Register::FieldValue<decltype(addr2)::Type,Addr2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr2)::Type,Addr2Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 3.
        enum class Addr3Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Addr3Val> addr3{}; 
        namespace Addr3ValC{
            constexpr Register::FieldValue<decltype(addr3)::Type,Addr3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr3)::Type,Addr3Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 4.
        enum class Addr4Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Addr4Val> addr4{}; 
        namespace Addr4ValC{
            constexpr Register::FieldValue<decltype(addr4)::Type,Addr4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr4)::Type,Addr4Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 5.
        enum class Addr5Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Addr5Val> addr5{}; 
        namespace Addr5ValC{
            constexpr Register::FieldValue<decltype(addr5)::Type,Addr5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr5)::Type,Addr5Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 6.
        enum class Addr6Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Addr6Val> addr6{}; 
        namespace Addr6ValC{
            constexpr Register::FieldValue<decltype(addr6)::Type,Addr6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr6)::Type,Addr6Val::enabled> enabled{};
        }
        }
        ///Enable or disable reception on logical address 7.
        enum class Addr7Val {
            disabled=0x00000000,     ///<Disable
            enabled=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Addr7Val> addr7{}; 
        namespace Addr7ValC{
            constexpr Register::FieldValue<decltype(addr7)::Type,Addr7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr7)::Type,Addr7Val::enabled> enabled{};
        }
        }
    }
    namespace Nonecrccnf{    ///<CRC configuration
        using Addr = Register::Address<0x40001534,0xfffffefc,0,unsigned>;
        ///CRC length in number of bytes.
        enum class LenVal {
            disabled=0x00000000,     ///<CRC length is zero and CRC calculation is disabled
            one=0x00000001,     ///<CRC length is one byte and CRC calculation is enabled
            two=0x00000002,     ///<CRC length is two bytes and CRC calculation is enabled
            three=0x00000003,     ///<CRC length is three bytes and CRC calculation is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LenVal> len{}; 
        namespace LenValC{
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::one> one{};
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::two> two{};
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::three> three{};
        }
        }
        ///Include or exclude packet address field out of CRC calculation.
        enum class SkipaddrVal {
            include=0x00000000,     ///<CRC calculation includes address field
            skip=0x00000001,     ///<CRC calculation does not include address field. The CRC calculation will start at the first byte after the address.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SkipaddrVal> skipaddr{}; 
        namespace SkipaddrValC{
            constexpr Register::FieldValue<decltype(skipaddr)::Type,SkipaddrVal::include> include{};
            constexpr Register::FieldValue<decltype(skipaddr)::Type,SkipaddrVal::skip> skip{};
        }
        }
    }
    namespace Nonecrcpoly{    ///<CRC polynomial
        using Addr = Register::Address<0x40001538,0xff000000,0,unsigned>;
        ///CRC polynomial
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Nonecrcinit{    ///<CRC initial value
        using Addr = Register::Address<0x4000153c,0xff000000,0,unsigned>;
        ///CRC initial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcinit{}; 
    }
    namespace Noneunused0{    ///<Unspecified
        using Addr = Register::Address<0x40001540,0xffffffff,0,unsigned>;
    }
    namespace Nonetifs{    ///<Inter Frame Spacing in us
        using Addr = Register::Address<0x40001544,0xffffff00,0,unsigned>;
        ///Inter Frame Spacing in us
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tifs{}; 
    }
    namespace Nonerssisample{    ///<RSSI sample
        using Addr = Register::Address<0x40001548,0xffffff80,0,unsigned>;
        ///RSSI sample
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rssisample{}; 
    }
    namespace Nonestate{    ///<Current radio state
        using Addr = Register::Address<0x40001550,0xfffffff0,0,unsigned>;
        ///Current radio state
        enum class StateVal {
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,StateVal> state{}; 
        namespace StateValC{
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::rxru> rxru{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::rxidle> rxidle{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::rx> rx{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::rxdisable> rxdisable{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::txru> txru{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::txidle> txidle{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::tx> tx{};
            constexpr Register::FieldValue<decltype(state)::Type,StateVal::txdisable> txdisable{};
        }
        }
    }
    namespace Nonedatawhiteiv{    ///<Data whitening initial value
        using Addr = Register::Address<0x40001554,0xffffff80,0,unsigned>;
        ///Data whitening initial value. Bit 6 is hard-wired to '1', writing '0' to it has no effect, and it will always be read back and used by the device as '1'.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> datawhiteiv{}; 
    }
    namespace Nonebcc{    ///<Bit counter compare
        using Addr = Register::Address<0x40001560,0x00000000,0,unsigned>;
        ///Bit counter compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> bcc{}; 
    }
    namespace Nonedab0{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001600,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab1{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001604,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab2{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001608,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab3{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x4000160c,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab4{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001610,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab5{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001614,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab6{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x40001618,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedab7{    ///<Description collection[0]:  Device address base segment 0
        using Addr = Register::Address<0x4000161c,0x00000000,0,unsigned>;
        ///Device address base segment 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dab{}; 
    }
    namespace Nonedap0{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001620,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap1{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001624,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap2{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001628,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap3{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x4000162c,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap4{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001630,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap5{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001634,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap6{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x40001638,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap7{    ///<Description collection[0]:  Device address prefix 0
        using Addr = Register::Address<0x4000163c,0xffff0000,0,unsigned>;
        ///Device address prefix 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedacnf{    ///<Device address match configuration
        using Addr = Register::Address<0x40001640,0xffff0000,0,unsigned>;
        ///Enable or disable device address matching using device address 0
        enum class Ena0Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ena0Val> ena0{}; 
        namespace Ena0ValC{
            constexpr Register::FieldValue<decltype(ena0)::Type,Ena0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena0)::Type,Ena0Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 1
        enum class Ena1Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ena1Val> ena1{}; 
        namespace Ena1ValC{
            constexpr Register::FieldValue<decltype(ena1)::Type,Ena1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena1)::Type,Ena1Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 2
        enum class Ena2Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ena2Val> ena2{}; 
        namespace Ena2ValC{
            constexpr Register::FieldValue<decltype(ena2)::Type,Ena2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena2)::Type,Ena2Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 3
        enum class Ena3Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ena3Val> ena3{}; 
        namespace Ena3ValC{
            constexpr Register::FieldValue<decltype(ena3)::Type,Ena3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena3)::Type,Ena3Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 4
        enum class Ena4Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ena4Val> ena4{}; 
        namespace Ena4ValC{
            constexpr Register::FieldValue<decltype(ena4)::Type,Ena4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena4)::Type,Ena4Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 5
        enum class Ena5Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ena5Val> ena5{}; 
        namespace Ena5ValC{
            constexpr Register::FieldValue<decltype(ena5)::Type,Ena5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena5)::Type,Ena5Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 6
        enum class Ena6Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ena6Val> ena6{}; 
        namespace Ena6ValC{
            constexpr Register::FieldValue<decltype(ena6)::Type,Ena6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena6)::Type,Ena6Val::enabled> enabled{};
        }
        }
        ///Enable or disable device address matching using device address 7
        enum class Ena7Val {
            disabled=0x00000000,     ///<Disabled
            enabled=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ena7Val> ena7{}; 
        namespace Ena7ValC{
            constexpr Register::FieldValue<decltype(ena7)::Type,Ena7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena7)::Type,Ena7Val::enabled> enabled{};
        }
        }
        ///TxAdd for device address 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txadd0{}; 
        ///TxAdd for device address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txadd1{}; 
        ///TxAdd for device address 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txadd2{}; 
        ///TxAdd for device address 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txadd3{}; 
        ///TxAdd for device address 4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txadd4{}; 
        ///TxAdd for device address 5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txadd5{}; 
        ///TxAdd for device address 6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txadd6{}; 
        ///TxAdd for device address 7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txadd7{}; 
    }
    namespace Nonemodecnf0{    ///<Radio mode configuration register 0
        using Addr = Register::Address<0x40001650,0xfffffcfe,0,unsigned>;
        ///Radio ramp-up time
        enum class RuVal {
            default_=0x00000000,     ///<Default ramp-up time, compatible with nRF51
            fast=0x00000001,     ///<Fast ramp-up, see product specification for more information
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RuVal> ru{}; 
        namespace RuValC{
            constexpr Register::FieldValue<decltype(ru)::Type,RuVal::default_> default_{};
            constexpr Register::FieldValue<decltype(ru)::Type,RuVal::fast> fast{};
        }
        }
        ///Default TX value
        enum class DtxVal {
            b1=0x00000000,     ///<Transmit '1'
            b0=0x00000001,     ///<Transmit '0'
            center=0x00000002,     ///<Transmit center frequency
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,DtxVal> dtx{}; 
        namespace DtxValC{
            constexpr Register::FieldValue<decltype(dtx)::Type,DtxVal::b1> b1{};
            constexpr Register::FieldValue<decltype(dtx)::Type,DtxVal::b0> b0{};
            constexpr Register::FieldValue<decltype(dtx)::Type,DtxVal::center> center{};
        }
        }
    }
    namespace Nonepower{    ///<Peripheral power control
        using Addr = Register::Address<0x40001ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control. The peripheral and its registers will be reset to its initial state by switching the peripheral off and then back on again.
        enum class PowerVal {
            disabled=0x00000000,     ///<Peripheral is powered off
            enabled=0x00000001,     ///<Peripheral is powered on
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
        }
    }
}
