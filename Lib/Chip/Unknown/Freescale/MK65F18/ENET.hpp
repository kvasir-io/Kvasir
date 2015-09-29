#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet MAC-NET Core
    namespace EnetEir{    ///<Interrupt Event Register
        using Addr = Register::Address<0x400c0004,0x80007fff,0,unsigned>;
        ///Timestamp Timer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsTimer{}; 
        ///Transmit Timestamp Available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsAvail{}; 
        ///Node Wakeup Request Indication
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///Payload Receive Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> plr{}; 
        ///Transmit FIFO Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> un{}; 
        ///Collision Retry Limit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rl{}; 
        ///Late Collision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lc{}; 
        ///Ethernet Bus Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eberr{}; 
        ///MII Interrupt.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mii{}; 
        ///Receive Buffer Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxb{}; 
        ///Receive Frame Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rxf{}; 
        ///Transmit Buffer Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> txb{}; 
        ///Transmit Frame Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txf{}; 
        ///Graceful Stop Complete
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gra{}; 
        ///Babbling Transmit Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> babt{}; 
        ///Babbling Receive Error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> babr{}; 
    }
    namespace EnetEimr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400c0008,0x80007fff,0,unsigned>;
        ///TS_TIMER Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsTimer{}; 
        ///TS_AVAIL Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsAvail{}; 
        ///WAKEUP Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wakeup{}; 
        ///PLR Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> plr{}; 
        ///UN Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> un{}; 
        ///RL Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rl{}; 
        ///LC Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lc{}; 
        ///EBERR Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eberr{}; 
        ///MII Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mii{}; 
        ///RXB Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxb{}; 
        ///RXF Interrupt Mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rxf{}; 
        ///TXB Interrupt Mask
        enum class txbVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        namespace txbValC{
            constexpr MPL::Value<txbVal,txbVal::v0> v0{};
            constexpr MPL::Value<txbVal,txbVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,txbVal> txb{}; 
        ///TXF Interrupt Mask
        enum class txfVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        namespace txfValC{
            constexpr MPL::Value<txfVal,txfVal::v0> v0{};
            constexpr MPL::Value<txfVal,txfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,txfVal> txf{}; 
        ///GRA Interrupt Mask
        enum class graVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        namespace graValC{
            constexpr MPL::Value<graVal,graVal::v0> v0{};
            constexpr MPL::Value<graVal,graVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,graVal> gra{}; 
        ///BABT Interrupt Mask
        enum class babtVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        namespace babtValC{
            constexpr MPL::Value<babtVal,babtVal::v0> v0{};
            constexpr MPL::Value<babtVal,babtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,babtVal> babt{}; 
        ///BABR Interrupt Mask
        enum class babrVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        namespace babrValC{
            constexpr MPL::Value<babrVal,babrVal::v0> v0{};
            constexpr MPL::Value<babrVal,babrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,babrVal> babr{}; 
    }
    namespace EnetRdar{    ///<Receive Descriptor Active Register
        using Addr = Register::Address<0x400c0010,0xfeffffff,0,unsigned>;
        ///Receive Descriptor Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rdar{}; 
    }
    namespace EnetTdar{    ///<Transmit Descriptor Active Register
        using Addr = Register::Address<0x400c0014,0xfeffffff,0,unsigned>;
        ///Transmit Descriptor Active
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tdar{}; 
    }
    namespace EnetEcr{    ///<Ethernet Control Register
        using Addr = Register::Address<0x400c0024,0xfffffe20,0,unsigned>;
        ///Ethernet MAC Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
        ///Ethernet Enable
        enum class etherenVal {
            v0=0x00000000,     ///<Reception immediately stops and transmission stops after a bad CRC is appended to any currently transmitted frame.
            v1=0x00000001,     ///<MAC is enabled, and reception and transmission are possible.
        };
        namespace etherenValC{
            constexpr MPL::Value<etherenVal,etherenVal::v0> v0{};
            constexpr MPL::Value<etherenVal,etherenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,etherenVal> etheren{}; 
        ///Magic Packet Detection Enable
        enum class magicenVal {
            v0=0x00000000,     ///<Magic detection logic disabled.
            v1=0x00000001,     ///<The MAC core detects magic packets and asserts EIR[WAKEUP] when a frame is detected.
        };
        namespace magicenValC{
            constexpr MPL::Value<magicenVal,magicenVal::v0> v0{};
            constexpr MPL::Value<magicenVal,magicenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,magicenVal> magicen{}; 
        ///Sleep Mode Enable
        enum class sleepVal {
            v0=0x00000000,     ///<Normal operating mode.
            v1=0x00000001,     ///<Sleep mode.
        };
        namespace sleepValC{
            constexpr MPL::Value<sleepVal,sleepVal::v0> v0{};
            constexpr MPL::Value<sleepVal,sleepVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sleepVal> sleep{}; 
        ///EN1588 Enable
        enum class en1588Val {
            v0=0x00000000,     ///<Legacy FEC buffer descriptors and functions enabled.
            v1=0x00000001,     ///<Enhanced frame time-stamping functions enabled.
        };
        namespace en1588ValC{
            constexpr MPL::Value<en1588Val,en1588Val::v0> v0{};
            constexpr MPL::Value<en1588Val,en1588Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,en1588Val> en1588{}; 
        ///Debug Enable
        enum class dbgenVal {
            v0=0x00000000,     ///<MAC continues operation in debug mode.
            v1=0x00000001,     ///<MAC enters hardware freeze mode when the processor is in debug mode.
        };
        namespace dbgenValC{
            constexpr MPL::Value<dbgenVal,dbgenVal::v0> v0{};
            constexpr MPL::Value<dbgenVal,dbgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dbgenVal> dbgen{}; 
        ///STOPEN Signal Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stopen{}; 
        ///Descriptor Byte Swapping Enable
        enum class dbswpVal {
            v0=0x00000000,     ///<The buffer descriptor bytes are not swapped to support big-endian devices.
            v1=0x00000001,     ///<The buffer descriptor bytes are swapped to support little-endian devices.
        };
        namespace dbswpValC{
            constexpr MPL::Value<dbswpVal,dbswpVal::v0> v0{};
            constexpr MPL::Value<dbswpVal,dbswpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,dbswpVal> dbswp{}; 
    }
    namespace EnetMmfr{    ///<MII Management Frame Register
        using Addr = Register::Address<0x400c0040,0x00000000,0,unsigned>;
        ///Management Frame Data
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///Turn Around
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ta{}; 
        ///Register Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> ra{}; 
        ///PHY Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> pa{}; 
        ///Operation Code
        enum class opVal {
            v00=0x00000000,     ///<Write frame operation, but not MII compliant.
            v01=0x00000001,     ///<Write frame operation for a valid MII management frame.
            v10=0x00000002,     ///<Read frame operation for a valid MII management frame.
            v11=0x00000003,     ///<Read frame operation, but not MII compliant.
        };
        namespace opValC{
            constexpr MPL::Value<opVal,opVal::v00> v00{};
            constexpr MPL::Value<opVal,opVal::v01> v01{};
            constexpr MPL::Value<opVal,opVal::v10> v10{};
            constexpr MPL::Value<opVal,opVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,opVal> op{}; 
        ///Start Of Frame Delimiter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> st{}; 
    }
    namespace EnetMscr{    ///<MII Speed Control Register
        using Addr = Register::Address<0x400c0044,0xfffff801,0,unsigned>;
        ///MII Speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,1),Register::ReadWriteAccess,unsigned> miiSpeed{}; 
        ///Disable Preamble
        enum class disPreVal {
            v0=0x00000000,     ///<Preamble enabled.
            v1=0x00000001,     ///<Preamble (32 ones) is not prepended to the MII management frame.
        };
        namespace disPreValC{
            constexpr MPL::Value<disPreVal,disPreVal::v0> v0{};
            constexpr MPL::Value<disPreVal,disPreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,disPreVal> disPre{}; 
        ///Hold time On MDIO Output
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> holdtime{}; 
    }
    namespace EnetMibc{    ///<MIB Control Register
        using Addr = Register::Address<0x400c0064,0x1fffffff,0,unsigned>;
        ///MIB Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mibClear{}; 
        ///MIB Idle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mibIdle{}; 
        ///Disable MIB Logic
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mibDis{}; 
    }
    namespace EnetRcr{    ///<Receive Control Register
        using Addr = Register::Address<0x400c0084,0x00000cc0,0,unsigned>;
        ///Internal Loopback
        enum class loopVal {
            v0=0x00000000,     ///<Loopback disabled.
            v1=0x00000001,     ///<Transmitted frames are looped back internal to the device and transmit MII output signals are not asserted. DRT must be cleared.
        };
        namespace loopValC{
            constexpr MPL::Value<loopVal,loopVal::v0> v0{};
            constexpr MPL::Value<loopVal,loopVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,loopVal> loop{}; 
        ///Disable Receive On Transmit
        enum class drtVal {
            v0=0x00000000,     ///<Receive path operates independently of transmit. Used for full-duplex or to monitor transmit activity in half-duplex mode.
            v1=0x00000001,     ///<Disable reception of frames while transmitting. Normally used for half-duplex mode.
        };
        namespace drtValC{
            constexpr MPL::Value<drtVal,drtVal::v0> v0{};
            constexpr MPL::Value<drtVal,drtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,drtVal> drt{}; 
        ///Media Independent Interface Mode
        enum class miiModeVal {
            v0=0x00000000,     ///<Reserved.
            v1=0x00000001,     ///<MII or RMII mode, as indicated by the RMII_MODE field.
        };
        namespace miiModeValC{
            constexpr MPL::Value<miiModeVal,miiModeVal::v0> v0{};
            constexpr MPL::Value<miiModeVal,miiModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,miiModeVal> miiMode{}; 
        ///Promiscuous Mode
        enum class promVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enabled.
        };
        namespace promValC{
            constexpr MPL::Value<promVal,promVal::v0> v0{};
            constexpr MPL::Value<promVal,promVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,promVal> prom{}; 
        ///Broadcast Frame Reject
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcRej{}; 
        ///Flow Control Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fce{}; 
        ///RMII Mode Enable
        enum class rmiiModeVal {
            v0=0x00000000,     ///<MAC configured for MII mode.
            v1=0x00000001,     ///<MAC configured for RMII operation.
        };
        namespace rmiiModeValC{
            constexpr MPL::Value<rmiiModeVal,rmiiModeVal::v0> v0{};
            constexpr MPL::Value<rmiiModeVal,rmiiModeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,rmiiModeVal> rmiiMode{}; 
        ///no description available
        enum class rmii10tVal {
            v0=0x00000000,     ///<100 Mbps operation.
            v1=0x00000001,     ///<10 Mbps operation.
        };
        namespace rmii10tValC{
            constexpr MPL::Value<rmii10tVal,rmii10tVal::v0> v0{};
            constexpr MPL::Value<rmii10tVal,rmii10tVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,rmii10tVal> rmii10t{}; 
        ///Enable Frame Padding Remove On Receive
        enum class padenVal {
            v0=0x00000000,     ///<No padding is removed on receive by the MAC.
            v1=0x00000001,     ///<Padding is removed from received frames.
        };
        namespace padenValC{
            constexpr MPL::Value<padenVal,padenVal::v0> v0{};
            constexpr MPL::Value<padenVal,padenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,padenVal> paden{}; 
        ///Terminate/Forward Pause Frames
        enum class paufwdVal {
            v0=0x00000000,     ///<Pause frames are terminated and discarded in the MAC.
            v1=0x00000001,     ///<Pause frames are forwarded to the user application.
        };
        namespace paufwdValC{
            constexpr MPL::Value<paufwdVal,paufwdVal::v0> v0{};
            constexpr MPL::Value<paufwdVal,paufwdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,paufwdVal> paufwd{}; 
        ///Terminate/Forward Received CRC
        enum class crcfwdVal {
            v0=0x00000000,     ///<The CRC field of received frames is transmitted to the user application.
            v1=0x00000001,     ///<The CRC field is stripped from the frame.
        };
        namespace crcfwdValC{
            constexpr MPL::Value<crcfwdVal,crcfwdVal::v0> v0{};
            constexpr MPL::Value<crcfwdVal,crcfwdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,crcfwdVal> crcfwd{}; 
        ///MAC Control Frame Enable
        enum class cfenVal {
            v0=0x00000000,     ///<MAC control frames with any opcode other than 0x0001 (pause frame) are accepted and forwarded to the client interface.
            v1=0x00000001,     ///<MAC control frames with any opcode other than 0x0001 (pause frame) are silently discarded.
        };
        namespace cfenValC{
            constexpr MPL::Value<cfenVal,cfenVal::v0> v0{};
            constexpr MPL::Value<cfenVal,cfenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,cfenVal> cfen{}; 
        ///Maximum Frame Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> maxFl{}; 
        ///Payload Length Check Disable
        enum class nlcVal {
            v0=0x00000000,     ///<The payload length check is disabled.
            v1=0x00000001,     ///<The core checks the frame's payload length with the frame length/type field. Errors are indicated in the EIR[PLC] field.
        };
        namespace nlcValC{
            constexpr MPL::Value<nlcVal,nlcVal::v0> v0{};
            constexpr MPL::Value<nlcVal,nlcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,nlcVal> nlc{}; 
        ///Graceful Receive Stopped
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> grs{}; 
    }
    namespace EnetTcr{    ///<Transmit Control Register
        using Addr = Register::Address<0x400c00c4,0xfffffc02,0,unsigned>;
        ///Graceful Transmit Stop
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gts{}; 
        ///Full-Duplex Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fden{}; 
        ///Transmit Frame Control Pause
        enum class tfcPauseVal {
            v0=0x00000000,     ///<No PAUSE frame transmitted.
            v1=0x00000001,     ///<The MAC stops transmission of data frames after the current transmission is complete.
        };
        namespace tfcPauseValC{
            constexpr MPL::Value<tfcPauseVal,tfcPauseVal::v0> v0{};
            constexpr MPL::Value<tfcPauseVal,tfcPauseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tfcPauseVal> tfcPause{}; 
        ///Receive Frame Control Pause
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfcPause{}; 
        ///Source MAC Address Select On Transmit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> addsel{}; 
        ///Set MAC Address On Transmit
        enum class addinsVal {
            v0=0x00000000,     ///<The source MAC address is not modified by the MAC.
            v1=0x00000001,     ///<The MAC overwrites the source MAC address with the programmed MAC address according to ADDSEL.
        };
        namespace addinsValC{
            constexpr MPL::Value<addinsVal,addinsVal::v0> v0{};
            constexpr MPL::Value<addinsVal,addinsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,addinsVal> addins{}; 
        ///Forward Frame From Application With CRC
        enum class crcfwdVal {
            v0=0x00000000,     ///<TxBD[TC] controls whether the frame has a CRC from the application.
            v1=0x00000001,     ///<The transmitter does not append any CRC to transmitted frames, as it is expecting a frame with CRC from the application.
        };
        namespace crcfwdValC{
            constexpr MPL::Value<crcfwdVal,crcfwdVal::v0> v0{};
            constexpr MPL::Value<crcfwdVal,crcfwdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,crcfwdVal> crcfwd{}; 
    }
    namespace EnetPalr{    ///<Physical Address Lower Register
        using Addr = Register::Address<0x400c00e4,0x00000000,0,unsigned>;
        ///Pause Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> paddr1{}; 
    }
    namespace EnetPaur{    ///<Physical Address Upper Register
        using Addr = Register::Address<0x400c00e8,0x00000000,0,unsigned>;
        ///Type Field In PAUSE Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> type{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> paddr2{}; 
    }
    namespace EnetOpd{    ///<Opcode/Pause Duration Register
        using Addr = Register::Address<0x400c00ec,0x00000000,0,unsigned>;
        ///Pause Duration
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pauseDur{}; 
        ///Opcode Field In PAUSE Frames
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> opcode{}; 
    }
    namespace EnetIaur{    ///<Descriptor Individual Upper Address Register
        using Addr = Register::Address<0x400c0118,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iaddr1{}; 
    }
    namespace EnetIalr{    ///<Descriptor Individual Lower Address Register
        using Addr = Register::Address<0x400c011c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iaddr2{}; 
    }
    namespace EnetGaur{    ///<Descriptor Group Upper Address Register
        using Addr = Register::Address<0x400c0120,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gaddr1{}; 
    }
    namespace EnetGalr{    ///<Descriptor Group Lower Address Register
        using Addr = Register::Address<0x400c0124,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gaddr2{}; 
    }
    namespace EnetTfwr{    ///<Transmit FIFO Watermark Register
        using Addr = Register::Address<0x400c0144,0xfffffec0,0,unsigned>;
        ///Transmit FIFO Write
        enum class tfwrVal {
            v000000=0x00000000,     ///<64 bytes written.
            v000001=0x00000001,     ///<64 bytes written.
            v000010=0x00000002,     ///<128 bytes written.
            v000011=0x00000003,     ///<192 bytes written.
            v111110=0x0000003e,     ///<3968 bytes written.
            v111111=0x0000003f,     ///<4032 bytes written.
        };
        namespace tfwrValC{
            constexpr MPL::Value<tfwrVal,tfwrVal::v000000> v000000{};
            constexpr MPL::Value<tfwrVal,tfwrVal::v000001> v000001{};
            constexpr MPL::Value<tfwrVal,tfwrVal::v000010> v000010{};
            constexpr MPL::Value<tfwrVal,tfwrVal::v000011> v000011{};
            constexpr MPL::Value<tfwrVal,tfwrVal::v111110> v111110{};
            constexpr MPL::Value<tfwrVal,tfwrVal::v111111> v111111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,tfwrVal> tfwr{}; 
        ///Store And Forward Enable
        enum class strfwdVal {
            v0=0x00000000,     ///<Reset. The transmission start threshold is programmed in TFWR[TFWR].
            v1=0x00000001,     ///<Enabled.
        };
        namespace strfwdValC{
            constexpr MPL::Value<strfwdVal,strfwdVal::v0> v0{};
            constexpr MPL::Value<strfwdVal,strfwdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,strfwdVal> strfwd{}; 
    }
    namespace EnetRdsr{    ///<Receive Descriptor Ring Start Register
        using Addr = Register::Address<0x400c0180,0x00000007,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> rDesStart{}; 
    }
    namespace EnetTdsr{    ///<Transmit Buffer Descriptor Ring Start Register
        using Addr = Register::Address<0x400c0184,0x00000007,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> xDesStart{}; 
    }
    namespace EnetMrbr{    ///<Maximum Receive Buffer Size Register
        using Addr = Register::Address<0x400c0188,0xffffc00f,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,4),Register::ReadWriteAccess,unsigned> rBufSize{}; 
    }
    namespace EnetRsfl{    ///<Receive FIFO Section Full Threshold
        using Addr = Register::Address<0x400c0190,0xffffff00,0,unsigned>;
        ///Value Of Receive FIFO Section Full Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxSectionFull{}; 
    }
    namespace EnetRsem{    ///<Receive FIFO Section Empty Threshold
        using Addr = Register::Address<0x400c0194,0xffe0ff00,0,unsigned>;
        ///Value Of The Receive FIFO Section Empty Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxSectionEmpty{}; 
        ///RX Status FIFO Section Empty Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> statSectionEmpty{}; 
    }
    namespace EnetRaem{    ///<Receive FIFO Almost Empty Threshold
        using Addr = Register::Address<0x400c0198,0xffffff00,0,unsigned>;
        ///Value Of The Receive FIFO Almost Empty Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxAlmostEmpty{}; 
    }
    namespace EnetRafl{    ///<Receive FIFO Almost Full Threshold
        using Addr = Register::Address<0x400c019c,0xffffff00,0,unsigned>;
        ///Value Of The Receive FIFO Almost Full Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxAlmostFull{}; 
    }
    namespace EnetTsem{    ///<Transmit FIFO Section Empty Threshold
        using Addr = Register::Address<0x400c01a0,0xffffff00,0,unsigned>;
        ///Value Of The Transmit FIFO Section Empty Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txSectionEmpty{}; 
    }
    namespace EnetTaem{    ///<Transmit FIFO Almost Empty Threshold
        using Addr = Register::Address<0x400c01a4,0xffffff00,0,unsigned>;
        ///Value of Transmit FIFO Almost Empty Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txAlmostEmpty{}; 
    }
    namespace EnetTafl{    ///<Transmit FIFO Almost Full Threshold
        using Addr = Register::Address<0x400c01a8,0xffffff00,0,unsigned>;
        ///Value Of The Transmit FIFO Almost Full Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txAlmostFull{}; 
    }
    namespace EnetTipg{    ///<Transmit Inter-Packet Gap
        using Addr = Register::Address<0x400c01ac,0xffffffe0,0,unsigned>;
        ///Transmit Inter-Packet Gap
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ipg{}; 
    }
    namespace EnetFtrl{    ///<Frame Truncation Length
        using Addr = Register::Address<0x400c01b0,0xffffc000,0,unsigned>;
        ///Frame Truncation Length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> truncFl{}; 
    }
    namespace EnetTacc{    ///<Transmit Accelerator Function Configuration
        using Addr = Register::Address<0x400c01c0,0xffffffe6,0,unsigned>;
        ///TX FIFO Shift-16
        enum class shift16Val {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Indicates to the transmit data FIFO that the written frames contain two additional octets before the frame data. This means the actual frame begins at bit 16 of the first word written into the FIFO. This function allows putting the frame payload on a 32-bit boundary in memory, as the 14-byte Ethernet header is extended to a 16-byte header.
        };
        namespace shift16ValC{
            constexpr MPL::Value<shift16Val,shift16Val::v0> v0{};
            constexpr MPL::Value<shift16Val,shift16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,shift16Val> shift16{}; 
        ///no description available
        enum class ipchkVal {
            v0=0x00000000,     ///<Checksum is not inserted.
            v1=0x00000001,     ///<If an IP frame is transmitted, the checksum is inserted automatically. The IP header checksum field must be cleared. If a non-IP frame is transmitted the frame is not modified.
        };
        namespace ipchkValC{
            constexpr MPL::Value<ipchkVal,ipchkVal::v0> v0{};
            constexpr MPL::Value<ipchkVal,ipchkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,ipchkVal> ipchk{}; 
        ///no description available
        enum class prochkVal {
            v0=0x00000000,     ///<Checksum not inserted.
            v1=0x00000001,     ///<If an IP frame with a known protocol is transmitted, the checksum is inserted automatically into the frame. The checksum field must be cleared. The other frames are not modified.
        };
        namespace prochkValC{
            constexpr MPL::Value<prochkVal,prochkVal::v0> v0{};
            constexpr MPL::Value<prochkVal,prochkVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,prochkVal> prochk{}; 
    }
    namespace EnetRacc{    ///<Receive Accelerator Function Configuration
        using Addr = Register::Address<0x400c01c4,0xffffff38,0,unsigned>;
        ///Enable Padding Removal For Short IP Frames
        enum class padremVal {
            v0=0x00000000,     ///<Padding not removed.
            v1=0x00000001,     ///<Any bytes following the IP payload section of the frame are removed from the frame.
        };
        namespace padremValC{
            constexpr MPL::Value<padremVal,padremVal::v0> v0{};
            constexpr MPL::Value<padremVal,padremVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,padremVal> padrem{}; 
        ///Enable Discard Of Frames With Wrong IPv4 Header Checksum
        enum class ipdisVal {
            v0=0x00000000,     ///<Frames with wrong IPv4 header checksum are not discarded.
            v1=0x00000001,     ///<If an IPv4 frame is received with a mismatching header checksum, the frame is discarded. IPv6 has no header checksum and is not affected by this setting. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
        };
        namespace ipdisValC{
            constexpr MPL::Value<ipdisVal,ipdisVal::v0> v0{};
            constexpr MPL::Value<ipdisVal,ipdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ipdisVal> ipdis{}; 
        ///Enable Discard Of Frames With Wrong Protocol Checksum
        enum class prodisVal {
            v0=0x00000000,     ///<Frames with wrong checksum are not discarded.
            v1=0x00000001,     ///<If a TCP/IP, UDP/IP, or ICMP/IP frame is received that has a wrong TCP, UDP, or ICMP checksum, the frame is discarded. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
        };
        namespace prodisValC{
            constexpr MPL::Value<prodisVal,prodisVal::v0> v0{};
            constexpr MPL::Value<prodisVal,prodisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,prodisVal> prodis{}; 
        ///Enable Discard Of Frames With MAC Layer Errors
        enum class linedisVal {
            v0=0x00000000,     ///<Frames with errors are not discarded.
            v1=0x00000001,     ///<Any frame received with a CRC, length, or PHY error is automatically discarded and not forwarded to the user application interface.
        };
        namespace linedisValC{
            constexpr MPL::Value<linedisVal,linedisVal::v0> v0{};
            constexpr MPL::Value<linedisVal,linedisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,linedisVal> linedis{}; 
        ///RX FIFO Shift-16
        enum class shift16Val {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Instructs the MAC to write two additional bytes in front of each frame received into the RX FIFO.
        };
        namespace shift16ValC{
            constexpr MPL::Value<shift16Val,shift16Val::v0> v0{};
            constexpr MPL::Value<shift16Val,shift16Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,shift16Val> shift16{}; 
    }
    namespace EnetRmonTPackets{    ///<Tx Packet Count Statistic Register
        using Addr = Register::Address<0x400c0204,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTBcPkt{    ///<Tx Broadcast Packets Statistic Register
        using Addr = Register::Address<0x400c0208,0xffff0000,0,unsigned>;
        ///Broadcast packets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTMcPkt{    ///<Tx Multicast Packets Statistic Register
        using Addr = Register::Address<0x400c020c,0xffff0000,0,unsigned>;
        ///Multicast packets
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTCrcAlign{    ///<Tx Packets with CRC/Align Error Statistic Register
        using Addr = Register::Address<0x400c0210,0xffff0000,0,unsigned>;
        ///Packets with CRC/align error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTUndersize{    ///<Tx Packets Less Than Bytes and Good CRC Statistic Register
        using Addr = Register::Address<0x400c0214,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTOversize{    ///<Tx Packets GT MAX_FL bytes and Good CRC Statistic Register
        using Addr = Register::Address<0x400c0218,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTFrag{    ///<Tx Packets Less Than 64 Bytes and Bad CRC Statistic Register
        using Addr = Register::Address<0x400c021c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTJab{    ///<Tx Packets Greater Than MAX_FL bytes and Bad CRC Statistic Register
        using Addr = Register::Address<0x400c0220,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTCol{    ///<Tx Collision Count Statistic Register
        using Addr = Register::Address<0x400c0224,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTP64{    ///<Tx 64-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c0228,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTP65to127{    ///<Tx 65- to 127-byte Packets Statistic Register
        using Addr = Register::Address<0x400c022c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTP128to255{    ///<Tx 128- to 255-byte Packets Statistic Register
        using Addr = Register::Address<0x400c0230,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTP256to511{    ///<Tx 256- to 511-byte Packets Statistic Register
        using Addr = Register::Address<0x400c0234,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTP512to1023{    ///<Tx 512- to 1023-byte Packets Statistic Register
        using Addr = Register::Address<0x400c0238,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTP1024to2047{    ///<Tx 1024- to 2047-byte Packets Statistic Register
        using Addr = Register::Address<0x400c023c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTPGte2048{    ///<Tx Packets Greater Than 2048 Bytes Statistic Register
        using Addr = Register::Address<0x400c0240,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
    }
    namespace EnetRmonTOctets{    ///<Tx Octets Statistic Register
        using Addr = Register::Address<0x400c0244,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txocts{}; 
    }
    namespace EnetIeeeTFrameOk{    ///<Frames Transmitted OK Statistic Register
        using Addr = Register::Address<0x400c024c,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeT1col{    ///<Frames Transmitted with Single Collision Statistic Register
        using Addr = Register::Address<0x400c0250,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTMcol{    ///<Frames Transmitted with Multiple Collisions Statistic Register
        using Addr = Register::Address<0x400c0254,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTDef{    ///<Frames Transmitted after Deferral Delay Statistic Register
        using Addr = Register::Address<0x400c0258,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTLcol{    ///<Frames Transmitted with Late Collision Statistic Register
        using Addr = Register::Address<0x400c025c,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTExcol{    ///<Frames Transmitted with Excessive Collisions Statistic Register
        using Addr = Register::Address<0x400c0260,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTMacerr{    ///<Frames Transmitted with Tx FIFO Underrun Statistic Register
        using Addr = Register::Address<0x400c0264,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTCserr{    ///<Frames Transmitted with Carrier Sense Error Statistic Register
        using Addr = Register::Address<0x400c0268,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTFdxfc{    ///<Flow Control Pause Frames Transmitted Statistic Register
        using Addr = Register::Address<0x400c0270,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeTOctetsOk{    ///<Octet Count for Frames Transmitted w/o Error Statistic Register
        using Addr = Register::Address<0x400c0274,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRPackets{    ///<Rx Packet Count Statistic Register
        using Addr = Register::Address<0x400c0284,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRBcPkt{    ///<Rx Broadcast Packets Statistic Register
        using Addr = Register::Address<0x400c0288,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRMcPkt{    ///<Rx Multicast Packets Statistic Register
        using Addr = Register::Address<0x400c028c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRCrcAlign{    ///<Rx Packets with CRC/Align Error Statistic Register
        using Addr = Register::Address<0x400c0290,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRUndersize{    ///<Rx Packets with Less Than 64 Bytes and Good CRC Statistic Register
        using Addr = Register::Address<0x400c0294,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonROversize{    ///<Rx Packets Greater Than MAX_FL and Good CRC Statistic Register
        using Addr = Register::Address<0x400c0298,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRFrag{    ///<Rx Packets Less Than 64 Bytes and Bad CRC Statistic Register
        using Addr = Register::Address<0x400c029c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRJab{    ///<Rx Packets Greater Than MAX_FL Bytes and Bad CRC Statistic Register
        using Addr = Register::Address<0x400c02a0,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRP64{    ///<Rx 64-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c02a8,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRP65to127{    ///<Rx 65- to 127-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c02ac,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRP128to255{    ///<Rx 128- to 255-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c02b0,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRP256to511{    ///<Rx 256- to 511-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c02b4,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRP512to1023{    ///<Rx 512- to 1023-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c02b8,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRP1024to2047{    ///<Rx 1024- to 2047-Byte Packets Statistic Register
        using Addr = Register::Address<0x400c02bc,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonRPGte2048{    ///<Rx Packets Greater than 2048 Bytes Statistic Register
        using Addr = Register::Address<0x400c02c0,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetRmonROctets{    ///<Rx Octets Statistic Register
        using Addr = Register::Address<0x400c02c4,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeRDrop{    ///<Frames not Counted Correctly Statistic Register
        using Addr = Register::Address<0x400c02c8,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeRFrameOk{    ///<Frames Received OK Statistic Register
        using Addr = Register::Address<0x400c02cc,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeRCrc{    ///<Frames Received with CRC Error Statistic Register
        using Addr = Register::Address<0x400c02d0,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeRAlign{    ///<Frames Received with Alignment Error Statistic Register
        using Addr = Register::Address<0x400c02d4,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeRMacerr{    ///<Receive FIFO Overflow Count Statistic Register
        using Addr = Register::Address<0x400c02d8,0xffff0000,0,unsigned>;
        ///Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeRFdxfc{    ///<Flow Control Pause Frames Received Statistic Register
        using Addr = Register::Address<0x400c02dc,0xffff0000,0,unsigned>;
        ///Pause frame count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetIeeeROctetsOk{    ///<Octet Count for Frames Received without Error Statistic Register
        using Addr = Register::Address<0x400c02e0,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
    }
    namespace EnetAtcr{    ///<Adjustable Timer Control Register
        using Addr = Register::Address<0x400c0400,0xffffd562,0,unsigned>;
        ///Enable Timer
        enum class enVal {
            v0=0x00000000,     ///<The timer stops at the current value.
            v1=0x00000001,     ///<The timer starts incrementing.
        };
        namespace enValC{
            constexpr MPL::Value<enVal,enVal::v0> v0{};
            constexpr MPL::Value<enVal,enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,enVal> en{}; 
        ///Enable One-Shot Offset Event
        enum class offenVal {
            v0=0x00000000,     ///<Disable.
            v1=0x00000001,     ///<The timer can be reset to zero when the given offset time is reached (offset event). The field is cleared when the offset event is reached, so no further event occurs until the field is set again. The timer offset value must be set before setting this field.
        };
        namespace offenValC{
            constexpr MPL::Value<offenVal,offenVal::v0> v0{};
            constexpr MPL::Value<offenVal,offenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,offenVal> offen{}; 
        ///Reset Timer On Offset Event
        enum class offrstVal {
            v0=0x00000000,     ///<The timer is not affected and no action occurs, besides clearing OFFEN, when the offset is reached.
            v1=0x00000001,     ///<If OFFEN is set, the timer resets to zero when the offset setting is reached. The offset event does not cause a timer interrupt.
        };
        namespace offrstValC{
            constexpr MPL::Value<offrstVal,offrstVal::v0> v0{};
            constexpr MPL::Value<offrstVal,offrstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,offrstVal> offrst{}; 
        ///Enable Periodical Event
        enum class perenVal {
            v0=0x00000000,     ///<Disable.
            v1=0x00000001,     ///<A period event interrupt can be generated (EIR[TS_TIMER]) and the event signal output is asserted when the timer wraps around according to the periodic setting ATPER. The timer period value must be set before setting this bit. Not all devices contain the event signal output. See the chip configuration details.
        };
        namespace perenValC{
            constexpr MPL::Value<perenVal,perenVal::v0> v0{};
            constexpr MPL::Value<perenVal,perenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,perenVal> peren{}; 
        ///no description available
        enum class pinperVal {
            v0=0x00000000,     ///<Disable.
            v1=0x00000001,     ///<Enable.
        };
        namespace pinperValC{
            constexpr MPL::Value<pinperVal,pinperVal::v0> v0{};
            constexpr MPL::Value<pinperVal,pinperVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,pinperVal> pinper{}; 
        ///Reset Timer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> restart{}; 
        ///Capture Timer Value
        enum class captureVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<The current time is captured and can be read from the ATVR register.
        };
        namespace captureValC{
            constexpr MPL::Value<captureVal,captureVal::v0> v0{};
            constexpr MPL::Value<captureVal,captureVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,captureVal> capture{}; 
        ///Enable Timer Slave Mode
        enum class slaveVal {
            v0=0x00000000,     ///<The timer is active and all configuration fields in this register are relevant.
            v1=0x00000001,     ///<The internal timer is disabled and the externally provided timer value is used. All other fields, except CAPTURE, in this register have no effect. CAPTURE can still be used to capture the current timer value.
        };
        namespace slaveValC{
            constexpr MPL::Value<slaveVal,slaveVal::v0> v0{};
            constexpr MPL::Value<slaveVal,slaveVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,slaveVal> slave{}; 
    }
    namespace EnetAtvr{    ///<Timer Value Register
        using Addr = Register::Address<0x400c0404,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> atime{}; 
    }
    namespace EnetAtoff{    ///<Timer Offset Register
        using Addr = Register::Address<0x400c0408,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace EnetAtper{    ///<Timer Period Register
        using Addr = Register::Address<0x400c040c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> period{}; 
    }
    namespace EnetAtcor{    ///<Timer Correction Register
        using Addr = Register::Address<0x400c0410,0x80000000,0,unsigned>;
        ///Correction Counter Wrap-Around Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> cor{}; 
    }
    namespace EnetAtinc{    ///<Time-Stamping Clock Period Register
        using Addr = Register::Address<0x400c0414,0xffff8080,0,unsigned>;
        ///Clock Period Of The Timestamping Clock (ts_clk) In Nanoseconds
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> inc{}; 
        ///Correction Increment Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> incCorr{}; 
    }
    namespace EnetAtstmp{    ///<Timestamp of Last Transmitted Frame
        using Addr = Register::Address<0x400c0418,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> timestamp{}; 
    }
    namespace EnetTgsr{    ///<Timer Global Status Register
        using Addr = Register::Address<0x400c0604,0xfffffff0,0,unsigned>;
        ///Copy Of Timer Flag For Channel 0
        enum class tf0Val {
            v0=0x00000000,     ///<Timer Flag for Channel 0 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 0 is set
        };
        namespace tf0ValC{
            constexpr MPL::Value<tf0Val,tf0Val::v0> v0{};
            constexpr MPL::Value<tf0Val,tf0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tf0Val> tf0{}; 
        ///Copy Of Timer Flag For Channel 1
        enum class tf1Val {
            v0=0x00000000,     ///<Timer Flag for Channel 1 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 1 is set
        };
        namespace tf1ValC{
            constexpr MPL::Value<tf1Val,tf1Val::v0> v0{};
            constexpr MPL::Value<tf1Val,tf1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,tf1Val> tf1{}; 
        ///Copy Of Timer Flag For Channel 2
        enum class tf2Val {
            v0=0x00000000,     ///<Timer Flag for Channel 2 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 2 is set
        };
        namespace tf2ValC{
            constexpr MPL::Value<tf2Val,tf2Val::v0> v0{};
            constexpr MPL::Value<tf2Val,tf2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,tf2Val> tf2{}; 
        ///Copy Of Timer Flag For Channel 3
        enum class tf3Val {
            v0=0x00000000,     ///<Timer Flag for Channel 3 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 3 is set
        };
        namespace tf3ValC{
            constexpr MPL::Value<tf3Val,tf3Val::v0> v0{};
            constexpr MPL::Value<tf3Val,tf3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tf3Val> tf3{}; 
    }
    namespace EnetTcsr0{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0608,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class tdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tdreVal> tdre{}; 
        ///Timer Mode
        enum class tmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1000=0x00000008,     ///<Reserved
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1100=0x0000000c,     ///<Reserved
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        namespace tmodeValC{
            constexpr MPL::Value<tmodeVal,tmodeVal::v0000> v0000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0001> v0001{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0010> v0010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0011> v0011{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0100> v0100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0101> v0101{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0110> v0110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0111> v0111{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1000> v1000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1010> v1010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v10x1> v10x1{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1100> v1100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1110> v1110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,tmodeVal> tmode{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Timer Flag
        enum class tfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        namespace tfValC{
            constexpr MPL::Value<tfVal,tfVal::v0> v0{};
            constexpr MPL::Value<tfVal,tfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfVal> tf{}; 
    }
    namespace EnetTcsr1{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0610,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class tdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tdreVal> tdre{}; 
        ///Timer Mode
        enum class tmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1000=0x00000008,     ///<Reserved
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1100=0x0000000c,     ///<Reserved
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        namespace tmodeValC{
            constexpr MPL::Value<tmodeVal,tmodeVal::v0000> v0000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0001> v0001{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0010> v0010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0011> v0011{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0100> v0100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0101> v0101{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0110> v0110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0111> v0111{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1000> v1000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1010> v1010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v10x1> v10x1{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1100> v1100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1110> v1110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,tmodeVal> tmode{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Timer Flag
        enum class tfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        namespace tfValC{
            constexpr MPL::Value<tfVal,tfVal::v0> v0{};
            constexpr MPL::Value<tfVal,tfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfVal> tf{}; 
    }
    namespace EnetTcsr2{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0618,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class tdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tdreVal> tdre{}; 
        ///Timer Mode
        enum class tmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1000=0x00000008,     ///<Reserved
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1100=0x0000000c,     ///<Reserved
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        namespace tmodeValC{
            constexpr MPL::Value<tmodeVal,tmodeVal::v0000> v0000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0001> v0001{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0010> v0010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0011> v0011{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0100> v0100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0101> v0101{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0110> v0110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0111> v0111{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1000> v1000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1010> v1010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v10x1> v10x1{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1100> v1100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1110> v1110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,tmodeVal> tmode{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Timer Flag
        enum class tfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        namespace tfValC{
            constexpr MPL::Value<tfVal,tfVal::v0> v0{};
            constexpr MPL::Value<tfVal,tfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfVal> tf{}; 
    }
    namespace EnetTcsr3{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0620,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class tdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        namespace tdreValC{
            constexpr MPL::Value<tdreVal,tdreVal::v0> v0{};
            constexpr MPL::Value<tdreVal,tdreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,tdreVal> tdre{}; 
        ///Timer Mode
        enum class tmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1000=0x00000008,     ///<Reserved
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1100=0x0000000c,     ///<Reserved
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        namespace tmodeValC{
            constexpr MPL::Value<tmodeVal,tmodeVal::v0000> v0000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0001> v0001{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0010> v0010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0011> v0011{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0100> v0100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0101> v0101{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0110> v0110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v0111> v0111{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1000> v1000{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1010> v1010{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v10x1> v10x1{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1100> v1100{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1110> v1110{};
            constexpr MPL::Value<tmodeVal,tmodeVal::v1111> v1111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,tmodeVal> tmode{}; 
        ///Timer Interrupt Enable
        enum class tieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        namespace tieValC{
            constexpr MPL::Value<tieVal,tieVal::v0> v0{};
            constexpr MPL::Value<tieVal,tieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,tieVal> tie{}; 
        ///Timer Flag
        enum class tfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        namespace tfValC{
            constexpr MPL::Value<tfVal,tfVal::v0> v0{};
            constexpr MPL::Value<tfVal,tfVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,tfVal> tf{}; 
    }
    namespace EnetTccr0{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c060c,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
    }
    namespace EnetTccr1{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c0614,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
    }
    namespace EnetTccr2{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c061c,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
    }
    namespace EnetTccr3{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c0624,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
    }
}
