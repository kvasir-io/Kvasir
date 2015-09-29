#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//The radio.
    namespace NonetasksTxen{    ///<Enable radio in TX mode.
        using Addr = Register::Address<0x40001000,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRxen{    ///<Enable radio in RX mode.
        using Addr = Register::Address<0x40001004,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStart{    ///<Start radio.
        using Addr = Register::Address<0x40001008,0xffffffff,0,unsigned>;
    }
    namespace NonetasksStop{    ///<Stop radio.
        using Addr = Register::Address<0x4000100c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksDisable{    ///<Disable radio.
        using Addr = Register::Address<0x40001010,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRssistart{    ///<Start the RSSI and take one sample of the receive signal strength.
        using Addr = Register::Address<0x40001014,0xffffffff,0,unsigned>;
    }
    namespace NonetasksRssistop{    ///<Stop the RSSI measurement.
        using Addr = Register::Address<0x40001018,0xffffffff,0,unsigned>;
    }
    namespace NonetasksBcstart{    ///<Start the bit counter.
        using Addr = Register::Address<0x4000101c,0xffffffff,0,unsigned>;
    }
    namespace NonetasksBcstop{    ///<Stop the bit counter.
        using Addr = Register::Address<0x40001020,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsReady{    ///<Ready event.
        using Addr = Register::Address<0x40001100,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsAddress{    ///<Address event.
        using Addr = Register::Address<0x40001104,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsPayload{    ///<Payload event.
        using Addr = Register::Address<0x40001108,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsEnd{    ///<End event.
        using Addr = Register::Address<0x4000110c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDisabled{    ///<Disable event.
        using Addr = Register::Address<0x40001110,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDevmatch{    ///<A device address match occurred on the last received packet.
        using Addr = Register::Address<0x40001114,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsDevmiss{    ///<No device address match occurred on the last received packet.
        using Addr = Register::Address<0x40001118,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsRssiend{    ///<Sampling of the receive signal strength complete. A new RSSI sample is ready for readout at the RSSISAMPLE register.
        using Addr = Register::Address<0x4000111c,0xffffffff,0,unsigned>;
    }
    namespace NoneeventsBcmatch{    ///<Bit counter reached bit count value specified in BCC register.
        using Addr = Register::Address<0x40001128,0xffffffff,0,unsigned>;
    }
    namespace Noneshorts{    ///<Shortcuts for the radio.
        using Addr = Register::Address<0x40001200,0xfffffe80,0,unsigned>;
        ///Shortcut between READY event and START task.
        enum class readyStartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace readyStartValC{
            constexpr MPL::Value<readyStartVal,readyStartVal::disabled> disabled{};
            constexpr MPL::Value<readyStartVal,readyStartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyStartVal> readyStart{}; 
        ///Shortcut between END event and DISABLE task.
        enum class endDisableVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace endDisableValC{
            constexpr MPL::Value<endDisableVal,endDisableVal::disabled> disabled{};
            constexpr MPL::Value<endDisableVal,endDisableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,endDisableVal> endDisable{}; 
        ///Shortcut between DISABLED event and TXEN task. 
        enum class disabledTxenVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace disabledTxenValC{
            constexpr MPL::Value<disabledTxenVal,disabledTxenVal::disabled> disabled{};
            constexpr MPL::Value<disabledTxenVal,disabledTxenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,disabledTxenVal> disabledTxen{}; 
        ///Shortcut between DISABLED event and RXEN task.
        enum class disabledRxenVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace disabledRxenValC{
            constexpr MPL::Value<disabledRxenVal,disabledRxenVal::disabled> disabled{};
            constexpr MPL::Value<disabledRxenVal,disabledRxenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,disabledRxenVal> disabledRxen{}; 
        ///Shortcut between ADDRESS event and RSSISTART task.
        enum class addressRssistartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace addressRssistartValC{
            constexpr MPL::Value<addressRssistartVal,addressRssistartVal::disabled> disabled{};
            constexpr MPL::Value<addressRssistartVal,addressRssistartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,addressRssistartVal> addressRssistart{}; 
        ///Shortcut between END event and START task.
        enum class endStartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace endStartValC{
            constexpr MPL::Value<endStartVal,endStartVal::disabled> disabled{};
            constexpr MPL::Value<endStartVal,endStartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,endStartVal> endStart{}; 
        ///Shortcut between ADDRESS event and BCSTART task.
        enum class addressBcstartVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace addressBcstartValC{
            constexpr MPL::Value<addressBcstartVal,addressBcstartVal::disabled> disabled{};
            constexpr MPL::Value<addressBcstartVal,addressBcstartVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,addressBcstartVal> addressBcstart{}; 
        ///Shortcut between DISABLED event and RSSISTOP task.
        enum class disabledRssistopVal {
            disabled=0x00000000,     ///<Shortcut disabled.
            enabled=0x00000001,     ///<Shortcut enabled.
        };
        namespace disabledRssistopValC{
            constexpr MPL::Value<disabledRssistopVal,disabledRssistopVal::disabled> disabled{};
            constexpr MPL::Value<disabledRssistopVal,disabledRssistopVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,disabledRssistopVal> disabledRssistop{}; 
    }
    namespace Noneintenset{    ///<Interrupt enable set register.
        using Addr = Register::Address<0x40001304,0xfffffb00,0,unsigned>;
        ///Enable interrupt on READY event.
        enum class readyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Enable interrupt on ADDRESS event.
        enum class addressVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace addressValC{
            constexpr MPL::Value<addressVal,addressVal::disabled> disabled{};
            constexpr MPL::Value<addressVal,addressVal::enabled> enabled{};
            constexpr MPL::Value<addressVal,addressVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,addressVal> address{}; 
        ///Enable interrupt on PAYLOAD event.
        enum class payloadVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace payloadValC{
            constexpr MPL::Value<payloadVal,payloadVal::disabled> disabled{};
            constexpr MPL::Value<payloadVal,payloadVal::enabled> enabled{};
            constexpr MPL::Value<payloadVal,payloadVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,payloadVal> payload{}; 
        ///Enable interrupt on END event.
        enum class endVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,endVal> end{}; 
        ///Enable interrupt on DISABLED event.
        enum class disabledVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace disabledValC{
            constexpr MPL::Value<disabledVal,disabledVal::disabled> disabled{};
            constexpr MPL::Value<disabledVal,disabledVal::enabled> enabled{};
            constexpr MPL::Value<disabledVal,disabledVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,disabledVal> disabled{}; 
        ///Enable interrupt on DEVMATCH event.
        enum class devmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace devmatchValC{
            constexpr MPL::Value<devmatchVal,devmatchVal::disabled> disabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::enabled> enabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,devmatchVal> devmatch{}; 
        ///Enable interrupt on DEVMISS event.
        enum class devmissVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace devmissValC{
            constexpr MPL::Value<devmissVal,devmissVal::disabled> disabled{};
            constexpr MPL::Value<devmissVal,devmissVal::enabled> enabled{};
            constexpr MPL::Value<devmissVal,devmissVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,devmissVal> devmiss{}; 
        ///Enable interrupt on RSSIEND event.
        enum class rssiendVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace rssiendValC{
            constexpr MPL::Value<rssiendVal,rssiendVal::disabled> disabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::enabled> enabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rssiendVal> rssiend{}; 
        ///Enable interrupt on BCMATCH event.
        enum class bcmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            set=0x00000001,     ///<Enable interrupt on write.
        };
        namespace bcmatchValC{
            constexpr MPL::Value<bcmatchVal,bcmatchVal::disabled> disabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::enabled> enabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,bcmatchVal> bcmatch{}; 
    }
    namespace Noneintenclr{    ///<Interrupt enable clear register.
        using Addr = Register::Address<0x40001308,0xfffffb00,0,unsigned>;
        ///Disable interrupt on READY event.
        enum class readyVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace readyValC{
            constexpr MPL::Value<readyVal,readyVal::disabled> disabled{};
            constexpr MPL::Value<readyVal,readyVal::enabled> enabled{};
            constexpr MPL::Value<readyVal,readyVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,readyVal> ready{}; 
        ///Disable interrupt on ADDRESS event.
        enum class addressVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace addressValC{
            constexpr MPL::Value<addressVal,addressVal::disabled> disabled{};
            constexpr MPL::Value<addressVal,addressVal::enabled> enabled{};
            constexpr MPL::Value<addressVal,addressVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,addressVal> address{}; 
        ///Disable interrupt on PAYLOAD event.
        enum class payloadVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace payloadValC{
            constexpr MPL::Value<payloadVal,payloadVal::disabled> disabled{};
            constexpr MPL::Value<payloadVal,payloadVal::enabled> enabled{};
            constexpr MPL::Value<payloadVal,payloadVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,payloadVal> payload{}; 
        ///Disable interrupt on END event.
        enum class endVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace endValC{
            constexpr MPL::Value<endVal,endVal::disabled> disabled{};
            constexpr MPL::Value<endVal,endVal::enabled> enabled{};
            constexpr MPL::Value<endVal,endVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,endVal> end{}; 
        ///Disable interrupt on DISABLED event.
        enum class disabledVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace disabledValC{
            constexpr MPL::Value<disabledVal,disabledVal::disabled> disabled{};
            constexpr MPL::Value<disabledVal,disabledVal::enabled> enabled{};
            constexpr MPL::Value<disabledVal,disabledVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,disabledVal> disabled{}; 
        ///Disable interrupt on DEVMATCH event.
        enum class devmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace devmatchValC{
            constexpr MPL::Value<devmatchVal,devmatchVal::disabled> disabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::enabled> enabled{};
            constexpr MPL::Value<devmatchVal,devmatchVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,devmatchVal> devmatch{}; 
        ///Disable interrupt on DEVMISS event.
        enum class devmissVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace devmissValC{
            constexpr MPL::Value<devmissVal,devmissVal::disabled> disabled{};
            constexpr MPL::Value<devmissVal,devmissVal::enabled> enabled{};
            constexpr MPL::Value<devmissVal,devmissVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,devmissVal> devmiss{}; 
        ///Disable interrupt on RSSIEND event.
        enum class rssiendVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace rssiendValC{
            constexpr MPL::Value<rssiendVal,rssiendVal::disabled> disabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::enabled> enabled{};
            constexpr MPL::Value<rssiendVal,rssiendVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rssiendVal> rssiend{}; 
        ///Disable interrupt on BCMATCH event.
        enum class bcmatchVal {
            disabled=0x00000000,     ///<Interrupt disabled.
            enabled=0x00000001,     ///<Interrupt enabled.
            clear=0x00000001,     ///<Disable interrupt on write.
        };
        namespace bcmatchValC{
            constexpr MPL::Value<bcmatchVal,bcmatchVal::disabled> disabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::enabled> enabled{};
            constexpr MPL::Value<bcmatchVal,bcmatchVal::clear> clear{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,bcmatchVal> bcmatch{}; 
    }
    namespace Nonecrcstatus{    ///<CRC status of received packet.
        using Addr = Register::Address<0x40001400,0xfffffffe,0,unsigned>;
        ///CRC status of received packet.
        enum class crcstatusVal {
            crcerror=0x00000000,     ///<Packet received with CRC error.
            crcok=0x00000001,     ///<Packet received with CRC ok.
        };
        namespace crcstatusValC{
            constexpr MPL::Value<crcstatusVal,crcstatusVal::crcerror> crcerror{};
            constexpr MPL::Value<crcstatusVal,crcstatusVal::crcok> crcok{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,crcstatusVal> crcstatus{}; 
    }
    namespace Nonerxmatch{    ///<Received address.
        using Addr = Register::Address<0x40001408,0xfffffff8,0,unsigned>;
        ///Logical address in which previous packet was received.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> rxmatch{}; 
    }
    namespace Nonerxcrc{    ///<Received CRC.
        using Addr = Register::Address<0x4000140c,0xff000000,0,unsigned>;
        ///CRC field of previously received packet.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> rxcrc{}; 
    }
    namespace Nonedai{    ///<Device address match index.
        using Addr = Register::Address<0x40001410,0xfffffff8,0,unsigned>;
        ///Index (n) of device address (see DAB[n] and DAP[n]) that obtained an address match.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> dai{}; 
    }
    namespace Nonepacketptr{    ///<Packet pointer. Decision point: START task.
        using Addr = Register::Address<0x40001504,0xffffffff,0,unsigned>;
    }
    namespace Nonefrequency{    ///<Frequency.
        using Addr = Register::Address<0x40001508,0xffffff80,0,unsigned>;
        ///Radio channel frequency offset in MHz: RF Frequency = 2400 + FREQUENCY (MHz). Decision point: TXEN or RXEN task. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> frequency{}; 
    }
    namespace Nonetxpower{    ///<Output power.
        using Addr = Register::Address<0x4000150c,0xffffff00,0,unsigned>;
        ///Radio output power. Decision point: TXEN task.
        enum class txpowerVal {
            pos4dbm=0x00000004,     ///<+4dBm.
            v0dbm=0x00000000,     ///<0dBm.
            neg4dbm=0x000000fc,     ///<-4dBm.
            neg8dbm=0x000000f8,     ///<-8dBm.
            neg12dbm=0x000000f4,     ///<-12dBm.
            neg16dbm=0x000000f0,     ///<-16dBm.
            neg20dbm=0x000000ec,     ///<-20dBm.
            neg30dbm=0x000000d8,     ///<-30dBm.
        };
        namespace txpowerValC{
            constexpr MPL::Value<txpowerVal,txpowerVal::pos4dbm> pos4dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::v0dbm> v0dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg4dbm> neg4dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg8dbm> neg8dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg12dbm> neg12dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg16dbm> neg16dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg20dbm> neg20dbm{};
            constexpr MPL::Value<txpowerVal,txpowerVal::neg30dbm> neg30dbm{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,txpowerVal> txpower{}; 
    }
    namespace Nonemode{    ///<Data rate and modulation.
        using Addr = Register::Address<0x40001510,0xfffffffc,0,unsigned>;
        ///Radio data rate and modulation setting. Decision point: TXEN or RXEN task.
        enum class modeVal {
            nrf1mbit=0x00000000,     ///<1Mbit/s Nordic propietary radio mode.
            nrf2mbit=0x00000001,     ///<2Mbit/s Nordic propietary radio mode.
            nrf250kbit=0x00000002,     ///<250kbit/s Nordic propietary radio mode.
            ble1mbit=0x00000003,     ///<1Mbit/s Bluetooth Low Energy
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::nrf1mbit> nrf1mbit{};
            constexpr MPL::Value<modeVal,modeVal::nrf2mbit> nrf2mbit{};
            constexpr MPL::Value<modeVal,modeVal::nrf250kbit> nrf250kbit{};
            constexpr MPL::Value<modeVal,modeVal::ble1mbit> ble1mbit{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,modeVal> mode{}; 
    }
    namespace Nonepcnf0{    ///<Packet configuration 0.
        using Addr = Register::Address<0x40001514,0xfff0fef0,0,unsigned>;
        ///Length of length field in number of bits. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> lflen{}; 
        ///Length of S0 field in number of bytes. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> s0len{}; 
        ///Length of S1 field in number of bits. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> s1len{}; 
    }
    namespace Nonepcnf1{    ///<Packet configuration 1.
        using Addr = Register::Address<0x40001518,0xfcf80000,0,unsigned>;
        ///Maximum length of packet payload in number of bytes.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> maxlen{}; 
        ///Static length in number of bytes. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> statlen{}; 
        ///Base address length in number of bytes. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> balen{}; 
        ///On air endianness of packet length field. Decision point: START task.
        enum class endianVal {
            little=0x00000000,     ///<Least significant bit on air first
            big=0x00000001,     ///<Most significant bit on air first
        };
        namespace endianValC{
            constexpr MPL::Value<endianVal,endianVal::little> little{};
            constexpr MPL::Value<endianVal,endianVal::big> big{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,endianVal> endian{}; 
        ///Packet whitening enable.
        enum class whiteenVal {
            disabled=0x00000000,     ///<Whitening disabled.
            enabled=0x00000001,     ///<Whitening enabled.
        };
        namespace whiteenValC{
            constexpr MPL::Value<whiteenVal,whiteenVal::disabled> disabled{};
            constexpr MPL::Value<whiteenVal,whiteenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,whiteenVal> whiteen{}; 
    }
    namespace Nonebase0{    ///<Radio base address 0. Decision point: START task.
        using Addr = Register::Address<0x4000151c,0xffffffff,0,unsigned>;
    }
    namespace Nonebase1{    ///<Radio base address 1. Decision point: START task.
        using Addr = Register::Address<0x40001520,0xffffffff,0,unsigned>;
    }
    namespace Noneprefix0{    ///<Prefixes bytes for logical addresses 0 to 3.
        using Addr = Register::Address<0x40001524,0x00000000,0,unsigned>;
        ///Address prefix 0. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap0{}; 
        ///Address prefix 1. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap1{}; 
        ///Address prefix 2. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap2{}; 
        ///Address prefix 3. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap3{}; 
    }
    namespace Noneprefix1{    ///<Prefixes bytes for logical addresses 4 to 7.
        using Addr = Register::Address<0x40001528,0x00000000,0,unsigned>;
        ///Address prefix 4. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ap4{}; 
        ///Address prefix 5. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ap5{}; 
        ///Address prefix 6. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ap6{}; 
        ///Address prefix 7. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ap7{}; 
    }
    namespace Nonetxaddress{    ///<Transmit address select.
        using Addr = Register::Address<0x4000152c,0xfffffff8,0,unsigned>;
        ///Logical address to be used when transmitting a packet. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txaddress{}; 
    }
    namespace Nonerxaddresses{    ///<Receive address select.
        using Addr = Register::Address<0x40001530,0xffffff00,0,unsigned>;
        ///Enable reception on logical address 0. Decision point: START task.
        enum class addr0Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr0ValC{
            constexpr MPL::Value<addr0Val,addr0Val::disabled> disabled{};
            constexpr MPL::Value<addr0Val,addr0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,addr0Val> addr0{}; 
        ///Enable reception on logical address 1. Decision point: START task.
        enum class addr1Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr1ValC{
            constexpr MPL::Value<addr1Val,addr1Val::disabled> disabled{};
            constexpr MPL::Value<addr1Val,addr1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,addr1Val> addr1{}; 
        ///Enable reception on logical address 2. Decision point: START task.
        enum class addr2Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr2ValC{
            constexpr MPL::Value<addr2Val,addr2Val::disabled> disabled{};
            constexpr MPL::Value<addr2Val,addr2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,addr2Val> addr2{}; 
        ///Enable reception on logical address 3. Decision point: START task.
        enum class addr3Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr3ValC{
            constexpr MPL::Value<addr3Val,addr3Val::disabled> disabled{};
            constexpr MPL::Value<addr3Val,addr3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,addr3Val> addr3{}; 
        ///Enable reception on logical address 4. Decision point: START task.
        enum class addr4Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr4ValC{
            constexpr MPL::Value<addr4Val,addr4Val::disabled> disabled{};
            constexpr MPL::Value<addr4Val,addr4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,addr4Val> addr4{}; 
        ///Enable reception on logical address 5. Decision point: START task.
        enum class addr5Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr5ValC{
            constexpr MPL::Value<addr5Val,addr5Val::disabled> disabled{};
            constexpr MPL::Value<addr5Val,addr5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,addr5Val> addr5{}; 
        ///Enable reception on logical address 6. Decision point: START task.
        enum class addr6Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr6ValC{
            constexpr MPL::Value<addr6Val,addr6Val::disabled> disabled{};
            constexpr MPL::Value<addr6Val,addr6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,addr6Val> addr6{}; 
        ///Enable reception on logical address 7. Decision point: START task.
        enum class addr7Val {
            disabled=0x00000000,     ///<Reception disabled.
            enabled=0x00000001,     ///<Reception enabled.
        };
        namespace addr7ValC{
            constexpr MPL::Value<addr7Val,addr7Val::disabled> disabled{};
            constexpr MPL::Value<addr7Val,addr7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,addr7Val> addr7{}; 
    }
    namespace Nonecrccnf{    ///<CRC configuration.
        using Addr = Register::Address<0x40001534,0xfffffefc,0,unsigned>;
        ///CRC length. Decision point: START task.
        enum class lenVal {
            disabled=0x00000000,     ///<CRC calculation disabled.
            one=0x00000001,     ///<One byte long CRC.
            two=0x00000002,     ///<Two bytes long CRC.
            three=0x00000003,     ///<Three bytes long CRC.
        };
        namespace lenValC{
            constexpr MPL::Value<lenVal,lenVal::disabled> disabled{};
            constexpr MPL::Value<lenVal,lenVal::one> one{};
            constexpr MPL::Value<lenVal,lenVal::two> two{};
            constexpr MPL::Value<lenVal,lenVal::three> three{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,lenVal> len{}; 
        ///Leave packet address field out of the CRC calculation. Decision point: START task.
        enum class skipaddrVal {
            include=0x00000000,     ///<Include packet address in CRC calculation.
            skip=0x00000001,     ///<Packet address is skipped in CRC calculation. The CRC calculation will start at the first byte after the address.
        };
        namespace skipaddrValC{
            constexpr MPL::Value<skipaddrVal,skipaddrVal::include> include{};
            constexpr MPL::Value<skipaddrVal,skipaddrVal::skip> skip{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,skipaddrVal> skipaddr{}; 
    }
    namespace Nonecrcpoly{    ///<CRC polynomial.
        using Addr = Register::Address<0x40001538,0xff000000,0,unsigned>;
        ///CRC polynomial. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcpoly{}; 
    }
    namespace Nonecrcinit{    ///<CRC initial value.
        using Addr = Register::Address<0x4000153c,0xff000000,0,unsigned>;
        ///Initial value for CRC calculation. Decision point: START task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> crcinit{}; 
    }
    namespace Nonetest{    ///<Test features enable register.
        using Addr = Register::Address<0x40001540,0xfffffffc,0,unsigned>;
        ///Constant carrier. Decision point: TXEN task.
        enum class constcarrierVal {
            disabled=0x00000000,     ///<Constant carrier disabled.
            enabled=0x00000001,     ///<Constant carrier enabled.
        };
        namespace constcarrierValC{
            constexpr MPL::Value<constcarrierVal,constcarrierVal::disabled> disabled{};
            constexpr MPL::Value<constcarrierVal,constcarrierVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,constcarrierVal> constcarrier{}; 
        ///PLL lock. Decision point: TXEN or RXEN task.
        enum class plllockVal {
            disabled=0x00000000,     ///<PLL lock disabled.
            enabled=0x00000001,     ///<PLL lock enabled.
        };
        namespace plllockValC{
            constexpr MPL::Value<plllockVal,plllockVal::disabled> disabled{};
            constexpr MPL::Value<plllockVal,plllockVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,plllockVal> plllock{}; 
    }
    namespace Nonetifs{    ///<Inter Frame Spacing in microseconds.
        using Addr = Register::Address<0x40001544,0xffffff00,0,unsigned>;
        ///Inter frame spacing in microseconds. Decision point: START rask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tifs{}; 
    }
    namespace Nonerssisample{    ///<RSSI sample.
        using Addr = Register::Address<0x40001548,0xffffff80,0,unsigned>;
        ///RSSI sample result. The result is read as a positive value so that ReceivedSignalStrength = -RSSISAMPLE dBm
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> rssisample{}; 
    }
    namespace Nonestate{    ///<Current radio state.
        using Addr = Register::Address<0x40001550,0xfffffff0,0,unsigned>;
        ///Current radio state.
        enum class stateVal {
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
    namespace Nonedatawhiteiv{    ///<Data whitening initial value.
        using Addr = Register::Address<0x40001554,0xffffff80,0,unsigned>;
        ///Data whitening initial value. Bit 0 corresponds to Position 0 of the LSFR, Bit 1 to position 5... Decision point: TXEN or RXEN task.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> datawhiteiv{}; 
    }
    namespace Nonebcc{    ///<Bit counter compare.
        using Addr = Register::Address<0x40001560,0xffffffff,0,unsigned>;
    }
    namespace Nonedab0{    ///<Device address base segment.
        using Addr = Register::Address<0x40001600,0xffffffff,0,unsigned>;
    }
    namespace Nonedab1{    ///<Device address base segment.
        using Addr = Register::Address<0x40001604,0xffffffff,0,unsigned>;
    }
    namespace Nonedab2{    ///<Device address base segment.
        using Addr = Register::Address<0x40001608,0xffffffff,0,unsigned>;
    }
    namespace Nonedab3{    ///<Device address base segment.
        using Addr = Register::Address<0x4000160c,0xffffffff,0,unsigned>;
    }
    namespace Nonedab4{    ///<Device address base segment.
        using Addr = Register::Address<0x40001610,0xffffffff,0,unsigned>;
    }
    namespace Nonedab5{    ///<Device address base segment.
        using Addr = Register::Address<0x40001614,0xffffffff,0,unsigned>;
    }
    namespace Nonedab6{    ///<Device address base segment.
        using Addr = Register::Address<0x40001618,0xffffffff,0,unsigned>;
    }
    namespace Nonedab7{    ///<Device address base segment.
        using Addr = Register::Address<0x4000161c,0xffffffff,0,unsigned>;
    }
    namespace Nonedap0{    ///<Device address prefix.
        using Addr = Register::Address<0x40001620,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap1{    ///<Device address prefix.
        using Addr = Register::Address<0x40001624,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap2{    ///<Device address prefix.
        using Addr = Register::Address<0x40001628,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap3{    ///<Device address prefix.
        using Addr = Register::Address<0x4000162c,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap4{    ///<Device address prefix.
        using Addr = Register::Address<0x40001630,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap5{    ///<Device address prefix.
        using Addr = Register::Address<0x40001634,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap6{    ///<Device address prefix.
        using Addr = Register::Address<0x40001638,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedap7{    ///<Device address prefix.
        using Addr = Register::Address<0x4000163c,0xffff0000,0,unsigned>;
        ///Device address prefix.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dap{}; 
    }
    namespace Nonedacnf{    ///<Device address match configuration.
        using Addr = Register::Address<0x40001640,0xffff0000,0,unsigned>;
        ///Enable or disable device address matching using device address 0.
        enum class ena0Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena0ValC{
            constexpr MPL::Value<ena0Val,ena0Val::disabled> disabled{};
            constexpr MPL::Value<ena0Val,ena0Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ena0Val> ena0{}; 
        ///Enable or disable device address matching using device address 1.
        enum class ena1Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena1ValC{
            constexpr MPL::Value<ena1Val,ena1Val::disabled> disabled{};
            constexpr MPL::Value<ena1Val,ena1Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ena1Val> ena1{}; 
        ///Enable or disable device address matching using device address 2.
        enum class ena2Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena2ValC{
            constexpr MPL::Value<ena2Val,ena2Val::disabled> disabled{};
            constexpr MPL::Value<ena2Val,ena2Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ena2Val> ena2{}; 
        ///Enable or disable device address matching using device address 3.
        enum class ena3Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena3ValC{
            constexpr MPL::Value<ena3Val,ena3Val::disabled> disabled{};
            constexpr MPL::Value<ena3Val,ena3Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ena3Val> ena3{}; 
        ///Enable or disable device address matching using device address 4.
        enum class ena4Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena4ValC{
            constexpr MPL::Value<ena4Val,ena4Val::disabled> disabled{};
            constexpr MPL::Value<ena4Val,ena4Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ena4Val> ena4{}; 
        ///Enable or disable device address matching using device address 5.
        enum class ena5Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena5ValC{
            constexpr MPL::Value<ena5Val,ena5Val::disabled> disabled{};
            constexpr MPL::Value<ena5Val,ena5Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ena5Val> ena5{}; 
        ///Enable or disable device address matching using device address 6.
        enum class ena6Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena6ValC{
            constexpr MPL::Value<ena6Val,ena6Val::disabled> disabled{};
            constexpr MPL::Value<ena6Val,ena6Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ena6Val> ena6{}; 
        ///Enable or disable device address matching using device address 7.
        enum class ena7Val {
            disabled=0x00000000,     ///<Disabled.
            enabled=0x00000001,     ///<Enabled.
        };
        namespace ena7ValC{
            constexpr MPL::Value<ena7Val,ena7Val::disabled> disabled{};
            constexpr MPL::Value<ena7Val,ena7Val::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ena7Val> ena7{}; 
        ///TxAdd for device address 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txadd0{}; 
        ///TxAdd for device address 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txadd1{}; 
        ///TxAdd for device address 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txadd2{}; 
        ///TxAdd for device address 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txadd3{}; 
        ///TxAdd for device address 4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txadd4{}; 
        ///TxAdd for device address 5.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txadd5{}; 
        ///TxAdd for device address 6.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txadd6{}; 
        ///TxAdd for device address 7.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txadd7{}; 
    }
    namespace Noneoverride0{    ///<Trim value override register 0.
        using Addr = Register::Address<0x40001724,0x00000000,0,unsigned>;
        ///Trim value override 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override0{}; 
    }
    namespace Noneoverride1{    ///<Trim value override register 1.
        using Addr = Register::Address<0x40001728,0x00000000,0,unsigned>;
        ///Trim value override 1.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override1{}; 
    }
    namespace Noneoverride2{    ///<Trim value override register 2.
        using Addr = Register::Address<0x4000172c,0x00000000,0,unsigned>;
        ///Trim value override 2.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override2{}; 
    }
    namespace Noneoverride3{    ///<Trim value override register 3.
        using Addr = Register::Address<0x40001730,0x00000000,0,unsigned>;
        ///Trim value override 3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> override3{}; 
    }
    namespace Noneoverride4{    ///<Trim value override register 4.
        using Addr = Register::Address<0x40001734,0x70000000,0,unsigned>;
        ///Trim value override 4.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> override4{}; 
        ///Enable or disable override of default trim values.
        enum class enableVal {
            disabled=0x00000000,     ///<Override trim values disabled.
            enabled=0x00000001,     ///<Override trim values enabled.
        };
        namespace enableValC{
            constexpr MPL::Value<enableVal,enableVal::disabled> disabled{};
            constexpr MPL::Value<enableVal,enableVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,enableVal> enable{}; 
    }
    namespace Nonepower{    ///<Peripheral power control.
        using Addr = Register::Address<0x40001ffc,0xfffffffe,0,unsigned>;
        ///Peripheral power control.
        enum class powerVal {
            disabled=0x00000000,     ///<Module power disabled.
            enabled=0x00000001,     ///<Module power enabled.
        };
        namespace powerValC{
            constexpr MPL::Value<powerVal,powerVal::disabled> disabled{};
            constexpr MPL::Value<powerVal,powerVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,powerVal> power{}; 
    }
}
