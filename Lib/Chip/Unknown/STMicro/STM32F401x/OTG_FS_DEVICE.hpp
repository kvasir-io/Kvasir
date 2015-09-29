#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go full speed
    namespace NonefsDcfg{    ///<OTG_FS device configuration register           (OTG_FS_DCFG)
        using Addr = Register::Address<0x50000800,0xffffe008,0,unsigned>;
        ///Device speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> dspd{}; 
        ///Non-zero-length status OUT               handshake
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> nzlsohsk{}; 
        ///Device address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,4),Register::ReadWriteAccess,unsigned> dad{}; 
        ///Periodic frame interval
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,11),Register::ReadWriteAccess,unsigned> pfivl{}; 
    }
    namespace NonefsDctl{    ///<OTG_FS device control register           (OTG_FS_DCTL)
        using Addr = Register::Address<0x50000804,0xfffff000,0,unsigned>;
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
    namespace NonefsDsts{    ///<OTG_FS device status register           (OTG_FS_DSTS)
        using Addr = Register::Address<0x50000808,0xffc000f0,0,unsigned>;
        ///Suspend status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> suspsts{}; 
        ///Enumerated speed
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> enumspd{}; 
        ///Erratic error
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eerr{}; 
        ///Frame number of the received               SOF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,8),Register::ReadWriteAccess,unsigned> fnsof{}; 
    }
    namespace NonefsDiepmsk{    ///<OTG_FS device IN endpoint common interrupt           mask register (OTG_FS_DIEPMSK)
        using Addr = Register::Address<0x50000810,0xffffff84,0,unsigned>;
        ///Transfer completed interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///Timeout condition mask (Non-isochronous               endpoints)
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tom{}; 
        ///IN token received when TxFIFO empty               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfemsk{}; 
        ///IN token received with EP mismatch               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inepnmm{}; 
        ///IN endpoint NAK effective               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepnem{}; 
    }
    namespace NonefsDoepmsk{    ///<OTG_FS device OUT endpoint common interrupt           mask register (OTG_FS_DOEPMSK)
        using Addr = Register::Address<0x50000814,0xffffffe4,0,unsigned>;
        ///Transfer completed interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        ///Endpoint disabled interrupt               mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdm{}; 
        ///SETUP phase done mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stupm{}; 
        ///OUT token received when endpoint               disabled mask
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdm{}; 
    }
    namespace NonefsDaint{    ///<OTG_FS device all endpoints interrupt           register (OTG_FS_DAINT)
        using Addr = Register::Address<0x50000818,0x00000000,0,unsigned>;
        ///IN endpoint interrupt bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoint interrupt               bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
    }
    namespace NonefsDaintmsk{    ///<OTG_FS all endpoints interrupt mask register           (OTG_FS_DAINTMSK)
        using Addr = Register::Address<0x5000081c,0x00000000,0,unsigned>;
        ///IN EP interrupt mask bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> iepm{}; 
        ///OUT endpoint interrupt               bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> oepint{}; 
    }
    namespace Nonedvbusdis{    ///<OTG_FS device VBUS discharge time           register
        using Addr = Register::Address<0x50000828,0xffff0000,0,unsigned>;
        ///Device VBUS discharge time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vbusdt{}; 
    }
    namespace Nonedvbuspulse{    ///<OTG_FS device VBUS pulsing time           register
        using Addr = Register::Address<0x5000082c,0xfffff000,0,unsigned>;
        ///Device VBUS pulsing time
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dvbusp{}; 
    }
    namespace Nonediepempmsk{    ///<OTG_FS device IN endpoint FIFO empty           interrupt mask register
        using Addr = Register::Address<0x50000834,0xffff0000,0,unsigned>;
        ///IN EP Tx FIFO empty interrupt mask               bits
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxfem{}; 
    }
    namespace NonefsDiepctl0{    ///<OTG_FS device control IN endpoint 0 control           register (OTG_FS_DIEPCTL0)
        using Addr = Register::Address<0x50000900,0x30117ffc,0,unsigned>;
        ///Maximum packet size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        ///USB active endpoint
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
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
        ///Endpoint disable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///Endpoint enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
    }
    namespace Nonediepctl1{    ///<OTG device endpoint-1 control           register
        using Addr = Register::Address<0x50000920,0x00107800,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM/SD1PID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrmSd1pid{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonediepctl2{    ///<OTG device endpoint-2 control           register
        using Addr = Register::Address<0x50000940,0x00107800,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonediepctl3{    ///<OTG device endpoint-3 control           register
        using Addr = Register::Address<0x50000960,0x00107800,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///TXFNUM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,22),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonedoepctl0{    ///<device endpoint-0 control           register
        using Addr = Register::Address<0x50000b00,0x33c17ffc,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonedoepctl1{    ///<device endpoint-1 control           register
        using Addr = Register::Address<0x50000b20,0x03c07800,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonedoepctl2{    ///<device endpoint-2 control           register
        using Addr = Register::Address<0x50000b40,0x03c07800,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonedoepctl3{    ///<device endpoint-3 control           register
        using Addr = Register::Address<0x50000b60,0x03c07800,0,unsigned>;
        ///EPENA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> epena{}; 
        ///EPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> epdis{}; 
        ///SODDFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> soddfrm{}; 
        ///SD0PID/SEVNFRM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> sd0pidSevnfrm{}; 
        ///SNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> snak{}; 
        ///CNAK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cnak{}; 
        ///Stall
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> stall{}; 
        ///SNPM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> snpm{}; 
        ///EPTYP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        ///NAKSTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> naksts{}; 
        ///EONUM/DPID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> eonumDpid{}; 
        ///USBAEP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> usbaep{}; 
        ///MPSIZ
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
    }
    namespace Nonediepint0{    ///<device endpoint-x interrupt           register
        using Addr = Register::Address<0x50000908,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonediepint1{    ///<device endpoint-1 interrupt           register
        using Addr = Register::Address<0x50000928,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonediepint2{    ///<device endpoint-2 interrupt           register
        using Addr = Register::Address<0x50000948,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonediepint3{    ///<device endpoint-3 interrupt           register
        using Addr = Register::Address<0x50000968,0xffffff24,0,unsigned>;
        ///TXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///INEPNE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> inepne{}; 
        ///ITTXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ittxfe{}; 
        ///TOC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> toc{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonedoepint0{    ///<device endpoint-0 interrupt           register
        using Addr = Register::Address<0x50000b08,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonedoepint1{    ///<device endpoint-1 interrupt           register
        using Addr = Register::Address<0x50000b28,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonedoepint2{    ///<device endpoint-2 interrupt           register
        using Addr = Register::Address<0x50000b48,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonedoepint3{    ///<device endpoint-3 interrupt           register
        using Addr = Register::Address<0x50000b68,0xffffffa4,0,unsigned>;
        ///B2BSTUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> b2bstup{}; 
        ///OTEPDIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> otepdis{}; 
        ///STUP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stup{}; 
        ///EPDISD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epdisd{}; 
        ///XFRC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
    }
    namespace Nonedieptsiz0{    ///<device endpoint-0 transfer size           register
        using Addr = Register::Address<0x50000910,0xffe7ff80,0,unsigned>;
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedoeptsiz0{    ///<device OUT endpoint-0 transfer size           register
        using Addr = Register::Address<0x50000b10,0x9ff7ff80,0,unsigned>;
        ///SETUP packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> stupcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedieptsiz1{    ///<device endpoint-1 transfer size           register
        using Addr = Register::Address<0x50000930,0x80000000,0,unsigned>;
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedieptsiz2{    ///<device endpoint-2 transfer size           register
        using Addr = Register::Address<0x50000950,0x80000000,0,unsigned>;
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedieptsiz3{    ///<device endpoint-3 transfer size           register
        using Addr = Register::Address<0x50000970,0x80000000,0,unsigned>;
        ///Multi count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> mcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedtxfsts0{    ///<OTG_FS device IN endpoint transmit FIFO           status register
        using Addr = Register::Address<0x50000918,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space               available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Nonedtxfsts1{    ///<OTG_FS device IN endpoint transmit FIFO           status register
        using Addr = Register::Address<0x50000938,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space               available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Nonedtxfsts2{    ///<OTG_FS device IN endpoint transmit FIFO           status register
        using Addr = Register::Address<0x50000958,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space               available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Nonedtxfsts3{    ///<OTG_FS device IN endpoint transmit FIFO           status register
        using Addr = Register::Address<0x50000978,0xffff0000,0,unsigned>;
        ///IN endpoint TxFIFO space               available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptfsav{}; 
    }
    namespace Nonedoeptsiz1{    ///<device OUT endpoint-1 transfer size           register
        using Addr = Register::Address<0x50000b30,0x80000000,0,unsigned>;
        ///Received data PID/SETUP packet               count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedoeptsiz2{    ///<device OUT endpoint-2 transfer size           register
        using Addr = Register::Address<0x50000b50,0x80000000,0,unsigned>;
        ///Received data PID/SETUP packet               count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
    namespace Nonedoeptsiz3{    ///<device OUT endpoint-3 transfer size           register
        using Addr = Register::Address<0x50000b70,0x80000000,0,unsigned>;
        ///Received data PID/SETUP packet               count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> rxdpidStupcnt{}; 
        ///Packet count
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        ///Transfer size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
    }
}
