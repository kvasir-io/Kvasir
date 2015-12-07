#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go high speed
    namespace NoneotgHsDcfg{    ///<OTG_HS device configuration
          register
        using Addr = Register::Address<0x40040800,0xfcffe008,0,unsigned>;
        ///Device speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dspd{}; 
        namespace DspdValC{
        }
        ///Nonzero-length status OUT
              handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nzlsohsk{}; 
        namespace NzlsohskValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Periodic (micro)frame
              interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> pfivl{}; 
        namespace PfivlValC{
        }
        ///Periodic scheduling
              interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> perschivl{}; 
        namespace PerschivlValC{
        }
    }
    namespace NoneotgHsDctl{    ///<OTG_HS device control register
        using Addr = Register::Address<0x40040804,0xfffff000,0,unsigned>;
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
    namespace NoneotgHsDsts{    ///<OTG_HS device status register
        using Addr = Register::Address<0x40040808,0xffc000f0,0,unsigned>;
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
    namespace NoneotgHsDiepmsk{    ///<OTG_HS device IN endpoint common interrupt
          mask register
        using Addr = Register::Address<0x40040810,0xfffffc84,0,unsigned>;
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
        ///Timeout condition mask (nonisochronous
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
        ///FIFO underrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        namespace TxfurmValC{
        }
        ///BNA interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
        namespace BimValC{
        }
    }
    namespace NoneotgHsDoepmsk{    ///<OTG_HS device OUT endpoint common interrupt
          mask register
        using Addr = Register::Address<0x40040814,0xfffffca4,0,unsigned>;
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
        ///Back-to-back SETUP packets received
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///OUT packet error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opem{}; 
        namespace OpemValC{
        }
        ///BNA interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> boim{}; 
        namespace BoimValC{
        }
    }
    namespace NoneotgHsDaint{    ///<OTG_HS device all endpoints interrupt
          register
        using Addr = Register::Address<0x40040818,0x00000000,0,unsigned>;
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
    namespace NoneotgHsDaintmsk{    ///<OTG_HS all endpoints interrupt mask
          register
        using Addr = Register::Address<0x4004081c,0x00000000,0,unsigned>;
        ///IN EP interrupt mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepm{}; 
        namespace IepmValC{
        }
        ///OUT EP interrupt mask bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepm{}; 
        namespace OepmValC{
        }
    }
    namespace NoneotgHsDvbusdis{    ///<OTG_HS device VBUS discharge time
          register
        using Addr = Register::Address<0x40040828,0xffff0000,0,unsigned>;
        ///Device VBUS discharge time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vbusdt{}; 
        namespace VbusdtValC{
        }
    }
    namespace NoneotgHsDvbuspulse{    ///<OTG_HS device VBUS pulsing time
          register
        using Addr = Register::Address<0x4004082c,0xfffff000,0,unsigned>;
        ///Device VBUS pulsing time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dvbusp{}; 
        namespace DvbuspValC{
        }
    }
    namespace NoneotgHsDthrctl{    ///<OTG_HS Device threshold control
          register
        using Addr = Register::Address<0x40040830,0xf400f800,0,unsigned>;
        ///Nonisochronous IN endpoints threshold
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonisothren{}; 
        namespace NonisothrenValC{
        }
        ///ISO IN endpoint threshold
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isothren{}; 
        namespace IsothrenValC{
        }
        ///Transmit threshold length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> txthrlen{}; 
        namespace TxthrlenValC{
        }
        ///Receive threshold enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxthren{}; 
        namespace RxthrenValC{
        }
        ///Receive threshold length
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> rxthrlen{}; 
        namespace RxthrlenValC{
        }
        ///Arbiter parking enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> arpen{}; 
        namespace ArpenValC{
        }
    }
    namespace NoneotgHsDiepempmsk{    ///<OTG_HS device IN endpoint FIFO empty
          interrupt mask register
        using Addr = Register::Address<0x40040834,0xffff0000,0,unsigned>;
        ///IN EP Tx FIFO empty interrupt mask
              bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxfem{}; 
        namespace IneptxfemValC{
        }
    }
    namespace NoneotgHsDeachint{    ///<OTG_HS device each endpoint interrupt
          register
        using Addr = Register::Address<0x40040838,0xfffdfffd,0,unsigned>;
        ///IN endpoint 1interrupt bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iep1int{}; 
        namespace Iep1intValC{
        }
        ///OUT endpoint 1 interrupt
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oep1int{}; 
        namespace Oep1intValC{
        }
    }
    namespace NoneotgHsDeachintmsk{    ///<OTG_HS device each endpoint interrupt
          register mask
        using Addr = Register::Address<0x4004083c,0xfffdfffd,0,unsigned>;
        ///IN Endpoint 1 interrupt mask
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iep1intm{}; 
        namespace Iep1intmValC{
        }
        ///OUT Endpoint 1 interrupt mask
              bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oep1intm{}; 
        namespace Oep1intmValC{
        }
    }
    namespace NoneotgHsDiepeachmsk1{    ///<OTG_HS device each in endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040840,0xffffdc84,0,unsigned>;
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
        ///Timeout condition mask (nonisochronous
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
        ///FIFO underrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        namespace TxfurmValC{
        }
        ///BNA interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
        namespace BimValC{
        }
        ///NAK interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
    }
    namespace NoneotgHsDoepeachmsk1{    ///<OTG_HS device each OUT endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040880,0xffff8c84,0,unsigned>;
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
        ///Timeout condition mask
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
        ///OUT packet error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        namespace TxfurmValC{
        }
        ///BNA interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
        namespace BimValC{
        }
        ///Bubble error interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berrm{}; 
        namespace BerrmValC{
        }
        ///NAK interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///NYET interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyetm{}; 
        namespace NyetmValC{
        }
    }
    namespace NoneotgHsDiepctl0{    ///<OTG device endpoint-0 control
          register
        using Addr = Register::Address<0x40040900,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl1{    ///<OTG device endpoint-1 control
          register
        using Addr = Register::Address<0x40040920,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl2{    ///<OTG device endpoint-2 control
          register
        using Addr = Register::Address<0x40040940,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl3{    ///<OTG device endpoint-3 control
          register
        using Addr = Register::Address<0x40040960,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl4{    ///<OTG device endpoint-4 control
          register
        using Addr = Register::Address<0x40040980,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl5{    ///<OTG device endpoint-5 control
          register
        using Addr = Register::Address<0x400409a0,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl6{    ///<OTG device endpoint-6 control
          register
        using Addr = Register::Address<0x400409c0,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepctl7{    ///<OTG device endpoint-7 control
          register
        using Addr = Register::Address<0x400409e0,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even/odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
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
        ///Set DATA0 PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDiepint0{    ///<OTG device endpoint-0 interrupt
          register
        using Addr = Register::Address<0x40040908,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint1{    ///<OTG device endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040928,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint2{    ///<OTG device endpoint-2 interrupt
          register
        using Addr = Register::Address<0x40040948,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint3{    ///<OTG device endpoint-3 interrupt
          register
        using Addr = Register::Address<0x40040968,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint4{    ///<OTG device endpoint-4 interrupt
          register
        using Addr = Register::Address<0x40040988,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint5{    ///<OTG device endpoint-5 interrupt
          register
        using Addr = Register::Address<0x400409a8,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint6{    ///<OTG device endpoint-6 interrupt
          register
        using Addr = Register::Address<0x400409c8,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDiepint7{    ///<OTG device endpoint-7 interrupt
          register
        using Addr = Register::Address<0x400409e8,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///Timeout condition
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        namespace TocValC{
        }
        ///IN token received when TxFIFO is
              empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        namespace IttxfeValC{
        }
        ///IN endpoint NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        namespace InepneValC{
        }
        ///Transmit FIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        namespace TxfeValC{
        }
        ///Transmit Fifo Underrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        namespace TxfifoudrnValC{
        }
        ///Buffer not available
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        namespace BnaValC{
        }
        ///Packet dropped status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        namespace PktdrpstsValC{
        }
        ///Babble error interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        namespace BerrValC{
        }
        ///NAK interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
    }
    namespace NoneotgHsDieptsiz0{    ///<OTG_HS device IN endpoint 0 transfer size
          register
        using Addr = Register::Address<0x40040910,0xffe7ff80,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
    }
    namespace NoneotgHsDiepdma1{    ///<OTG_HS device endpoint-1 DMA address
          register
        using Addr = Register::Address<0x40040914,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
        namespace DmaaddrValC{
        }
    }
    namespace NoneotgHsDiepdma2{    ///<OTG_HS device endpoint-2 DMA address
          register
        using Addr = Register::Address<0x40040934,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
        namespace DmaaddrValC{
        }
    }
    namespace NoneotgHsDiepdma3{    ///<OTG_HS device endpoint-3 DMA address
          register
        using Addr = Register::Address<0x40040954,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
        namespace DmaaddrValC{
        }
    }
    namespace NoneotgHsDiepdma4{    ///<OTG_HS device endpoint-4 DMA address
          register
        using Addr = Register::Address<0x40040974,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
        namespace DmaaddrValC{
        }
    }
    namespace NoneotgHsDiepdma5{    ///<OTG_HS device endpoint-5 DMA address
          register
        using Addr = Register::Address<0x40040994,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
        namespace DmaaddrValC{
        }
    }
    namespace NoneotgHsDtxfsts0{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040918,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace NoneotgHsDtxfsts1{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040938,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace NoneotgHsDtxfsts2{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040958,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace NoneotgHsDtxfsts3{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040978,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace NoneotgHsDtxfsts4{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040998,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace NoneotgHsDtxfsts5{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x400409b8,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
        namespace IneptfsavValC{
        }
    }
    namespace NoneotgHsDieptsiz1{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040930,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
    }
    namespace NoneotgHsDieptsiz2{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040950,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
    }
    namespace NoneotgHsDieptsiz3{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040970,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
    }
    namespace NoneotgHsDieptsiz4{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040990,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
    }
    namespace NoneotgHsDieptsiz5{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x400409b0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Multi count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
    }
    namespace NoneotgHsDoepctl0{    ///<OTG_HS device control OUT endpoint 0 control
          register
        using Addr = Register::Address<0x40040b00,0x33c17ffc,0,unsigned>;
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
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
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
    namespace NoneotgHsDoepctl1{    ///<OTG device endpoint-1 control
          register
        using Addr = Register::Address<0x40040b20,0x03c07800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even odd frame/Endpoint data
              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///Set DATA0 PID/Set even
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDoepctl2{    ///<OTG device endpoint-2 control
          register
        using Addr = Register::Address<0x40040b40,0x03c07800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even odd frame/Endpoint data
              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///Set DATA0 PID/Set even
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDoepctl3{    ///<OTG device endpoint-3 control
          register
        using Addr = Register::Address<0x40040b60,0x03c07800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///USB active endpoint
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        namespace UsbaepValC{
        }
        ///Even odd frame/Endpoint data
              PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        namespace EonumdpidValC{
        }
        ///NAK status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        namespace NakstsValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Snoop mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        namespace SnpmValC{
        }
        ///STALL handshake
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///Clear NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        namespace CnakValC{
        }
        ///Set NAK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        namespace SnakValC{
        }
        ///Set DATA0 PID/Set even
              frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        namespace Sd0pidsevnfrmValC{
        }
        ///Set odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        namespace SoddfrmValC{
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
    namespace NoneotgHsDoepint0{    ///<OTG_HS device endpoint-0 interrupt
          register
        using Addr = Register::Address<0x40040b08,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint1{    ///<OTG_HS device endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040b28,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint2{    ///<OTG_HS device endpoint-2 interrupt
          register
        using Addr = Register::Address<0x40040b48,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint3{    ///<OTG_HS device endpoint-3 interrupt
          register
        using Addr = Register::Address<0x40040b68,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint4{    ///<OTG_HS device endpoint-4 interrupt
          register
        using Addr = Register::Address<0x40040b88,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint5{    ///<OTG_HS device endpoint-5 interrupt
          register
        using Addr = Register::Address<0x40040ba8,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint6{    ///<OTG_HS device endpoint-6 interrupt
          register
        using Addr = Register::Address<0x40040bc8,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoepint7{    ///<OTG_HS device endpoint-7 interrupt
          register
        using Addr = Register::Address<0x40040be8,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Endpoint disabled
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        namespace EpdisdValC{
        }
        ///SETUP phase done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        namespace StupValC{
        }
        ///OUT token received when endpoint
              disabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        namespace OtepdisValC{
        }
        ///Back-to-back SETUP packets
              received
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        namespace B2bstupValC{
        }
        ///NYET interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
    }
    namespace NoneotgHsDoeptsiz0{    ///<OTG_HS device endpoint-1 transfer size
          register
        using Addr = Register::Address<0x40040b10,0x9ff7ff80,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///SETUP packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> stupcnt{}; 
        namespace StupcntValC{
        }
    }
    namespace NoneotgHsDoeptsiz1{    ///<OTG_HS device endpoint-2 transfer size
          register
        using Addr = Register::Address<0x40040b30,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
    }
    namespace NoneotgHsDoeptsiz2{    ///<OTG_HS device endpoint-3 transfer size
          register
        using Addr = Register::Address<0x40040b50,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
    }
    namespace NoneotgHsDoeptsiz3{    ///<OTG_HS device endpoint-4 transfer size
          register
        using Addr = Register::Address<0x40040b70,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
    }
    namespace NoneotgHsDoeptsiz4{    ///<OTG_HS device endpoint-5 transfer size
          register
        using Addr = Register::Address<0x40040b90,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Received data PID/SETUP packet
              count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        namespace RxdpidstupcntValC{
        }
    }
}
