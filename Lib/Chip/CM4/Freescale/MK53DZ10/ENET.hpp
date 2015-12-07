#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Ethernet MAC-NET Core
    namespace EnetEir{    ///<Interrupt Event Register
        using Addr = Register::Address<0x400c0004,0x80007fff,0,unsigned>;
        ///Timestamp timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsTimer{}; 
        namespace TstimerValC{
        }
        ///Transmit timestamp available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsAvail{}; 
        namespace TsavailValC{
        }
        ///Node wake-up request indication
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///Payload receive error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> plr{}; 
        namespace PlrValC{
        }
        ///Transmit FIFO underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> un{}; 
        namespace UnValC{
        }
        ///Collision Retry Limit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rl{}; 
        namespace RlValC{
        }
        ///Late Collision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lc{}; 
        namespace LcValC{
        }
        ///Ethernet Bus Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eberr{}; 
        namespace EberrValC{
        }
        ///MII Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mii{}; 
        namespace MiiValC{
        }
        ///Receive Buffer Interrupt.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxb{}; 
        namespace RxbValC{
        }
        ///Receive Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rxf{}; 
        namespace RxfValC{
        }
        ///Transmit Buffer Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> txb{}; 
        namespace TxbValC{
        }
        ///Transmit Frame Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> txf{}; 
        namespace TxfValC{
        }
        ///Graceful Stop Complete
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> gra{}; 
        namespace GraValC{
        }
        ///Babbling Transmit Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> babt{}; 
        namespace BabtValC{
        }
        ///Babbling Receive Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> babr{}; 
        namespace BabrValC{
        }
    }
    namespace EnetEimr{    ///<Interrupt Mask Register
        using Addr = Register::Address<0x400c0008,0x80007fff,0,unsigned>;
        ///TS_TIMER interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> tsTimer{}; 
        namespace TstimerValC{
        }
        ///TS_AVAIL interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> tsAvail{}; 
        namespace TsavailValC{
        }
        ///WAKEUP interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> wakeup{}; 
        namespace WakeupValC{
        }
        ///PLR interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> plr{}; 
        namespace PlrValC{
        }
        ///UN interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> un{}; 
        namespace UnValC{
        }
        ///RL interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> rl{}; 
        namespace RlValC{
        }
        ///LC interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> lc{}; 
        namespace LcValC{
        }
        ///EBERR interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> eberr{}; 
        namespace EberrValC{
        }
        ///MII interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> mii{}; 
        namespace MiiValC{
        }
        ///RXB interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rxb{}; 
        namespace RxbValC{
        }
        ///RXF interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> rxf{}; 
        namespace RxfValC{
        }
        ///TXB interrupt mask
        enum class TxbVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,TxbVal> txb{}; 
        namespace TxbValC{
            constexpr Register::FieldValue<decltype(txb),TxbVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txb),TxbVal::v1> v1{};
        }
        ///TXF interrupt mask
        enum class TxfVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,TxfVal> txf{}; 
        namespace TxfValC{
            constexpr Register::FieldValue<decltype(txf),TxfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txf),TxfVal::v1> v1{};
        }
        ///GRA interrupt mask
        enum class GraVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,GraVal> gra{}; 
        namespace GraValC{
            constexpr Register::FieldValue<decltype(gra),GraVal::v0> v0{};
            constexpr Register::FieldValue<decltype(gra),GraVal::v1> v1{};
        }
        ///BABT interrupt mask
        enum class BabtVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,BabtVal> babt{}; 
        namespace BabtValC{
            constexpr Register::FieldValue<decltype(babt),BabtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(babt),BabtVal::v1> v1{};
        }
        ///BABR interrupt mask
        enum class BabrVal {
            v0=0x00000000,     ///<The corresponding interrupt source is masked.
            v1=0x00000001,     ///<The corresponding interrupt source is not masked.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,BabrVal> babr{}; 
        namespace BabrValC{
            constexpr Register::FieldValue<decltype(babr),BabrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(babr),BabrVal::v1> v1{};
        }
    }
    namespace EnetRdar{    ///<Receive Descriptor Active Register
        using Addr = Register::Address<0x400c0010,0xfeffffff,0,unsigned>;
        ///Receive descriptor active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> rdar{}; 
        namespace RdarValC{
        }
    }
    namespace EnetTdar{    ///<Transmit Descriptor Active Register
        using Addr = Register::Address<0x400c0014,0xfeffffff,0,unsigned>;
        ///Transmit descriptor active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> tdar{}; 
        namespace TdarValC{
        }
    }
    namespace EnetEcr{    ///<Ethernet Control Register
        using Addr = Register::Address<0x400c0024,0xffffff20,0,unsigned>;
        ///Ethernet MAC reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
        }
        ///Ethernet enable
        enum class EtherenVal {
            v0=0x00000000,     ///<Reception immediately stops and transmission stops after a bad CRC is appended to any currently transmitted frame.
            v1=0x00000001,     ///<MAC is enabled, and reception and transmission are possible.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,EtherenVal> etheren{}; 
        namespace EtherenValC{
            constexpr Register::FieldValue<decltype(etheren),EtherenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(etheren),EtherenVal::v1> v1{};
        }
        ///Magic packet detection enable
        enum class MagicenVal {
            v0=0x00000000,     ///<Magic detection logic disabled
            v1=0x00000001,     ///<The MAC core detects magic packets and asserts EIR[WAKEUP] when a frame is detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MagicenVal> magicen{}; 
        namespace MagicenValC{
            constexpr Register::FieldValue<decltype(magicen),MagicenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(magicen),MagicenVal::v1> v1{};
        }
        ///Sleep mode enable
        enum class SleepVal {
            v0=0x00000000,     ///<Normal operating mode.
            v1=0x00000001,     ///<Sleep mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SleepVal> sleep{}; 
        namespace SleepValC{
            constexpr Register::FieldValue<decltype(sleep),SleepVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleep),SleepVal::v1> v1{};
        }
        ///EN1588 enable
        enum class En1588Val {
            v0=0x00000000,     ///<Legacy FEC buffer descriptors and functions enabled.
            v1=0x00000001,     ///<Enhanced frame time-stamping functions enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,En1588Val> en1588{}; 
        namespace En1588ValC{
            constexpr Register::FieldValue<decltype(en1588),En1588Val::v0> v0{};
            constexpr Register::FieldValue<decltype(en1588),En1588Val::v1> v1{};
        }
        ///Debug enable
        enum class DbgenVal {
            v0=0x00000000,     ///<MAC continues operation in debug mode.
            v1=0x00000001,     ///<MAC enters hardware freeze mode when the processor is in debug mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DbgenVal> dbgen{}; 
        namespace DbgenValC{
            constexpr Register::FieldValue<decltype(dbgen),DbgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dbgen),DbgenVal::v1> v1{};
        }
        ///STOPEN Signal Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stopen{}; 
        namespace StopenValC{
        }
    }
    namespace EnetMmfr{    ///<MII Management Frame Register
        using Addr = Register::Address<0x400c0040,0x00000000,0,unsigned>;
        ///Management frame data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> data{}; 
        namespace DataValC{
        }
        ///Turn around
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ta{}; 
        namespace TaValC{
        }
        ///Register address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,18),Register::ReadWriteAccess,unsigned> ra{}; 
        namespace RaValC{
        }
        ///PHY address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,23),Register::ReadWriteAccess,unsigned> pa{}; 
        namespace PaValC{
        }
        ///Operation code
        enum class OpVal {
            v00=0x00000000,     ///<Write frame operation, but not MII compliant.
            v01=0x00000001,     ///<Write frame operation for a valid MII management frame.
            v10=0x00000002,     ///<Read frame operation for a valid MII management frame.
            v11=0x00000003,     ///<Read frame operation, but not MII compliant.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,OpVal> op{}; 
        namespace OpValC{
            constexpr Register::FieldValue<decltype(op),OpVal::v00> v00{};
            constexpr Register::FieldValue<decltype(op),OpVal::v01> v01{};
            constexpr Register::FieldValue<decltype(op),OpVal::v10> v10{};
            constexpr Register::FieldValue<decltype(op),OpVal::v11> v11{};
        }
        ///Start of frame delimiter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
    }
    namespace EnetMscr{    ///<MII Speed Control Register
        using Addr = Register::Address<0x400c0044,0xfffff801,0,unsigned>;
        ///MII speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,1),Register::ReadWriteAccess,unsigned> miiSpeed{}; 
        namespace MiispeedValC{
        }
        ///Disable preamble
        enum class DispreVal {
            v0=0x00000000,     ///<Preamble enabled.
            v1=0x00000001,     ///<Preamble (32 ones) is not prepended to the MII management frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DispreVal> disPre{}; 
        namespace DispreValC{
            constexpr Register::FieldValue<decltype(disPre),DispreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(disPre),DispreVal::v1> v1{};
        }
        ///Holdtime on MDIO output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> holdtime{}; 
        namespace HoldtimeValC{
        }
    }
    namespace EnetMibc{    ///<MIB Control Register
        using Addr = Register::Address<0x400c0064,0x1fffffff,0,unsigned>;
        ///MIB clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> mibClear{}; 
        namespace MibclearValC{
        }
        ///MIB idle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> mibIdle{}; 
        namespace MibidleValC{
        }
        ///Disable MIB logic
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> mibDis{}; 
        namespace MibdisValC{
        }
    }
    namespace EnetRcr{    ///<Receive Control Register
        using Addr = Register::Address<0x400c0084,0x00000cc0,0,unsigned>;
        ///Internal loopback
        enum class LoopVal {
            v0=0x00000000,     ///<Loopback disabled.
            v1=0x00000001,     ///<Transmitted frames are looped back internal to the device and transmit MII output signals are not asserted. DRT must be cleared. .
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,LoopVal> loop{}; 
        namespace LoopValC{
            constexpr Register::FieldValue<decltype(loop),LoopVal::v0> v0{};
            constexpr Register::FieldValue<decltype(loop),LoopVal::v1> v1{};
        }
        ///Disable receive on transmit
        enum class DrtVal {
            v0=0x00000000,     ///<Receive path operates independently of transmit (use for full duplex or to monitor transmit activity in half duplex mode).
            v1=0x00000001,     ///<Disable reception of frames while transmitting (normally used for half duplex mode).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,DrtVal> drt{}; 
        namespace DrtValC{
            constexpr Register::FieldValue<decltype(drt),DrtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(drt),DrtVal::v1> v1{};
        }
        ///Media independent interface mode
        enum class MiimodeVal {
            v1=0x00000001,     ///<MII or RMII mode, as indicated by the RMII_MODE bit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,MiimodeVal> miiMode{}; 
        namespace MiimodeValC{
            constexpr Register::FieldValue<decltype(miiMode),MiimodeVal::v1> v1{};
        }
        ///Promiscuous mode. All frames are accepted regardless of address matching.
        enum class PromVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PromVal> prom{}; 
        namespace PromValC{
            constexpr Register::FieldValue<decltype(prom),PromVal::v0> v0{};
            constexpr Register::FieldValue<decltype(prom),PromVal::v1> v1{};
        }
        ///Broadcast frame reject
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bcRej{}; 
        namespace BcrejValC{
        }
        ///Flow control enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fce{}; 
        namespace FceValC{
        }
        ///RMII mode enable
        enum class RmiimodeVal {
            v0=0x00000000,     ///<MAC configured for MII mode.
            v1=0x00000001,     ///<MAC configured for RMII operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,RmiimodeVal> rmiiMode{}; 
        namespace RmiimodeValC{
            constexpr Register::FieldValue<decltype(rmiiMode),RmiimodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rmiiMode),RmiimodeVal::v1> v1{};
        }
        ///no description available
        enum class Rmii10tVal {
            v0=0x00000000,     ///<100 Mbps operation
            v1=0x00000001,     ///<10 Mbps operation
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Rmii10tVal> rmii10t{}; 
        namespace Rmii10tValC{
            constexpr Register::FieldValue<decltype(rmii10t),Rmii10tVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rmii10t),Rmii10tVal::v1> v1{};
        }
        ///Enable frame padding remove on receive
        enum class PadenVal {
            v0=0x00000000,     ///<No padding is removed on receive by the MAC.
            v1=0x00000001,     ///<Padding is removed from received frames.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,PadenVal> paden{}; 
        namespace PadenValC{
            constexpr Register::FieldValue<decltype(paden),PadenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(paden),PadenVal::v1> v1{};
        }
        ///Terminate/forward pause frames.
        enum class PaufwdVal {
            v0=0x00000000,     ///<Pause frames are terminated and discarded in the MAC.
            v1=0x00000001,     ///<Pause frames are forwarded to the user application.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,PaufwdVal> paufwd{}; 
        namespace PaufwdValC{
            constexpr Register::FieldValue<decltype(paufwd),PaufwdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(paufwd),PaufwdVal::v1> v1{};
        }
        ///Terminate/forward received CRC
        enum class CrcfwdVal {
            v0=0x00000000,     ///<The CRC field of received frames is transmitted to the user application.
            v1=0x00000001,     ///<The CRC field is stripped from the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,CrcfwdVal> crcfwd{}; 
        namespace CrcfwdValC{
            constexpr Register::FieldValue<decltype(crcfwd),CrcfwdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crcfwd),CrcfwdVal::v1> v1{};
        }
        ///MAC control frame enable
        enum class CfenVal {
            v0=0x00000000,     ///<MAC control frames with any opcode other than 0x0001 are accepted and forwarded to the client interface.
            v1=0x00000001,     ///<MAC control frames with any opcode other than 0x0001 (pause frame) are silently discarded.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,CfenVal> cfen{}; 
        namespace CfenValC{
            constexpr Register::FieldValue<decltype(cfen),CfenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cfen),CfenVal::v1> v1{};
        }
        ///Maximum frame length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> maxFl{}; 
        namespace MaxflValC{
        }
        ///Payload length check disable
        enum class NlcVal {
            v0=0x00000000,     ///<The payload length check is disabled
            v1=0x00000001,     ///<The core checks the frame's payload length with the frame length/type field. Errors are indicated in the EIR[PLC] bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,NlcVal> nlc{}; 
        namespace NlcValC{
            constexpr Register::FieldValue<decltype(nlc),NlcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nlc),NlcVal::v1> v1{};
        }
        ///Graceful receive stopped
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> grs{}; 
        namespace GrsValC{
        }
    }
    namespace EnetTcr{    ///<Transmit Control Register
        using Addr = Register::Address<0x400c00c4,0xfffffc02,0,unsigned>;
        ///Graceful transmit stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gts{}; 
        namespace GtsValC{
        }
        ///Full duplex enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fden{}; 
        namespace FdenValC{
        }
        ///Transmit frame control pause
        enum class TfcpauseVal {
            v0=0x00000000,     ///<No PAUSE frame transmitted.
            v1=0x00000001,     ///<The MAC stops transmission of data frames after the current transmission is complete.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TfcpauseVal> tfcPause{}; 
        namespace TfcpauseValC{
            constexpr Register::FieldValue<decltype(tfcPause),TfcpauseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tfcPause),TfcpauseVal::v1> v1{};
        }
        ///Receive frame control pause
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rfcPause{}; 
        namespace RfcpauseValC{
        }
        ///Source MAC address select on transmit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> addsel{}; 
        namespace AddselValC{
        }
        ///Set MAC address on transmit
        enum class AddinsVal {
            v0=0x00000000,     ///<The source MAC address is not modified by the MAC.
            v1=0x00000001,     ///<The MAC overwrites the source MAC address with the programmed MAC address according to ADDSEL.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,AddinsVal> addins{}; 
        namespace AddinsValC{
            constexpr Register::FieldValue<decltype(addins),AddinsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(addins),AddinsVal::v1> v1{};
        }
        ///Forward frame from application with CRC
        enum class CrcfwdVal {
            v0=0x00000000,     ///<TxBD[TC] controls whether the frame has a CRC from the application
            v1=0x00000001,     ///<The transmitter does not append any CRC to transmitted frames as it is expecting a frame with CRC from the application.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,CrcfwdVal> crcfwd{}; 
        namespace CrcfwdValC{
            constexpr Register::FieldValue<decltype(crcfwd),CrcfwdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crcfwd),CrcfwdVal::v1> v1{};
        }
    }
    namespace EnetPalr{    ///<Physical Address Lower Register
        using Addr = Register::Address<0x400c00e4,0x00000000,0,unsigned>;
        ///Pause address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> paddr1{}; 
        namespace Paddr1ValC{
        }
    }
    namespace EnetPaur{    ///<Physical Address Upper Register
        using Addr = Register::Address<0x400c00e8,0x00000000,0,unsigned>;
        ///Type field in PAUSE frames.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> type{}; 
        namespace TypeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> paddr2{}; 
        namespace Paddr2ValC{
        }
    }
    namespace EnetOpd{    ///<Opcode/Pause Duration Register
        using Addr = Register::Address<0x400c00ec,0x00000000,0,unsigned>;
        ///Pause duration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> pauseDur{}; 
        namespace PausedurValC{
        }
        ///Opcode field in PAUSE frames
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> opcode{}; 
        namespace OpcodeValC{
        }
    }
    namespace EnetIaur{    ///<Descriptor Individual Upper Address Register
        using Addr = Register::Address<0x400c0118,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iaddr1{}; 
        namespace Iaddr1ValC{
        }
    }
    namespace EnetIalr{    ///<Descriptor Individual Lower Address Register
        using Addr = Register::Address<0x400c011c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> iaddr2{}; 
        namespace Iaddr2ValC{
        }
    }
    namespace EnetGaur{    ///<Descriptor Group Upper Address Register
        using Addr = Register::Address<0x400c0120,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gaddr1{}; 
        namespace Gaddr1ValC{
        }
    }
    namespace EnetGalr{    ///<Descriptor Group Lower Address Register
        using Addr = Register::Address<0x400c0124,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> gaddr2{}; 
        namespace Gaddr2ValC{
        }
    }
    namespace EnetTfwr{    ///<Transmit FIFO Watermark Register
        using Addr = Register::Address<0x400c0144,0xfffffec0,0,unsigned>;
        ///Transmit FIFO write
        enum class TfwrVal {
            v000000=0x00000000,     ///<64 bytes written
            v000001=0x00000001,     ///<64 bytes written
            v000010=0x00000002,     ///<128 bytes written
            v000011=0x00000003,     ///<192 bytes written
            v111111=0x0000003f,     ///<4032 bytes written
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,TfwrVal> tfwr{}; 
        namespace TfwrValC{
            constexpr Register::FieldValue<decltype(tfwr),TfwrVal::v000000> v000000{};
            constexpr Register::FieldValue<decltype(tfwr),TfwrVal::v000001> v000001{};
            constexpr Register::FieldValue<decltype(tfwr),TfwrVal::v000010> v000010{};
            constexpr Register::FieldValue<decltype(tfwr),TfwrVal::v000011> v000011{};
            constexpr Register::FieldValue<decltype(tfwr),TfwrVal::v111111> v111111{};
        }
        ///Store and forward enable
        enum class StrfwdVal {
            v0=0x00000000,     ///<Disabled, the transmission start threshold is programmed in TFWR.
            v1=0x00000001,     ///<Enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,StrfwdVal> strfwd{}; 
        namespace StrfwdValC{
            constexpr Register::FieldValue<decltype(strfwd),StrfwdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(strfwd),StrfwdVal::v1> v1{};
        }
    }
    namespace EnetRdsr{    ///<Receive Descriptor Ring Start Register
        using Addr = Register::Address<0x400c0180,0x00000007,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> rDesStart{}; 
        namespace RdesstartValC{
        }
    }
    namespace EnetTdsr{    ///<Transmit Buffer Descriptor Ring Start Register
        using Addr = Register::Address<0x400c0184,0x00000007,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> xDesStart{}; 
        namespace XdesstartValC{
        }
    }
    namespace EnetMrbr{    ///<Maximum Receive Buffer Size Register
        using Addr = Register::Address<0x400c0188,0xffffc00f,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,4),Register::ReadWriteAccess,unsigned> rBufSize{}; 
        namespace RbufsizeValC{
        }
    }
    namespace EnetRsfl{    ///<Receive FIFO Section Full Threshold
        using Addr = Register::Address<0x400c0190,0xffffff00,0,unsigned>;
        ///Value of receive FIFO section full threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxSectionFull{}; 
        namespace RxsectionfullValC{
        }
    }
    namespace EnetRsem{    ///<Receive FIFO Section Empty Threshold
        using Addr = Register::Address<0x400c0194,0xffffff00,0,unsigned>;
        ///Value of the receive FIFO section empty threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxSectionEmpty{}; 
        namespace RxsectionemptyValC{
        }
    }
    namespace EnetRaem{    ///<Receive FIFO Almost Empty Threshold
        using Addr = Register::Address<0x400c0198,0xffffff00,0,unsigned>;
        ///Value of the receive FIFO almost empty threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxAlmostEmpty{}; 
        namespace RxalmostemptyValC{
        }
    }
    namespace EnetRafl{    ///<Receive FIFO Almost Full Threshold
        using Addr = Register::Address<0x400c019c,0xffffff00,0,unsigned>;
        ///Value of the receive FIFO almost full threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxAlmostFull{}; 
        namespace RxalmostfullValC{
        }
    }
    namespace EnetTsem{    ///<Transmit FIFO Section Empty Threshold
        using Addr = Register::Address<0x400c01a0,0xffffff00,0,unsigned>;
        ///Value of the transmit FIFO section empty threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txSectionEmpty{}; 
        namespace TxsectionemptyValC{
        }
    }
    namespace EnetTaem{    ///<Transmit FIFO Almost Empty Threshold
        using Addr = Register::Address<0x400c01a4,0xffffff00,0,unsigned>;
        ///Value of transmit FIFO almost empty threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txAlmostEmpty{}; 
        namespace TxalmostemptyValC{
        }
    }
    namespace EnetTafl{    ///<Transmit FIFO Almost Full Threshold
        using Addr = Register::Address<0x400c01a8,0xffffff00,0,unsigned>;
        ///Value of the transmit FIFO almost full threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txAlmostFull{}; 
        namespace TxalmostfullValC{
        }
    }
    namespace EnetTipg{    ///<Transmit Inter-Packet Gap
        using Addr = Register::Address<0x400c01ac,0xffffffe0,0,unsigned>;
        ///Transmit inter-packet gap
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ipg{}; 
        namespace IpgValC{
        }
    }
    namespace EnetFtrl{    ///<Frame Truncation Length
        using Addr = Register::Address<0x400c01b0,0xffffc000,0,unsigned>;
        ///Frame truncation length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> truncFl{}; 
        namespace TruncflValC{
        }
    }
    namespace EnetTacc{    ///<Transmit Accelerator Function Configuration
        using Addr = Register::Address<0x400c01c0,0xffffffe6,0,unsigned>;
        ///TX FIFO shift-16
        enum class Shift16Val {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Indicates to the transmit data FIFO, that the written frames contain two additional octets before the frame data. This means the actual frame starts at bit 16 of the first word written into the FIFO. This function allows putting the frame payload on a 32-bit boundary in memory, as the 14-byte Ethernet header is extended to a 16-byte header.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Shift16Val> shift16{}; 
        namespace Shift16ValC{
            constexpr Register::FieldValue<decltype(shift16),Shift16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(shift16),Shift16Val::v1> v1{};
        }
        ///no description available
        enum class IpchkVal {
            v0=0x00000000,     ///<Checksum is not inserted.
            v1=0x00000001,     ///<If an IP frame is transmitted, the checksum is inserted automatically. The IP header checksum field must be cleared. If a non-IP frame is transmitted the frame is not modified.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IpchkVal> ipchk{}; 
        namespace IpchkValC{
            constexpr Register::FieldValue<decltype(ipchk),IpchkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ipchk),IpchkVal::v1> v1{};
        }
        ///no description available
        enum class ProchkVal {
            v0=0x00000000,     ///<Checksum not inserted.
            v1=0x00000001,     ///<If an IP frame with a known protocol is transmitted, the checksum is inserted automatically into the frame. The checksum field must be cleared. The other frames are not modified.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ProchkVal> prochk{}; 
        namespace ProchkValC{
            constexpr Register::FieldValue<decltype(prochk),ProchkVal::v0> v0{};
            constexpr Register::FieldValue<decltype(prochk),ProchkVal::v1> v1{};
        }
    }
    namespace EnetRacc{    ///<Receive Accelerator Function Configuration
        using Addr = Register::Address<0x400c01c4,0xffffff38,0,unsigned>;
        ///Enable padding removal for short IP frames.
        enum class PadremVal {
            v0=0x00000000,     ///<Padding not removed.
            v1=0x00000001,     ///<Any bytes following the IP payload section of the frame are removed from the frame.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PadremVal> padrem{}; 
        namespace PadremValC{
            constexpr Register::FieldValue<decltype(padrem),PadremVal::v0> v0{};
            constexpr Register::FieldValue<decltype(padrem),PadremVal::v1> v1{};
        }
        ///Enable discard of frames with wrong IPv4 header checksum.
        enum class IpdisVal {
            v0=0x00000000,     ///<Frames with wrong IPv4 header checksum are not discarded.
            v1=0x00000001,     ///<If an IPv4 frame is received with a mismatching header checksum, the frame is discarded. IPv6 has no header checksum and is not affected by this setting. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IpdisVal> ipdis{}; 
        namespace IpdisValC{
            constexpr Register::FieldValue<decltype(ipdis),IpdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ipdis),IpdisVal::v1> v1{};
        }
        ///Enable discard of frames with wrong protocol checksum
        enum class ProdisVal {
            v0=0x00000000,     ///<Frames with wrong checksum are not discarded.
            v1=0x00000001,     ///<If a TCP/IP, UDP/IP, or ICMP/IP frame is received that has a wrong TCP, UDP, or ICMP checksum, the frame is discarded. Discarding is only available when the RX FIFO operates in store and forward mode (RSFL cleared).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ProdisVal> prodis{}; 
        namespace ProdisValC{
            constexpr Register::FieldValue<decltype(prodis),ProdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(prodis),ProdisVal::v1> v1{};
        }
        ///Enable discard of frames with MAC layer errors
        enum class LinedisVal {
            v0=0x00000000,     ///<Frames with errors are not discarded.
            v1=0x00000001,     ///<Any frame received with a CRC, length, or PHY error is automatically discarded and not forwarded to the user application interface.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LinedisVal> linedis{}; 
        namespace LinedisValC{
            constexpr Register::FieldValue<decltype(linedis),LinedisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linedis),LinedisVal::v1> v1{};
        }
        ///RX FIFO shift-16
        enum class Shift16Val {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Instructs the MAC to write two additional bytes in front of each frame received into the RX FIFO.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Shift16Val> shift16{}; 
        namespace Shift16ValC{
            constexpr Register::FieldValue<decltype(shift16),Shift16Val::v0> v0{};
            constexpr Register::FieldValue<decltype(shift16),Shift16Val::v1> v1{};
        }
    }
    namespace EnetRmonTDrop{    ///<Count of frames not counted correctly (RMON_T_DROP). NOTE: Counter not implemented (read 0 always) as not applicable.
        using Addr = Register::Address<0x400c0200,0xffffffff,0,unsigned>;
    }
    namespace EnetRmonTPackets{    ///<RMON Tx packet count (RMON_T_PACKETS)
        using Addr = Register::Address<0x400c0204,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTBcPkt{    ///<RMON Tx Broadcast Packets (RMON_T_BC_PKT)
        using Addr = Register::Address<0x400c0208,0xffff0000,0,unsigned>;
        ///Broadcast packets
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTMcPkt{    ///<RMON Tx Multicast Packets (RMON_T_MC_PKT)
        using Addr = Register::Address<0x400c020c,0xffff0000,0,unsigned>;
        ///Multicast packets
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTCrcAlign{    ///<RMON Tx Packets w CRC/Align error (RMON_T_CRC_ALIGN)
        using Addr = Register::Address<0x400c0210,0xffff0000,0,unsigned>;
        ///Packets with CRC/align error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTUndersize{    ///<RMON Tx Packets < 64 bytes, good CRC (RMON_T_UNDERSIZE)
        using Addr = Register::Address<0x400c0214,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTOversize{    ///<RMON Tx Packets > MAX_FL bytes, good CRC (RMON_T_OVERSIZE)
        using Addr = Register::Address<0x400c0218,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTFrag{    ///<RMON Tx Packets < 64 bytes, bad CRC (RMON_T_FRAG)
        using Addr = Register::Address<0x400c021c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTJab{    ///<RMON Tx Packets > MAX_FL bytes, bad CRC (RMON_T_JAB)
        using Addr = Register::Address<0x400c0220,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTCol{    ///<RMON Tx collision count (RMON_T_COL)
        using Addr = Register::Address<0x400c0224,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTP64{    ///<RMON Tx 64 byte packets (RMON_T_P64)
        using Addr = Register::Address<0x400c0228,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTP65to127{    ///<RMON Tx 65 to 127 byte packets (RMON_T_P65TO127)
        using Addr = Register::Address<0x400c022c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTP128to255{    ///<RMON Tx 128 to 255 byte packets (RMON_T_P128TO255)
        using Addr = Register::Address<0x400c0230,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTP256to511{    ///<RMON Tx 256 to 511 byte packets (RMON_T_P256TO511)
        using Addr = Register::Address<0x400c0234,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTP512to1023{    ///<RMON Tx 512 to 1023 byte packets (RMON_T_P512TO1023)
        using Addr = Register::Address<0x400c0238,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTP1024to2047{    ///<RMON Tx 1024 to 2047 byte packets (RMON_T_P1024TO2047)
        using Addr = Register::Address<0x400c023c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTPGte2048{    ///<RMON Tx packets w > 2048 bytes (RMON_T_P_GTE2048)
        using Addr = Register::Address<0x400c0240,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> txpkts{}; 
        namespace TxpktsValC{
        }
    }
    namespace EnetRmonTOctets{    ///<RMON Tx Octets (RMON_T_OCTETS)
        using Addr = Register::Address<0x400c0244,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> txocts{}; 
        namespace TxoctsValC{
        }
    }
    namespace EnetIeeeTDrop{    ///<Count of frames not counted correctly (IEEE_T_DROP). NOTE: Counter not implemented (read 0 always) as not applicable.
        using Addr = Register::Address<0x400c0248,0xffffffff,0,unsigned>;
    }
    namespace EnetIeeeTFrameOk{    ///<Frames Transmitted OK (IEEE_T_FRAME_OK)
        using Addr = Register::Address<0x400c024c,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeT1col{    ///<Frames Transmitted with Single Collision (IEEE_T_1COL)
        using Addr = Register::Address<0x400c0250,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTMcol{    ///<Frames Transmitted with Multiple Collisions (IEEE_T_MCOL)
        using Addr = Register::Address<0x400c0254,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTDef{    ///<Frames Transmitted after Deferral Delay (IEEE_T_DEF)
        using Addr = Register::Address<0x400c0258,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTLcol{    ///<Frames Transmitted with Late Collision (IEEE_T_LCOL)
        using Addr = Register::Address<0x400c025c,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTExcol{    ///<Frames Transmitted with Excessive Collisions (IEEE_T_EXCOL)
        using Addr = Register::Address<0x400c0260,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTMacerr{    ///<Frames Transmitted with Tx FIFO Underrun (IEEE_T_MACERR)
        using Addr = Register::Address<0x400c0264,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTCserr{    ///<Frames Transmitted with Carrier Sense Error (IEEE_T_CSERR)
        using Addr = Register::Address<0x400c0268,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTSqe{    ///<Frames Transmitted with SQE Error (IEEE_T_SQE). NOTE: Counter not implemented (read 0 always) as no SQE information is available.
        using Addr = Register::Address<0x400c026c,0xffffffff,0,unsigned>;
    }
    namespace EnetIeeeTFdxfc{    ///<Flow Control Pause frames transmitted (IEEE_T_FDXFC)
        using Addr = Register::Address<0x400c0270,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeTOctetsOk{    ///<Octet count for Frames Transmitted w/o Error (IEEE_T_OCTETS_OK). NOTE: Counts total octets (includes header and FCS fields).
        using Addr = Register::Address<0x400c0274,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRPackets{    ///<RMON Rx packet count (RMON_R_PACKETS)
        using Addr = Register::Address<0x400c0284,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRBcPkt{    ///<RMON Rx Broadcast Packets (RMON_R_BC_PKT)
        using Addr = Register::Address<0x400c0288,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRMcPkt{    ///<RMON Rx Multicast Packets (RMON_R_MC_PKT)
        using Addr = Register::Address<0x400c028c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRCrcAlign{    ///<RMON Rx Packets w CRC/Align error (RMON_R_CRC_ALIGN)
        using Addr = Register::Address<0x400c0290,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRUndersize{    ///<RMON Rx Packets < 64 bytes, good CRC (RMON_R_UNDERSIZE)
        using Addr = Register::Address<0x400c0294,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonROversize{    ///<RMON Rx Packets > MAX_FL bytes, good CRC (RMON_R_OVERSIZE)
        using Addr = Register::Address<0x400c0298,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRFrag{    ///<RMON Rx Packets < 64 bytes, bad CRC (RMON_R_FRAG)
        using Addr = Register::Address<0x400c029c,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRJab{    ///<RMON Rx Packets > MAX_FL bytes, bad CRC (RMON_R_JAB)
        using Addr = Register::Address<0x400c02a0,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRResvd0{    ///<Reserved (RMON_R_RESVD_0)
        using Addr = Register::Address<0x400c02a4,0xffffffff,0,unsigned>;
    }
    namespace EnetRmonRP64{    ///<RMON Rx 64 byte packets (RMON_R_P64)
        using Addr = Register::Address<0x400c02a8,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRP65to127{    ///<RMON Rx 65 to 127 byte packets (RMON_R_P65TO127)
        using Addr = Register::Address<0x400c02ac,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRP128to255{    ///<RMON Rx 128 to 255 byte packets (RMON_R_P128TO255)
        using Addr = Register::Address<0x400c02b0,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRP256to511{    ///<RMON Rx 256 to 511 byte packets (RMON_R_P256TO511)
        using Addr = Register::Address<0x400c02b4,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRP512to1023{    ///<RMON Rx 512 to 1023 byte packets (RMON_R_P512TO1023)
        using Addr = Register::Address<0x400c02b8,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRP1024to2047{    ///<RMON Rx 1024 to 2047 byte packets (RMON_R_P1024TO2047)
        using Addr = Register::Address<0x400c02bc,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonRPGte2048{    ///<RMON Rx packets w > 2048 bytes (RMON_R_P_GTE2048)
        using Addr = Register::Address<0x400c02c0,0xffff0000,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetRmonROctets{    ///<RMON Rx Octets (RMON_R_OCTETS)
        using Addr = Register::Address<0x400c02c4,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeRDrop{    ///<Count of frames not counted correctly (IEEE_R_DROP). NOTE: Counter increments if a frame with valid/missing SFD character is detected and has been dropped. None of the other counters increments if this counter increments.
        using Addr = Register::Address<0x400c02c8,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeRFrameOk{    ///<Frames Received OK (IEEE_R_FRAME_OK)
        using Addr = Register::Address<0x400c02cc,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeRCrc{    ///<Frames Received with CRC Error (IEEE_R_CRC)
        using Addr = Register::Address<0x400c02d0,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeRAlign{    ///<Frames Received with Alignment Error (IEEE_R_ALIGN)
        using Addr = Register::Address<0x400c02d4,0xffff0000,0,unsigned>;
        ///Frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeRMacerr{    ///<Receive Fifo Overflow count (IEEE_R_MACERR)
        using Addr = Register::Address<0x400c02d8,0xffff0000,0,unsigned>;
        ///Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeRFdxfc{    ///<Flow Control Pause frames received (IEEE_R_FDXFC)
        using Addr = Register::Address<0x400c02dc,0xffff0000,0,unsigned>;
        ///Pause frame count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetIeeeROctetsOk{    ///<Octet count for Frames Rcvd w/o Error (IEEE_R_OCTETS_OK). Counts total octets (includes header and FCS fields).
        using Addr = Register::Address<0x400c02e0,0x00000000,0,unsigned>;
        ///Octet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> count{}; 
        namespace CountValC{
        }
    }
    namespace EnetAtcr{    ///<Timer Control Register
        using Addr = Register::Address<0x400c0400,0xffffd562,0,unsigned>;
        ///Enable timer
        enum class EnVal {
            v0=0x00000000,     ///<The timer stops at the current value.
            v1=0x00000001,     ///<The timer starts incrementing.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en),EnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(en),EnVal::v1> v1{};
        }
        ///Enable one-shot offset event
        enum class OffenVal {
            v0=0x00000000,     ///<Disable.
            v1=0x00000001,     ///<The timer can be reset to zero when the given offset time is reached (offset event). The bit is cleared when the offset event is reached, so no further event occurs until the bit is set again. Set the timer offset value before setting this bit.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OffenVal> offen{}; 
        namespace OffenValC{
            constexpr Register::FieldValue<decltype(offen),OffenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(offen),OffenVal::v1> v1{};
        }
        ///Reset timer on offset event
        enum class OffrstVal {
            v0=0x00000000,     ///<The timer is not affected and no action occurs (besides clearing OFFEN) when the offset is reached.
            v1=0x00000001,     ///<If OFFEN is set, the timer resets to zero when the offset setting is reached. The offset event does not cause a timer interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OffrstVal> offrst{}; 
        namespace OffrstValC{
            constexpr Register::FieldValue<decltype(offrst),OffrstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(offrst),OffrstVal::v1> v1{};
        }
        ///Enable periodical event
        enum class PerenVal {
            v0=0x00000000,     ///<Disable.
            v1=0x00000001,     ///<A period event interrupt can be generated (EIR[TS_TIMER]) and the event signal output is asserted when the timer wraps around according to the periodic setting ATPER. Set the timer period value before setting this bit. Not all devices contain the event signal output. See the Chip Configuration details.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PerenVal> peren{}; 
        namespace PerenValC{
            constexpr Register::FieldValue<decltype(peren),PerenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(peren),PerenVal::v1> v1{};
        }
        ///no description available
        enum class PinperVal {
            v0=0x00000000,     ///<Disable.
            v1=0x00000001,     ///<Enable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,PinperVal> pinper{}; 
        namespace PinperValC{
            constexpr Register::FieldValue<decltype(pinper),PinperVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pinper),PinperVal::v1> v1{};
        }
        ///Reset timer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> restart{}; 
        namespace RestartValC{
        }
        ///Capture timer value
        enum class CaptureVal {
            v0=0x00000000,     ///<No effect.
            v1=0x00000001,     ///<The current time is captured and can be read from the ATVR register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,CaptureVal> capture{}; 
        namespace CaptureValC{
            constexpr Register::FieldValue<decltype(capture),CaptureVal::v0> v0{};
            constexpr Register::FieldValue<decltype(capture),CaptureVal::v1> v1{};
        }
        ///Enable timer slave mode
        enum class SlaveVal {
            v0=0x00000000,     ///<The timer is active and all configuration bits in this register are relevant.
            v1=0x00000001,     ///<The internal timer is disabled and the externally provided timer value is used. All other bits, except CAPTURE, in this register have no effect. CAPTURE can still be used to capture the current timer value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,SlaveVal> slave{}; 
        namespace SlaveValC{
            constexpr Register::FieldValue<decltype(slave),SlaveVal::v0> v0{};
            constexpr Register::FieldValue<decltype(slave),SlaveVal::v1> v1{};
        }
    }
    namespace EnetAtvr{    ///<Timer Value Register
        using Addr = Register::Address<0x400c0404,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> atime{}; 
        namespace AtimeValC{
        }
    }
    namespace EnetAtoff{    ///<Timer Offset Register
        using Addr = Register::Address<0x400c0408,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
    }
    namespace EnetAtper{    ///<Timer Period Register
        using Addr = Register::Address<0x400c040c,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> period{}; 
        namespace PeriodValC{
        }
    }
    namespace EnetAtcor{    ///<Timer Correction Register
        using Addr = Register::Address<0x400c0410,0x80000000,0,unsigned>;
        ///Correction counter wrap-around value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,0),Register::ReadWriteAccess,unsigned> cor{}; 
        namespace CorValC{
        }
    }
    namespace EnetAtinc{    ///<Time-Stamping Clock Period Register
        using Addr = Register::Address<0x400c0414,0xffff8080,0,unsigned>;
        ///Clock period of the timestamping clock (ts_clk) in nanoseconds
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> inc{}; 
        namespace IncValC{
        }
        ///Correction increment value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> incCorr{}; 
        namespace InccorrValC{
        }
    }
    namespace EnetAtstmp{    ///<Timestamp of Last Transmitted Frame
        using Addr = Register::Address<0x400c0418,0x00000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> timestamp{}; 
        namespace TimestampValC{
        }
    }
    namespace EnetTgsr{    ///<Timer Global Status Register
        using Addr = Register::Address<0x400c0604,0xfffffff0,0,unsigned>;
        ///Copy of Timer Flag for channel 0
        enum class Tf0Val {
            v0=0x00000000,     ///<Timer Flag for Channel 0 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 0 is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Tf0Val> tf0{}; 
        namespace Tf0ValC{
            constexpr Register::FieldValue<decltype(tf0),Tf0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tf0),Tf0Val::v1> v1{};
        }
        ///Copy of Timer Flag for channel 1
        enum class Tf1Val {
            v0=0x00000000,     ///<Timer Flag for Channel 1 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 1 is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Tf1Val> tf1{}; 
        namespace Tf1ValC{
            constexpr Register::FieldValue<decltype(tf1),Tf1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tf1),Tf1Val::v1> v1{};
        }
        ///Copy of Timer Flag for channel 2
        enum class Tf2Val {
            v0=0x00000000,     ///<Timer Flag for Channel 2 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 2 is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Tf2Val> tf2{}; 
        namespace Tf2ValC{
            constexpr Register::FieldValue<decltype(tf2),Tf2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tf2),Tf2Val::v1> v1{};
        }
        ///Copy of Timer Flag for channel 3
        enum class Tf3Val {
            v0=0x00000000,     ///<Timer Flag for Channel 3 is clear
            v1=0x00000001,     ///<Timer Flag for Channel 3 is set
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Tf3Val> tf3{}; 
        namespace Tf3ValC{
            constexpr Register::FieldValue<decltype(tf3),Tf3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tf3),Tf3Val::v1> v1{};
        }
    }
    namespace EnetTcsr0{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0608,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class TdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v1> v1{};
        }
        ///Timer Mode
        enum class TmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,TmodeVal> tmode{}; 
        namespace TmodeValC{
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v10x1> v10x1{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1111> v1111{};
        }
        ///Timer interrupt enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
        ///Timer Flag
        enum class TfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TfVal> tf{}; 
        namespace TfValC{
            constexpr Register::FieldValue<decltype(tf),TfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tf),TfVal::v1> v1{};
        }
    }
    namespace EnetTcsr1{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0610,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class TdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v1> v1{};
        }
        ///Timer Mode
        enum class TmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,TmodeVal> tmode{}; 
        namespace TmodeValC{
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v10x1> v10x1{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1111> v1111{};
        }
        ///Timer interrupt enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
        ///Timer Flag
        enum class TfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TfVal> tf{}; 
        namespace TfValC{
            constexpr Register::FieldValue<decltype(tf),TfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tf),TfVal::v1> v1{};
        }
    }
    namespace EnetTcsr2{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0618,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class TdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v1> v1{};
        }
        ///Timer Mode
        enum class TmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,TmodeVal> tmode{}; 
        namespace TmodeValC{
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v10x1> v10x1{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1111> v1111{};
        }
        ///Timer interrupt enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
        ///Timer Flag
        enum class TfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TfVal> tf{}; 
        namespace TfValC{
            constexpr Register::FieldValue<decltype(tf),TfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tf),TfVal::v1> v1{};
        }
    }
    namespace EnetTcsr3{    ///<Timer Control Status Register
        using Addr = Register::Address<0x400c0620,0xffffff02,0,unsigned>;
        ///Timer DMA Request Enable
        enum class TdreVal {
            v0=0x00000000,     ///<DMA request is disabled
            v1=0x00000001,     ///<DMA request is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,TdreVal> tdre{}; 
        namespace TdreValC{
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tdre),TdreVal::v1> v1{};
        }
        ///Timer Mode
        enum class TmodeVal {
            v0000=0x00000000,     ///<Timer Channel is disabled.
            v0001=0x00000001,     ///<Timer Channel is configured for Input Capture on rising edge
            v0010=0x00000002,     ///<Timer Channel is configured for Input Capture on falling edge
            v0011=0x00000003,     ///<Timer Channel is configured for Input Capture on both edges
            v0100=0x00000004,     ///<Timer Channel is configured for Output Compare - software only
            v0101=0x00000005,     ///<Timer Channel is configured for Output Compare - toggle output on compare
            v0110=0x00000006,     ///<Timer Channel is configured for Output Compare - clear output on compare
            v0111=0x00000007,     ///<Timer Channel is configured for Output Compare - set output on compare
            v1010=0x0000000a,     ///<Timer Channel is configured for Output Compare - clear output on compare, set output on overflow
            v10x1=0x00000009,     ///<Timer Channel is configured for Output Compare - set output on compare, clear output on overflow
            v1110=0x0000000e,     ///<Timer Channel is configured for Output Compare - pulse output low on compare for one 1588 clock cycle
            v1111=0x0000000f,     ///<Timer Channel is configured for Output Compare - pulse output high on compare for one 1588 clock cycle
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,TmodeVal> tmode{}; 
        namespace TmodeValC{
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v0111> v0111{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1010> v1010{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v10x1> v10x1{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1110> v1110{};
            constexpr Register::FieldValue<decltype(tmode),TmodeVal::v1111> v1111{};
        }
        ///Timer interrupt enable
        enum class TieVal {
            v0=0x00000000,     ///<Interrupt is disabled
            v1=0x00000001,     ///<Interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,TieVal> tie{}; 
        namespace TieValC{
            constexpr Register::FieldValue<decltype(tie),TieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tie),TieVal::v1> v1{};
        }
        ///Timer Flag
        enum class TfVal {
            v0=0x00000000,     ///<Input Capture or Output Compare has not occurred
            v1=0x00000001,     ///<Input Capture or Output Compare has occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,TfVal> tf{}; 
        namespace TfValC{
            constexpr Register::FieldValue<decltype(tf),TfVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tf),TfVal::v1> v1{};
        }
    }
    namespace EnetTccr0{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c060c,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
        namespace TccValC{
        }
    }
    namespace EnetTccr1{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c0614,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
        namespace TccValC{
        }
    }
    namespace EnetTccr2{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c061c,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
        namespace TccValC{
        }
    }
    namespace EnetTccr3{    ///<Timer Compare Capture Register
        using Addr = Register::Address<0x400c0624,0x00000000,0,unsigned>;
        ///Timer Capture Compare
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> tcc{}; 
        namespace TccValC{
        }
    }
}
