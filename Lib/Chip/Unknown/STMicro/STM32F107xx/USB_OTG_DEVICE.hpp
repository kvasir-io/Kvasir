#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go full speed
    namespace NonefsDcfg{    ///<OTG_FS device configuration register
          (OTG_FS_DCFG)
        using Addr = Register::Address<0x50000800,0xffffe008,0,unsigned>;
        ///Device speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dspd{}; 
        namespace DspdValC{
        }
        ///Non-zero-length status OUT
              handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nzlsohsk{}; 
        namespace NzlsohskValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Periodic frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> pfivl{}; 
        namespace PfivlValC{
        }
    }
    namespace NonefsDctl{    ///<OTG_FS device control register
          (OTG_FS_DCTL)
        using Addr = Register::Address<0x50000804,0xfffff000,0,unsigned>;
        ///Remote wakeup signaling
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rwusig{}; 
        namespace RwusigValC{
        }
        ///Soft disconnect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sdis{}; 
        namespace SdisValC{
        }
        ///Global IN NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ginsts{}; 
        namespace GinstsValC{
        }
        ///Global OUT NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gonsts{}; 
        namespace GonstsValC{
        }
        ///Test control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tctl{}; 
        namespace TctlValC{
        }
        ///Set global IN NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sginak{}; 
        namespace SginakValC{
        }
        ///Clear global IN NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cginak{}; 
        namespace CginakValC{
        }
        ///Set global OUT NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sgonak{}; 
        namespace SgonakValC{
        }
        ///Clear global OUT NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cgonak{}; 
        namespace CgonakValC{
        }
        ///Power-on programming done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> poprgdne{}; 
        namespace PoprgdneValC{
        }
    }
    namespace NonefsDsts{    ///<OTG_FS device status register
          (OTG_FS_DSTS)
        using Addr = Register::Address<0x50000808,0xffc000f0,0,unsigned>;
        ///Suspend status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspsts{}; 
        namespace SuspstsValC{
        }
        ///Enumerated speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> enumspd{}; 
        namespace EnumspdValC{
        }
        ///Erratic error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eerr{}; 
        namespace EerrValC{
        }
        ///Frame number of the received
              SOF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> fnsof{}; 
        namespace FnsofValC{
        }
    }
    namespace NonefsDiepmsk{    ///<OTG_FS device IN endpoint common interrupt
          mask register (OTG_FS_DIEPMSK)
        using Addr = Register::Address<0x50000810,0xffffff84,0,unsigned>;
        ///Transfer completed interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Endpoint disabled interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        namespace EpdmValC{
        }
        ///Timeout condition mask (Non-isochronous
              endpoints)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        namespace TomValC{
        }
        ///IN token received when TxFIFO empty
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        namespace IttxfemskValC{
        }
        ///IN token received with EP mismatch
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        namespace InepnmmValC{
        }
        ///IN endpoint NAK effective
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
        namespace InepnemValC{
        }
    }
    namespace NonefsDoepmsk{    ///<OTG_FS device OUT endpoint common interrupt
          mask register (OTG_FS_DOEPMSK)
        using Addr = Register::Address<0x50000814,0xffffffe4,0,unsigned>;
        ///Transfer completed interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Endpoint disabled interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        namespace EpdmValC{
        }
        ///SETUP phase done mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stupm{}; 
        namespace StupmValC{
        }
        ///OUT token received when endpoint
              disabled mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdm{}; 
        namespace OtepdmValC{
        }
    }
    namespace NonefsDaint{    ///<OTG_FS device all endpoints interrupt
          register (OTG_FS_DAINT)
        using Addr = Register::Address<0x50000818,0x00000000,0,unsigned>;
        ///IN endpoint interrupt bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepint{}; 
        namespace IepintValC{
        }
        ///OUT endpoint interrupt
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
        namespace OepintValC{
        }
    }
    namespace NonefsDaintmsk{    ///<OTG_FS all endpoints interrupt mask register
          (OTG_FS_DAINTMSK)
        using Addr = Register::Address<0x5000081c,0x00000000,0,unsigned>;
        ///IN EP interrupt mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepm{}; 
        namespace IepmValC{
        }
        ///OUT endpoint interrupt
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
        namespace OepintValC{
        }
    }
    namespace Nonedvbusdis{    ///<OTG_FS device VBUS discharge time
          register
        using Addr = Register::Address<0x50000828,0xffff0000,0,unsigned>;
        ///Device VBUS discharge time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vbusdt{}; 
        namespace VbusdtValC{
        }
    }
    namespace Nonedvbuspulse{    ///<OTG_FS device VBUS pulsing time
          register
        using Addr = Register::Address<0x5000082c,0xfffff000,0,unsigned>;
        ///Device VBUS pulsing time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dvbusp{}; 
        namespace DvbuspValC{
        }
    }
    namespace Nonediepempmsk{    ///<OTG_FS device IN endpoint FIFO empty
          interrupt mask register
        using Addr = Register::Address<0x50000834,0xffff0000,0,unsigned>;
        ///IN EP Tx FIFO empty interrupt mask
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxfem{}; 
        namespace IneptxfemValC{
        }
    }
    namespace NonefsDiepctl0{    ///<OTG_FS device control IN endpoint 0 control
          register (OTG_FS_DIEPCTL0)
        using Addr = Register::Address<0x50000900,0x30117ffc,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        namespace TxfnumValC{
        }
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///Endpoint disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///Endpoint enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
    }
    namespace Nonediepctl1{    ///<OTG device endpoint-1 control
          register
        using Addr = Register::Address<0x50000920,0x00107800,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SODDFRM/SD1PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrmSd1pid{}; 
        namespace Soddfrmsd1pidValC{
        }
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        namespace TxfnumValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonediepctl2{    ///<OTG device endpoint-2 control
          register
        using Addr = Register::Address<0x50000940,0x00107800,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
        }
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        namespace TxfnumValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonediepctl3{    ///<OTG device endpoint-3 control
          register
        using Addr = Register::Address<0x50000960,0x00107800,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
        }
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///TXFNUM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        namespace TxfnumValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonedoepctl0{    ///<device endpoint-0 control
          register
        using Addr = Register::Address<0x50000b00,0x33c17ffc,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonedoepctl1{    ///<device endpoint-1 control
          register
        using Addr = Register::Address<0x50000b20,0x03c07800,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
        }
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonedoepctl2{    ///<device endpoint-2 control
          register
        using Addr = Register::Address<0x50000b40,0x03c07800,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
        }
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonedoepctl3{    ///<device endpoint-3 control
          register
        using Addr = Register::Address<0x50000b60,0x03c07800,0,unsigned>;
        ///EPENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        namespace EpenaValC{
        }
        ///EPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        namespace EpdisValC{
        }
        ///SODDFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
        }
        ///SD0PID/SEVNFRM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///SNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///CNAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Stall
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///SNPM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///EPTYP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///NAKSTS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///EONUM/DPID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///USBAEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///MPSIZ
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
    }
    namespace Nonediepint0{    ///<device endpoint-x interrupt
          register
        using Addr = Register::Address<0x50000908,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonediepint1{    ///<device endpoint-1 interrupt
          register
        using Addr = Register::Address<0x50000928,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonediepint2{    ///<device endpoint-2 interrupt
          register
        using Addr = Register::Address<0x50000948,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonediepint3{    ///<device endpoint-3 interrupt
          register
        using Addr = Register::Address<0x50000968,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///INEPNE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///ITTXFE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///TOC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonedoepint0{    ///<device endpoint-0 interrupt
          register
        using Addr = Register::Address<0x50000b08,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonedoepint1{    ///<device endpoint-1 interrupt
          register
        using Addr = Register::Address<0x50000b28,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonedoepint2{    ///<device endpoint-2 interrupt
          register
        using Addr = Register::Address<0x50000b48,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonedoepint3{    ///<device endpoint-3 interrupt
          register
        using Addr = Register::Address<0x50000b68,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///OTEPDIS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///STUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///EPDISD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///XFRC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
    }
    namespace Nonedieptsiz0{    ///<device endpoint-0 transfer size
          register
        using Addr = Register::Address<0x50000910,0xffe7ff80,0,unsigned>;
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedoeptsiz0{    ///<device OUT endpoint-0 transfer size
          register
        using Addr = Register::Address<0x50000b10,0x9ff7ff80,0,unsigned>;
        ///SETUP packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> stupcnt{}; 
        namespace StupcntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedieptsiz1{    ///<device endpoint-1 transfer size
          register
        using Addr = Register::Address<0x50000930,0x80000000,0,unsigned>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedieptsiz2{    ///<device endpoint-2 transfer size
          register
        using Addr = Register::Address<0x50000950,0x80000000,0,unsigned>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedieptsiz3{    ///<device endpoint-3 transfer size
          register
        using Addr = Register::Address<0x50000970,0x80000000,0,unsigned>;
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedtxfsts0{    ///<OTG_FS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x50000918,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace Nonedtxfsts1{    ///<OTG_FS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x50000938,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace Nonedtxfsts2{    ///<OTG_FS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x50000958,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace Nonedtxfsts3{    ///<OTG_FS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x50000978,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace Nonedoeptsiz1{    ///<device OUT endpoint-1 transfer size
          register
        using Addr = Register::Address<0x50000b30,0x80000000,0,unsigned>;
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedoeptsiz2{    ///<device OUT endpoint-2 transfer size
          register
        using Addr = Register::Address<0x50000b50,0x80000000,0,unsigned>;
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
    namespace Nonedoeptsiz3{    ///<device OUT endpoint-3 transfer size
          register
        using Addr = Register::Address<0x50000b70,0x80000000,0,unsigned>;
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
    }
}
