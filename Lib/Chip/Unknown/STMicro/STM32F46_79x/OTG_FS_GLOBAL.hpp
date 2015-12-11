#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go full speed
    namespace NonefsGotgctl{    ///<OTG_FS control and status register
          (OTG_FS_GOTGCTL)
        using Addr = Register::Address<0x50000000,0xfff0f0fc,0,unsigned>;
        ///Session request success
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srqscs{}; 
        ///Session request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srq{}; 
        ///Host negotiation success
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hngscs{}; 
        ///HNP request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnprq{}; 
        ///Host set HNP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hshnpen{}; 
        ///Device HNP enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dhnpen{}; 
        ///Connector ID status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cidsts{}; 
        ///Long/short debounce time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbct{}; 
        ///A-session valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> asvld{}; 
        ///B-session valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bsvld{}; 
    }
    namespace NonefsGotgint{    ///<OTG_FS interrupt register
          (OTG_FS_GOTGINT)
        using Addr = Register::Address<0x50000004,0xfff1fcfb,0,unsigned>;
        ///Session end detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sedet{}; 
        ///Session request success status
              change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srsschg{}; 
        ///Host negotiation success status
              change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnsschg{}; 
        ///Host negotiation detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hngdet{}; 
        ///A-device timeout change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adtochg{}; 
        ///Debounce done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dbcdne{}; 
    }
    namespace NonefsGahbcfg{    ///<OTG_FS AHB configuration register
          (OTG_FS_GAHBCFG)
        using Addr = Register::Address<0x50000008,0xfffffe7e,0,unsigned>;
        ///Global interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gint{}; 
        ///TxFIFO empty level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfelvl{}; 
        ///Periodic TxFIFO empty
              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ptxfelvl{}; 
    }
    namespace NonefsGusbcfg{    ///<OTG_FS USB configuration register
          (OTG_FS_GUSBCFG)
        using Addr = Register::Address<0x5000000c,0x1fffc0b8,0,unsigned>;
        ///FS timeout calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tocal{}; 
        ///Full Speed serial transceiver
              select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> physel{}; 
        ///SRP-capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpcap{}; 
        ///HNP-capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnpcap{}; 
        ///USB turnaround time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> trdt{}; 
        ///Force host mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fhmod{}; 
        ///Force device mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> fdmod{}; 
        ///Corrupt Tx packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ctxpkt{}; 
    }
    namespace NonefsGrstctl{    ///<OTG_FS reset register
          (OTG_FS_GRSTCTL)
        using Addr = Register::Address<0x50000010,0x7ffff808,0,unsigned>;
        ///Core soft reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csrst{}; 
        ///HCLK soft reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsrst{}; 
        ///Host frame counter reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcrst{}; 
        ///RxFIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxfflsh{}; 
        ///TxFIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txfflsh{}; 
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> txfnum{}; 
        ///AHB master idle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ahbidl{}; 
    }
    namespace NonefsGintsts{    ///<OTG_FS core interrupt register
          (OTG_FS_GINTSTS)
        using Addr = Register::Address<0x50000014,0x08c30300,0,unsigned>;
        ///Current mode of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmod{}; 
        ///Mode mismatch interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmis{}; 
        ///OTG interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> otgint{}; 
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sof{}; 
        ///RxFIFO non-empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxflvl{}; 
        ///Non-periodic TxFIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nptxfe{}; 
        ///Global IN non-periodic NAK
              effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ginakeff{}; 
        ///Global OUT NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> goutnakeff{}; 
        ///Early suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> esusp{}; 
        ///USB suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> usbsusp{}; 
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///Enumeration done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enumdne{}; 
        ///Isochronous OUT packet dropped
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isoodrp{}; 
        ///End of periodic frame
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eopf{}; 
        ///IN endpoint interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoint interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oepint{}; 
        ///Incomplete isochronous IN
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iisoixfr{}; 
        ///Incomplete periodic transfer(Host
              mode)/Incomplete isochronous OUT transfer(Device
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ipxfrIncompisoout{}; 
        ///Host port interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> hprtint{}; 
        ///Host channels interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hcint{}; 
        ///Periodic TxFIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ptxfe{}; 
        ///Connector ID status change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cidschg{}; 
        ///Disconnect detected
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> discint{}; 
        ///Session request/new session detected
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srqint{}; 
        ///Resume/remote wakeup detected
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wkupint{}; 
    }
    namespace NonefsGintmsk{    ///<OTG_FS interrupt mask register
          (OTG_FS_GINTMSK)
        using Addr = Register::Address<0x50000018,0x08c10301,0,unsigned>;
        ///Mode mismatch interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmism{}; 
        ///OTG interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> otgint{}; 
        ///Start of frame mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofm{}; 
        ///Receive FIFO non-empty
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxflvlm{}; 
        ///Non-periodic TxFIFO empty
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nptxfem{}; 
        ///Global non-periodic IN NAK effective
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ginakeffm{}; 
        ///Global OUT NAK effective
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gonakeffm{}; 
        ///Early suspend mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> esuspm{}; 
        ///USB suspend mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> usbsuspm{}; 
        ///USB reset mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///Enumeration done mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enumdnem{}; 
        ///Isochronous OUT packet dropped interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isoodrpm{}; 
        ///End of periodic frame interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eopfm{}; 
        ///Endpoint mismatch interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epmism{}; 
        ///IN endpoints interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoints interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oepint{}; 
        ///Incomplete isochronous IN transfer
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iisoixfrm{}; 
        ///Incomplete periodic transfer mask(Host
              mode)/Incomplete isochronous OUT transfer mask(Device
              mode)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ipxfrmIisooxfrm{}; 
        ///Host port interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> prtim{}; 
        ///Host channels interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hcim{}; 
        ///Periodic TxFIFO empty mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ptxfem{}; 
        ///Connector ID status change
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cidschgm{}; 
        ///Disconnect detected interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> discint{}; 
        ///Session request/new session detected
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srqim{}; 
        ///Resume/remote wakeup detected interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wuim{}; 
    }
    namespace NonefsGrxstsrDevice{    ///<OTG_FS Receive status debug read(Device
          mode)
        using Addr = Register::Address<0x5000001c,0xfe000000,0,unsigned>;
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> frmnum{}; 
    }
    namespace NonefsGrxstsrHost{    ///<OTG_FS Receive status debug
          read(Hostmode)
        using Addr = Register::Address<0x5000001c,0xfe000000,0,unsigned>;
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epnum{}; 
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> frmnum{}; 
    }
    namespace NonefsGrxfsiz{    ///<OTG_FS Receive FIFO size register
          (OTG_FS_GRXFSIZ)
        using Addr = Register::Address<0x50000024,0xffff0000,0,unsigned>;
        ///RxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxfd{}; 
    }
    namespace NonefsGnptxfsizDevice{    ///<OTG_FS non-periodic transmit FIFO size
          register (Device mode)
        using Addr = Register::Address<0x50000028,0x00000000,0,unsigned>;
        ///Endpoint 0 transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tx0fsa{}; 
        ///Endpoint 0 TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tx0fd{}; 
    }
    namespace NonefsGnptxfsizHost{    ///<OTG_FS non-periodic transmit FIFO size
          register (Host mode)
        using Addr = Register::Address<0x50000028,0x00000000,0,unsigned>;
        ///Non-periodic transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nptxfsa{}; 
        ///Non-periodic TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> nptxfd{}; 
    }
    namespace NonefsGnptxsts{    ///<OTG_FS non-periodic transmit FIFO/queue
          status register (OTG_FS_GNPTXSTS)
        using Addr = Register::Address<0x5000002c,0x80000000,0,unsigned>;
        ///Non-periodic TxFIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nptxfsav{}; 
        ///Non-periodic transmit request queue
              space available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nptqxsav{}; 
        ///Top of the non-periodic transmit request
              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> nptxqtop{}; 
    }
    namespace NonefsGccfg{    ///<OTG_FS general core configuration register
          (OTG_FS_GCCFG)
        using Addr = Register::Address<0x50000038,0xffe2ffff,0,unsigned>;
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pwrdwn{}; 
        ///Enable the VBUS sensing
              device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusasen{}; 
        ///Enable the VBUS sensing
              device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vbusbsen{}; 
        ///SOF output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sofouten{}; 
    }
    namespace NonefsCid{    ///<core ID register
        using Addr = Register::Address<0x5000003c,0x00000000,0,unsigned>;
        ///Product ID field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> productId{}; 
    }
    namespace NonefsHptxfsiz{    ///<OTG_FS Host periodic transmit FIFO size
          register (OTG_FS_HPTXFSIZ)
        using Addr = Register::Address<0x50000100,0x00000000,0,unsigned>;
        ///Host periodic TxFIFO start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxsa{}; 
        ///Host periodic TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ptxfsiz{}; 
    }
    namespace NonefsDieptxf1{    ///<OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF1)
        using Addr = Register::Address<0x50000104,0x00000000,0,unsigned>;
        ///IN endpoint FIFO2 transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace NonefsDieptxf2{    ///<OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF2)
        using Addr = Register::Address<0x50000108,0x00000000,0,unsigned>;
        ///IN endpoint FIFO3 transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace NonefsDieptxf3{    ///<OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF3)
        using Addr = Register::Address<0x5000010c,0x00000000,0,unsigned>;
        ///IN endpoint FIFO4 transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace NonefsDieptxf4{    ///<OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF4)
        using Addr = Register::Address<0x50000110,0xffffffff,0,unsigned>;
    }
    namespace NonefsDieptxf5{    ///<OTG_FS device IN endpoint transmit FIFO size
          register (OTG_FS_DIEPTXF5)
        using Addr = Register::Address<0x50000114,0xffffffff,0,unsigned>;
    }
}
