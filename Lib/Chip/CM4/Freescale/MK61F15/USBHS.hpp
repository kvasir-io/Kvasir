#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB HS/FS/LS OTG Controller
    namespace UsbhsId{    ///<Identification Register
        using Addr = Register::Address<0x40034000,0x0000c0c0,0,unsigned>;
        ///Configuration number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> nid{}; 
        namespace NidValC{
        }
        ///Tag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> tag{}; 
        namespace TagValC{
        }
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> revision{}; 
        namespace RevisionValC{
        }
        ///Version
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> version{}; 
        namespace VersionValC{
        }
        ///Version ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> versionid{}; 
        namespace VersionidValC{
        }
    }
    namespace UsbhsHwgeneral{    ///<General Hardware Parameters Register
        using Addr = Register::Address<0x40034004,0xfffff83f,0,unsigned>;
        ///PHY Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> phym{}; 
        namespace PhymValC{
        }
        ///Serial mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,unsigned> sm{}; 
        namespace SmValC{
        }
    }
    namespace UsbhsHwhost{    ///<Host Hardware Parameters Register
        using Addr = Register::Address<0x40034008,0x0000fff0,0,unsigned>;
        ///Host Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hc{}; 
        namespace HcValC{
        }
        ///Number of Ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nport{}; 
        namespace NportValC{
        }
        ///Transaction translator contexts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ttasy{}; 
        namespace TtasyValC{
        }
        ///Transaction translator periodic contexts.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ttper{}; 
        namespace TtperValC{
        }
    }
    namespace UsbhsHwdevice{    ///<Device Hardware Parameters Register
        using Addr = Register::Address<0x4003400c,0xffffffc0,0,unsigned>;
        ///Device Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dc{}; 
        namespace DcValC{
        }
        ///Device endpoints.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> devep{}; 
        namespace DevepValC{
        }
    }
    namespace UsbhsHwtxbuf{    ///<Transmit Buffer Hardware Parameters Register
        using Addr = Register::Address<0x40034010,0x7f000000,0,unsigned>;
        ///Transmit Burst.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txburst{}; 
        namespace TxburstValC{
        }
        ///Transmit Address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txadd{}; 
        namespace TxaddValC{
        }
        ///Transmit Channel Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txchanadd{}; 
        namespace TxchanaddValC{
        }
        ///Transmit local Context Registers
        enum class TxlcVal {
            v0=0x00000000,     ///<Store device transmit contexts in the TX FIFO
            v1=0x00000001,     ///<Store device transmit contexts in a register file
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,TxlcVal> txlc{}; 
        namespace TxlcValC{
            constexpr Register::FieldValue<decltype(txlc),TxlcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txlc),TxlcVal::v1> v1{};
        }
    }
    namespace UsbhsHwrxbuf{    ///<Receive Buffer Hardware Parameters Register
        using Addr = Register::Address<0x40034014,0xffff0000,0,unsigned>;
        ///Receive Burst.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxburst{}; 
        namespace RxburstValC{
        }
        ///Receive Address.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rxadd{}; 
        namespace RxaddValC{
        }
    }
    namespace UsbhsGptimer0ld{    ///<General Purpose Timer n Load Register
        using Addr = Register::Address<0x40034080,0xff000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptld{}; 
        namespace GptldValC{
        }
    }
    namespace UsbhsGptimer1ld{    ///<General Purpose Timer n Load Register
        using Addr = Register::Address<0x40034088,0xff000000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptld{}; 
        namespace GptldValC{
        }
    }
    namespace UsbhsGptimer0ctl{    ///<General Purpose Timer n Control Register
        using Addr = Register::Address<0x40034084,0x3e000000,0,unsigned>;
        ///Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptcnt{}; 
        namespace GptcntValC{
        }
        ///Timer Mode
        enum class ModeVal {
            v0=0x00000000,     ///<One shot
            v1=0x00000001,     ///<Repeat
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::v1> v1{};
        }
        ///Timer Reset
        enum class RstVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Load counter value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst),RstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rst),RstVal::v1> v1{};
        }
        ///Timer Run
        enum class RunVal {
            v0=0x00000000,     ///<Timer stop
            v1=0x00000001,     ///<Timer run
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(run),RunVal::v1> v1{};
        }
    }
    namespace UsbhsGptimer1ctl{    ///<General Purpose Timer n Control Register
        using Addr = Register::Address<0x4003408c,0x3e000000,0,unsigned>;
        ///Timer Count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptcnt{}; 
        namespace GptcntValC{
        }
        ///Timer Mode
        enum class ModeVal {
            v0=0x00000000,     ///<One shot
            v1=0x00000001,     ///<Repeat
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode),ModeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mode),ModeVal::v1> v1{};
        }
        ///Timer Reset
        enum class RstVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Load counter value
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,RstVal> rst{}; 
        namespace RstValC{
            constexpr Register::FieldValue<decltype(rst),RstVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rst),RstVal::v1> v1{};
        }
        ///Timer Run
        enum class RunVal {
            v0=0x00000000,     ///<Timer stop
            v1=0x00000001,     ///<Timer run
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,RunVal> run{}; 
        namespace RunValC{
            constexpr Register::FieldValue<decltype(run),RunVal::v0> v0{};
            constexpr Register::FieldValue<decltype(run),RunVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v000> v000{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v001> v001{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v010> v010{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v011> v011{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v100> v100{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v101> v101{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v110> v110{};
            constexpr Register::FieldValue<decltype(burstmode),BurstmodeVal::v111> v111{};
        }
    }
    namespace UsbhsHciversion{    ///<Host Controller Interface Version and Capability Registers Length Register
        using Addr = Register::Address<0x40034100,0x0000ff00,0,unsigned>;
        ///Capability registers length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> caplength{}; 
        namespace CaplengthValC{
        }
        ///EHCI revision number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hciversion{}; 
        namespace HciversionValC{
        }
    }
    namespace UsbhsHcsparams{    ///<Host Controller Structural Parameters Register
        using Addr = Register::Address<0x40034104,0xf00e00e0,0,unsigned>;
        ///Number of Ports
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> nPorts{}; 
        namespace NportsValC{
        }
        ///Power Port Control
        enum class PpcVal {
            v1=0x00000001,     ///<Ports have power port switches
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PpcVal> ppc{}; 
        namespace PpcValC{
            constexpr Register::FieldValue<decltype(ppc),PpcVal::v1> v1{};
        }
        ///Number Ports per CC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nPcc{}; 
        namespace NpccValC{
        }
        ///Number of Companion Controllers
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> nCc{}; 
        namespace NccValC{
        }
        ///Port Indicators
        enum class PiVal {
            v0=0x00000000,     ///<No port indicator fields
            v1=0x00000001,     ///<The port status and control registers include a R/W field for controlling the state of the port indicator
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,PiVal> pi{}; 
        namespace PiValC{
            constexpr Register::FieldValue<decltype(pi),PiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pi),PiVal::v1> v1{};
        }
        ///Ports per Transaction Translator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> nPtt{}; 
        namespace NpttValC{
        }
        ///Number of Transaction Translators.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> nTt{}; 
        namespace NttValC{
        }
    }
    namespace UsbhsHccparams{    ///<Host Controller Capability Parameters Register
        using Addr = Register::Address<0x40034108,0xffff0008,0,unsigned>;
        ///64-bit addressing capability.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adc{}; 
        namespace AdcValC{
        }
        ///Programmable Frame List flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfl{}; 
        namespace PflValC{
        }
        ///Asynchronous Schedule Park capability
        enum class AspVal {
            v0=0x00000000,     ///<Park not supported.
            v1=0x00000001,     ///<Park supported.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,AspVal> asp{}; 
        namespace AspValC{
            constexpr Register::FieldValue<decltype(asp),AspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asp),AspVal::v1> v1{};
        }
        ///Isochronous Scheduling Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ist{}; 
        namespace IstValC{
        }
        ///EHCI Extended Capabilities Pointer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> eecp{}; 
        namespace EecpValC{
        }
    }
    namespace UsbhsDciversion{    ///<Device Controller Interface Version
        using Addr = Register::Address<0x40034122,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dciversion{}; 
        namespace DciversionValC{
        }
    }
    namespace UsbhsDccparams{    ///<Device Controller Capability Parameters
        using Addr = Register::Address<0x40034124,0xfffffe60,0,unsigned>;
        ///Device Endpoint Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> den{}; 
        namespace DenValC{
        }
        ///Device Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dc{}; 
        namespace DcValC{
        }
        ///Host Capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hc{}; 
        namespace HcValC{
        }
    }
    namespace UsbhsUsbcmd{    ///<USB Command Register
        using Addr = Register::Address<0x40034140,0xff001480,0,unsigned>;
        ///Run/Stop
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rs{}; 
        namespace RsValC{
        }
        ///Controller Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
        ///Frame list Size
        enum class FsVal {
            v00=0x00000000,     ///<When FS2 = 0, the size is 1024 elements (4096 bytes). When FS2 = 1, the size is 64 elements (256 bytes).
            v01=0x00000001,     ///<When FS2 = 0, the size is 512 elements (2048 bytes). When FS2 = 1, the size is 32 elements (128 bytes).
            v10=0x00000002,     ///<When FS2 = 0, the size is 256 elements (1024 bytes). When FS2 = 1, the size is 16 elements (64 bytes).
            v11=0x00000003,     ///<When FS2 = 0, the size is 128 elements (512 bytes). When FS2 = 1, the size is 8 elements (32 bytes).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,FsVal> fs{}; 
        namespace FsValC{
            constexpr Register::FieldValue<decltype(fs),FsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(fs),FsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(fs),FsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(fs),FsVal::v11> v11{};
        }
        ///Periodic Schedule Enable
        enum class PseVal {
            v0=0x00000000,     ///<Do not process periodic schedule.
            v1=0x00000001,     ///<Use the PERIODICLISTBASE register to access the periodic schedule.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PseVal> pse{}; 
        namespace PseValC{
            constexpr Register::FieldValue<decltype(pse),PseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pse),PseVal::v1> v1{};
        }
        ///Asynchronous Schedule Enable
        enum class AseVal {
            v0=0x00000000,     ///<Do not process asynchronous schedule.
            v1=0x00000001,     ///<Use the ASYNCLISTADDR register to access asynchronous schedule.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AseVal> ase{}; 
        namespace AseValC{
            constexpr Register::FieldValue<decltype(ase),AseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ase),AseVal::v1> v1{};
        }
        ///Interrupt on Async Advance doorbell
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iaa{}; 
        namespace IaaValC{
        }
        ///Asynchronous Schedule Park mode count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> asp{}; 
        namespace AspValC{
        }
        ///Asynchronous Schedule Park mode Enable
        enum class AspeVal {
            v0=0x00000000,     ///<Park mode disabled
            v1=0x00000001,     ///<Park mode enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,AspeVal> aspe{}; 
        namespace AspeValC{
            constexpr Register::FieldValue<decltype(aspe),AspeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aspe),AspeVal::v1> v1{};
        }
        ///Setup TripWire
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sutw{}; 
        namespace SutwValC{
        }
        ///Add dTD TripWire
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> atdtw{}; 
        namespace AtdtwValC{
        }
        ///Frame list Size 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fs2{}; 
        namespace Fs2ValC{
        }
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
            constexpr Register::FieldValue<decltype(itc),ItcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v1> v1{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v10> v10{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v100> v100{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v1000> v1000{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v10000> v10000{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v100000> v100000{};
            constexpr Register::FieldValue<decltype(itc),ItcVal::v1000000> v1000000{};
        }
    }
    namespace UsbhsUsbsts{    ///<USB Status Register
        using Addr = Register::Address<0x40034144,0xfcf20a00,0,unsigned>;
        ///USB Interrupt (USBINT)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ui{}; 
        namespace UiValC{
        }
        ///USB Error Interrupt
        enum class UeiVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error detected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UeiVal> uei{}; 
        namespace UeiValC{
            constexpr Register::FieldValue<decltype(uei),UeiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uei),UeiVal::v1> v1{};
        }
        ///Port Change detect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pci{}; 
        namespace PciValC{
        }
        ///Frame-list Rollover
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fri{}; 
        namespace FriValC{
        }
        ///System Error
        enum class SeiVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Error
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SeiVal> sei{}; 
        namespace SeiValC{
            constexpr Register::FieldValue<decltype(sei),SeiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sei),SeiVal::v1> v1{};
        }
        ///Interrupt on Async Advance
        enum class AaiVal {
            v0=0x00000000,     ///<No async advance interrupt
            v1=0x00000001,     ///<Async advance interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AaiVal> aai{}; 
        namespace AaiValC{
            constexpr Register::FieldValue<decltype(aai),AaiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aai),AaiVal::v1> v1{};
        }
        ///USB Reset received
        enum class UriVal {
            v0=0x00000000,     ///<No reset received
            v1=0x00000001,     ///<Reset received
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UriVal> uri{}; 
        namespace UriValC{
            constexpr Register::FieldValue<decltype(uri),UriVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uri),UriVal::v1> v1{};
        }
        ///SOF Received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sri{}; 
        namespace SriValC{
        }
        ///Device-controller suspend
        enum class SliVal {
            v0=0x00000000,     ///<Active
            v1=0x00000001,     ///<Suspended
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SliVal> sli{}; 
        namespace SliValC{
            constexpr Register::FieldValue<decltype(sli),SliVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sli),SliVal::v1> v1{};
        }
        ///ULPI Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ulpii{}; 
        namespace UlpiiValC{
        }
        ///Host Controller Halted
        enum class HchVal {
            v0=0x00000000,     ///<Running
            v1=0x00000001,     ///<Halted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,HchVal> hch{}; 
        namespace HchValC{
            constexpr Register::FieldValue<decltype(hch),HchVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hch),HchVal::v1> v1{};
        }
        ///Reclamation
        enum class RclVal {
            v0=0x00000000,     ///<Non-empty asynchronous schedule
            v1=0x00000001,     ///<Empty asynchronous schedule
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,RclVal> rcl{}; 
        namespace RclValC{
            constexpr Register::FieldValue<decltype(rcl),RclVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rcl),RclVal::v1> v1{};
        }
        ///Periodic schedule Status
        enum class PsVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,PsVal> ps{}; 
        namespace PsValC{
            constexpr Register::FieldValue<decltype(ps),PsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ps),PsVal::v1> v1{};
        }
        ///Asynchronous schedule Status
        enum class AsVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AsVal> as{}; 
        namespace AsValC{
            constexpr Register::FieldValue<decltype(as),AsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(as),AsVal::v1> v1{};
        }
        ///NAK Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> naki{}; 
        namespace NakiValC{
        }
        ///USB host Asynchronous Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uai{}; 
        namespace UaiValC{
        }
        ///USB host Periodic Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upi{}; 
        namespace UpiValC{
        }
        ///General purpose Timer 0 Interrupt
        enum class Ti0Val {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Ti0Val> ti0{}; 
        namespace Ti0ValC{
            constexpr Register::FieldValue<decltype(ti0),Ti0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ti0),Ti0Val::v1> v1{};
        }
        ///General purpose Timer 1 Interrupt
        enum class Ti1Val {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Ti1Val> ti1{}; 
        namespace Ti1ValC{
            constexpr Register::FieldValue<decltype(ti1),Ti1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(ti1),Ti1Val::v1> v1{};
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
            constexpr Register::FieldValue<decltype(ue),UeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ue),UeVal::v1> v1{};
        }
        ///USB Error interrupt Enable
        enum class UeeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UeeVal> uee{}; 
        namespace UeeValC{
            constexpr Register::FieldValue<decltype(uee),UeeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(uee),UeeVal::v1> v1{};
        }
        ///Port Change detect Enable
        enum class PceVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,PceVal> pce{}; 
        namespace PceValC{
            constexpr Register::FieldValue<decltype(pce),PceVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pce),PceVal::v1> v1{};
        }
        ///Frame list Rollover Enable
        enum class FreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,FreVal> fre{}; 
        namespace FreValC{
            constexpr Register::FieldValue<decltype(fre),FreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fre),FreVal::v1> v1{};
        }
        ///System Error Enable
        enum class SeeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SeeVal> see{}; 
        namespace SeeValC{
            constexpr Register::FieldValue<decltype(see),SeeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(see),SeeVal::v1> v1{};
        }
        ///Interrupt on Async advance Enable
        enum class AaeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AaeVal> aae{}; 
        namespace AaeValC{
            constexpr Register::FieldValue<decltype(aae),AaeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aae),AaeVal::v1> v1{};
        }
        ///USB-Reset Enable
        enum class UreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,UreVal> ure{}; 
        namespace UreValC{
            constexpr Register::FieldValue<decltype(ure),UreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ure),UreVal::v1> v1{};
        }
        ///SOF-Received Enable
        enum class SreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SreVal> sre{}; 
        namespace SreValC{
            constexpr Register::FieldValue<decltype(sre),SreVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sre),SreVal::v1> v1{};
        }
        ///Sleep (DC suspend) Enable
        enum class SleVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,SleVal> sle{}; 
        namespace SleValC{
            constexpr Register::FieldValue<decltype(sle),SleVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sle),SleVal::v1> v1{};
        }
        ///ULPI Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> ulpie{}; 
        namespace UlpieValC{
        }
        ///NAK Interrupt Enable
        enum class NakeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,NakeVal> nake{}; 
        namespace NakeValC{
            constexpr Register::FieldValue<decltype(nake),NakeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(nake),NakeVal::v1> v1{};
        }
        ///USB host Asynchronous Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uaie{}; 
        namespace UaieValC{
        }
        ///USB host Periodic Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upie{}; 
        namespace UpieValC{
        }
        ///General purpose Timer 0 Interrupt Enable
        enum class Tie0Val {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,Tie0Val> tie0{}; 
        namespace Tie0ValC{
            constexpr Register::FieldValue<decltype(tie0),Tie0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tie0),Tie0Val::v1> v1{};
        }
        ///General purpose Timer 1 Interrupt Enable
        enum class Tie1Val {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Tie1Val> tie1{}; 
        namespace Tie1ValC{
            constexpr Register::FieldValue<decltype(tie1),Tie1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(tie1),Tie1Val::v1> v1{};
        }
    }
    namespace UsbhsFrindex{    ///<Frame Index Register
        using Addr = Register::Address<0x4003414c,0x00000000,0,unsigned>;
        ///Frame Index
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> frindex{}; 
        namespace FrindexValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reerved{}; 
        namespace ReervedValC{
        }
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
            constexpr Register::FieldValue<decltype(usbadra),UsbadraVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbadra),UsbadraVal::v1> v1{};
        }
        ///Device Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> usbadr{}; 
        namespace UsbadrValC{
        }
    }
    namespace UsbhsPeriodiclistbase{    ///<Periodic Frame List Base Address Register
        using Addr = Register::Address<0x40034154,0x00000fff,0,unsigned>;
        ///Base address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> perbase{}; 
        namespace PerbaseValC{
        }
    }
    namespace UsbhsAsynclistaddr{    ///<Current Asynchronous List Address Register
        using Addr = Register::Address<0x40034158,0x0000001f,0,unsigned>;
        ///Link pointer low (LPL)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> asybase{}; 
        namespace AsybaseValC{
        }
    }
    namespace UsbhsEplistaddr{    ///<Endpoint List Address Register
        using Addr = Register::Address<0x40034158,0x000007ff,0,unsigned>;
        ///Endpoint list address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> epbase{}; 
        namespace EpbaseValC{
        }
    }
    namespace UsbhsTtctrl{    ///<Host TT Asynchronous Buffer Control
        using Addr = Register::Address<0x4003415c,0x00ffffff,0,unsigned>;
        ///TT Hub Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ttha{}; 
        namespace TthaValC{
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reerved{}; 
        namespace ReervedValC{
        }
    }
    namespace UsbhsBurstsize{    ///<Master Interface Data Burst Size Register
        using Addr = Register::Address<0x40034160,0xffff0000,0,unsigned>;
        ///Programable RX Burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxpburst{}; 
        namespace RxpburstValC{
        }
        ///Programable TX Burst length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txpburst{}; 
        namespace TxpburstValC{
        }
    }
    namespace UsbhsTxfilltuning{    ///<Transmit FIFO Tuning Control Register
        using Addr = Register::Address<0x40034164,0xffc0e080,0,unsigned>;
        ///Scheduler Overhead
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> txschoh{}; 
        namespace TxschohValC{
        }
        ///Scheduler Health counter
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> txschhealth{}; 
        namespace TxschhealthValC{
        }
        ///FIFO burst Threshold
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> txfifothres{}; 
        namespace TxfifothresValC{
        }
    }
    namespace UsbhsUlpiViewport{    ///<ULPI Register Access
        using Addr = Register::Address<0x40034170,0x10000000,0,unsigned>;
        ///ULPI Data Write
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ulpiDatwr{}; 
        namespace UlpidatwrValC{
        }
        ///ULPI Data Read
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ulpiDatrd{}; 
        namespace UlpidatrdValC{
        }
        ///ULPI data Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ulpiAddr{}; 
        namespace UlpiaddrValC{
        }
        ///ULPI Port number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> ulpiPort{}; 
        namespace UlpiportValC{
        }
        ///ULPI Sync State
        enum class UlpissVal {
            v0=0x00000000,     ///<Any other state (that is, carkit, serial, low power)
            v1=0x00000001,     ///<Normal sync state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,UlpissVal> ulpiSs{}; 
        namespace UlpissValC{
            constexpr Register::FieldValue<decltype(ulpiSs),UlpissVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ulpiSs),UlpissVal::v1> v1{};
        }
        ///ULPI Read/Write
        enum class UlpirwVal {
            v0=0x00000000,     ///<Read
            v1=0x00000001,     ///<Write
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,UlpirwVal> ulpiRw{}; 
        namespace UlpirwValC{
            constexpr Register::FieldValue<decltype(ulpiRw),UlpirwVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ulpiRw),UlpirwVal::v1> v1{};
        }
        ///ULPI Run
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ulpiRun{}; 
        namespace UlpirunValC{
        }
        ///ULPI Wake-Up
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ulpiWu{}; 
        namespace UlpiwuValC{
        }
    }
    namespace UsbhsEndptnak{    ///<Endpoint NAK Register
        using Addr = Register::Address<0x40034178,0xfff0fff0,0,unsigned>;
        ///RX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> eprn{}; 
        namespace EprnValC{
        }
        ///TX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> eptn{}; 
        namespace EptnValC{
        }
    }
    namespace UsbhsEndptnaken{    ///<Endpoint NAK Enable Register
        using Addr = Register::Address<0x4003417c,0xfff0fff0,0,unsigned>;
        ///RX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> eprne{}; 
        namespace EprneValC{
        }
        ///TX Endpoint NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> eptne{}; 
        namespace EptneValC{
        }
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
            constexpr Register::FieldValue<decltype(ccs),CcsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ccs),CcsVal::v1> v1{};
        }
        ///Connect Change Status
        enum class CscVal {
            v0=0x00000000,     ///<No change
            v1=0x00000001,     ///<Connect status has changed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CscVal> csc{}; 
        namespace CscValC{
            constexpr Register::FieldValue<decltype(csc),CscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(csc),CscVal::v1> v1{};
        }
        ///Port Enabled/disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        ///Port Enable/disable Change
        enum class PecVal {
            v0=0x00000000,     ///<No change
            v1=0x00000001,     ///<Port disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,PecVal> pec{}; 
        namespace PecValC{
            constexpr Register::FieldValue<decltype(pec),PecVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pec),PecVal::v1> v1{};
        }
        ///Over-current active
        enum class OcaVal {
            v0=0x00000000,     ///<Port not in over-current condition
            v1=0x00000001,     ///<Port currently in over-current condition
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OcaVal> oca{}; 
        namespace OcaValC{
            constexpr Register::FieldValue<decltype(oca),OcaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(oca),OcaVal::v1> v1{};
        }
        ///Over-Current Change
        enum class OccVal {
            v0=0x00000000,     ///<No over-current
            v1=0x00000001,     ///<Over-current detect
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,OccVal> occ{}; 
        namespace OccValC{
            constexpr Register::FieldValue<decltype(occ),OccVal::v0> v0{};
            constexpr Register::FieldValue<decltype(occ),OccVal::v1> v1{};
        }
        ///Force Port Resume
        enum class FprVal {
            v0=0x00000000,     ///<No resume (K-state) detected/driven on port
            v1=0x00000001,     ///<Resume detected/driven on port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,FprVal> fpr{}; 
        namespace FprValC{
            constexpr Register::FieldValue<decltype(fpr),FprVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fpr),FprVal::v1> v1{};
        }
        ///Suspend
        enum class SuspVal {
            v0=0x00000000,     ///<Port not in suspend state
            v1=0x00000001,     ///<Port in suspend state
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuspVal> susp{}; 
        namespace SuspValC{
            constexpr Register::FieldValue<decltype(susp),SuspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(susp),SuspVal::v1> v1{};
        }
        ///Port Reset
        enum class PrVal {
            v0=0x00000000,     ///<Port is not in reset
            v1=0x00000001,     ///<Port is in reset
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,PrVal> pr{}; 
        namespace PrValC{
            constexpr Register::FieldValue<decltype(pr),PrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pr),PrVal::v1> v1{};
        }
        ///High Speed Port.
        enum class HspVal {
            v0=0x00000000,     ///<FS or LS
            v1=0x00000001,     ///<HS
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,HspVal> hsp{}; 
        namespace HspValC{
            constexpr Register::FieldValue<decltype(hsp),HspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hsp),HspVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(ls),LsVal::v00> v00{};
            constexpr Register::FieldValue<decltype(ls),LsVal::v01> v01{};
            constexpr Register::FieldValue<decltype(ls),LsVal::v10> v10{};
            constexpr Register::FieldValue<decltype(ls),LsVal::v11> v11{};
        }
        ///Port Power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pp{}; 
        namespace PpValC{
        }
        ///Port Owner
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> po{}; 
        namespace PoValC{
        }
        ///Port Indicator Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pic{}; 
        namespace PicValC{
        }
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
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0000> v0000{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0001> v0001{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0010> v0010{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0011> v0011{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0100> v0100{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0101> v0101{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0110> v0110{};
            constexpr Register::FieldValue<decltype(ptc),PtcVal::v0111> v0111{};
        }
        ///Wake on Connect enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wkcn{}; 
        namespace WkcnValC{
        }
        ///Wake on Disconnect enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wkds{}; 
        namespace WkdsValC{
        }
        ///Wake on Over-Current enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wkoc{}; 
        namespace WkocValC{
        }
        ///PHY low power suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> phcd{}; 
        namespace PhcdValC{
        }
        ///Port force Full-Speed Connect
        enum class PfscVal {
            v0=0x00000000,     ///<Allow the port to identify itself as high speed
            v1=0x00000001,     ///<Force the port to only connect at full speed
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,PfscVal> pfsc{}; 
        namespace PfscValC{
            constexpr Register::FieldValue<decltype(pfsc),PfscVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pfsc),PfscVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(pspd),PspdVal::v00> v00{};
            constexpr Register::FieldValue<decltype(pspd),PspdVal::v01> v01{};
            constexpr Register::FieldValue<decltype(pspd),PspdVal::v10> v10{};
            constexpr Register::FieldValue<decltype(pspd),PspdVal::v11> v11{};
        }
        ///Port Transceiver Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pts{}; 
        namespace PtsValC{
        }
    }
    namespace UsbhsOtgsc{    ///<On-the-Go Status and Control Register
        using Addr = Register::Address<0x400341a4,0x80808040,0,unsigned>;
        ///VBUS Discharge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vd{}; 
        namespace VdValC{
        }
        ///VBUS Charge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vc{}; 
        namespace VcValC{
        }
        ///Hardware Assist Auto-Reset
        enum class HaarVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enable automatic reset after connect on host port.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,HaarVal> haar{}; 
        namespace HaarValC{
            constexpr Register::FieldValue<decltype(haar),HaarVal::v0> v0{};
            constexpr Register::FieldValue<decltype(haar),HaarVal::v1> v1{};
        }
        ///OTG Termination
        enum class OtVal {
            v0=0x00000000,     ///<Disable pull-down on DM
            v1=0x00000001,     ///<Enable pull-down on DM
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OtVal> ot{}; 
        namespace OtValC{
            constexpr Register::FieldValue<decltype(ot),OtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ot),OtVal::v1> v1{};
        }
        ///Data Pulsing
        enum class DpVal {
            v0=0x00000000,     ///<The pull-up on DP is not asserted
            v1=0x00000001,     ///<The pull-up on DP is asserted for data pulsing during SRP
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DpVal> dp{}; 
        namespace DpValC{
            constexpr Register::FieldValue<decltype(dp),DpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dp),DpVal::v1> v1{};
        }
        ///ID Pull-Up
        enum class IdpuVal {
            v0=0x00000000,     ///<Disable pull-up. ID input not sampled.
            v1=0x00000001,     ///<Enable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,IdpuVal> idpu{}; 
        namespace IdpuValC{
            constexpr Register::FieldValue<decltype(idpu),IdpuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idpu),IdpuVal::v1> v1{};
        }
        ///Hardware Assist B-Disconnect to A-connect
        enum class HabaVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enable automatic B-disconnect to A-connect sequence.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,HabaVal> haba{}; 
        namespace HabaValC{
            constexpr Register::FieldValue<decltype(haba),HabaVal::v0> v0{};
            constexpr Register::FieldValue<decltype(haba),HabaVal::v1> v1{};
        }
        ///USB ID
        enum class IdVal {
            v0=0x00000000,     ///<A device
            v1=0x00000001,     ///<B device
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,IdVal> id{}; 
        namespace IdValC{
            constexpr Register::FieldValue<decltype(id),IdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(id),IdVal::v1> v1{};
        }
        ///A VBus Valid
        enum class AvvVal {
            v0=0x00000000,     ///<VBus is below A VBus valid threshold
            v1=0x00000001,     ///<VBus is above A VBus valid threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,AvvVal> avv{}; 
        namespace AvvValC{
            constexpr Register::FieldValue<decltype(avv),AvvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avv),AvvVal::v1> v1{};
        }
        ///A Session Valid
        enum class AsvVal {
            v0=0x00000000,     ///<VBus is below A session valid threshold
            v1=0x00000001,     ///<VBus is above A session valid threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,AsvVal> asv{}; 
        namespace AsvValC{
            constexpr Register::FieldValue<decltype(asv),AsvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asv),AsvVal::v1> v1{};
        }
        ///B Session Valid
        enum class BsvVal {
            v0=0x00000000,     ///<VBus is below B session valid threshold
            v1=0x00000001,     ///<VBus is above B session valid threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,BsvVal> bsv{}; 
        namespace BsvValC{
            constexpr Register::FieldValue<decltype(bsv),BsvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsv),BsvVal::v1> v1{};
        }
        ///B Session End
        enum class BseVal {
            v0=0x00000000,     ///<VBus is above B session end threshold
            v1=0x00000001,     ///<VBus is below B session end threshold
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,BseVal> bse{}; 
        namespace BseValC{
            constexpr Register::FieldValue<decltype(bse),BseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bse),BseVal::v1> v1{};
        }
        ///1 Milli-Second timer Toggle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mst{}; 
        namespace MstValC{
        }
        ///Data bus Pulsing Status
        enum class DpsVal {
            v0=0x00000000,     ///<No pulsing on port
            v1=0x00000001,     ///<Pulsing detected on port
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,DpsVal> dps{}; 
        namespace DpsValC{
            constexpr Register::FieldValue<decltype(dps),DpsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dps),DpsVal::v1> v1{};
        }
        ///USB ID Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idis{}; 
        namespace IdisValC{
        }
        ///A VBUS Valid Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> avvis{}; 
        namespace AvvisValC{
        }
        ///A Session Valid Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> asvis{}; 
        namespace AsvisValC{
        }
        ///B Session Valid Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bsvis{}; 
        namespace BsvisValC{
        }
        ///B Session End Interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bseis{}; 
        namespace BseisValC{
        }
        ///1 Milli-Second timer interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mss{}; 
        namespace MssValC{
        }
        ///Data Pulse interrupt Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dpis{}; 
        namespace DpisValC{
        }
        ///USB ID Interrupt Enable
        enum class IdieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,IdieVal> idie{}; 
        namespace IdieValC{
            constexpr Register::FieldValue<decltype(idie),IdieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(idie),IdieVal::v1> v1{};
        }
        ///A VBUS Valid Interrupt Enable
        enum class AvvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,AvvieVal> avvie{}; 
        namespace AvvieValC{
            constexpr Register::FieldValue<decltype(avvie),AvvieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avvie),AvvieVal::v1> v1{};
        }
        ///A Session Valid Interrupt Enable
        enum class AsvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,AsvieVal> asvie{}; 
        namespace AsvieValC{
            constexpr Register::FieldValue<decltype(asvie),AsvieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(asvie),AsvieVal::v1> v1{};
        }
        ///B Session Valid Interrupt Enable
        enum class BsvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,BsvieVal> bsvie{}; 
        namespace BsvieValC{
            constexpr Register::FieldValue<decltype(bsvie),BsvieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsvie),BsvieVal::v1> v1{};
        }
        ///B Session End Interrupt Enable
        enum class BseieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,BseieVal> bseie{}; 
        namespace BseieValC{
            constexpr Register::FieldValue<decltype(bseie),BseieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bseie),BseieVal::v1> v1{};
        }
        ///1 Milli-Second timer interrupt Enable
        enum class MseVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,MseVal> mse{}; 
        namespace MseValC{
            constexpr Register::FieldValue<decltype(mse),MseVal::v0> v0{};
            constexpr Register::FieldValue<decltype(mse),MseVal::v1> v1{};
        }
        ///Data Pulse Interrupt Enable
        enum class DpieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,DpieVal> dpie{}; 
        namespace DpieValC{
            constexpr Register::FieldValue<decltype(dpie),DpieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dpie),DpieVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(cm),CmVal::v00> v00{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v10> v10{};
            constexpr Register::FieldValue<decltype(cm),CmVal::v11> v11{};
        }
        ///Endian Select
        enum class EsVal {
            v0=0x00000000,     ///<Little endian. First byte referenced in least significant byte of 32-bit word.
            v1=0x00000001,     ///<Big endian. First byte referenced in most significant byte of 32-bit word.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,EsVal> es{}; 
        namespace EsValC{
            constexpr Register::FieldValue<decltype(es),EsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(es),EsVal::v1> v1{};
        }
        ///Setup Lock-Out Mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> slom{}; 
        namespace SlomValC{
        }
        ///Stream DISable
        enum class SdisVal {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SdisVal> sdis{}; 
        namespace SdisValC{
            constexpr Register::FieldValue<decltype(sdis),SdisVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sdis),SdisVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v000> v000{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v001> v001{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v010> v010{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v011> v011{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v100> v100{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v101> v101{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v110> v110{};
            constexpr Register::FieldValue<decltype(txhsd),TxhsdVal::v111> v111{};
        }
    }
    namespace UsbhsEpsetupsr{    ///<Endpoint Setup Status Register
        using Addr = Register::Address<0x400341ac,0xfffffff0,0,unsigned>;
        ///Setup Endpoint Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epsetupstat{}; 
        namespace EpsetupstatValC{
        }
    }
    namespace UsbhsEpprime{    ///<Endpoint Initialization Register
        using Addr = Register::Address<0x400341b0,0xfff0fff0,0,unsigned>;
        ///Prime Endpoint Receive Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> perb{}; 
        namespace PerbValC{
        }
        ///Prime Endpoint tTansmit Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> petb{}; 
        namespace PetbValC{
        }
    }
    namespace UsbhsEpflush{    ///<Endpoint Flush Register
        using Addr = Register::Address<0x400341b4,0xfff0fff0,0,unsigned>;
        ///Flush Endpoint Receive Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ferb{}; 
        namespace FerbValC{
        }
        ///Flush Endpoint Transmit Buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fetb{}; 
        namespace FetbValC{
        }
    }
    namespace UsbhsEpsr{    ///<Endpoint Status Register
        using Addr = Register::Address<0x400341b8,0xfff0fff0,0,unsigned>;
        ///Endpoint Receive Buffer Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> erbr{}; 
        namespace ErbrValC{
        }
        ///Endpoint Transmit Buffer Ready
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> etbr{}; 
        namespace EtbrValC{
        }
    }
    namespace UsbhsEpcomplete{    ///<Endpoint Complete Register
        using Addr = Register::Address<0x400341bc,0xfff0fff0,0,unsigned>;
        ///Endpoint Receive Complete Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> erce{}; 
        namespace ErceValC{
        }
        ///Endpoint Transmit Complete Event
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> etce{}; 
        namespace EtceValC{
        }
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
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v1> v1{};
        }
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v00> v00{};
        }
        ///RX endpoint Enable
        enum class RxeVal {
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v1> v1{};
        }
        ///TX Endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs),TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs),TxsVal::v1> v1{};
        }
        ///TX Endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt),TxtVal::v00> v00{};
        }
        ///TX Endpoint Enable
        enum class TxeVal {
            v1=0x00000001,     ///<Enable
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe),TxeVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v1> v1{};
        }
        ///RX endpoint Data sink
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        namespace RxdValC{
        }
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v11> v11{};
        }
        ///RX data toggle Inhibit
        enum class RxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi),RxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxi),RxiVal::v1> v1{};
        }
        ///RX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        namespace RxrValC{
        }
        ///RX endpoint Enable
        enum class RxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v1> v1{};
        }
        ///TX endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs),TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs),TxsVal::v1> v1{};
        }
        ///TX endpoint Data source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        namespace TxdValC{
        }
        ///TX endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt),TxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v11> v11{};
        }
        ///TX data toggle Inhibit
        enum class TxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi),TxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txi),TxiVal::v1> v1{};
        }
        ///TX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        namespace TxrValC{
        }
        ///TX endpoint Enable
        enum class TxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe),TxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txe),TxeVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v1> v1{};
        }
        ///RX endpoint Data sink
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        namespace RxdValC{
        }
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v11> v11{};
        }
        ///RX data toggle Inhibit
        enum class RxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi),RxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxi),RxiVal::v1> v1{};
        }
        ///RX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        namespace RxrValC{
        }
        ///RX endpoint Enable
        enum class RxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v1> v1{};
        }
        ///TX endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs),TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs),TxsVal::v1> v1{};
        }
        ///TX endpoint Data source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        namespace TxdValC{
        }
        ///TX endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt),TxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v11> v11{};
        }
        ///TX data toggle Inhibit
        enum class TxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi),TxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txi),TxiVal::v1> v1{};
        }
        ///TX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        namespace TxrValC{
        }
        ///TX endpoint Enable
        enum class TxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe),TxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txe),TxeVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxs),RxsVal::v1> v1{};
        }
        ///RX endpoint Data sink
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        namespace RxdValC{
        }
        ///RX endpoint Type
        enum class RxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,RxtVal> rxt{}; 
        namespace RxtValC{
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(rxt),RxtVal::v11> v11{};
        }
        ///RX data toggle Inhibit
        enum class RxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RxiVal> rxi{}; 
        namespace RxiValC{
            constexpr Register::FieldValue<decltype(rxi),RxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxi),RxiVal::v1> v1{};
        }
        ///RX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        namespace RxrValC{
        }
        ///RX endpoint Enable
        enum class RxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,RxeVal> rxe{}; 
        namespace RxeValC{
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(rxe),RxeVal::v1> v1{};
        }
        ///TX endpoint Stall
        enum class TxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,TxsVal> txs{}; 
        namespace TxsValC{
            constexpr Register::FieldValue<decltype(txs),TxsVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txs),TxsVal::v1> v1{};
        }
        ///TX endpoint Data source
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        namespace TxdValC{
        }
        ///TX endpoint Type
        enum class TxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,TxtVal> txt{}; 
        namespace TxtValC{
            constexpr Register::FieldValue<decltype(txt),TxtVal::v00> v00{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v01> v01{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v10> v10{};
            constexpr Register::FieldValue<decltype(txt),TxtVal::v11> v11{};
        }
        ///TX data toggle Inhibit
        enum class TxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,TxiVal> txi{}; 
        namespace TxiValC{
            constexpr Register::FieldValue<decltype(txi),TxiVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txi),TxiVal::v1> v1{};
        }
        ///TX data toggle Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        namespace TxrValC{
        }
        ///TX endpoint Enable
        enum class TxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,TxeVal> txe{}; 
        namespace TxeValC{
            constexpr Register::FieldValue<decltype(txe),TxeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(txe),TxeVal::v1> v1{};
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
            constexpr Register::FieldValue<decltype(wuIe),WuieVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuIe),WuieVal::v1> v1{};
        }
        ///Wakeup on ULPI Interrupt Event
        enum class WuulpienVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,WuulpienVal> wuUlpiEn{}; 
        namespace WuulpienValC{
            constexpr Register::FieldValue<decltype(wuUlpiEn),WuulpienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuUlpiEn),WuulpienVal::v1> v1{};
        }
        ///Wakeup Interrupt Clear
        enum class WuintclrVal {
            v0=0x00000000,     ///<Default, no action.
            v1=0x00000001,     ///<Clear the wake-up interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,WuintclrVal> wuIntClr{}; 
        namespace WuintclrValC{
            constexpr Register::FieldValue<decltype(wuIntClr),WuintclrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(wuIntClr),WuintclrVal::v1> v1{};
        }
    }
}
