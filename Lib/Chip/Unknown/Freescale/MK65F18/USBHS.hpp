#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB HS/FS/LS OTG Controller
    namespace UsbhsId{    ///<Identification Register
        using Addr = Register::Address<0x400a1000,0x0000c0c0,0,unsigned>;
        ///Configuration number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> nid{}; 
        ///Tag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> tag{}; 
        ///Revision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> revision{}; 
        ///Version
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,25),Register::ReadWriteAccess,unsigned> version{}; 
        ///Version ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,unsigned> versionid{}; 
    }
    namespace UsbhsHwgeneral{    ///<General Hardware Parameters Register
        using Addr = Register::Address<0x400a1004,0xfffff80f,0,unsigned>;
        ///PHY Width
        enum class phywVal {
            v01=0x00000001,     ///<16 bit wide data bus
        };
        namespace phywValC{
            constexpr MPL::Value<phywVal,phywVal::v01> v01{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,phywVal> phyw{}; 
        ///PHY Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> phym{}; 
        ///Serial mode
        enum class smVal {
            v00=0x00000000,     ///<No Serial Engine, always use parallel signaling.
        };
        namespace smValC{
            constexpr MPL::Value<smVal,smVal::v00> v00{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9),Register::ReadWriteAccess,smVal> sm{}; 
    }
    namespace UsbhsHwhost{    ///<Host Hardware Parameters Register
        using Addr = Register::Address<0x400a1008,0x0000fff0,0,unsigned>;
        ///Host Capable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> hc{}; 
        ///Number of Ports
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> nport{}; 
        ///Transaction translator contexts.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ttasy{}; 
        ///Transaction translator periodic contexts.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ttper{}; 
    }
    namespace UsbhsHwdevice{    ///<Device Hardware Parameters Register
        using Addr = Register::Address<0x400a100c,0xffffffc0,0,unsigned>;
        ///Device Capable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Device endpoints.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> devep{}; 
    }
    namespace UsbhsHwtxbuf{    ///<Transmit Buffer Hardware Parameters Register
        using Addr = Register::Address<0x400a1010,0x7f000000,0,unsigned>;
        ///Transmit Burst.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txburst{}; 
        ///Transmit Address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txadd{}; 
        ///Transmit Channel Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> txchanadd{}; 
        ///Transmit local Context Registers
        enum class txlcVal {
            v0=0x00000000,     ///<Store device transmit contexts in the TX FIFO
            v1=0x00000001,     ///<Store device transmit contexts in a register file
        };
        namespace txlcValC{
            constexpr MPL::Value<txlcVal,txlcVal::v0> v0{};
            constexpr MPL::Value<txlcVal,txlcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,txlcVal> txlc{}; 
    }
    namespace UsbhsHwrxbuf{    ///<Receive Buffer Hardware Parameters Register
        using Addr = Register::Address<0x400a1014,0xffff0000,0,unsigned>;
        ///Receive Burst.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxburst{}; 
        ///Receive Address.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> rxadd{}; 
    }
    namespace UsbhsGptimer0ld{    ///<General Purpose Timer n Load Register
        using Addr = Register::Address<0x400a1080,0xff000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptld{}; 
    }
    namespace UsbhsGptimer1ld{    ///<General Purpose Timer n Load Register
        using Addr = Register::Address<0x400a1088,0xff000000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptld{}; 
    }
    namespace UsbhsGptimer0ctl{    ///<General Purpose Timer n Control Register
        using Addr = Register::Address<0x400a1084,0x3e000000,0,unsigned>;
        ///Timer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptcnt{}; 
        ///Timer Mode
        enum class modeVal {
            v0=0x00000000,     ///<One shot
            v1=0x00000001,     ///<Repeat
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::v0> v0{};
            constexpr MPL::Value<modeVal,modeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Timer Reset
        enum class rstVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Load counter value
        };
        namespace rstValC{
            constexpr MPL::Value<rstVal,rstVal::v0> v0{};
            constexpr MPL::Value<rstVal,rstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,rstVal> rst{}; 
        ///Timer Run
        enum class runVal {
            v0=0x00000000,     ///<Timer stop
            v1=0x00000001,     ///<Timer run
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::v0> v0{};
            constexpr MPL::Value<runVal,runVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace UsbhsGptimer1ctl{    ///<General Purpose Timer n Control Register
        using Addr = Register::Address<0x400a108c,0x3e000000,0,unsigned>;
        ///Timer Count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0),Register::ReadWriteAccess,unsigned> gptcnt{}; 
        ///Timer Mode
        enum class modeVal {
            v0=0x00000000,     ///<One shot
            v1=0x00000001,     ///<Repeat
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::v0> v0{};
            constexpr MPL::Value<modeVal,modeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Timer Reset
        enum class rstVal {
            v0=0x00000000,     ///<No action
            v1=0x00000001,     ///<Load counter value
        };
        namespace rstValC{
            constexpr MPL::Value<rstVal,rstVal::v0> v0{};
            constexpr MPL::Value<rstVal,rstVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,rstVal> rst{}; 
        ///Timer Run
        enum class runVal {
            v0=0x00000000,     ///<Timer stop
            v1=0x00000001,     ///<Timer run
        };
        namespace runValC{
            constexpr MPL::Value<runVal,runVal::v0> v0{};
            constexpr MPL::Value<runVal,runVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,runVal> run{}; 
    }
    namespace UsbhsUsbSbuscfg{    ///<System Bus Interface Configuration Register
        using Addr = Register::Address<0x400a1090,0xfffffff8,0,unsigned>;
        ///Burst mode
        enum class burstmodeVal {
            v000=0x00000000,     ///<INCR burst of unspecified length
            v001=0x00000001,     ///<INCR4, non-multiple transfers of INCR4 is decomposed into singles.
            v010=0x00000002,     ///<INCR8, non-multiple transfers of INCR8, is decomposed into INCR4 or singles.
            v011=0x00000003,     ///<INCR16, non-multiple transfers of INCR16, is decomposed into INCR8, INCR4 or singles.
            v100=0x00000004,     ///<Reserved, do not use.
            v101=0x00000005,     ///<INCR4, non-multiple transfers of INCR4 is decomposed into smaller unspecified length bursts.
            v110=0x00000006,     ///<INCR8, non-multiple transfers of INCR8 is decomposed into smaller unspecified length bursts.
            v111=0x00000007,     ///<INCR16, non-multiple transfers of INCR16 is decomposed into smaller unspecified length bursts.
        };
        namespace burstmodeValC{
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v000> v000{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v001> v001{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v010> v010{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v011> v011{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v100> v100{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v101> v101{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v110> v110{};
            constexpr MPL::Value<burstmodeVal,burstmodeVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,burstmodeVal> burstmode{}; 
    }
    namespace UsbhsHciversion{    ///<Host Controller Interface Version and Capability Registers Length Register
        using Addr = Register::Address<0x400a1100,0x0000ff00,0,unsigned>;
        ///Capability registers length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> caplength{}; 
        ///EHCI revision number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> hciversion{}; 
    }
    namespace UsbhsHcsparams{    ///<Host Controller Structural Parameters Register
        using Addr = Register::Address<0x400a1104,0xf00e00e0,0,unsigned>;
        ///Number of Ports
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> nPorts{}; 
        ///Power Port Control
        enum class ppcVal {
            v1=0x00000001,     ///<Ports have power port switches
        };
        namespace ppcValC{
            constexpr MPL::Value<ppcVal,ppcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ppcVal> ppc{}; 
        ///Number Ports per CC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> nPcc{}; 
        ///Number of Companion Controllers
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> nCc{}; 
        ///Port Indicators
        enum class piVal {
            v0=0x00000000,     ///<No port indicator fields
            v1=0x00000001,     ///<The port status and control registers include a R/W field for controlling the state of the port indicator
        };
        namespace piValC{
            constexpr MPL::Value<piVal,piVal::v0> v0{};
            constexpr MPL::Value<piVal,piVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,piVal> pi{}; 
        ///Ports per Transaction Translator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,20),Register::ReadWriteAccess,unsigned> nPtt{}; 
        ///Number of Transaction Translators.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> nTt{}; 
    }
    namespace UsbhsHccparams{    ///<Host Controller Capability Parameters Register
        using Addr = Register::Address<0x400a1108,0xffff0008,0,unsigned>;
        ///64-bit addressing capability.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adc{}; 
        ///Programmable Frame List flag
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pfl{}; 
        ///Asynchronous Schedule Park capability
        enum class aspVal {
            v0=0x00000000,     ///<Park not supported.
            v1=0x00000001,     ///<Park supported.
        };
        namespace aspValC{
            constexpr MPL::Value<aspVal,aspVal::v0> v0{};
            constexpr MPL::Value<aspVal,aspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,aspVal> asp{}; 
        ///Isochronous Scheduling Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> ist{}; 
        ///EHCI Extended Capabilities Pointer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> eecp{}; 
    }
    namespace UsbhsDciversion{    ///<Device Controller Interface Version
        using Addr = Register::Address<0x400a1122,0xffff0000,0,unsigned>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> dciversion{}; 
    }
    namespace UsbhsDccparams{    ///<Device Controller Capability Parameters
        using Addr = Register::Address<0x400a1124,0xfffffe60,0,unsigned>;
        ///Device Endpoint Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> den{}; 
        ///Device Capable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dc{}; 
        ///Host Capable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hc{}; 
    }
    namespace UsbhsUsbcmd{    ///<USB Command Register
        using Addr = Register::Address<0x400a1140,0xff001480,0,unsigned>;
        ///Run/Stop
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rs{}; 
        ///Controller Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Frame list Size
        enum class fsVal {
            v00=0x00000000,     ///<When FS2 = 0, the size is 1024 elements (4096 bytes). When FS2 = 1, the size is 64 elements (256 bytes).
            v01=0x00000001,     ///<When FS2 = 0, the size is 512 elements (2048 bytes). When FS2 = 1, the size is 32 elements (128 bytes).
            v10=0x00000002,     ///<When FS2 = 0, the size is 256 elements (1024 bytes). When FS2 = 1, the size is 16 elements (64 bytes).
            v11=0x00000003,     ///<When FS2 = 0, the size is 128 elements (512 bytes). When FS2 = 1, the size is 8 elements (32 bytes).
        };
        namespace fsValC{
            constexpr MPL::Value<fsVal,fsVal::v00> v00{};
            constexpr MPL::Value<fsVal,fsVal::v01> v01{};
            constexpr MPL::Value<fsVal,fsVal::v10> v10{};
            constexpr MPL::Value<fsVal,fsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,fsVal> fs{}; 
        ///Periodic Schedule Enable
        enum class pseVal {
            v0=0x00000000,     ///<Do not process periodic schedule.
            v1=0x00000001,     ///<Use the PERIODICLISTBASE register to access the periodic schedule.
        };
        namespace pseValC{
            constexpr MPL::Value<pseVal,pseVal::v0> v0{};
            constexpr MPL::Value<pseVal,pseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,pseVal> pse{}; 
        ///Asynchronous Schedule Enable
        enum class aseVal {
            v0=0x00000000,     ///<Do not process asynchronous schedule.
            v1=0x00000001,     ///<Use the ASYNCLISTADDR register to access asynchronous schedule.
        };
        namespace aseValC{
            constexpr MPL::Value<aseVal,aseVal::v0> v0{};
            constexpr MPL::Value<aseVal,aseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,aseVal> ase{}; 
        ///Interrupt on Async Advance doorbell
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> iaa{}; 
        ///Asynchronous Schedule Park mode count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> asp{}; 
        ///Asynchronous Schedule Park mode Enable
        enum class aspeVal {
            v0=0x00000000,     ///<Park mode disabled
            v1=0x00000001,     ///<Park mode enabled
        };
        namespace aspeValC{
            constexpr MPL::Value<aspeVal,aspeVal::v0> v0{};
            constexpr MPL::Value<aspeVal,aspeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,aspeVal> aspe{}; 
        ///Setup TripWire
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> sutw{}; 
        ///Add dTD TripWire
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> atdtw{}; 
        ///Frame list Size 2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> fs2{}; 
        ///Interrupt Threshold Control
        enum class itcVal {
            v0=0x00000000,     ///<Immediate (no threshold)
            v1=0x00000001,     ///<1 microframe
            v10=0x00000002,     ///<2 microframes
            v100=0x00000004,     ///<4 microframes
            v1000=0x00000008,     ///<8 microframes
            v10000=0x00000010,     ///<16 microframes
            v100000=0x00000020,     ///<32 microframes
            v1000000=0x00000040,     ///<64 microframes
        };
        namespace itcValC{
            constexpr MPL::Value<itcVal,itcVal::v0> v0{};
            constexpr MPL::Value<itcVal,itcVal::v1> v1{};
            constexpr MPL::Value<itcVal,itcVal::v10> v10{};
            constexpr MPL::Value<itcVal,itcVal::v100> v100{};
            constexpr MPL::Value<itcVal,itcVal::v1000> v1000{};
            constexpr MPL::Value<itcVal,itcVal::v10000> v10000{};
            constexpr MPL::Value<itcVal,itcVal::v100000> v100000{};
            constexpr MPL::Value<itcVal,itcVal::v1000000> v1000000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,itcVal> itc{}; 
    }
    namespace UsbhsUsbsts{    ///<USB Status Register
        using Addr = Register::Address<0x400a1144,0xfcf20e00,0,unsigned>;
        ///USB Interrupt (USBINT)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ui{}; 
        ///USB Error Interrupt
        enum class ueiVal {
            v0=0x00000000,     ///<No error
            v1=0x00000001,     ///<Error detected
        };
        namespace ueiValC{
            constexpr MPL::Value<ueiVal,ueiVal::v0> v0{};
            constexpr MPL::Value<ueiVal,ueiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ueiVal> uei{}; 
        ///Port Change detect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pci{}; 
        ///Frame-list Rollover
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fri{}; 
        ///System Error
        enum class seiVal {
            v0=0x00000000,     ///<Normal operation
            v1=0x00000001,     ///<Error
        };
        namespace seiValC{
            constexpr MPL::Value<seiVal,seiVal::v0> v0{};
            constexpr MPL::Value<seiVal,seiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,seiVal> sei{}; 
        ///Interrupt on Async Advance
        enum class aaiVal {
            v0=0x00000000,     ///<No async advance interrupt
            v1=0x00000001,     ///<Async advance interrupt
        };
        namespace aaiValC{
            constexpr MPL::Value<aaiVal,aaiVal::v0> v0{};
            constexpr MPL::Value<aaiVal,aaiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,aaiVal> aai{}; 
        ///USB Reset received
        enum class uriVal {
            v0=0x00000000,     ///<No reset received
            v1=0x00000001,     ///<Reset received
        };
        namespace uriValC{
            constexpr MPL::Value<uriVal,uriVal::v0> v0{};
            constexpr MPL::Value<uriVal,uriVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,uriVal> uri{}; 
        ///SOF Received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sri{}; 
        ///Device-controller suspend
        enum class sliVal {
            v0=0x00000000,     ///<Active
            v1=0x00000001,     ///<Suspended
        };
        namespace sliValC{
            constexpr MPL::Value<sliVal,sliVal::v0> v0{};
            constexpr MPL::Value<sliVal,sliVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sliVal> sli{}; 
        ///Host Controller Halted
        enum class hchVal {
            v0=0x00000000,     ///<Running
            v1=0x00000001,     ///<Halted
        };
        namespace hchValC{
            constexpr MPL::Value<hchVal,hchVal::v0> v0{};
            constexpr MPL::Value<hchVal,hchVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,hchVal> hch{}; 
        ///Reclamation
        enum class rclVal {
            v0=0x00000000,     ///<Non-empty asynchronous schedule
            v1=0x00000001,     ///<Empty asynchronous schedule
        };
        namespace rclValC{
            constexpr MPL::Value<rclVal,rclVal::v0> v0{};
            constexpr MPL::Value<rclVal,rclVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,rclVal> rcl{}; 
        ///Periodic schedule Status
        enum class psVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace psValC{
            constexpr MPL::Value<psVal,psVal::v0> v0{};
            constexpr MPL::Value<psVal,psVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,psVal> ps{}; 
        ///Asynchronous schedule Status
        enum class asVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace asValC{
            constexpr MPL::Value<asVal,asVal::v0> v0{};
            constexpr MPL::Value<asVal,asVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,asVal> as{}; 
        ///NAK Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> naki{}; 
        ///USB host Asynchronous Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uai{}; 
        ///USB host Periodic Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upi{}; 
        ///General purpose Timer 0 Interrupt
        enum class ti0Val {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace ti0ValC{
            constexpr MPL::Value<ti0Val,ti0Val::v0> v0{};
            constexpr MPL::Value<ti0Val,ti0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,ti0Val> ti0{}; 
        ///General purpose Timer 1 Interrupt
        enum class ti1Val {
            v0=0x00000000,     ///<No interrupt
            v1=0x00000001,     ///<Interrupt occurred
        };
        namespace ti1ValC{
            constexpr MPL::Value<ti1Val,ti1Val::v0> v0{};
            constexpr MPL::Value<ti1Val,ti1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,ti1Val> ti1{}; 
    }
    namespace UsbhsUsbintr{    ///<USB Interrupt Enable Register
        using Addr = Register::Address<0x400a1148,0xfcf2fe00,0,unsigned>;
        ///USB interrupt Enable
        enum class ueVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace ueValC{
            constexpr MPL::Value<ueVal,ueVal::v0> v0{};
            constexpr MPL::Value<ueVal,ueVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ueVal> ue{}; 
        ///USB Error interrupt Enable
        enum class ueeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace ueeValC{
            constexpr MPL::Value<ueeVal,ueeVal::v0> v0{};
            constexpr MPL::Value<ueeVal,ueeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ueeVal> uee{}; 
        ///Port Change detect Enable
        enum class pceVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace pceValC{
            constexpr MPL::Value<pceVal,pceVal::v0> v0{};
            constexpr MPL::Value<pceVal,pceVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,pceVal> pce{}; 
        ///Frame list Rollover Enable
        enum class freVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace freValC{
            constexpr MPL::Value<freVal,freVal::v0> v0{};
            constexpr MPL::Value<freVal,freVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,freVal> fre{}; 
        ///System Error Enable
        enum class seeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace seeValC{
            constexpr MPL::Value<seeVal,seeVal::v0> v0{};
            constexpr MPL::Value<seeVal,seeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,seeVal> see{}; 
        ///Interrupt on Async advance Enable
        enum class aaeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace aaeValC{
            constexpr MPL::Value<aaeVal,aaeVal::v0> v0{};
            constexpr MPL::Value<aaeVal,aaeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,aaeVal> aae{}; 
        ///USB-Reset Enable
        enum class ureVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace ureValC{
            constexpr MPL::Value<ureVal,ureVal::v0> v0{};
            constexpr MPL::Value<ureVal,ureVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ureVal> ure{}; 
        ///SOF-Received Enable
        enum class sreVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace sreValC{
            constexpr MPL::Value<sreVal,sreVal::v0> v0{};
            constexpr MPL::Value<sreVal,sreVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sreVal> sre{}; 
        ///Sleep (DC suspend) Enable
        enum class sleVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace sleValC{
            constexpr MPL::Value<sleVal,sleVal::v0> v0{};
            constexpr MPL::Value<sleVal,sleVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sleVal> sle{}; 
        ///NAK Interrupt Enable
        enum class nakeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace nakeValC{
            constexpr MPL::Value<nakeVal,nakeVal::v0> v0{};
            constexpr MPL::Value<nakeVal,nakeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,nakeVal> nake{}; 
        ///USB host Asynchronous Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uaie{}; 
        ///USB host Periodic Interrupt Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> upie{}; 
        ///General purpose Timer 0 Interrupt Enable
        enum class tie0Val {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace tie0ValC{
            constexpr MPL::Value<tie0Val,tie0Val::v0> v0{};
            constexpr MPL::Value<tie0Val,tie0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,tie0Val> tie0{}; 
        ///General purpose Timer 1 Interrupt Enable
        enum class tie1Val {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace tie1ValC{
            constexpr MPL::Value<tie1Val,tie1Val::v0> v0{};
            constexpr MPL::Value<tie1Val,tie1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,tie1Val> tie1{}; 
    }
    namespace UsbhsFrindex{    ///<Frame Index Register
        using Addr = Register::Address<0x400a114c,0x00000000,0,unsigned>;
        ///Frame Index
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> frindex{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,14),Register::ReadWriteAccess,unsigned> reerved{}; 
    }
    namespace UsbhsDeviceaddr{    ///<Device Address Register
        using Addr = Register::Address<0x400a1154,0x00ffffff,0,unsigned>;
        ///Device Address Advance
        enum class usbadraVal {
            v0=0x00000000,     ///<Writes to USBADR are instantaneous.
            v1=0x00000001,     ///<When this bit is written to a 1 at the same time or before USBADR is written, the write to the USBADR field is staged and held in a hidden register. After an IN occurs on endpoint 0 and is ACKed, USBADR is loaded from the holding register.
        };
        namespace usbadraValC{
            constexpr MPL::Value<usbadraVal,usbadraVal::v0> v0{};
            constexpr MPL::Value<usbadraVal,usbadraVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,usbadraVal> usbadra{}; 
        ///Device Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,25),Register::ReadWriteAccess,unsigned> usbadr{}; 
    }
    namespace UsbhsPeriodiclistbase{    ///<Periodic Frame List Base Address Register
        using Addr = Register::Address<0x400a1154,0x00000fff,0,unsigned>;
        ///Base address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12),Register::ReadWriteAccess,unsigned> perbase{}; 
    }
    namespace UsbhsEplistaddr{    ///<Endpoint List Address Register
        using Addr = Register::Address<0x400a1158,0x000007ff,0,unsigned>;
        ///Endpoint list address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,11),Register::ReadWriteAccess,unsigned> epbase{}; 
    }
    namespace UsbhsAsynclistaddr{    ///<Current Asynchronous List Address Register
        using Addr = Register::Address<0x400a1158,0x0000001f,0,unsigned>;
        ///Link pointer low (LPL)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> asybase{}; 
    }
    namespace UsbhsTtctrl{    ///<Host TT Asynchronous Buffer Control
        using Addr = Register::Address<0x400a115c,0x00ffffff,0,unsigned>;
        ///TT Hub Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> ttha{}; 
        ///Reserved
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reerved{}; 
    }
    namespace UsbhsBurstsize{    ///<Master Interface Data Burst Size Register
        using Addr = Register::Address<0x400a1160,0xffff0000,0,unsigned>;
        ///Programable RX Burst length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rxpburst{}; 
        ///Programable TX Burst length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> txpburst{}; 
    }
    namespace UsbhsTxfilltuning{    ///<Transmit FIFO Tuning Control Register
        using Addr = Register::Address<0x400a1164,0xffc0e080,0,unsigned>;
        ///Scheduler Overhead
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> txschoh{}; 
        ///Scheduler Health counter
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> txschhealth{}; 
        ///FIFO burst Threshold
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> txfifothres{}; 
    }
    namespace UsbhsEndptnak{    ///<Endpoint NAK Register
        using Addr = Register::Address<0x400a1178,0xfff0fff0,0,unsigned>;
        ///RX Endpoint NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> eprn{}; 
        ///TX Endpoint NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> eptn{}; 
    }
    namespace UsbhsEndptnaken{    ///<Endpoint NAK Enable Register
        using Addr = Register::Address<0x400a117c,0xfff0fff0,0,unsigned>;
        ///RX Endpoint NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> eprne{}; 
        ///TX Endpoint NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> eptne{}; 
    }
    namespace UsbhsConfigflag{    ///<Configure Flag Register
        using Addr = Register::Address<0x400a1180,0xffffffff,0,unsigned>;
    }
    namespace UsbhsPortsc1{    ///<Port Status and Control Registers
        using Addr = Register::Address<0x400a1184,0x30000000,0,unsigned>;
        ///Current Connect Status
        enum class ccsVal {
            v0=0x00000000,     ///<No device present (host mode) or attached (device mode)
            v1=0x00000001,     ///<Device is present (host mode) or attached (device mode)
        };
        namespace ccsValC{
            constexpr MPL::Value<ccsVal,ccsVal::v0> v0{};
            constexpr MPL::Value<ccsVal,ccsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,ccsVal> ccs{}; 
        ///Connect Change Status
        enum class cscVal {
            v0=0x00000000,     ///<No change
            v1=0x00000001,     ///<Connect status has changed
        };
        namespace cscValC{
            constexpr MPL::Value<cscVal,cscVal::v0> v0{};
            constexpr MPL::Value<cscVal,cscVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,cscVal> csc{}; 
        ///Port Enabled/disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pe{}; 
        ///Port Enable/disable Change
        enum class pecVal {
            v0=0x00000000,     ///<No change
            v1=0x00000001,     ///<Port disabled
        };
        namespace pecValC{
            constexpr MPL::Value<pecVal,pecVal::v0> v0{};
            constexpr MPL::Value<pecVal,pecVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,pecVal> pec{}; 
        ///Over-current active
        enum class ocaVal {
            v0=0x00000000,     ///<Port not in over-current condition
            v1=0x00000001,     ///<Port currently in over-current condition
        };
        namespace ocaValC{
            constexpr MPL::Value<ocaVal,ocaVal::v0> v0{};
            constexpr MPL::Value<ocaVal,ocaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ocaVal> oca{}; 
        ///Over-Current Change
        enum class occVal {
            v0=0x00000000,     ///<No over-current
            v1=0x00000001,     ///<Over-current detect
        };
        namespace occValC{
            constexpr MPL::Value<occVal,occVal::v0> v0{};
            constexpr MPL::Value<occVal,occVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,occVal> occ{}; 
        ///Force Port Resume
        enum class fprVal {
            v0=0x00000000,     ///<No resume (K-state) detected/driven on port
            v1=0x00000001,     ///<Resume detected/driven on port
        };
        namespace fprValC{
            constexpr MPL::Value<fprVal,fprVal::v0> v0{};
            constexpr MPL::Value<fprVal,fprVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,fprVal> fpr{}; 
        ///Suspend
        enum class suspVal {
            v0=0x00000000,     ///<Port not in suspend state
            v1=0x00000001,     ///<Port in suspend state
        };
        namespace suspValC{
            constexpr MPL::Value<suspVal,suspVal::v0> v0{};
            constexpr MPL::Value<suspVal,suspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,suspVal> susp{}; 
        ///Port Reset
        enum class prVal {
            v0=0x00000000,     ///<Port is not in reset
            v1=0x00000001,     ///<Port is in reset
        };
        namespace prValC{
            constexpr MPL::Value<prVal,prVal::v0> v0{};
            constexpr MPL::Value<prVal,prVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,prVal> pr{}; 
        ///High Speed Port.
        enum class hspVal {
            v0=0x00000000,     ///<FS or LS
            v1=0x00000001,     ///<HS
        };
        namespace hspValC{
            constexpr MPL::Value<hspVal,hspVal::v0> v0{};
            constexpr MPL::Value<hspVal,hspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,hspVal> hsp{}; 
        ///Line Status
        enum class lsVal {
            v00=0x00000000,     ///<SE0
            v01=0x00000001,     ///<J-state
            v10=0x00000002,     ///<K-state
            v11=0x00000003,     ///<Undefined
        };
        namespace lsValC{
            constexpr MPL::Value<lsVal,lsVal::v00> v00{};
            constexpr MPL::Value<lsVal,lsVal::v01> v01{};
            constexpr MPL::Value<lsVal,lsVal::v10> v10{};
            constexpr MPL::Value<lsVal,lsVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,lsVal> ls{}; 
        ///Port Power
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> pp{}; 
        ///Port Owner
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> po{}; 
        ///Port Indicator Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pic{}; 
        ///Port Test Control
        enum class ptcVal {
            v0000=0x00000000,     ///<Not enabled
            v0001=0x00000001,     ///<J_STATE
            v0010=0x00000002,     ///<K_STATE
            v0011=0x00000003,     ///<SEQ_NAK
            v0100=0x00000004,     ///<Packet
            v0101=0x00000005,     ///<FORCE_ENABLE_HS
            v0110=0x00000006,     ///<FORCE_ENABLE_FS
            v0111=0x00000007,     ///<FORCE_ENABLE_LS
        };
        namespace ptcValC{
            constexpr MPL::Value<ptcVal,ptcVal::v0000> v0000{};
            constexpr MPL::Value<ptcVal,ptcVal::v0001> v0001{};
            constexpr MPL::Value<ptcVal,ptcVal::v0010> v0010{};
            constexpr MPL::Value<ptcVal,ptcVal::v0011> v0011{};
            constexpr MPL::Value<ptcVal,ptcVal::v0100> v0100{};
            constexpr MPL::Value<ptcVal,ptcVal::v0101> v0101{};
            constexpr MPL::Value<ptcVal,ptcVal::v0110> v0110{};
            constexpr MPL::Value<ptcVal,ptcVal::v0111> v0111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,ptcVal> ptc{}; 
        ///Wake on Connect enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> wkcn{}; 
        ///Wake on Disconnect enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> wkds{}; 
        ///Wake on Over-Current enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> wkoc{}; 
        ///PHY low power suspend
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> phcd{}; 
        ///Port force Full-Speed Connect
        enum class pfscVal {
            v0=0x00000000,     ///<Allow the port to identify itself as high speed
            v1=0x00000001,     ///<Force the port to only connect at full speed
        };
        namespace pfscValC{
            constexpr MPL::Value<pfscVal,pfscVal::v0> v0{};
            constexpr MPL::Value<pfscVal,pfscVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,pfscVal> pfsc{}; 
        ///Port Transceiver Select [2]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> pts2{}; 
        ///Port Speed
        enum class pspdVal {
            v00=0x00000000,     ///<Full speed
            v01=0x00000001,     ///<Low speed
            v10=0x00000002,     ///<High speed
            v11=0x00000003,     ///<Undefined
        };
        namespace pspdValC{
            constexpr MPL::Value<pspdVal,pspdVal::v00> v00{};
            constexpr MPL::Value<pspdVal,pspdVal::v01> v01{};
            constexpr MPL::Value<pspdVal,pspdVal::v10> v10{};
            constexpr MPL::Value<pspdVal,pspdVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,pspdVal> pspd{}; 
        ///Port Transceiver Select [1:0]
        enum class ptsVal {
            v000=0x00000000,     ///<Use UTMI transceiver interface.
        };
        namespace ptsValC{
            constexpr MPL::Value<ptsVal,ptsVal::v000> v000{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,ptsVal> pts{}; 
    }
    namespace UsbhsOtgsc{    ///<On-the-Go Status and Control Register
        using Addr = Register::Address<0x400a11a4,0x80808040,0,unsigned>;
        ///VBUS Discharge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vd{}; 
        ///VBUS Charge
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> vc{}; 
        ///Hardware Assist Auto-Reset
        enum class haarVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enable automatic reset after connect on host port.
        };
        namespace haarValC{
            constexpr MPL::Value<haarVal,haarVal::v0> v0{};
            constexpr MPL::Value<haarVal,haarVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,haarVal> haar{}; 
        ///OTG Termination
        enum class otVal {
            v0=0x00000000,     ///<Disable pull-down on DM
            v1=0x00000001,     ///<Enable pull-down on DM
        };
        namespace otValC{
            constexpr MPL::Value<otVal,otVal::v0> v0{};
            constexpr MPL::Value<otVal,otVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,otVal> ot{}; 
        ///Data Pulsing
        enum class dpVal {
            v0=0x00000000,     ///<The pull-up on DP is not asserted
            v1=0x00000001,     ///<The pull-up on DP is asserted for data pulsing during SRP
        };
        namespace dpValC{
            constexpr MPL::Value<dpVal,dpVal::v0> v0{};
            constexpr MPL::Value<dpVal,dpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dpVal> dp{}; 
        ///ID Pull-Up
        enum class idpuVal {
            v0=0x00000000,     ///<Disable pull-up. ID input not sampled.
            v1=0x00000001,     ///<Enable pull-up
        };
        namespace idpuValC{
            constexpr MPL::Value<idpuVal,idpuVal::v0> v0{};
            constexpr MPL::Value<idpuVal,idpuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,idpuVal> idpu{}; 
        ///Hardware Assist B-Disconnect to A-connect
        enum class habaVal {
            v0=0x00000000,     ///<Disabled.
            v1=0x00000001,     ///<Enable automatic B-disconnect to A-connect sequence.
        };
        namespace habaValC{
            constexpr MPL::Value<habaVal,habaVal::v0> v0{};
            constexpr MPL::Value<habaVal,habaVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,habaVal> haba{}; 
        ///USB ID
        enum class idVal {
            v0=0x00000000,     ///<A device
            v1=0x00000001,     ///<B device
        };
        namespace idValC{
            constexpr MPL::Value<idVal,idVal::v0> v0{};
            constexpr MPL::Value<idVal,idVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,idVal> id{}; 
        ///A VBus Valid
        enum class avvVal {
            v0=0x00000000,     ///<VBus is below A VBus valid threshold
            v1=0x00000001,     ///<VBus is above A VBus valid threshold
        };
        namespace avvValC{
            constexpr MPL::Value<avvVal,avvVal::v0> v0{};
            constexpr MPL::Value<avvVal,avvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,avvVal> avv{}; 
        ///A Session Valid
        enum class asvVal {
            v0=0x00000000,     ///<VBus is below A session valid threshold
            v1=0x00000001,     ///<VBus is above A session valid threshold
        };
        namespace asvValC{
            constexpr MPL::Value<asvVal,asvVal::v0> v0{};
            constexpr MPL::Value<asvVal,asvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,asvVal> asv{}; 
        ///B Session Valid
        enum class bsvVal {
            v0=0x00000000,     ///<VBus is below B session valid threshold
            v1=0x00000001,     ///<VBus is above B session valid threshold
        };
        namespace bsvValC{
            constexpr MPL::Value<bsvVal,bsvVal::v0> v0{};
            constexpr MPL::Value<bsvVal,bsvVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,bsvVal> bsv{}; 
        ///B Session End
        enum class bseVal {
            v0=0x00000000,     ///<VBus is above B session end threshold
            v1=0x00000001,     ///<VBus is below B session end threshold
        };
        namespace bseValC{
            constexpr MPL::Value<bseVal,bseVal::v0> v0{};
            constexpr MPL::Value<bseVal,bseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,bseVal> bse{}; 
        ///1 Milli-Second timer Toggle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> mst{}; 
        ///Data bus Pulsing Status
        enum class dpsVal {
            v0=0x00000000,     ///<No pulsing on port
            v1=0x00000001,     ///<Pulsing detected on port
        };
        namespace dpsValC{
            constexpr MPL::Value<dpsVal,dpsVal::v0> v0{};
            constexpr MPL::Value<dpsVal,dpsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,dpsVal> dps{}; 
        ///USB ID Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> idis{}; 
        ///A VBUS Valid Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> avvis{}; 
        ///A Session Valid Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> asvis{}; 
        ///B Session Valid Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bsvis{}; 
        ///B Session End Interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> bseis{}; 
        ///1 Milli-Second timer interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> mss{}; 
        ///Data Pulse interrupt Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> dpis{}; 
        ///USB ID Interrupt Enable
        enum class idieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace idieValC{
            constexpr MPL::Value<idieVal,idieVal::v0> v0{};
            constexpr MPL::Value<idieVal,idieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,idieVal> idie{}; 
        ///A VBUS Valid Interrupt Enable
        enum class avvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace avvieValC{
            constexpr MPL::Value<avvieVal,avvieVal::v0> v0{};
            constexpr MPL::Value<avvieVal,avvieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,avvieVal> avvie{}; 
        ///A Session Valid Interrupt Enable
        enum class asvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace asvieValC{
            constexpr MPL::Value<asvieVal,asvieVal::v0> v0{};
            constexpr MPL::Value<asvieVal,asvieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,asvieVal> asvie{}; 
        ///B Session Valid Interrupt Enable
        enum class bsvieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace bsvieValC{
            constexpr MPL::Value<bsvieVal,bsvieVal::v0> v0{};
            constexpr MPL::Value<bsvieVal,bsvieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,bsvieVal> bsvie{}; 
        ///B Session End Interrupt Enable
        enum class bseieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace bseieValC{
            constexpr MPL::Value<bseieVal,bseieVal::v0> v0{};
            constexpr MPL::Value<bseieVal,bseieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,bseieVal> bseie{}; 
        ///1 Milli-Second timer interrupt Enable
        enum class mseVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace mseValC{
            constexpr MPL::Value<mseVal,mseVal::v0> v0{};
            constexpr MPL::Value<mseVal,mseVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,mseVal> mse{}; 
        ///Data Pulse Interrupt Enable
        enum class dpieVal {
            v0=0x00000000,     ///<Disable
            v1=0x00000001,     ///<Enable
        };
        namespace dpieValC{
            constexpr MPL::Value<dpieVal,dpieVal::v0> v0{};
            constexpr MPL::Value<dpieVal,dpieVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,dpieVal> dpie{}; 
    }
    namespace UsbhsUsbmode{    ///<USB Mode Register
        using Addr = Register::Address<0x400a11a8,0xffff8fe0,0,unsigned>;
        ///Controller Mode
        enum class cmVal {
            v00=0x00000000,     ///<Idle (default for the USBHS module)
            v01=0x00000001,     ///<Reserved
            v10=0x00000002,     ///<Device controller
            v11=0x00000003,     ///<Host controller
        };
        namespace cmValC{
            constexpr MPL::Value<cmVal,cmVal::v00> v00{};
            constexpr MPL::Value<cmVal,cmVal::v01> v01{};
            constexpr MPL::Value<cmVal,cmVal::v10> v10{};
            constexpr MPL::Value<cmVal,cmVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,cmVal> cm{}; 
        ///Endian Select
        enum class esVal {
            v0=0x00000000,     ///<Little endian. First byte referenced in least significant byte of 32-bit word.
            v1=0x00000001,     ///<Big endian. First byte referenced in most significant byte of 32-bit word.
        };
        namespace esValC{
            constexpr MPL::Value<esVal,esVal::v0> v0{};
            constexpr MPL::Value<esVal,esVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,esVal> es{}; 
        ///Setup Lock-Out Mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> slom{}; 
        ///Stream DISable
        enum class sdisVal {
            v0=0x00000000,     ///<Inactive
            v1=0x00000001,     ///<Active
        };
        namespace sdisValC{
            constexpr MPL::Value<sdisVal,sdisVal::v0> v0{};
            constexpr MPL::Value<sdisVal,sdisVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sdisVal> sdis{}; 
        ///Tx to Tx HS Delay
        enum class txhsdVal {
            v000=0x00000000,     ///<10
            v001=0x00000001,     ///<11
            v010=0x00000002,     ///<12
            v011=0x00000003,     ///<13
            v100=0x00000004,     ///<14
            v101=0x00000005,     ///<15
            v110=0x00000006,     ///<16
            v111=0x00000007,     ///<17
        };
        namespace txhsdValC{
            constexpr MPL::Value<txhsdVal,txhsdVal::v000> v000{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v001> v001{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v010> v010{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v011> v011{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v100> v100{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v101> v101{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v110> v110{};
            constexpr MPL::Value<txhsdVal,txhsdVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,txhsdVal> txhsd{}; 
    }
    namespace UsbhsEpsetupsr{    ///<Endpoint Setup Status Register
        using Addr = Register::Address<0x400a11ac,0xfffffff0,0,unsigned>;
        ///Setup Endpoint Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epsetupstat{}; 
    }
    namespace UsbhsEpprime{    ///<Endpoint Initialization Register
        using Addr = Register::Address<0x400a11b0,0xfff0fff0,0,unsigned>;
        ///Prime Endpoint Receive Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> perb{}; 
        ///Prime Endpoint tTansmit Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> petb{}; 
    }
    namespace UsbhsEpflush{    ///<Endpoint Flush Register
        using Addr = Register::Address<0x400a11b4,0xfff0fff0,0,unsigned>;
        ///Flush Endpoint Receive Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> ferb{}; 
        ///Flush Endpoint Transmit Buffer
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> fetb{}; 
    }
    namespace UsbhsEpsr{    ///<Endpoint Status Register
        using Addr = Register::Address<0x400a11b8,0xfff0fff0,0,unsigned>;
        ///Endpoint Receive Buffer Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> erbr{}; 
        ///Endpoint Transmit Buffer Ready
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> etbr{}; 
    }
    namespace UsbhsEpcomplete{    ///<Endpoint Complete Register
        using Addr = Register::Address<0x400a11bc,0xfff0fff0,0,unsigned>;
        ///Endpoint Receive Complete Event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> erce{}; 
        ///Endpoint Transmit Complete Event
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> etce{}; 
    }
    namespace UsbhsEpcr0{    ///<Endpoint Control Register 0
        using Addr = Register::Address<0x400a11c0,0xff72ff72,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX Endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX Endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX Endpoint Enable
        enum class txeVal {
            v1=0x00000001,     ///<Enable
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr1{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11c4,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr2{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11c8,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr3{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11cc,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr4{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11d0,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr5{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11d4,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr6{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11d8,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsEpcr7{    ///<Endpoint Control Register n
        using Addr = Register::Address<0x400a11dc,0xff10ff10,0,unsigned>;
        ///RX endpoint Stall
        enum class rxsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace rxsValC{
            constexpr MPL::Value<rxsVal,rxsVal::v0> v0{};
            constexpr MPL::Value<rxsVal,rxsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rxsVal> rxs{}; 
        ///RX endpoint Data sink
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxd{}; 
        ///RX endpoint Type
        enum class rxtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace rxtValC{
            constexpr MPL::Value<rxtVal,rxtVal::v00> v00{};
            constexpr MPL::Value<rxtVal,rxtVal::v01> v01{};
            constexpr MPL::Value<rxtVal,rxtVal::v10> v10{};
            constexpr MPL::Value<rxtVal,rxtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,rxtVal> rxt{}; 
        ///RX data toggle Inhibit
        enum class rxiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace rxiValC{
            constexpr MPL::Value<rxiVal,rxiVal::v0> v0{};
            constexpr MPL::Value<rxiVal,rxiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,rxiVal> rxi{}; 
        ///RX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxr{}; 
        ///RX endpoint Enable
        enum class rxeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace rxeValC{
            constexpr MPL::Value<rxeVal,rxeVal::v0> v0{};
            constexpr MPL::Value<rxeVal,rxeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,rxeVal> rxe{}; 
        ///TX endpoint Stall
        enum class txsVal {
            v0=0x00000000,     ///<Endpoint OK
            v1=0x00000001,     ///<Endpoint stalled
        };
        namespace txsValC{
            constexpr MPL::Value<txsVal,txsVal::v0> v0{};
            constexpr MPL::Value<txsVal,txsVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,txsVal> txs{}; 
        ///TX endpoint Data source
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> txd{}; 
        ///TX endpoint Type
        enum class txtVal {
            v00=0x00000000,     ///<Control
            v01=0x00000001,     ///<Isochronous
            v10=0x00000002,     ///<Bulk
            v11=0x00000003,     ///<Interrupt
        };
        namespace txtValC{
            constexpr MPL::Value<txtVal,txtVal::v00> v00{};
            constexpr MPL::Value<txtVal,txtVal::v01> v01{};
            constexpr MPL::Value<txtVal,txtVal::v10> v10{};
            constexpr MPL::Value<txtVal,txtVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,txtVal> txt{}; 
        ///TX data toggle Inhibit
        enum class txiVal {
            v0=0x00000000,     ///<PID sequencing enabled
            v1=0x00000001,     ///<PID sequencing disabled
        };
        namespace txiValC{
            constexpr MPL::Value<txiVal,txiVal::v0> v0{};
            constexpr MPL::Value<txiVal,txiVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,txiVal> txi{}; 
        ///TX data toggle Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> txr{}; 
        ///TX endpoint Enable
        enum class txeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace txeValC{
            constexpr MPL::Value<txeVal,txeVal::v0> v0{};
            constexpr MPL::Value<txeVal,txeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,txeVal> txe{}; 
    }
    namespace UsbhsUsbgenctrl{    ///<USB General Control Register
        using Addr = Register::Address<0x400a1200,0xffffffde,0,unsigned>;
        ///Wakeup Interrupt Enable
        enum class wuIeVal {
            v0=0x00000000,     ///<Disabled
            v1=0x00000001,     ///<Enabled
        };
        namespace wuIeValC{
            constexpr MPL::Value<wuIeVal,wuIeVal::v0> v0{};
            constexpr MPL::Value<wuIeVal,wuIeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,wuIeVal> wuIe{}; 
        ///Wakeup Interrupt Clear
        enum class wuIntClrVal {
            v0=0x00000000,     ///<Default, no action.
            v1=0x00000001,     ///<Clear the wake-up interrupt.
        };
        namespace wuIntClrValC{
            constexpr MPL::Value<wuIntClrVal,wuIntClrVal::v0> v0{};
            constexpr MPL::Value<wuIntClrVal,wuIntClrVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,wuIntClrVal> wuIntClr{}; 
    }
}
