#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go high speed
    namespace NoneotgHsDcfg{    ///<OTG_HS device configuration
          register
        using Addr = Register::Address<0x40040800,0xfcffe008,0,unsigned>;
        ///Device speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dspd{}; 
        ///Nonzero-length status OUT
              handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nzlsohsk{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Periodic (micro)frame
              interval
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> pfivl{}; 
        ///Periodic scheduling
              interval
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,unsigned> perschivl{}; 
    }
    namespace NoneotgHsDctl{    ///<OTG_HS device control register
        using Addr = Register::Address<0x40040804,0xfffff000,0,unsigned>;
        ///Remote wakeup signaling
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rwusig{}; 
        ///Soft disconnect
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sdis{}; 
        ///Global IN NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ginsts{}; 
        ///Global OUT NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gonsts{}; 
        ///Test control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> tctl{}; 
        ///Set global IN NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sginak{}; 
        ///Clear global IN NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> cginak{}; 
        ///Set global OUT NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> sgonak{}; 
        ///Clear global OUT NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> cgonak{}; 
        ///Power-on programming done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> poprgdne{}; 
    }
    namespace NoneotgHsDsts{    ///<OTG_HS device status register
        using Addr = Register::Address<0x40040808,0xffc000f0,0,unsigned>;
        ///Suspend status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspsts{}; 
        ///Enumerated speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> enumspd{}; 
        ///Erratic error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eerr{}; 
        ///Frame number of the received
              SOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> fnsof{}; 
    }
    namespace NoneotgHsDiepmsk{    ///<OTG_HS device IN endpoint common interrupt
          mask register
        using Addr = Register::Address<0x40040810,0xfffffc84,0,unsigned>;
        ///Transfer completed interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///Timeout condition mask (nonisochronous
              endpoints)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        ///IN token received when TxFIFO empty
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        ///IN token received with EP mismatch
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        ///IN endpoint NAK effective
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
        ///FIFO underrun mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        ///BNA interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
    }
    namespace NoneotgHsDoepmsk{    ///<OTG_HS device OUT endpoint common interrupt
          mask register
        using Addr = Register::Address<0x40040814,0xfffffca4,0,unsigned>;
        ///Transfer completed interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///SETUP phase done mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stupm{}; 
        ///OUT token received when endpoint
              disabled mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdm{}; 
        ///Back-to-back SETUP packets received
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OUT packet error mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> opem{}; 
        ///BNA interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> boim{}; 
    }
    namespace NoneotgHsDaint{    ///<OTG_HS device all endpoints interrupt
          register
        using Addr = Register::Address<0x40040818,0x00000000,0,unsigned>;
        ///IN endpoint interrupt bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoint interrupt
              bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
    }
    namespace NoneotgHsDaintmsk{    ///<OTG_HS all endpoints interrupt mask
          register
        using Addr = Register::Address<0x4004081c,0x00000000,0,unsigned>;
        ///IN EP interrupt mask bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepm{}; 
        ///OUT EP interrupt mask bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepm{}; 
    }
    namespace NoneotgHsDvbusdis{    ///<OTG_HS device VBUS discharge time
          register
        using Addr = Register::Address<0x40040828,0xffff0000,0,unsigned>;
        ///Device VBUS discharge time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vbusdt{}; 
    }
    namespace NoneotgHsDvbuspulse{    ///<OTG_HS device VBUS pulsing time
          register
        using Addr = Register::Address<0x4004082c,0xfffff000,0,unsigned>;
        ///Device VBUS pulsing time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dvbusp{}; 
    }
    namespace NoneotgHsDthrctl{    ///<OTG_HS Device threshold control
          register
        using Addr = Register::Address<0x40040830,0xf400f800,0,unsigned>;
        ///Nonisochronous IN endpoints threshold
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonisothren{}; 
        ///ISO IN endpoint threshold
              enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> isothren{}; 
        ///Transmit threshold length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,2),Register::ReadWriteAccess,unsigned> txthrlen{}; 
        ///Receive threshold enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> rxthren{}; 
        ///Receive threshold length
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,17),Register::ReadWriteAccess,unsigned> rxthrlen{}; 
        ///Arbiter parking enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> arpen{}; 
    }
    namespace NoneotgHsDiepempmsk{    ///<OTG_HS device IN endpoint FIFO empty
          interrupt mask register
        using Addr = Register::Address<0x40040834,0xffff0000,0,unsigned>;
        ///IN EP Tx FIFO empty interrupt mask
              bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxfem{}; 
    }
    namespace NoneotgHsDeachint{    ///<OTG_HS device each endpoint interrupt
          register
        using Addr = Register::Address<0x40040838,0xfffdfffd,0,unsigned>;
        ///IN endpoint 1interrupt bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iep1int{}; 
        ///OUT endpoint 1 interrupt
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oep1int{}; 
    }
    namespace NoneotgHsDeachintmsk{    ///<OTG_HS device each endpoint interrupt
          register mask
        using Addr = Register::Address<0x4004083c,0xfffdfffd,0,unsigned>;
        ///IN Endpoint 1 interrupt mask
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> iep1intm{}; 
        ///OUT Endpoint 1 interrupt mask
              bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> oep1intm{}; 
    }
    namespace NoneotgHsDiepeachmsk1{    ///<OTG_HS device each in endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040840,0xffffdc84,0,unsigned>;
        ///Transfer completed interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///Timeout condition mask (nonisochronous
              endpoints)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        ///IN token received when TxFIFO empty
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        ///IN token received with EP mismatch
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        ///IN endpoint NAK effective
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
        ///FIFO underrun mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        ///BNA interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
        ///NAK interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nakm{}; 
    }
    namespace NoneotgHsDoepeachmsk1{    ///<OTG_HS device each OUT endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040880,0xffff8c84,0,unsigned>;
        ///Transfer completed interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///Timeout condition mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        ///IN token received when TxFIFO empty
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        ///IN token received with EP mismatch
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        ///IN endpoint NAK effective
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
        ///OUT packet error mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfurm{}; 
        ///BNA interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bim{}; 
        ///Bubble error interrupt
              mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berrm{}; 
        ///NAK interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nakm{}; 
        ///NYET interrupt mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyetm{}; 
    }
    namespace NoneotgHsDiepctl0{    ///<OTG device endpoint-0 control
          register
        using Addr = Register::Address<0x40040900,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl1{    ///<OTG device endpoint-1 control
          register
        using Addr = Register::Address<0x40040920,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl2{    ///<OTG device endpoint-2 control
          register
        using Addr = Register::Address<0x40040940,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl3{    ///<OTG device endpoint-3 control
          register
        using Addr = Register::Address<0x40040960,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl4{    ///<OTG device endpoint-4 control
          register
        using Addr = Register::Address<0x40040980,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl5{    ///<OTG device endpoint-5 control
          register
        using Addr = Register::Address<0x400409a0,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl6{    ///<OTG device endpoint-6 control
          register
        using Addr = Register::Address<0x400409c0,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepctl7{    ///<OTG device endpoint-7 control
          register
        using Addr = Register::Address<0x400409e0,0x00107800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even/odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///TxFIFO number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDiepint0{    ///<OTG device endpoint-0 interrupt
          register
        using Addr = Register::Address<0x40040908,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint1{    ///<OTG device endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040928,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint2{    ///<OTG device endpoint-2 interrupt
          register
        using Addr = Register::Address<0x40040948,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint3{    ///<OTG device endpoint-3 interrupt
          register
        using Addr = Register::Address<0x40040968,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint4{    ///<OTG device endpoint-4 interrupt
          register
        using Addr = Register::Address<0x40040988,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint5{    ///<OTG device endpoint-5 interrupt
          register
        using Addr = Register::Address<0x400409a8,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint6{    ///<OTG device endpoint-6 interrupt
          register
        using Addr = Register::Address<0x400409c8,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDiepint7{    ///<OTG device endpoint-7 interrupt
          register
        using Addr = Register::Address<0x400409e8,0xffffc424,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///Timeout condition
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///IN token received when TxFIFO is
              empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///IN endpoint NAK effective
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///Transmit FIFO empty
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///Transmit Fifo Underrun
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txfifoudrn{}; 
        ///Buffer not available
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bna{}; 
        ///Packet dropped status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> pktdrpsts{}; 
        ///Babble error interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> berr{}; 
        ///NAK interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> nak{}; 
    }
    namespace NoneotgHsDieptsiz0{    ///<OTG_HS device IN endpoint 0 transfer size
          register
        using Addr = Register::Address<0x40040910,0xffe7ff80,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
    }
    namespace NoneotgHsDiepdma1{    ///<OTG_HS device endpoint-1 DMA address
          register
        using Addr = Register::Address<0x40040914,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsDiepdma2{    ///<OTG_HS device endpoint-2 DMA address
          register
        using Addr = Register::Address<0x40040934,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsDiepdma3{    ///<OTG_HS device endpoint-3 DMA address
          register
        using Addr = Register::Address<0x40040954,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsDiepdma4{    ///<OTG_HS device endpoint-4 DMA address
          register
        using Addr = Register::Address<0x40040974,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsDiepdma5{    ///<OTG_HS device endpoint-5 DMA address
          register
        using Addr = Register::Address<0x40040994,0x00000000,0,unsigned>;
        ///DMA address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dmaaddr{}; 
    }
    namespace NoneotgHsDtxfsts0{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040918,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace NoneotgHsDtxfsts1{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040938,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace NoneotgHsDtxfsts2{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040958,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace NoneotgHsDtxfsts3{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040978,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace NoneotgHsDtxfsts4{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x40040998,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace NoneotgHsDtxfsts5{    ///<OTG_HS device IN endpoint transmit FIFO
          status register
        using Addr = Register::Address<0x400409b8,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space
              avail
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace NoneotgHsDieptsiz1{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040930,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace NoneotgHsDieptsiz2{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040950,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace NoneotgHsDieptsiz3{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040970,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace NoneotgHsDieptsiz4{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x40040990,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace NoneotgHsDieptsiz5{    ///<OTG_HS device endpoint transfer size
          register
        using Addr = Register::Address<0x400409b0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
    }
    namespace NoneotgHsDoepctl0{    ///<OTG_HS device control OUT endpoint 0 control
          register
        using Addr = Register::Address<0x40040b00,0x33c17ffc,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDoepctl1{    ///<OTG device endpoint-1 control
          register
        using Addr = Register::Address<0x40040b20,0x03c07800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data
              PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID/Set even
              frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDoepctl2{    ///<OTG device endpoint-2 control
          register
        using Addr = Register::Address<0x40040b40,0x03c07800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data
              PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID/Set even
              frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDoepctl3{    ///<OTG device endpoint-3 control
          register
        using Addr = Register::Address<0x40040b60,0x03c07800,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///Even odd frame/Endpoint data
              PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///NAK status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///Endpoint type
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///Snoop mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///STALL handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///Clear NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Set NAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///Set DATA0 PID/Set even
              frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///Set odd frame
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace NoneotgHsDoepint0{    ///<OTG_HS device endpoint-0 interrupt
          register
        using Addr = Register::Address<0x40040b08,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint1{    ///<OTG_HS device endpoint-1 interrupt
          register
        using Addr = Register::Address<0x40040b28,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint2{    ///<OTG_HS device endpoint-2 interrupt
          register
        using Addr = Register::Address<0x40040b48,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint3{    ///<OTG_HS device endpoint-3 interrupt
          register
        using Addr = Register::Address<0x40040b68,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint4{    ///<OTG_HS device endpoint-4 interrupt
          register
        using Addr = Register::Address<0x40040b88,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint5{    ///<OTG_HS device endpoint-5 interrupt
          register
        using Addr = Register::Address<0x40040ba8,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint6{    ///<OTG_HS device endpoint-6 interrupt
          register
        using Addr = Register::Address<0x40040bc8,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoepint7{    ///<OTG_HS device endpoint-7 interrupt
          register
        using Addr = Register::Address<0x40040be8,0xffffbfa4,0,unsigned>;
        ///Transfer completed
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        ///Endpoint disabled
              interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///SETUP phase done
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///OUT token received when endpoint
              disabled
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///Back-to-back SETUP packets
              received
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///NYET interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> nyet{}; 
    }
    namespace NoneotgHsDoeptsiz0{    ///<OTG_HS device endpoint-1 transfer size
          register
        using Addr = Register::Address<0x40040b10,0x9ff7ff80,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///SETUP packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> stupcnt{}; 
    }
    namespace NoneotgHsDoeptsiz1{    ///<OTG_HS device endpoint-2 transfer size
          register
        using Addr = Register::Address<0x40040b30,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet
              count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace NoneotgHsDoeptsiz2{    ///<OTG_HS device endpoint-3 transfer size
          register
        using Addr = Register::Address<0x40040b50,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet
              count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace NoneotgHsDoeptsiz3{    ///<OTG_HS device endpoint-4 transfer size
          register
        using Addr = Register::Address<0x40040b70,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet
              count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
    namespace NoneotgHsDoeptsiz4{    ///<OTG_HS device endpoint-5 transfer size
          register
        using Addr = Register::Address<0x40040b90,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Received data PID/SETUP packet
              count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
    }
}
