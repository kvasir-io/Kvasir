#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//The radio.
    namespace RadioTasksTxen{    ///<Enable radio in TX mode.
        using Addr = Register::Address<0x40001000,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksRxen{    ///<Enable radio in RX mode.
        using Addr = Register::Address<0x40001004,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksStart{    ///<Start radio.
        using Addr = Register::Address<0x40001008,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksStop{    ///<Stop radio.
        using Addr = Register::Address<0x4000100c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksDisable{    ///<Disable radio.
        using Addr = Register::Address<0x40001010,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksRssistart{    ///<Start the RSSI and take one sample of the receive signal strength.
        using Addr = Register::Address<0x40001014,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksRssistop{    ///<Stop the RSSI measurement.
        using Addr = Register::Address<0x40001018,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksBcstart{    ///<Start the bit counter.
        using Addr = Register::Address<0x4000101c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioTasksBcstop{    ///<Stop the bit counter.
        using Addr = Register::Address<0x40001020,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsReady{    ///<Ready event.
        using Addr = Register::Address<0x40001100,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsAddress{    ///<Address event.
        using Addr = Register::Address<0x40001104,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsPayload{    ///<Payload event.
        using Addr = Register::Address<0x40001108,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsEnd{    ///<End event.
        using Addr = Register::Address<0x4000110c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsDisabled{    ///<Disable event.
        using Addr = Register::Address<0x40001110,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsDevmatch{    ///<A device address match occurred on the last received packet.
        using Addr = Register::Address<0x40001114,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsDevmiss{    ///<No device address match occurred on the last received packet.
        using Addr = Register::Address<0x40001118,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsRssiend{    ///<Sampling of the receive signal strength complete. A new RSSI sample is ready for readout at the RSSISAMPLE register.
        using Addr = Register::Address<0x4000111c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioEventsBcmatch{    ///<Bit counter reached bit count value specified in BCC register.
        using Addr = Register::Address<0x40001128,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioShorts{    ///<Shortcuts for the radio.
        using Addr = Register::Address<0x40001200,0xfffffe80,0x00000000,unsigned>;
        ///Shortcut between READY event and START task.
        enum class ReadystartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadystartVal> readyStart{}; 
        namespace ReadystartValC{
            constexpr Register::FieldValue<decltype(readyStart)::Type,ReadystartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(readyStart)::Type,ReadystartVal::enabled> enabled{};
        }
        ///Shortcut between END event and DISABLE task.
        enum class EnddisableVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EnddisableVal> endDisable{}; 
        namespace EnddisableValC{
            constexpr Register::FieldValue<decltype(endDisable)::Type,EnddisableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endDisable)::Type,EnddisableVal::enabled> enabled{};
        }
        ///Shortcut between DISABLED event and TXEN task. 
        enum class DisabledtxenVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,DisabledtxenVal> disabledTxen{}; 
        namespace DisabledtxenValC{
            constexpr Register::FieldValue<decltype(disabledTxen)::Type,DisabledtxenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabledTxen)::Type,DisabledtxenVal::enabled> enabled{};
        }
        ///Shortcut between DISABLED event and RXEN task.
        enum class DisabledrxenVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,DisabledrxenVal> disabledRxen{}; 
        namespace DisabledrxenValC{
            constexpr Register::FieldValue<decltype(disabledRxen)::Type,DisabledrxenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabledRxen)::Type,DisabledrxenVal::enabled> enabled{};
        }
        ///Shortcut between ADDRESS event and RSSISTART task.
        enum class AddressrssistartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AddressrssistartVal> addressRssistart{}; 
        namespace AddressrssistartValC{
            constexpr Register::FieldValue<decltype(addressRssistart)::Type,AddressrssistartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addressRssistart)::Type,AddressrssistartVal::enabled> enabled{};
        }
        ///Shortcut between END event and START task.
        enum class EndstartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EndstartVal> endStart{}; 
        namespace EndstartValC{
            constexpr Register::FieldValue<decltype(endStart)::Type,EndstartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(endStart)::Type,EndstartVal::enabled> enabled{};
        }
        ///Shortcut between ADDRESS event and BCSTART task.
        enum class AddressbcstartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AddressbcstartVal> addressBcstart{}; 
        namespace AddressbcstartValC{
            constexpr Register::FieldValue<decltype(addressBcstart)::Type,AddressbcstartVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addressBcstart)::Type,AddressbcstartVal::enabled> enabled{};
        }
        ///Shortcut between DISABLED event and RSSISTOP task.
        enum class DisabledrssistopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,DisabledrssistopVal> disabledRssistop{}; 
        namespace DisabledrssistopValC{
            constexpr Register::FieldValue<decltype(disabledRssistop)::Type,DisabledrssistopVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabledRssistop)::Type,DisabledrssistopVal::enabled> enabled{};
        }
    }
    namespace RadioIntenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40001304,0xfffffb00,0x00000000,unsigned>;
        ///Enable interrupt on READY event.
        enum class ReadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::set> set{};
        }
        ///Enable interrupt on ADDRESS event.
        enum class AddressVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AddressVal> address{}; 
        namespace AddressValC{
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::set> set{};
        }
        ///Enable interrupt on PAYLOAD event.
        enum class PayloadVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PayloadVal> payload{}; 
        namespace PayloadValC{
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::set> set{};
        }
        ///Enable interrupt on END event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::set> set{};
        }
        ///Enable interrupt on DISABLED event.
        enum class DisabledVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DisabledVal> disabled{}; 
        namespace DisabledValC{
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::set> set{};
        }
        ///Enable interrupt on DEVMATCH event.
        enum class DevmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DevmatchVal> devmatch{}; 
        namespace DevmatchValC{
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::set> set{};
        }
        ///Enable interrupt on DEVMISS event.
        enum class DevmissVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DevmissVal> devmiss{}; 
        namespace DevmissValC{
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::set> set{};
        }
        ///Enable interrupt on RSSIEND event.
        enum class RssiendVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RssiendVal> rssiend{}; 
        namespace RssiendValC{
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::set> set{};
        }
        ///Enable interrupt on BCMATCH event.
        enum class BcmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,BcmatchVal> bcmatch{}; 
        namespace BcmatchValC{
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::set> set{};
        }
    }
    namespace RadioIntenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40001308,0xfffffb00,0x00000000,unsigned>;
        ///Disable interrupt on READY event.
        enum class ReadyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ReadyVal> ready{}; 
        namespace ReadyValC{
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(ready)::Type,ReadyVal::clear> clear{};
        }
        ///Disable interrupt on ADDRESS event.
        enum class AddressVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,AddressVal> address{}; 
        namespace AddressValC{
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(address)::Type,AddressVal::clear> clear{};
        }
        ///Disable interrupt on PAYLOAD event.
        enum class PayloadVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PayloadVal> payload{}; 
        namespace PayloadValC{
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(payload)::Type,PayloadVal::clear> clear{};
        }
        ///Disable interrupt on END event.
        enum class EndVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EndVal> end{}; 
        namespace EndValC{
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(end)::Type,EndVal::clear> clear{};
        }
        ///Disable interrupt on DISABLED event.
        enum class DisabledVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DisabledVal> disabled{}; 
        namespace DisabledValC{
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(disabled)::Type,DisabledVal::clear> clear{};
        }
        ///Disable interrupt on DEVMATCH event.
        enum class DevmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DevmatchVal> devmatch{}; 
        namespace DevmatchValC{
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmatch)::Type,DevmatchVal::clear> clear{};
        }
        ///Disable interrupt on DEVMISS event.
        enum class DevmissVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DevmissVal> devmiss{}; 
        namespace DevmissValC{
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(devmiss)::Type,DevmissVal::clear> clear{};
        }
        ///Disable interrupt on RSSIEND event.
        enum class RssiendVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RssiendVal> rssiend{}; 
        namespace RssiendValC{
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(rssiend)::Type,RssiendVal::clear> clear{};
        }
        ///Disable interrupt on BCMATCH event.
        enum class BcmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,BcmatchVal> bcmatch{}; 
        namespace BcmatchValC{
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::enabled> enabled{};
            constexpr Register::FieldValue<decltype(bcmatch)::Type,BcmatchVal::clear> clear{};
        }
    }
    namespace RadioCrcstatus{    ///<CRC status of received packet.
        using Addr = Register::Address<0x40001400,0xfffffffe,0x00000000,unsigned>;
        ///CRC status of received packet.
        enum class CrcstatusVal {
            crcerror=0x00000000,     ///<Packet received with CRC error.
            crcok=0x00000001,     ///<Packet received with CRC ok.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CrcstatusVal> crcstatus{}; 
        namespace CrcstatusValC{
            constexpr Register::FieldValue<decltype(crcstatus)::Type,CrcstatusVal::crcerror> crcerror{};
            constexpr Register::FieldValue<decltype(crcstatus)::Type,CrcstatusVal::crcok> crcok{};
        }
    }
    namespace RadioRxmatch{    ///<Received address.
        using Addr = Register::Address<0x40001408,0xfffffff8,0x00000000,unsigned>;
        ///Logical address in which previous packet was received.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rxmatch{}; 
    }
    namespace RadioRxcrc{    ///<Received CRC.
        using Addr = Register::Address<0x4000140c,0xff000000,0x00000000,unsigned>;
        ///CRC field of previously received packet.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace RadioDai{    ///<Device address match index.
        using Addr = Register::Address<0x40001410,0xfffffff8,0x00000000,unsigned>;
        ///Index (n) of device address (see DAB[n] and DAP[n]) that obtained an address match.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dai{}; 
    }
    namespace RadioPacketptr{    ///<Packet pointer. Decision point: START task.
        using Addr = Register::Address<0x40001504,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioFrequency{    ///<Frequency.
        using Addr = Register::Address<0x40001508,0xffffff80,0x00000000,unsigned>;
        ///Radio channel frequency offset in MHz: RF Frequency = 2400 + FREQUENCY (MHz). Decision point: TXEN or RXEN task. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace RadioTxpower{    ///<Output power.
        using Addr = Register::Address<0x4000150c,0xffffff00,0x00000000,unsigned>;
        ///Radio output power. Decision point: TXEN task.
        enum class TxpowerVal {
            pos4dbm=0x00000004,     ///<+4dBm.
            v0dbm=0x00000000,     ///<0dBm.
            neg4dbm=0x000000fc,     ///<-4dBm.
            neg8dbm=0x000000f8,     ///<-8dBm.
            neg12dbm=0x000000f4,     ///<-12dBm.
            neg16dbm=0x000000f0,     ///<-16dBm.
            neg20dbm=0x000000ec,     ///<-20dBm.
            neg30dbm=0x000000d8,     ///<-30dBm.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,TxpowerVal> txpower{}; 
        namespace TxpowerValC{
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::pos4dbm> pos4dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::v0dbm> v0dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg4dbm> neg4dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg8dbm> neg8dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg12dbm> neg12dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg16dbm> neg16dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg20dbm> neg20dbm{};
            constexpr Register::FieldValue<decltype(txpower)::Type,TxpowerVal::neg30dbm> neg30dbm{};
        }
    }
    namespace RadioMode{    ///<Data rate and modulation.
        using Addr = Register::Address<0x40001510,0xfffffffc,0x00000000,unsigned>;
        ///Radio data rate and modulation setting. Decision point: TXEN or RXEN task.
        enum class ModeVal {
            nrf1mbit=0x00000000,     ///<1Mbit/s Nordic propietary radio mode.
            nrf2mbit=0x00000001,     ///<2Mbit/s Nordic propietary radio mode.
            nrf250kbit=0x00000002,     ///<250kbit/s Nordic propietary radio mode.
            ble1mbit=0x00000003,     ///<1Mbit/s Bluetooth Low Energy
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::nrf1mbit> nrf1mbit{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::nrf2mbit> nrf2mbit{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::nrf250kbit> nrf250kbit{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::ble1mbit> ble1mbit{};
        }
    }
    namespace RadioPcnf0{    ///<Packet configuration 0.
        using Addr = Register::Address<0x40001514,0xfff0fef0,0x00000000,unsigned>;
        ///Length of length field in number of bits. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lflen{}; 
        ///Length of S0 field in number of bytes. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s0len{}; 
        ///Length of S1 field in number of bits. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> s1len{}; 
    }
    namespace RadioPcnf1{    ///<Packet configuration 1.
        using Addr = Register::Address<0x40001518,0xfcf80000,0x00000000,unsigned>;
        ///Maximum length of packet payload in number of bytes.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxlen{}; 
        ///Static length in number of bytes. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> statlen{}; 
        ///Base address length in number of bytes. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> balen{}; 
        ///On air endianness of packet length field. Decision point: START task.
        enum class EndianVal {
            little=0x00000000,     ///<Least significant bit on air first
            big=0x00000001,     ///<Most significant bit on air first
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,EndianVal> endian{}; 
        namespace EndianValC{
            constexpr Register::FieldValue<decltype(endian)::Type,EndianVal::little> little{};
            constexpr Register::FieldValue<decltype(endian)::Type,EndianVal::big> big{};
        }
        ///Packet whitening enable.
        enum class WhiteenVal {
            disabled=0x00000000,     ///<Whitening disabled.
            enabled=0x00000001,     ///<Whitening enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,WhiteenVal> whiteen{}; 
        namespace WhiteenValC{
            constexpr Register::FieldValue<decltype(whiteen)::Type,WhiteenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(whiteen)::Type,WhiteenVal::enabled> enabled{};
        }
    }
    namespace RadioBase0{    ///<Radio base address 0. Decision point: START task.
        using Addr = Register::Address<0x4000151c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioBase1{    ///<Radio base address 1. Decision point: START task.
        using Addr = Register::Address<0x40001520,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioPrefix0{    ///<Prefixes bytes for logical addresses 0 to 3.
        using Addr = Register::Address<0x40001524,0x00000000,0x00000000,unsigned>;
        ///Address prefix 0. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap0{}; 
        ///Address prefix 1. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap1{}; 
        ///Address prefix 2. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap2{}; 
        ///Address prefix 3. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap3{}; 
    }
    namespace RadioPrefix1{    ///<Prefixes bytes for logical addresses 4 to 7.
        using Addr = Register::Address<0x40001528,0x00000000,0x00000000,unsigned>;
        ///Address prefix 4. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap4{}; 
        ///Address prefix 5. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap5{}; 
        ///Address prefix 6. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap6{}; 
        ///Address prefix 7. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap7{}; 
    }
    namespace RadioTxaddress{    ///<Transmit address select.
        using Addr = Register::Address<0x4000152c,0xfffffff8,0x00000000,unsigned>;
        ///Logical address to be used when transmitting a packet. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txaddress{}; 
    }
    namespace RadioRxaddresses{    ///<Receive address select.
        using Addr = Register::Address<0x40001530,0xffffff00,0x00000000,unsigned>;
        ///Enable reception on logical address 0. Decision point: START task.
        enum class Addr0Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Addr0Val> addr0{}; 
        namespace Addr0ValC{
            constexpr Register::FieldValue<decltype(addr0)::Type,Addr0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr0)::Type,Addr0Val::enabled> enabled{};
        }
        ///Enable reception on logical address 1. Decision point: START task.
        enum class Addr1Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Addr1Val> addr1{}; 
        namespace Addr1ValC{
            constexpr Register::FieldValue<decltype(addr1)::Type,Addr1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr1)::Type,Addr1Val::enabled> enabled{};
        }
        ///Enable reception on logical address 2. Decision point: START task.
        enum class Addr2Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Addr2Val> addr2{}; 
        namespace Addr2ValC{
            constexpr Register::FieldValue<decltype(addr2)::Type,Addr2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr2)::Type,Addr2Val::enabled> enabled{};
        }
        ///Enable reception on logical address 3. Decision point: START task.
        enum class Addr3Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Addr3Val> addr3{}; 
        namespace Addr3ValC{
            constexpr Register::FieldValue<decltype(addr3)::Type,Addr3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr3)::Type,Addr3Val::enabled> enabled{};
        }
        ///Enable reception on logical address 4. Decision point: START task.
        enum class Addr4Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Addr4Val> addr4{}; 
        namespace Addr4ValC{
            constexpr Register::FieldValue<decltype(addr4)::Type,Addr4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr4)::Type,Addr4Val::enabled> enabled{};
        }
        ///Enable reception on logical address 5. Decision point: START task.
        enum class Addr5Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Addr5Val> addr5{}; 
        namespace Addr5ValC{
            constexpr Register::FieldValue<decltype(addr5)::Type,Addr5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr5)::Type,Addr5Val::enabled> enabled{};
        }
        ///Enable reception on logical address 6. Decision point: START task.
        enum class Addr6Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Addr6Val> addr6{}; 
        namespace Addr6ValC{
            constexpr Register::FieldValue<decltype(addr6)::Type,Addr6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr6)::Type,Addr6Val::enabled> enabled{};
        }
        ///Enable reception on logical address 7. Decision point: START task.
        enum class Addr7Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Addr7Val> addr7{}; 
        namespace Addr7ValC{
            constexpr Register::FieldValue<decltype(addr7)::Type,Addr7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(addr7)::Type,Addr7Val::enabled> enabled{};
        }
    }
    namespace RadioCrccnf{    ///<CRC configuration.
        using Addr = Register::Address<0x40001534,0xfffffefc,0x00000000,unsigned>;
        ///CRC length. Decision point: START task.
        enum class LenVal {
            disabled=0x00000000,     ///<CRC calculation disabled.
            one=0x00000001,     ///<One byte long CRC.
            two=0x00000002,     ///<Two bytes long CRC.
            three=0x00000003,     ///<Three bytes long CRC.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,LenVal> len{}; 
        namespace LenValC{
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::one> one{};
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::two> two{};
            constexpr Register::FieldValue<decltype(len)::Type,LenVal::three> three{};
        }
        ///Leave packet address field out of the CRC calculation. Decision point: START task.
        enum class SkipaddrVal {
            include=0x00000000,     ///<Include packet address in CRC calculation.
            skip=0x00000001,     ///<Packet address is skipped in CRC calculation. The CRC calculation will start at the first byte after the address.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SkipaddrVal> skipaddr{}; 
        namespace SkipaddrValC{
            constexpr Register::FieldValue<decltype(skipaddr)::Type,SkipaddrVal::include> include{};
            constexpr Register::FieldValue<decltype(skipaddr)::Type,SkipaddrVal::skip> skip{};
        }
    }
    namespace RadioCrcpoly{    ///<CRC polynomial.
        using Addr = Register::Address<0x40001538,0xff000000,0x00000000,unsigned>;
        ///CRC polynomial. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace RadioCrcinit{    ///<CRC initial value.
        using Addr = Register::Address<0x4000153c,0xff000000,0x00000000,unsigned>;
        ///Initial value for CRC calculation. Decision point: START task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcinit{}; 
    }
    namespace RadioTest{    ///<Test features enable register.
        using Addr = Register::Address<0x40001540,0xfffffffc,0x00000000,unsigned>;
        ///Constant carrier. Decision point: TXEN task.
        enum class ConstcarrierVal {
            disabled=0x00000000,     ///<Constant carrier disabled.
            enabled=0x00000001,     ///<Constant carrier enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ConstcarrierVal> constcarrier{}; 
        namespace ConstcarrierValC{
            constexpr Register::FieldValue<decltype(constcarrier)::Type,ConstcarrierVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(constcarrier)::Type,ConstcarrierVal::enabled> enabled{};
        }
        ///PLL lock. Decision point: TXEN or RXEN task.
        enum class PlllockVal {
            disabled=0x00000000,     ///<PLL lock disabled.
            enabled=0x00000001,     ///<PLL lock enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,PlllockVal> plllock{}; 
        namespace PlllockValC{
            constexpr Register::FieldValue<decltype(plllock)::Type,PlllockVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(plllock)::Type,PlllockVal::enabled> enabled{};
        }
    }
    namespace RadioTifs{    ///<Inter Frame Spacing in microseconds.
        using Addr = Register::Address<0x40001544,0xffffff00,0x00000000,unsigned>;
        ///Inter frame spacing in microseconds. Decision point: START rask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tifs{}; 
    }
    namespace RadioRssisample{    ///<RSSI sample.
        using Addr = Register::Address<0x40001548,0xffffff80,0x00000000,unsigned>;
        ///RSSI sample result. The result is read as a positive value so that ReceivedSignalStrength = -RSSISAMPLE dBm
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rssisample{}; 
    }
    namespace RadioState{    ///<Current radio state.
        using Addr = Register::Address<0x40001550,0xfffffff0,0x00000000,unsigned>;
        ///Current radio state.
        enum class StateVal {
            disabled=0x00000000,     ///<Radio is in the Disabled state.
            rxru=0x00000001,     ///<Radio is in the Rx Ramp Up state.
            rxidle=0x00000002,     ///<Radio is in the Rx Idle state.
            rx=0x00000003,     ///<Radio is in the Rx state.
            rxdisable=0x00000004,     ///<Radio is in the Rx Disable state.
            txru=0x00000009,     ///<Radio is in the Tx Ramp Up state.
            txidle=0x0000000a,     ///<Radio is in the Tx Idle state.
            tx=0x0000000b,     ///<Radio is in the Tx state.
            txdisable=0x0000000c,     ///<Radio is in the Tx Disable state.
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
    namespace RadioDatawhiteiv{    ///<Data whitening initial value.
        using Addr = Register::Address<0x40001554,0xffffff80,0x00000000,unsigned>;
        ///Data whitening initial value. Bit 0 corresponds to Position 0 of the LSFR, Bit 1 to position 5... Decision point: TXEN or RXEN task.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> datawhiteiv{}; 
    }
    namespace RadioBcc{    ///<Bit counter compare.
        using Addr = Register::Address<0x40001560,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDacnf{    ///<Device address match configuration.
        using Addr = Register::Address<0x40001640,0xffff0000,0x00000000,unsigned>;
        ///Enable or disable device address matching using device address 0.
        enum class Ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Ena0Val> ena0{}; 
        namespace Ena0ValC{
            constexpr Register::FieldValue<decltype(ena0)::Type,Ena0Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena0)::Type,Ena0Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 1.
        enum class Ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Ena1Val> ena1{}; 
        namespace Ena1ValC{
            constexpr Register::FieldValue<decltype(ena1)::Type,Ena1Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena1)::Type,Ena1Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 2.
        enum class Ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Ena2Val> ena2{}; 
        namespace Ena2ValC{
            constexpr Register::FieldValue<decltype(ena2)::Type,Ena2Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena2)::Type,Ena2Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 3.
        enum class Ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Ena3Val> ena3{}; 
        namespace Ena3ValC{
            constexpr Register::FieldValue<decltype(ena3)::Type,Ena3Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena3)::Type,Ena3Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 4.
        enum class Ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Ena4Val> ena4{}; 
        namespace Ena4ValC{
            constexpr Register::FieldValue<decltype(ena4)::Type,Ena4Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena4)::Type,Ena4Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 5.
        enum class Ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Ena5Val> ena5{}; 
        namespace Ena5ValC{
            constexpr Register::FieldValue<decltype(ena5)::Type,Ena5Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena5)::Type,Ena5Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 6.
        enum class Ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Ena6Val> ena6{}; 
        namespace Ena6ValC{
            constexpr Register::FieldValue<decltype(ena6)::Type,Ena6Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena6)::Type,Ena6Val::enabled> enabled{};
        }
        ///Enable or disable device address matching using device address 7.
        enum class Ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Ena7Val> ena7{}; 
        namespace Ena7ValC{
            constexpr Register::FieldValue<decltype(ena7)::Type,Ena7Val::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ena7)::Type,Ena7Val::enabled> enabled{};
        }
        ///TxAdd for device address 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txadd0{}; 
        ///TxAdd for device address 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txadd1{}; 
        ///TxAdd for device address 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txadd2{}; 
        ///TxAdd for device address 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txadd3{}; 
        ///TxAdd for device address 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txadd4{}; 
        ///TxAdd for device address 5.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txadd5{}; 
        ///TxAdd for device address 6.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txadd6{}; 
        ///TxAdd for device address 7.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txadd7{}; 
    }
    namespace RadioOverride0{    ///<Trim value override register 0.
        using Addr = Register::Address<0x40001724,0x00000000,0x00000000,unsigned>;
        ///Trim value override 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override0{}; 
    }
    namespace RadioOverride1{    ///<Trim value override register 1.
        using Addr = Register::Address<0x40001728,0x00000000,0x00000000,unsigned>;
        ///Trim value override 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override1{}; 
    }
    namespace RadioOverride2{    ///<Trim value override register 2.
        using Addr = Register::Address<0x4000172c,0x00000000,0x00000000,unsigned>;
        ///Trim value override 2.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override2{}; 
    }
    namespace RadioOverride3{    ///<Trim value override register 3.
        using Addr = Register::Address<0x40001730,0x00000000,0x00000000,unsigned>;
        ///Trim value override 3.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override3{}; 
    }
    namespace RadioOverride4{    ///<Trim value override register 4.
        using Addr = Register::Address<0x40001734,0x70000000,0x00000000,unsigned>;
        ///Trim value override 4.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> override4{}; 
        ///Enable or disable override of default trim values.
        enum class EnableVal {
            disabled=0x00000000,     ///<Override trim values disabled.
            enabled=0x00000001,     ///<Override trim values enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,EnableVal> enable{}; 
        namespace EnableValC{
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(enable)::Type,EnableVal::enabled> enabled{};
        }
    }
    namespace RadioPower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40001ffc,0xfffffffe,0x00000000,unsigned>;
        ///Peripheral power control.
        enum class PowerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PowerVal> power{}; 
        namespace PowerValC{
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(power)::Type,PowerVal::enabled> enabled{};
        }
    }
    namespace RadioDab0{    ///<Device address base segment.
        using Addr = Register::Address<0x40001600,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab1{    ///<Device address base segment.
        using Addr = Register::Address<0x40001604,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab2{    ///<Device address base segment.
        using Addr = Register::Address<0x40001608,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab3{    ///<Device address base segment.
        using Addr = Register::Address<0x4000160c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab4{    ///<Device address base segment.
        using Addr = Register::Address<0x40001610,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab5{    ///<Device address base segment.
        using Addr = Register::Address<0x40001614,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab6{    ///<Device address base segment.
        using Addr = Register::Address<0x40001618,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDab7{    ///<Device address base segment.
        using Addr = Register::Address<0x4000161c,0xffffffff,0x00000000,unsigned>;
    }
    namespace RadioDap0{    ///<Device address prefix.
        using Addr = Register::Address<0x40001620,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap1{    ///<Device address prefix.
        using Addr = Register::Address<0x40001624,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap2{    ///<Device address prefix.
        using Addr = Register::Address<0x40001628,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap3{    ///<Device address prefix.
        using Addr = Register::Address<0x4000162c,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap4{    ///<Device address prefix.
        using Addr = Register::Address<0x40001630,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap5{    ///<Device address prefix.
        using Addr = Register::Address<0x40001634,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap6{    ///<Device address prefix.
        using Addr = Register::Address<0x40001638,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace RadioDap7{    ///<Device address prefix.
        using Addr = Register::Address<0x4000163c,0xffff0000,0x00000000,unsigned>;
        ///Device address prefix.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
}
