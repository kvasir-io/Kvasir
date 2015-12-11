#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB HS/FS/LS OTG Controller
    namespace UsbhsId{    ///<Identification Register
        using Addr = Register::Address<0x40034000,0x0000c0c0,0,unsigned>;
        ///Configuration number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> nid{}; 
        ///Tag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> tag{}; 
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> version{}; 
        ///Version ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> versionid{}; 
    }
    namespace UsbhsHwgeneral{    ///<General Hardware Parameters Register
        using Addr = Register::Address<0x40034004,0xfffff83f,0,unsigned>;
        ///PHY Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> phym{}; 
        ///Serial mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> sm{}; 
    }
    namespace UsbhsHwhost{    ///<Host Hardware Parameters Register
        using Addr = Register::Address<0x40034008,0x0000fff0,0,unsigned>;
        ///Host Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hc{}; 
        ///Number of Ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nport{}; 
        ///Transaction translator contexts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ttasy{}; 
        ///Transaction translator periodic contexts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ttper{}; 
    }
    namespace UsbhsHwdevice{    ///<Device Hardware Parameters Register
        using Addr = Register::Address<0x4003400c,0xffffffc0,0,unsigned>;
        ///Device Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Device endpoints.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> devep{}; 
    }
    namespace UsbhsHwtxbuf{    ///<Transmit Buffer Hardware Parameters Register
        using Addr = Register::Address<0x40034010,0x7f000000,0,unsigned>;
        ///Transmit Burst.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txburst{}; 
        ///Transmit Address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txadd{}; 
        ///Transmit Channel Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txchanadd{}; 
        ///Transmit local Context Registers
        enum class TxlcVal {
            v0=0x00000000,     ///<Store device transmit contexts in the TX FIFO
            v1=0x00000001,     ///<Store device transmit contexts in a register file
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TxlcVal> txlc{}; 
        namespace TxlcValC{
            constexpr Register::FieldValue<decltype(txlc)::Type,TxlcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txlc)::Type,TxlcVal::v1> v1{};
        }
    }
    namespace UsbhsHwrxbuf{    ///<Receive Buffer Hardware Parameters Register
        using Addr = Register::Address<0x40034014,0xffff0000,0,unsigned>;
        ///Receive Burst.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxburst{}; 
        ///Receive Address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rxadd{}; 
    }
    namespace UsbhsGptimer0ld{    ///<General Purpose Timer n Load Register
        using Addr = Register::Address<0x40034080,0xff000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptld{}; 
    }
    namespace UsbhsGptimer1ld{    ///<General Purpose Timer n Load Register
        using Addr = Register::Address<0x40034088,0xff000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptld{}; 
    }
    namespace UsbhsGptimer0ctl{    ///<General Purpose Timer n Control Register
        using Addr = Register::Address<0x40034084,0x3e000000,0,unsigned>;
        ///Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptcnt{}; 
        ///Timer Mode
        enum class ModeVal {
            v0=0x00000000,     ///<One shot
            v1=0x00000001,     ///<Repeat
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v1> v1{};
        }
        ///Timer Reset
        enum class RstVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Load counter value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::v1> v1{};
        }
        ///Timer Run
        enum class RunVal {
            v0=0x00000000,     ///<Timer stop
            v1=0x00000001,     ///<Timer run
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v1> v1{};
        }
    }
    namespace UsbhsGptimer1ctl{    ///<General Purpose Timer n Control Register
        using Addr = Register::Address<0x4003408c,0x3e000000,0,unsigned>;
        ///Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptcnt{}; 
        ///Timer Mode
        enum class ModeVal {
            v0=0x00000000,     ///<One shot
            v1=0x00000001,     ///<Repeat
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v1> v1{};
        }
        ///Timer Reset
        enum class RstVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Load counter value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rst)::Type,RstVal::v1> v1{};
        }
        ///Timer Run
        enum class RunVal {
            v0=0x00000000,     ///<Timer stop
            v1=0x00000001,     ///<Timer run
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(run)::Type,RunVal::v1> v1{};
        }
    }
    namespace UsbhsUsbSbuscfg{    ///<System Bus Interface Configuration Register
        using Addr = Register::Address<0x40034090,0xfffffff8,0,unsigned>;
        ///Burst mode
        enum class BurstmodeVal {
            v000=0x00000000,     ///<INCR burst of unspecified length
            v001=0x00000001,     ///<INCR4, non-multiple transfers of INCR4 is decomposed into singles.
            v010=0x00000002,     ///<INCR8, non-multiple transfers of INCR8, is decomposed into INCR4 or singles.
            v011=0x00000003,     ///<INCR16, non-multiple transfers of INCR16, is decomposed into INCR8, INCR4 or singles.
            v100=0x00000004,     ///<Reserved, do not use.
            v101=0x00000005,     ///<INCR4, non-multiple transfers of INCR4 is decomposed into smaller unspecified length bursts.
            v110=0x00000006,     ///<INCR8, non-multiple transfers of INCR8 is decomposed into smaller unspecified length bursts.
            v111=0x00000007,     ///<INCR16, non-multiple transfers of INCR16 is decomposed into smaller unspecified length bursts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,BurstmodeVal> burstmode{}; 
        namespace BurstmodeValC{
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(burstmode)::Type,BurstmodeVal::v111> v111{};
        }
    }
    namespace UsbhsHciversion{    ///<Host Controller Interface Version and Capability Registers Length Register
        using Addr = Register::Address<0x40034100,0x0000ff00,0,unsigned>;
        ///Capability registers length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> caplength{}; 
        ///EHCI revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hciversion{}; 
    }
    namespace UsbhsHcsparams{    ///<Host Controller Structural Parameters Register
        using Addr = Register::Address<0x40034104,0xf00e00e0,0,unsigned>;
        ///Number of Ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> nPorts{}; 
        ///Power Port Control
        enum class PpcVal {
            v1=0x00000001,     ///<Ports have power port switches
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PpcVal> ppc{}; 
        namespace PpcValC{
            constexpr Register::FieldValue<decltype(ppc)::Type,PpcVal::v1> v1{};
        }
        ///Number Ports per CC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nPcc{}; 
        ///Number of Companion Controllers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> nCc{}; 
        ///Port Indicators
        enum class PiVal {
            v0=0x00000000,     ///<No port indicator fields
            v1=0x00000001,     ///<The port status and control registers include a R/W field for controlling the state of the port indicator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PiVal> pi{}; 
        namespace PiValC{
            constexpr Register::FieldValue<decltype(pi)::Type,PiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pi)::Type,PiVal::v1> v1{};
        }
        ///Ports per Transaction Translator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> nPtt{}; 
        ///Number of Transaction Translators.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> nTt{}; 
    }
    namespace UsbhsHccparams{    ///<Host Controller Capability Parameters Register
        using Addr = Register::Address<0x40034108,0xffff0008,0,unsigned>;
        ///64-bit addressing capability.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adc{}; 
        ///Programmable Frame List flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfl{}; 
        ///Asynchronous Schedule Park capability
        enum class AspVal {
            v0=0x00000000,     ///<Park not supported.
            v1=0x00000001,     ///<Park supported.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AspVal> asp{}; 
        namespace AspValC{
            constexpr Register::FieldValue<decltype(asp)::Type,AspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asp)::Type,AspVal::v1> v1{};
        }
        ///Isochronous Scheduling Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ist{}; 
        ///EHCI Extended Capabilities Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> eecp{}; 
    }
    namespace UsbhsDciversion{    ///<Device Controller Interface Version
        using Addr = Register::Address<0x40034122,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dciversion{}; 
    }
    namespace UsbhsDccparams{    ///<Device Controller Capability Parameters
        using Addr = Register::Address<0x40034124,0xfffffe60,0,unsigned>;
        ///Device Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> den{}; 
        ///Device Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Host Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hc{}; 
    }
    namespace UsbhsUsbcmd{    ///<USB Command Register
        using Addr = Register::Address<0x40034140,0xff001480,0,unsigned>;
        ///Run/Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Controller Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Frame list Size
        enum class FsVal {
            v00=0x00000000,     ///<When FS2 = 0, the size is 1024 elements (4096 bytes). When FS2 = 1, the size is 64 elements (256 bytes).
            v01=0x00000001,     ///<When FS2 = 0, the size is 512 elements (2048 bytes). When FS2 = 1, the size is 32 elements (128 bytes).
            v10=0x00000002,     ///<When FS2 = 0, the size is 256 elements (1024 bytes). When FS2 = 1, the size is 16 elements (64 bytes).
            v11=0x00000003,     ///<When FS2 = 0, the size is 128 elements (512 bytes). When FS2 = 1, the size is 8 elements (32 bytes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,FsVal> fs{}; 
        namespace FsValC{
            constexpr Register::FieldValue<decltype(fs)::Type,FsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fs)::Type,FsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fs)::Type,FsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fs)::Type,FsVal::v11> v11{};
        }
        ///Periodic Schedule Enable
        enum class PseVal {
            v0=0x00000000,     ///<Do not process periodic schedule.
            v1=0x00000001,     ///<Use the PERIODICLISTBASE register to access the periodic schedule.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PseVal> pse{}; 
        namespace PseValC{
            constexpr Register::FieldValue<decltype(pse)::Type,PseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pse)::Type,PseVal::v1> v1{};
        }
        ///Asynchronous Schedule Enable
        enum class AseVal {
            v0=0x00000000,     ///<Do not process asynchronous schedule.
            v1=0x00000001,     ///<Use the ASYNCLISTADDR register to access asynchronous schedule.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AseVal> ase{}; 
        namespace AseValC{
            constexpr Register::FieldValue<decltype(ase)::Type,AseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ase)::Type,AseVal::v1> v1{};
        }
        ///Interrupt on Async Advance doorbell
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iaa{}; 
        ///Asynchronous Schedule Park mode count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> asp{}; 
        ///Asynchronous Schedule Park mode Enable
        enum class AspeVal {
            v0=0x00000000,     ///<Park mode disabled
            v1=0x00000001,     ///<Park mode enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AspeVal> aspe{}; 
        namespace AspeValC{
            constexpr Register::FieldValue<decltype(aspe)::Type,AspeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aspe)::Type,AspeVal::v1> v1{};
        }
        ///Setup TripWire
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sutw{}; 
        ///Add dTD TripWire
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> atdtw{}; 
        ///Frame list Size 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fs2{}; 
        ///Interrupt Threshold Control
        enum class ItcVal {
            v0=0x00000000,     ///<Immediate (no threshold)
            v1=0x00000001,     ///<1 microframe
            v10=0x00000002,     ///<2 microframes
            v100=0x00000004,     ///<4 microframes
            v1000=0x00000008,     ///<8 microframes
            v10000=0x00000010,     ///<16 microframes
            v100000=0x00000020,     ///<32 microframes
            v1000000=0x00000040,     ///<64 microframes
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,ItcVal> itc{}; 
        namespace ItcValC{
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v1> v1{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v100> v100{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v100000> v100000{};
            constexpr Register::FieldValue<decltype(itc)::Type,ItcVal::v1000000> v1000000{};
        }
    }
    namespace UsbhsUsbsts{    ///<USB Status Register
        using Addr = Register::Address<0x40034144,0xfcf20a00,0,unsigned>;
        ///USB Interrupt (USBINT)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ui{}; 
        ///USB Error Interrupt
        enum class UeiVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UeiVal> uei{}; 
        namespace UeiValC{
            constexpr Register::FieldValue<decltype(uei)::Type,UeiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uei)::Type,UeiVal::v1> v1{};
        }
        ///Port Change detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pci{}; 
        ///Frame-list Rollover
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fri{}; 
        ///System Error
        enum class SeiVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SeiVal> sei{}; 
        namespace SeiValC{
            constexpr Register::FieldValue<decltype(sei)::Type,SeiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sei)::Type,SeiVal::v1> v1{};
        }
        ///Interrupt on Async Advance
        enum class AaiVal {
            v0=0x00000000,     ///<No async advance interrupt
            v1=0x00000001,     ///<Async advance interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AaiVal> aai{}; 
        namespace AaiValC{
            constexpr Register::FieldValue<decltype(aai)::Type,AaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aai)::Type,AaiVal::v1> v1{};
        }
        ///USB Reset received
        enum class UriVal {
            v0=0x00000000,     ///<No reset received
            v1=0x00000001,     ///<Reset received
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UriVal> uri{}; 
        namespace UriValC{
            constexpr Register::FieldValue<decltype(uri)::Type,UriVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uri)::Type,UriVal::v1> v1{};
        }
        ///SOF Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sri{}; 
        ///Device-controller suspend
        enum class SliVal {
            v0=0x00000000,     ///<Active
            v1=0x00000001,     ///<Suspended
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SliVal> sli{}; 
        namespace SliValC{
            constexpr Register::FieldValue<decltype(sli)::Type,SliVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sli)::Type,SliVal::v1> v1{};
        }
        ///ULPI Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ulpii{}; 
        ///Host Controller Halted
        enum class HchVal {
            v0=0x00000000,     ///<Running
            v1=0x00000001,     ///<Halted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,HchVal> hch{}; 
        namespace HchValC{
            constexpr Register::FieldValue<decltype(hch)::Type,HchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hch)::Type,HchVal::v1> v1{};
        }
        ///Reclamation
        enum class RclVal {
            v0=0x00000000,     ///<Non-empty asynchronous schedule
            v1=0x00000001,     ///<Empty asynchronous schedule
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RclVal> rcl{}; 
        namespace RclValC{
            constexpr Register::FieldValue<decltype(rcl)::Type,RclVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rcl)::Type,RclVal::v1> v1{};
        }
        ///Periodic schedule Status
        enum class PsVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps)::Type,PsVal::v1> v1{};
        }
        ///Asynchronous schedule Status
        enum class AsVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AsVal> as{}; 
        namespace AsValC{
            constexpr Register::FieldValue<decltype(as)::Type,AsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(as)::Type,AsVal::v1> v1{};
        }
        ///NAK Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> naki{}; 
        ///USB host Asynchronous Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uai{}; 
        ///USB host Periodic Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upi{}; 
        ///General purpose Timer 0 Interrupt
        enum class Ti0Val {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ti0Val> ti0{}; 
        namespace Ti0ValC{
            constexpr Register::FieldValue<decltype(ti0)::Type,Ti0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ti0)::Type,Ti0Val::v1> v1{};
        }
        ///General purpose Timer 1 Interrupt
        enum class Ti1Val {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ti1Val> ti1{}; 
        namespace Ti1ValC{
            constexpr Register::FieldValue<decltype(ti1)::Type,Ti1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ti1)::Type,Ti1Val::v1> v1{};
        }
    }
    namespace UsbhsUsbintr{    ///<USB Interrupt Enable Register
        using Addr = Register::Address<0x40034148,0xfcf2fa00,0,unsigned>;
        ///USB interrupt Enable
        enum class UeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UeVal> ue{}; 
        namespace UeValC{
            constexpr Register::FieldValue<decltype(ue)::Type,UeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ue)::Type,UeVal::v1> v1{};
        }
        ///USB Error interrupt Enable
        enum class UeeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UeeVal> uee{}; 
        namespace UeeValC{
            constexpr Register::FieldValue<decltype(uee)::Type,UeeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uee)::Type,UeeVal::v1> v1{};
        }
        ///Port Change detect Enable
        enum class PceVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PceVal> pce{}; 
        namespace PceValC{
            constexpr Register::FieldValue<decltype(pce)::Type,PceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pce)::Type,PceVal::v1> v1{};
        }
        ///Frame list Rollover Enable
        enum class FreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FreVal> fre{}; 
        namespace FreValC{
            constexpr Register::FieldValue<decltype(fre)::Type,FreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fre)::Type,FreVal::v1> v1{};
        }
        ///System Error Enable
        enum class SeeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SeeVal> see{}; 
        namespace SeeValC{
            constexpr Register::FieldValue<decltype(see)::Type,SeeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(see)::Type,SeeVal::v1> v1{};
        }
        ///Interrupt on Async advance Enable
        enum class AaeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AaeVal> aae{}; 
        namespace AaeValC{
            constexpr Register::FieldValue<decltype(aae)::Type,AaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aae)::Type,AaeVal::v1> v1{};
        }
        ///USB-Reset Enable
        enum class UreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UreVal> ure{}; 
        namespace UreValC{
            constexpr Register::FieldValue<decltype(ure)::Type,UreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ure)::Type,UreVal::v1> v1{};
        }
        ///SOF-Received Enable
        enum class SreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre)::Type,SreVal::v1> v1{};
        }
        ///Sleep (DC suspend) Enable
        enum class SleVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleVal> sle{}; 
        namespace SleValC{
            constexpr Register::FieldValue<decltype(sle)::Type,SleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sle)::Type,SleVal::v1> v1{};
        }
        ///ULPI Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ulpie{}; 
        ///NAK Interrupt Enable
        enum class NakeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,NakeVal> nake{}; 
        namespace NakeValC{
            constexpr Register::FieldValue<decltype(nake)::Type,NakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nake)::Type,NakeVal::v1> v1{};
        }
        ///USB host Asynchronous Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uaie{}; 
        ///USB host Periodic Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upie{}; 
        ///General purpose Timer 0 Interrupt Enable
        enum class Tie0Val {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tie0Val> tie0{}; 
        namespace Tie0ValC{
            constexpr Register::FieldValue<decltype(tie0)::Type,Tie0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tie0)::Type,Tie0Val::v1> v1{};
        }
        ///General purpose Timer 1 Interrupt Enable
        enum class Tie1Val {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tie1Val> tie1{}; 
        namespace Tie1ValC{
            constexpr Register::FieldValue<decltype(tie1)::Type,Tie1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tie1)::Type,Tie1Val::v1> v1{};
        }
    }
    namespace UsbhsFrindex{    ///<Frame Index Register
        using Addr = Register::Address<0x4003414c,0x00000000,0,unsigned>;
        ///Frame Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> frindex{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reerved{}; 
    }
    namespace UsbhsDeviceaddr{    ///<Device Address Register
        using Addr = Register::Address<0x40034154,0x00ffffff,0,unsigned>;
        ///Device Address Advance
        enum class UsbadraVal {
            v0=0x00000000,     ///<Writes to USBADR are instantaneous.
            v1=0x00000001,     ///<When this bit is written to a 1 at the same time or before USBADR is written, the write to the USBADR field is staged and held in a hidden register. After an IN occurs on endpoint 0 and is ACKed, USBADR is loaded from the holding register.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,UsbadraVal> usbadra{}; 
        namespace UsbadraValC{
            constexpr Register::FieldValue<decltype(usbadra)::Type,UsbadraVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbadra)::Type,UsbadraVal::v1> v1{};
        }
        ///Device Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> usbadr{}; 
    }
    namespace UsbhsPeriodiclistbase{    ///<Periodic Frame List Base Address Register
        using Addr = Register::Address<0x40034154,0x00000fff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> perbase{}; 
    }
    namespace UsbhsAsynclistaddr{    ///<Current Asynchronous List Address Register
        using Addr = Register::Address<0x40034158,0x0000001f,0,unsigned>;
        ///Link pointer low (LPL)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> asybase{}; 
    }
    namespace UsbhsEplistaddr{    ///<Endpoint List Address Register
        using Addr = Register::Address<0x40034158,0x000007ff,0,unsigned>;
        ///Endpoint list address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> epbase{}; 
    }
    namespace UsbhsTtctrl{    ///<Host TT Asynchronous Buffer Control
        using Addr = Register::Address<0x4003415c,0x00ffffff,0,unsigned>;
        ///TT Hub Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ttha{}; 
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reerved{}; 
    }
    namespace UsbhsBurstsize{    ///<Master Interface Data Burst Size Register
        using Addr = Register::Address<0x40034160,0xffff0000,0,unsigned>;
        ///Programable RX Burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxpburst{}; 
        ///Programable TX Burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txpburst{}; 
    }
    namespace UsbhsTxfilltuning{    ///<Transmit FIFO Tuning Control Register
        using Addr = Register::Address<0x40034164,0xffc0e080,0,unsigned>;
        ///Scheduler Overhead
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> txschoh{}; 
        ///Scheduler Health counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> txschhealth{}; 
        ///FIFO burst Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> txfifothres{}; 
    }
    namespace UsbhsUlpiViewport{    ///<ULPI Register Access
        using Addr = Register::Address<0x40034170,0x10000000,0,unsigned>;
        ///ULPI Data Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ulpiDatwr{}; 
        ///ULPI Data Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ulpiDatrd{}; 
        ///ULPI data Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ulpiAddr{}; 
        ///ULPI Port number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ulpiPort{}; 
        ///ULPI Sync State
        enum class UlpissVal {
            v0=0x00000000,     ///<Any other state (that is, carkit, serial, low power)
            v1=0x00000001,     ///<Normal sync state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,UlpissVal> ulpiSs{}; 
        namespace UlpissValC{
            constexpr Register::FieldValue<decltype(ulpiSs)::Type,UlpissVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ulpiSs)::Type,UlpissVal::v1> v1{};
        }
        ///ULPI Read/Write
        enum class UlpirwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UlpirwVal> ulpiRw{}; 
        namespace UlpirwValC{
            constexpr Register::FieldValue<decltype(ulpiRw)::Type,UlpirwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ulpiRw)::Type,UlpirwVal::v1> v1{};
        }
        ///ULPI Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ulpiRun{}; 
        ///ULPI Wake-Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ulpiWu{}; 
    }
    namespace UsbhsEndptnak{    ///<Endpoint NAK Register
        using Addr = Register::Address<0x40034178,0xfff0fff0,0,unsigned>;
        ///RX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> eprn{}; 
        ///TX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> eptn{}; 
    }
    namespace UsbhsEndptnaken{    ///<Endpoint NAK Enable Register
        using Addr = Register::Address<0x4003417c,0xfff0fff0,0,unsigned>;
        ///RX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> eprne{}; 
        ///TX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> eptne{}; 
    }
    namespace UsbhsConfigflag{    ///<Configure Flag Register
        using Addr = Register::Address<0x40034180,0xffffffff,0,unsigned>;
    }
    namespace UsbhsPortsc1{    ///<Port Status and Control Registers
        using Addr = Register::Address<0x40034184,0x32000000,0,unsigned>;
        ///Current Connect Status
        enum class CcsVal {
            v0=0x00000000,     ///<No device present (host mode) or attached (device mode)
            v1=0x00000001,     ///<Device is present (host mode) or attached (device mode)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,CcsVal> ccs{}; 
        namespace CcsValC{
            constexpr Register::FieldValue<decltype(ccs)::Type,CcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccs)::Type,CcsVal::v1> v1{};
        }
        ///Connect Change Status
        enum class CscVal {
            v0=0x00000000,     ///<No change
            v1=0x00000001,     ///<Connect status has changed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CscVal> csc{}; 
        namespace CscValC{
            constexpr Register::FieldValue<decltype(csc)::Type,CscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(csc)::Type,CscVal::v1> v1{};
        }
        ///Port Enabled/disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Port Enable/disable Change
        enum class PecVal {
            v0=0x00000000,     ///<No change
            v1=0x00000001,     ///<Port disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PecVal> pec{}; 
        namespace PecValC{
            constexpr Register::FieldValue<decltype(pec)::Type,PecVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pec)::Type,PecVal::v1> v1{};
        }
        ///Over-current active
        enum class OcaVal {
            v0=0x00000000,     ///<Port not in over-current condition
            v1=0x00000001,     ///<Port currently in over-current condition
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OcaVal> oca{}; 
        namespace OcaValC{
            constexpr Register::FieldValue<decltype(oca)::Type,OcaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oca)::Type,OcaVal::v1> v1{};
        }
        ///Over-Current Change
        enum class OccVal {
            v0=0x00000000,     ///<No over-current
            v1=0x00000001,     ///<Over-current detect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OccVal> occ{}; 
        namespace OccValC{
            constexpr Register::FieldValue<decltype(occ)::Type,OccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(occ)::Type,OccVal::v1> v1{};
        }
        ///Force Port Resume
        enum class FprVal {
            v0=0x00000000,     ///<No resume (K-state) detected/driven on port
            v1=0x00000001,     ///<Resume detected/driven on port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FprVal> fpr{}; 
        namespace FprValC{
            constexpr Register::FieldValue<decltype(fpr)::Type,FprVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpr)::Type,FprVal::v1> v1{};
        }
        ///Suspend
        enum class SuspVal {
            v0=0x00000000,     ///<Port not in suspend state
            v1=0x00000001,     ///<Port in suspend state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuspVal> susp{}; 
        namespace SuspValC{
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(susp)::Type,SuspVal::v1> v1{};
        }
        ///Port Reset
        enum class PrVal {
            v0=0x00000000,     ///<Port is not in reset
            v1=0x00000001,     ///<Port is in reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,PrVal> pr{}; 
        namespace PrValC{
            constexpr Register::FieldValue<decltype(pr)::Type,PrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pr)::Type,PrVal::v1> v1{};
        }
        ///High Speed Port.
        enum class HspVal {
            v0=0x00000000,     ///<FS or LS
            v1=0x00000001,     ///<HS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HspVal> hsp{}; 
        namespace HspValC{
            constexpr Register::FieldValue<decltype(hsp)::Type,HspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hsp)::Type,HspVal::v1> v1{};
        }
        ///Line Status
        enum class LsVal {
            v00=0x00000000,     ///<SE0
            v01=0x00000001,     ///<J-state
            v10=0x00000002,     ///<K-state
            v11=0x00000003,     ///<Undefined
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,LsVal> ls{}; 
        namespace LsValC{
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ls)::Type,LsVal::v11> v11{};
        }
        ///Port Power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pp{}; 
        ///Port Owner
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> po{}; 
        ///Port Indicator Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pic{}; 
        ///Port Test Control
        enum class PtcVal {
            v0000=0x00000000,     ///<Not enabled
            v0001=0x00000001,     ///<J_STATE
            v0010=0x00000002,     ///<K_STATE
            v0011=0x00000003,     ///<SEQ_NAK
            v0100=0x00000004,     ///<Packet
            v0101=0x00000005,     ///<FORCE_ENABLE_HS
            v0110=0x00000006,     ///<FORCE_ENABLE_FS
            v0111=0x00000007,     ///<FORCE_ENABLE_LS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,PtcVal> ptc{}; 
        namespace PtcValC{
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ptc)::Type,PtcVal::v0111> v0111{};
        }
        ///Wake on Connect enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wkcn{}; 
        ///Wake on Disconnect enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wkds{}; 
        ///Wake on Over-Current enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wkoc{}; 
        ///PHY low power suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> phcd{}; 
        ///Port force Full-Speed Connect
        enum class PfscVal {
            v0=0x00000000,     ///<Allow the port to identify itself as high speed
            v1=0x00000001,     ///<Force the port to only connect at full speed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PfscVal> pfsc{}; 
        namespace PfscValC{
            constexpr Register::FieldValue<decltype(pfsc)::Type,PfscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfsc)::Type,PfscVal::v1> v1{};
        }
        ///Port Speed
        enum class PspdVal {
            v00=0x00000000,     ///<Full speed
            v01=0x00000001,     ///<Low speed
            v10=0x00000002,     ///<High speed
            v11=0x00000003,     ///<Undefined
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,PspdVal> pspd{}; 
        namespace PspdValC{
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pspd)::Type,PspdVal::v11> v11{};
        }
        ///Port Transceiver Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pts{}; 
    }
    namespace UsbhsOtgsc{    ///<On-the-Go Status and Control Register
        using Addr = Register::Address<0x400341a4,0x80808040,0,unsigned>;
        ///VBUS Discharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vd{}; 
        ///VBUS Charge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vc{}; 
        ///Hardware Assist Auto-Reset
        enum class HaarVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enable automatic reset after connect on host port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,HaarVal> haar{}; 
        namespace HaarValC{
            constexpr Register::FieldValue<decltype(haar)::Type,HaarVal::v0> v0{};
            constexpr Register::FieldValue<decltype(haar)::Type,HaarVal::v1> v1{};
        }
        ///OTG Termination
        enum class OtVal {
            v0=0x00000000,     ///<Disable pull-down on DM
            v1=0x00000001,     ///<Enable pull-down on DM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OtVal> ot{}; 
        namespace OtValC{
            constexpr Register::FieldValue<decltype(ot)::Type,OtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ot)::Type,OtVal::v1> v1{};
        }
        ///Data Pulsing
        enum class DpVal {
            v0=0x00000000,     ///<The pull-up on DP is not asserted
            v1=0x00000001,     ///<The pull-up on DP is asserted for data pulsing during SRP
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DpVal> dp{}; 
        namespace DpValC{
            constexpr Register::FieldValue<decltype(dp)::Type,DpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dp)::Type,DpVal::v1> v1{};
        }
        ///ID Pull-Up
        enum class IdpuVal {
            v0=0x00000000,     ///<Disable pull-up. ID input not sampled.
            v1=0x00000001,     ///<Enable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IdpuVal> idpu{}; 
        namespace IdpuValC{
            constexpr Register::FieldValue<decltype(idpu)::Type,IdpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idpu)::Type,IdpuVal::v1> v1{};
        }
        ///Hardware Assist B-Disconnect to A-connect
        enum class HabaVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enable automatic B-disconnect to A-connect sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HabaVal> haba{}; 
        namespace HabaValC{
            constexpr Register::FieldValue<decltype(haba)::Type,HabaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(haba)::Type,HabaVal::v1> v1{};
        }
        ///USB ID
        enum class IdVal {
            v0=0x00000000,     ///<A device
            v1=0x00000001,     ///<B device
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,IdVal> id{}; 
        namespace IdValC{
            constexpr Register::FieldValue<decltype(id)::Type,IdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(id)::Type,IdVal::v1> v1{};
        }
        ///A VBus Valid
        enum class AvvVal {
            v0=0x00000000,     ///<VBus is below A VBus valid threshold
            v1=0x00000001,     ///<VBus is above A VBus valid threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AvvVal> avv{}; 
        namespace AvvValC{
            constexpr Register::FieldValue<decltype(avv)::Type,AvvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avv)::Type,AvvVal::v1> v1{};
        }
        ///A Session Valid
        enum class AsvVal {
            v0=0x00000000,     ///<VBus is below A session valid threshold
            v1=0x00000001,     ///<VBus is above A session valid threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AsvVal> asv{}; 
        namespace AsvValC{
            constexpr Register::FieldValue<decltype(asv)::Type,AsvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asv)::Type,AsvVal::v1> v1{};
        }
        ///B Session Valid
        enum class BsvVal {
            v0=0x00000000,     ///<VBus is below B session valid threshold
            v1=0x00000001,     ///<VBus is above B session valid threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,BsvVal> bsv{}; 
        namespace BsvValC{
            constexpr Register::FieldValue<decltype(bsv)::Type,BsvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsv)::Type,BsvVal::v1> v1{};
        }
        ///B Session End
        enum class BseVal {
            v0=0x00000000,     ///<VBus is above B session end threshold
            v1=0x00000001,     ///<VBus is below B session end threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BseVal> bse{}; 
        namespace BseValC{
            constexpr Register::FieldValue<decltype(bse)::Type,BseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bse)::Type,BseVal::v1> v1{};
        }
        ///1 Milli-Second timer Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mst{}; 
        ///Data bus Pulsing Status
        enum class DpsVal {
            v0=0x00000000,     ///<No pulsing on port
            v1=0x00000001,     ///<Pulsing detected on port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DpsVal> dps{}; 
        namespace DpsValC{
            constexpr Register::FieldValue<decltype(dps)::Type,DpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dps)::Type,DpsVal::v1> v1{};
        }
        ///USB ID Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idis{}; 
        ///A VBUS Valid Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> avvis{}; 
        ///A Session Valid Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> asvis{}; 
        ///B Session Valid Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bsvis{}; 
        ///B Session End Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bseis{}; 
        ///1 Milli-Second timer interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mss{}; 
        ///Data Pulse interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dpis{}; 
        ///USB ID Interrupt Enable
        enum class IdieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IdieVal> idie{}; 
        namespace IdieValC{
            constexpr Register::FieldValue<decltype(idie)::Type,IdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idie)::Type,IdieVal::v1> v1{};
        }
        ///A VBUS Valid Interrupt Enable
        enum class AvvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,AvvieVal> avvie{}; 
        namespace AvvieValC{
            constexpr Register::FieldValue<decltype(avvie)::Type,AvvieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avvie)::Type,AvvieVal::v1> v1{};
        }
        ///A Session Valid Interrupt Enable
        enum class AsvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,AsvieVal> asvie{}; 
        namespace AsvieValC{
            constexpr Register::FieldValue<decltype(asvie)::Type,AsvieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asvie)::Type,AsvieVal::v1> v1{};
        }
        ///B Session Valid Interrupt Enable
        enum class BsvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,BsvieVal> bsvie{}; 
        namespace BsvieValC{
            constexpr Register::FieldValue<decltype(bsvie)::Type,BsvieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsvie)::Type,BsvieVal::v1> v1{};
        }
        ///B Session End Interrupt Enable
        enum class BseieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BseieVal> bseie{}; 
        namespace BseieValC{
            constexpr Register::FieldValue<decltype(bseie)::Type,BseieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bseie)::Type,BseieVal::v1> v1{};
        }
        ///1 Milli-Second timer interrupt Enable
        enum class MseVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,MseVal> mse{}; 
        namespace MseValC{
            constexpr Register::FieldValue<decltype(mse)::Type,MseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mse)::Type,MseVal::v1> v1{};
        }
        ///Data Pulse Interrupt Enable
        enum class DpieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DpieVal> dpie{}; 
        namespace DpieValC{
            constexpr Register::FieldValue<decltype(dpie)::Type,DpieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpie)::Type,DpieVal::v1> v1{};
        }
    }
    namespace UsbhsUsbmode{    ///<USB Mode Register
        using Addr = Register::Address<0x400341a8,0xffff8fe0,0,unsigned>;
        ///Controller Mode
        enum class CmVal {
            v00=0x00000000,     ///<Idle (default for the USBHS module)
            v10=0x00000002,     ///<Device controller
            v11=0x00000003,     ///<Host controller
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,CmVal> cm{}; 
        namespace CmValC{
            constexpr Register::FieldValue<decltype(cm)::Type,CmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cm)::Type,CmVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cm)::Type,CmVal::v11> v11{};
        }
        ///Endian Select
        enum class EsVal {
            v0=0x00000000,     ///<Little endian. First byte referenced in least significant byte of 32-bit word.
            v1=0x00000001,     ///<Big endian. First byte referenced in most significant byte of 32-bit word.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EsVal> es{}; 
        namespace EsValC{
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(es)::Type,EsVal::v1> v1{};
        }
        ///Setup Lock-Out Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> slom{}; 
        ///Stream DISable
        enum class SdisVal {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SdisVal> sdis{}; 
        namespace SdisValC{
            constexpr Register::FieldValue<decltype(sdis)::Type,SdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdis)::Type,SdisVal::v1> v1{};
        }
        ///Tx to Tx HS Delay
        enum class TxhsdVal {
            v000=0x00000000,     ///<10
            v001=0x00000001,     ///<11
            v010=0x00000002,     ///<12
            v011=0x00000003,     ///<13
            v100=0x00000004,     ///<14
            v101=0x00000005,     ///<15
            v110=0x00000006,     ///<16
            v111=0x00000007,     ///<17
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,TxhsdVal> txhsd{}; 
        namespace TxhsdValC{
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v000> v000{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v001> v001{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v010> v010{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v011> v011{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v100> v100{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v101> v101{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v110> v110{};
            constexpr Register::FieldValue<decltype(txhsd)::Type,TxhsdVal::v111> v111{};
        }
    }
    namespace UsbhsEpsetupsr{    ///<Endpoint Setup Status Register
        using Addr = Register::Address<0x400341ac,0xfffffff0,0,unsigned>;
        ///Setup Endpoint Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epsetupstat{}; 
    }
    namespace UsbhsEpprime{    ///<Endpoint Initialization Register
        using Addr = Register::Address<0x400341b0,0xfff0fff0,0,unsigned>;
        ///Prime Endpoint Receive Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> perb{}; 
        ///Prime Endpoint tTansmit Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> petb{}; 
    }
    namespace UsbhsEpflush{    ///<Endpoint Flush Register
        using Addr = Register::Address<0x400341b4,0xfff0fff0,0,unsigned>;
        ///Flush Endpoint Receive Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ferb{}; 
        ///Flush Endpoint Transmit Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fetb{}; 
    }
    namespace UsbhsEpsr{    ///<Endpoint Status Register
        using Addr = Register::Address<0x400341b8,0xfff0fff0,0,unsigned>;
        ///Endpoint Receive Buffer Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> erbr{}; 
        ///Endpoint Transmit Buffer Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> etbr{}; 
    }
    namespace UsbhsEpcomplete{    ///<Endpoint Complete Register
        using Addr = Register::Address<0x400341bc,0xfff0fff0,0,unsigned>;
        ///Endpoint Receive Complete Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> erce{}; 
        ///Endpoint Transmit Complete Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> etce{}; 
    }
    namespace UsbhsEpcr0{    ///<Endpoint Control Register 0
        using Addr = Register::Address<0x400341c0,0xff72ff72,0,unsigned>;
        ///RX endpoint Stall
        enum class RxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v1> v1{};
        }
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v00> v00{};
        }
        ///RX endpoint Enable
        enum class RxeVal {
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v1> v1{};
        }
        ///TX Endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v1> v1{};
        }
        ///TX Endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v00> v00{};
        }
        ///TX Endpoint Enable
        enum class TxeVal {
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v1> v1{};
        }
    }
    namespace UsbhsEpcr1{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400341c4,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class RxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v1> v1{};
        }
        ///RX endpoint Data sink
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v11> v11{};
        }
        ///RX data toggle Inhibit
        enum class RxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::v1> v1{};
        }
        ///RX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class RxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v1> v1{};
        }
        ///TX endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v1> v1{};
        }
        ///TX endpoint Data source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v11> v11{};
        }
        ///TX data toggle Inhibit
        enum class TxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::v1> v1{};
        }
        ///TX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class TxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v1> v1{};
        }
    }
    namespace UsbhsEpcr2{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400341c8,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class RxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v1> v1{};
        }
        ///RX endpoint Data sink
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v11> v11{};
        }
        ///RX data toggle Inhibit
        enum class RxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::v1> v1{};
        }
        ///RX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class RxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v1> v1{};
        }
        ///TX endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v1> v1{};
        }
        ///TX endpoint Data source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v11> v11{};
        }
        ///TX data toggle Inhibit
        enum class TxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::v1> v1{};
        }
        ///TX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class TxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v1> v1{};
        }
    }
    namespace UsbhsEpcr3{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400341cc,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class RxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,RxsVal> rxs{}; 
        namespace RxsValC{
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs)::Type,RxsVal::v1> v1{};
        }
        ///RX endpoint Data sink
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rxt)::Type,RxtVal::v11> v11{};
        }
        ///RX data toggle Inhibit
        enum class RxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxi)::Type,RxiVal::v1> v1{};
        }
        ///RX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class RxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxe)::Type,RxeVal::v1> v1{};
        }
        ///TX endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs)::Type,TxsVal::v1> v1{};
        }
        ///TX endpoint Data source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(txt)::Type,TxtVal::v11> v11{};
        }
        ///TX data toggle Inhibit
        enum class TxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txi)::Type,TxiVal::v1> v1{};
        }
        ///TX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class TxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txe)::Type,TxeVal::v1> v1{};
        }
    }
    namespace UsbhsUsbgenctrl{    ///<USB General Control Register
        using Addr = Register::Address<0x40034200,0xffffffdc,0,unsigned>;
        ///Wakeup Interrupt Enable
        enum class WuieVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,WuieVal> wuIe{}; 
        namespace WuieValC{
            constexpr Register::FieldValue<decltype(wuIe)::Type,WuieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuIe)::Type,WuieVal::v1> v1{};
        }
        ///Wakeup on ULPI Interrupt Event
        enum class WuulpienVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WuulpienVal> wuUlpiEn{}; 
        namespace WuulpienValC{
            constexpr Register::FieldValue<decltype(wuUlpiEn)::Type,WuulpienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuUlpiEn)::Type,WuulpienVal::v1> v1{};
        }
        ///Wakeup Interrupt Clear
        enum class WuintclrVal {
            v0=0x00000000,     ///<Default, no action.
            v1=0x00000001,     ///<Clear the wake-up interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WuintclrVal> wuIntClr{}; 
        namespace WuintclrValC{
            constexpr Register::FieldValue<decltype(wuIntClr)::Type,WuintclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuIntClr)::Type,WuintclrVal::v1> v1{};
        }
    }
}
