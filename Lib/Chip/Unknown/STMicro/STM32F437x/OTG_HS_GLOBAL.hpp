#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//USB on the go high speed
    namespace OtgHsGlobalOtgHsGotgctl{    ///<OTG_HS control and status          register
        using Addr = Register::Address<0x40040000,0xfff0f0fc,0x00000000,unsigned>;
        ///Session request success
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> srqscs{}; 
        ///Session request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srq{}; 
        ///Host negotiation success
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hngscs{}; 
        ///HNP request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnprq{}; 
        ///Host set HNP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hshnpen{}; 
        ///Device HNP enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dhnpen{}; 
        ///Connector ID status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cidsts{}; 
        ///Long/short debounce time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dbct{}; 
        ///A-session valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> asvld{}; 
        ///B-session valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bsvld{}; 
    }
    namespace OtgHsGlobalOtgHsGotgint{    ///<OTG_HS interrupt register
        using Addr = Register::Address<0x40040004,0xfff1fcfb,0x00000000,unsigned>;
        ///Session end detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sedet{}; 
        ///Session request success status              change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srsschg{}; 
        ///Host negotiation success status              change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnsschg{}; 
        ///Host negotiation detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hngdet{}; 
        ///A-device timeout change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adtochg{}; 
        ///Debounce done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dbcdne{}; 
    }
    namespace OtgHsGlobalOtgHsGahbcfg{    ///<OTG_HS AHB configuration          register
        using Addr = Register::Address<0x40040008,0xfffffe40,0x00000000,unsigned>;
        ///Global interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gint{}; 
        ///Burst length/type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> hbstlen{}; 
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///TxFIFO empty level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfelvl{}; 
        ///Periodic TxFIFO empty              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ptxfelvl{}; 
    }
    namespace OtgHsGlobalOtgHsGusbcfg{    ///<OTG_HS USB configuration          register
        using Addr = Register::Address<0x4004000c,0x1c0140b8,0x00000000,unsigned>;
        ///FS timeout calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tocal{}; 
        ///USB 2.0 high-speed ULPI PHY or USB 1.1              full-speed serial transceiver select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> physel{}; 
        ///SRP-capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpcap{}; 
        ///HNP-capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnpcap{}; 
        ///USB turnaround time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> trdt{}; 
        ///PHY Low-power clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> phylpcs{}; 
        ///ULPI FS/LS select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ulpifsls{}; 
        ///ULPI Auto-resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ulpiar{}; 
        ///ULPI Clock SuspendM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ulpicsm{}; 
        ///ULPI External VBUS Drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ulpievbusd{}; 
        ///ULPI external VBUS              indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ulpievbusi{}; 
        ///TermSel DLine pulsing              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tsdps{}; 
        ///Indicator complement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pcci{}; 
        ///Indicator pass through
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ptci{}; 
        ///ULPI interface protect              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ulpiipd{}; 
        ///Forced host mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fhmod{}; 
        ///Forced peripheral mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> fdmod{}; 
        ///Corrupt Tx packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ctxpkt{}; 
    }
    namespace OtgHsGlobalOtgHsGrstctl{    ///<OTG_HS reset register
        using Addr = Register::Address<0x40040010,0x3ffff808,0x00000000,unsigned>;
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
        ///DMA request signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> dmareq{}; 
        ///AHB master idle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ahbidl{}; 
    }
    namespace OtgHsGlobalOtgHsGintsts{    ///<OTG_HS core interrupt register
        using Addr = Register::Address<0x40040014,0x08830300,0x00000000,unsigned>;
        ///Current mode of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cmod{}; 
        ///Mode mismatch interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmis{}; 
        ///OTG interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> otgint{}; 
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sof{}; 
        ///RxFIFO nonempty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rxflvl{}; 
        ///Nonperiodic TxFIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> nptxfe{}; 
        ///Global IN nonperiodic NAK              effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ginakeff{}; 
        ///Global OUT NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> boutnakeff{}; 
        ///Early suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> esusp{}; 
        ///USB suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> usbsusp{}; 
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///Enumeration done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enumdne{}; 
        ///Isochronous OUT packet dropped              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isoodrp{}; 
        ///End of periodic frame              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eopf{}; 
        ///IN endpoint interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iepint{}; 
        ///OUT endpoint interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oepint{}; 
        ///Incomplete isochronous IN              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iisoixfr{}; 
        ///Incomplete periodic              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pxfrIncompisoout{}; 
        ///Data fetch suspended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> datafsusp{}; 
        ///Host port interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hprtint{}; 
        ///Host channels interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> hcint{}; 
        ///Periodic TxFIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptxfe{}; 
        ///Connector ID status change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cidschg{}; 
        ///Disconnect detected              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> discint{}; 
        ///Session request/new session detected              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srqint{}; 
        ///Resume/remote wakeup detected              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wkuint{}; 
    }
    namespace OtgHsGlobalOtgHsGintmsk{    ///<OTG_HS interrupt mask register
        using Addr = Register::Address<0x40040018,0x08810301,0x00000000,unsigned>;
        ///Mode mismatch interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmism{}; 
        ///OTG interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> otgint{}; 
        ///Start of frame mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofm{}; 
        ///Receive FIFO nonempty mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxflvlm{}; 
        ///Nonperiodic TxFIFO empty              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nptxfem{}; 
        ///Global nonperiodic IN NAK effective              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ginakeffm{}; 
        ///Global OUT NAK effective              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gonakeffm{}; 
        ///Early suspend mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> esuspm{}; 
        ///USB suspend mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> usbsuspm{}; 
        ///USB reset mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///Enumeration done mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enumdnem{}; 
        ///Isochronous OUT packet dropped interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isoodrpm{}; 
        ///End of periodic frame interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eopfm{}; 
        ///Endpoint mismatch interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epmism{}; 
        ///IN endpoints interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iepint{}; 
        ///OUT endpoints interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oepint{}; 
        ///Incomplete isochronous IN transfer              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iisoixfrm{}; 
        ///Incomplete periodic transfer              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pxfrmIisooxfrm{}; 
        ///Data fetch suspended mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fsuspm{}; 
        ///Host port interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> prtim{}; 
        ///Host channels interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hcim{}; 
        ///Periodic TxFIFO empty mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ptxfem{}; 
        ///Connector ID status change              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cidschgm{}; 
        ///Disconnect detected interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> discint{}; 
        ///Session request/new session detected              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srqim{}; 
        ///Resume/remote wakeup detected interrupt              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wuim{}; 
    }
    namespace OtgHsGlobalOtgHsGrxstsrHost{    ///<OTG_HS Receive status debug read register          (host mode)
        using Addr = Register::Address<0x4004001c,0xffe00000,0x00000000,unsigned>;
        ///Channel number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chnum{}; 
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
    }
    namespace OtgHsGlobalOtgHsGrxstspHost{    ///<OTG_HS status read and pop register (host          mode)
        using Addr = Register::Address<0x40040020,0xffe00000,0x00000000,unsigned>;
        ///Channel number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chnum{}; 
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
    }
    namespace OtgHsGlobalOtgHsGrxfsiz{    ///<OTG_HS Receive FIFO size          register
        using Addr = Register::Address<0x40040024,0xffff0000,0x00000000,unsigned>;
        ///RxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxfd{}; 
    }
    namespace OtgHsGlobalOtgHsGnptxfsizHost{    ///<OTG_HS nonperiodic transmit FIFO size          register (host mode)
        using Addr = Register::Address<0x40040028,0x00000000,0x00000000,unsigned>;
        ///Nonperiodic transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nptxfsa{}; 
        ///Nonperiodic TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> nptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsTx0fsizPeripheral{    ///<Endpoint 0 transmit FIFO size (peripheral          mode)
        using Addr = Register::Address<0x40040028,0x00000000,0x00000000,unsigned>;
        ///Endpoint 0 transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tx0fsa{}; 
        ///Endpoint 0 TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tx0fd{}; 
    }
    namespace OtgHsGlobalOtgHsGnptxsts{    ///<OTG_HS nonperiodic transmit FIFO/queue          status register
        using Addr = Register::Address<0x4004002c,0x80000000,0x00000000,unsigned>;
        ///Nonperiodic TxFIFO space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nptxfsav{}; 
        ///Nonperiodic transmit request queue space              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nptqxsav{}; 
        ///Top of the nonperiodic transmit request              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> nptxqtop{}; 
    }
    namespace OtgHsGlobalOtgHsGccfg{    ///<OTG_HS general core configuration          register
        using Addr = Register::Address<0x40040038,0xffc0ffff,0x00000000,unsigned>;
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pwrdwn{}; 
        ///Enable I2C bus connection for the              external I2C PHY interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cpaden{}; 
        ///Enable the VBUS sensing              device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusasen{}; 
        ///Enable the VBUS sensing              device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vbusbsen{}; 
        ///SOF output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sofouten{}; 
        ///VBUS sensing disable              option
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> novbussens{}; 
    }
    namespace OtgHsGlobalOtgHsCid{    ///<OTG_HS core ID register
        using Addr = Register::Address<0x4004003c,0x00000000,0x00000000,unsigned>;
        ///Product ID field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> productId{}; 
    }
    namespace OtgHsGlobalOtgHsHptxfsiz{    ///<OTG_HS Host periodic transmit FIFO size          register
        using Addr = Register::Address<0x40040100,0x00000000,0x00000000,unsigned>;
        ///Host periodic TxFIFO start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxsa{}; 
        ///Host periodic TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf1{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x40040104,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf2{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x40040108,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf3{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x4004011c,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf4{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x40040120,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf5{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x40040124,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf6{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x40040128,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsDieptxf7{    ///<OTG_HS device IN endpoint transmit FIFO size          register
        using Addr = Register::Address<0x4004012c,0x00000000,0x00000000,unsigned>;
        ///IN endpoint FIFOx transmit RAM start              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
    }
    namespace OtgHsGlobalOtgHsGrxstsrPeripheral{    ///<OTG_HS Receive status debug read register          (peripheral mode mode)
        using Addr = Register::Address<0x4004001c,0xfe000000,0x00000000,unsigned>;
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
    namespace OtgHsGlobalOtgHsGrxstspPeripheral{    ///<OTG_HS status read and pop register          (peripheral mode)
        using Addr = Register::Address<0x40040020,0xfe000000,0x00000000,unsigned>;
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
}
