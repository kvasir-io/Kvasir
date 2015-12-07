#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go high speed
    namespace NoneotgHsGotgctl{    ///<OTG_HS control and status
          register
        using Addr = Register::Address<0x40040000,0xfff0f0fc,0,unsigned>;
        ///Session request success
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> srqscs{}; 
        namespace SrqscsValC{
        }
        ///Session request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> srq{}; 
        namespace SrqValC{
        }
        ///Host negotiation success
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> hngscs{}; 
        namespace HngscsValC{
        }
        ///HNP request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnprq{}; 
        namespace HnprqValC{
        }
        ///Host set HNP enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> hshnpen{}; 
        namespace HshnpenValC{
        }
        ///Device HNP enabled
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> dhnpen{}; 
        namespace DhnpenValC{
        }
        ///Connector ID status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> cidsts{}; 
        namespace CidstsValC{
        }
        ///Long/short debounce time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> dbct{}; 
        namespace DbctValC{
        }
        ///A-session valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> asvld{}; 
        namespace AsvldValC{
        }
        ///B-session valid
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> bsvld{}; 
        namespace BsvldValC{
        }
    }
    namespace NoneotgHsGotgint{    ///<OTG_HS interrupt register
        using Addr = Register::Address<0x40040004,0xfff1fcfb,0,unsigned>;
        ///Session end detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sedet{}; 
        namespace SedetValC{
        }
        ///Session request success status
              change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srsschg{}; 
        namespace SrsschgValC{
        }
        ///Host negotiation success status
              change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnsschg{}; 
        namespace HnsschgValC{
        }
        ///Host negotiation detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hngdet{}; 
        namespace HngdetValC{
        }
        ///A-device timeout change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> adtochg{}; 
        namespace AdtochgValC{
        }
        ///Debounce done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> dbcdne{}; 
        namespace DbcdneValC{
        }
    }
    namespace NoneotgHsGahbcfg{    ///<OTG_HS AHB configuration
          register
        using Addr = Register::Address<0x40040008,0xfffffe40,0,unsigned>;
        ///Global interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gint{}; 
        namespace GintValC{
        }
        ///Burst length/type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> hbstlen{}; 
        namespace HbstlenValC{
        }
        ///DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///TxFIFO empty level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfelvl{}; 
        namespace TxfelvlValC{
        }
        ///Periodic TxFIFO empty
              level
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ptxfelvl{}; 
        namespace PtxfelvlValC{
        }
    }
    namespace NoneotgHsGusbcfg{    ///<OTG_HS USB configuration
          register
        using Addr = Register::Address<0x4004000c,0x1c0140b8,0,unsigned>;
        ///FS timeout calibration
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> tocal{}; 
        namespace TocalValC{
        }
        ///USB 2.0 high-speed ULPI PHY or USB 1.1
              full-speed serial transceiver select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> physel{}; 
        namespace PhyselValC{
        }
        ///SRP-capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> srpcap{}; 
        namespace SrpcapValC{
        }
        ///HNP-capable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> hnpcap{}; 
        namespace HnpcapValC{
        }
        ///USB turnaround time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,10),Register::ReadWriteAccess,unsigned> trdt{}; 
        namespace TrdtValC{
        }
        ///PHY Low-power clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> phylpcs{}; 
        namespace PhylpcsValC{
        }
        ///ULPI FS/LS select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> ulpifsls{}; 
        namespace UlpifslsValC{
        }
        ///ULPI Auto-resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ulpiar{}; 
        namespace UlpiarValC{
        }
        ///ULPI Clock SuspendM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ulpicsm{}; 
        namespace UlpicsmValC{
        }
        ///ULPI External VBUS Drive
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ulpievbusd{}; 
        namespace UlpievbusdValC{
        }
        ///ULPI external VBUS
              indicator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> ulpievbusi{}; 
        namespace UlpievbusiValC{
        }
        ///TermSel DLine pulsing
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> tsdps{}; 
        namespace TsdpsValC{
        }
        ///Indicator complement
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> pcci{}; 
        namespace PcciValC{
        }
        ///Indicator pass through
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> ptci{}; 
        namespace PtciValC{
        }
        ///ULPI interface protect
              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> ulpiipd{}; 
        namespace UlpiipdValC{
        }
        ///Forced host mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> fhmod{}; 
        namespace FhmodValC{
        }
        ///Forced peripheral mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> fdmod{}; 
        namespace FdmodValC{
        }
        ///Corrupt Tx packet
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ctxpkt{}; 
        namespace CtxpktValC{
        }
    }
    namespace NoneotgHsGrstctl{    ///<OTG_HS reset register
        using Addr = Register::Address<0x40040010,0x3ffff808,0,unsigned>;
        ///Core soft reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csrst{}; 
        namespace CsrstValC{
        }
        ///HCLK soft reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hsrst{}; 
        namespace HsrstValC{
        }
        ///Host frame counter reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcrst{}; 
        namespace FcrstValC{
        }
        ///RxFIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxfflsh{}; 
        namespace RxfflshValC{
        }
        ///TxFIFO flush
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txfflsh{}; 
        namespace TxfflshValC{
        }
        ///TxFIFO number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,6),Register::ReadWriteAccess,unsigned> txfnum{}; 
        namespace TxfnumValC{
        }
        ///DMA request signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> dmareq{}; 
        namespace DmareqValC{
        }
        ///AHB master idle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> ahbidl{}; 
        namespace AhbidlValC{
        }
    }
    namespace NoneotgHsGintsts{    ///<OTG_HS core interrupt register
        using Addr = Register::Address<0x40040014,0x08830300,0,unsigned>;
        ///Current mode of operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmod{}; 
        namespace CmodValC{
        }
        ///Mode mismatch interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmis{}; 
        namespace MmisValC{
        }
        ///OTG interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> otgint{}; 
        namespace OtgintValC{
        }
        ///Start of frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sof{}; 
        namespace SofValC{
        }
        ///RxFIFO nonempty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxflvl{}; 
        namespace RxflvlValC{
        }
        ///Nonperiodic TxFIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nptxfe{}; 
        namespace NptxfeValC{
        }
        ///Global IN nonperiodic NAK
              effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ginakeff{}; 
        namespace GinakeffValC{
        }
        ///Global OUT NAK effective
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> boutnakeff{}; 
        namespace BoutnakeffValC{
        }
        ///Early suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> esusp{}; 
        namespace EsuspValC{
        }
        ///USB suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> usbsusp{}; 
        namespace UsbsuspValC{
        }
        ///USB reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///Enumeration done
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enumdne{}; 
        namespace EnumdneValC{
        }
        ///Isochronous OUT packet dropped
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isoodrp{}; 
        namespace IsoodrpValC{
        }
        ///End of periodic frame
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eopf{}; 
        namespace EopfValC{
        }
        ///IN endpoint interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iepint{}; 
        namespace IepintValC{
        }
        ///OUT endpoint interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oepint{}; 
        namespace OepintValC{
        }
        ///Incomplete isochronous IN
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iisoixfr{}; 
        namespace IisoixfrValC{
        }
        ///Incomplete periodic
              transfer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pxfrIncompisoout{}; 
        namespace PxfrincompisooutValC{
        }
        ///Data fetch suspended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> datafsusp{}; 
        namespace DatafsuspValC{
        }
        ///Host port interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> hprtint{}; 
        namespace HprtintValC{
        }
        ///Host channels interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hcint{}; 
        namespace HcintValC{
        }
        ///Periodic TxFIFO empty
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ptxfe{}; 
        namespace PtxfeValC{
        }
        ///Connector ID status change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cidschg{}; 
        namespace CidschgValC{
        }
        ///Disconnect detected
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> discint{}; 
        namespace DiscintValC{
        }
        ///Session request/new session detected
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srqint{}; 
        namespace SrqintValC{
        }
        ///Resume/remote wakeup detected
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wkuint{}; 
        namespace WkuintValC{
        }
    }
    namespace NoneotgHsGintmsk{    ///<OTG_HS interrupt mask register
        using Addr = Register::Address<0x40040018,0x08810301,0,unsigned>;
        ///Mode mismatch interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mmism{}; 
        namespace MmismValC{
        }
        ///OTG interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> otgint{}; 
        namespace OtgintValC{
        }
        ///Start of frame mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sofm{}; 
        namespace SofmValC{
        }
        ///Receive FIFO nonempty mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxflvlm{}; 
        namespace RxflvlmValC{
        }
        ///Nonperiodic TxFIFO empty
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> nptxfem{}; 
        namespace NptxfemValC{
        }
        ///Global nonperiodic IN NAK effective
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ginakeffm{}; 
        namespace GinakeffmValC{
        }
        ///Global OUT NAK effective
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gonakeffm{}; 
        namespace GonakeffmValC{
        }
        ///Early suspend mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> esuspm{}; 
        namespace EsuspmValC{
        }
        ///USB suspend mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> usbsuspm{}; 
        namespace UsbsuspmValC{
        }
        ///USB reset mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///Enumeration done mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> enumdnem{}; 
        namespace EnumdnemValC{
        }
        ///Isochronous OUT packet dropped interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> isoodrpm{}; 
        namespace IsoodrpmValC{
        }
        ///End of periodic frame interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> eopfm{}; 
        namespace EopfmValC{
        }
        ///Endpoint mismatch interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> epmism{}; 
        namespace EpmismValC{
        }
        ///IN endpoints interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> iepint{}; 
        namespace IepintValC{
        }
        ///OUT endpoints interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oepint{}; 
        namespace OepintValC{
        }
        ///Incomplete isochronous IN transfer
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> iisoixfrm{}; 
        namespace IisoixfrmValC{
        }
        ///Incomplete periodic transfer
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pxfrmIisooxfrm{}; 
        namespace PxfrmiisooxfrmValC{
        }
        ///Data fetch suspended mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> fsuspm{}; 
        namespace FsuspmValC{
        }
        ///Host port interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> prtim{}; 
        namespace PrtimValC{
        }
        ///Host channels interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> hcim{}; 
        namespace HcimValC{
        }
        ///Periodic TxFIFO empty mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> ptxfem{}; 
        namespace PtxfemValC{
        }
        ///Connector ID status change
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> cidschgm{}; 
        namespace CidschgmValC{
        }
        ///Disconnect detected interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> discint{}; 
        namespace DiscintValC{
        }
        ///Session request/new session detected
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> srqim{}; 
        namespace SrqimValC{
        }
        ///Resume/remote wakeup detected interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> wuim{}; 
        namespace WuimValC{
        }
    }
    namespace NoneotgHsGrxstsrHost{    ///<OTG_HS Receive status debug read register
          (host mode)
        using Addr = Register::Address<0x4004001c,0xffe00000,0,unsigned>;
        ///Channel number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chnum{}; 
        namespace ChnumValC{
        }
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        namespace BcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
        namespace PktstsValC{
        }
    }
    namespace NoneotgHsGrxstspHost{    ///<OTG_HS status read and pop register (host
          mode)
        using Addr = Register::Address<0x40040020,0xffe00000,0,unsigned>;
        ///Channel number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> chnum{}; 
        namespace ChnumValC{
        }
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        namespace BcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
        namespace PktstsValC{
        }
    }
    namespace NoneotgHsGrxfsiz{    ///<OTG_HS Receive FIFO size
          register
        using Addr = Register::Address<0x40040024,0xffff0000,0,unsigned>;
        ///RxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> rxfd{}; 
        namespace RxfdValC{
        }
    }
    namespace NoneotgHsGnptxfsizHost{    ///<OTG_HS nonperiodic transmit FIFO size
          register (host mode)
        using Addr = Register::Address<0x40040028,0x00000000,0,unsigned>;
        ///Nonperiodic transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nptxfsa{}; 
        namespace NptxfsaValC{
        }
        ///Nonperiodic TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> nptxfd{}; 
        namespace NptxfdValC{
        }
    }
    namespace NoneotgHsTx0fsizPeripheral{    ///<Endpoint 0 transmit FIFO size (peripheral
          mode)
        using Addr = Register::Address<0x40040028,0x00000000,0,unsigned>;
        ///Endpoint 0 transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tx0fsa{}; 
        namespace Tx0fsaValC{
        }
        ///Endpoint 0 TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> tx0fd{}; 
        namespace Tx0fdValC{
        }
    }
    namespace NoneotgHsGnptxsts{    ///<OTG_HS nonperiodic transmit FIFO/queue
          status register
        using Addr = Register::Address<0x4004002c,0x80000000,0,unsigned>;
        ///Nonperiodic TxFIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> nptxfsav{}; 
        namespace NptxfsavValC{
        }
        ///Nonperiodic transmit request queue space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> nptqxsav{}; 
        namespace NptqxsavValC{
        }
        ///Top of the nonperiodic transmit request
              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,24),Register::ReadWriteAccess,unsigned> nptxqtop{}; 
        namespace NptxqtopValC{
        }
    }
    namespace NoneotgHsGccfg{    ///<OTG_HS general core configuration
          register
        using Addr = Register::Address<0x40040038,0xffc0ffff,0,unsigned>;
        ///Power down
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> pwrdwn{}; 
        namespace PwrdwnValC{
        }
        ///Enable I2C bus connection for the
              external I2C PHY interface
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> i2cpaden{}; 
        namespace I2cpadenValC{
        }
        ///Enable the VBUS sensing
              device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> vbusasen{}; 
        namespace VbusasenValC{
        }
        ///Enable the VBUS sensing
              device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> vbusbsen{}; 
        namespace VbusbsenValC{
        }
        ///SOF output enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> sofouten{}; 
        namespace SofoutenValC{
        }
        ///VBUS sensing disable
              option
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> novbussens{}; 
        namespace NovbussensValC{
        }
    }
    namespace NoneotgHsCid{    ///<OTG_HS core ID register
        using Addr = Register::Address<0x4004003c,0x00000000,0,unsigned>;
        ///Product ID field
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> productId{}; 
        namespace ProductidValC{
        }
    }
    namespace NoneotgHsHptxfsiz{    ///<OTG_HS Host periodic transmit FIFO size
          register
        using Addr = Register::Address<0x40040100,0x00000000,0,unsigned>;
        ///Host periodic TxFIFO start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxsa{}; 
        namespace PtxsaValC{
        }
        ///Host periodic TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ptxfd{}; 
        namespace PtxfdValC{
        }
    }
    namespace NoneotgHsDieptxf1{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x40040104,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsDieptxf2{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x40040108,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsDieptxf3{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x4004011c,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsDieptxf4{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x40040120,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsDieptxf5{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x40040124,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsDieptxf6{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x40040128,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsDieptxf7{    ///<OTG_HS device IN endpoint transmit FIFO size
          register
        using Addr = Register::Address<0x4004012c,0x00000000,0,unsigned>;
        ///IN endpoint FIFOx transmit RAM start
              address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ineptxsa{}; 
        namespace IneptxsaValC{
        }
        ///IN endpoint TxFIFO depth
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ineptxfd{}; 
        namespace IneptxfdValC{
        }
    }
    namespace NoneotgHsGrxstsrPeripheral{    ///<OTG_HS Receive status debug read register
          (peripheral mode mode)
        using Addr = Register::Address<0x4004001c,0xfe000000,0,unsigned>;
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        namespace BcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
        namespace PktstsValC{
        }
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> frmnum{}; 
        namespace FrmnumValC{
        }
    }
    namespace NoneotgHsGrxstspPeripheral{    ///<OTG_HS status read and pop register
          (peripheral mode)
        using Addr = Register::Address<0x40040020,0xfe000000,0,unsigned>;
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Byte count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,4),Register::ReadWriteAccess,unsigned> bcnt{}; 
        namespace BcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,15),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
        ///Packet status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,17),Register::ReadWriteAccess,unsigned> pktsts{}; 
        namespace PktstsValC{
        }
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,21),Register::ReadWriteAccess,unsigned> frmnum{}; 
        namespace FrmnumValC{
        }
    }
}
