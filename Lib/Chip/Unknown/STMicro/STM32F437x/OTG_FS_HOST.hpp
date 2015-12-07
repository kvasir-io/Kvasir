#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go full speed
    namespace NonefsHcfg{    ///<OTG_FS host configuration register
          (OTG_FS_HCFG)
        using Addr = Register::Address<0x50000400,0xfffffff8,0,unsigned>;
        ///FS/LS PHY clock select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> fslspcs{}; 
        namespace FslspcsValC{
        }
        ///FS- and LS-only support
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fslss{}; 
        namespace FslssValC{
        }
    }
    namespace Nonehfir{    ///<OTG_FS Host frame interval
          register
        using Addr = Register::Address<0x50000404,0xffff0000,0,unsigned>;
        ///Frame interval
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frivl{}; 
        namespace FrivlValC{
        }
    }
    namespace NonefsHfnum{    ///<OTG_FS host frame number/frame time
          remaining register (OTG_FS_HFNUM)
        using Addr = Register::Address<0x50000408,0x00000000,0,unsigned>;
        ///Frame number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> frnum{}; 
        namespace FrnumValC{
        }
        ///Frame time remaining
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> ftrem{}; 
        namespace FtremValC{
        }
    }
    namespace NonefsHptxsts{    ///<OTG_FS_Host periodic transmit FIFO/queue
          status register (OTG_FS_HPTXSTS)
        using Addr = Register::Address<0x50000410,0x00000000,0,unsigned>;
        ///Periodic transmit data FIFO space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> ptxfsavl{}; 
        namespace PtxfsavlValC{
        }
        ///Periodic transmit request queue space
              available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ptxqsav{}; 
        namespace PtxqsavValC{
        }
        ///Top of the periodic transmit request
              queue
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ptxqtop{}; 
        namespace PtxqtopValC{
        }
    }
    namespace Nonehaint{    ///<OTG_FS Host all channels interrupt
          register
        using Addr = Register::Address<0x50000414,0xffff0000,0,unsigned>;
        ///Channel interrupts
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haint{}; 
        namespace HaintValC{
        }
    }
    namespace Nonehaintmsk{    ///<OTG_FS host all channels interrupt mask
          register
        using Addr = Register::Address<0x50000418,0xffff0000,0,unsigned>;
        ///Channel interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> haintm{}; 
        namespace HaintmValC{
        }
    }
    namespace NonefsHprt{    ///<OTG_FS host port control and status register
          (OTG_FS_HPRT)
        using Addr = Register::Address<0x50000440,0xfff80200,0,unsigned>;
        ///Port connect status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pcsts{}; 
        namespace PcstsValC{
        }
        ///Port connect detected
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pcdet{}; 
        namespace PcdetValC{
        }
        ///Port enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pena{}; 
        namespace PenaValC{
        }
        ///Port enable/disable change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> penchng{}; 
        namespace PenchngValC{
        }
        ///Port overcurrent active
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> poca{}; 
        namespace PocaValC{
        }
        ///Port overcurrent change
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pocchng{}; 
        namespace PocchngValC{
        }
        ///Port resume
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pres{}; 
        namespace PresValC{
        }
        ///Port suspend
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> psusp{}; 
        namespace PsuspValC{
        }
        ///Port reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> prst{}; 
        namespace PrstValC{
        }
        ///Port line status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> plsts{}; 
        namespace PlstsValC{
        }
        ///Port power
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ppwr{}; 
        namespace PpwrValC{
        }
        ///Port test control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,13),Register::ReadWriteAccess,unsigned> ptctl{}; 
        namespace PtctlValC{
        }
        ///Port speed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,17),Register::ReadWriteAccess,unsigned> pspd{}; 
        namespace PspdValC{
        }
    }
    namespace NonefsHcchar0{    ///<OTG_FS host channel-0 characteristics
          register (OTG_FS_HCCHAR0)
        using Addr = Register::Address<0x50000500,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar1{    ///<OTG_FS host channel-1 characteristics
          register (OTG_FS_HCCHAR1)
        using Addr = Register::Address<0x50000520,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar2{    ///<OTG_FS host channel-2 characteristics
          register (OTG_FS_HCCHAR2)
        using Addr = Register::Address<0x50000540,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar3{    ///<OTG_FS host channel-3 characteristics
          register (OTG_FS_HCCHAR3)
        using Addr = Register::Address<0x50000560,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar4{    ///<OTG_FS host channel-4 characteristics
          register (OTG_FS_HCCHAR4)
        using Addr = Register::Address<0x50000580,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar5{    ///<OTG_FS host channel-5 characteristics
          register (OTG_FS_HCCHAR5)
        using Addr = Register::Address<0x500005a0,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar6{    ///<OTG_FS host channel-6 characteristics
          register (OTG_FS_HCCHAR6)
        using Addr = Register::Address<0x500005c0,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcchar7{    ///<OTG_FS host channel-7 characteristics
          register (OTG_FS_HCCHAR7)
        using Addr = Register::Address<0x500005e0,0x00010000,0,unsigned>;
        ///Maximum packet size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,0),Register::ReadWriteAccess,unsigned> mpsiz{}; 
        namespace MpsizValC{
        }
        ///Endpoint number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,11),Register::ReadWriteAccess,unsigned> epnum{}; 
        namespace EpnumValC{
        }
        ///Endpoint direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> epdir{}; 
        namespace EpdirValC{
        }
        ///Low-speed device
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> lsdev{}; 
        namespace LsdevValC{
        }
        ///Endpoint type
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,18),Register::ReadWriteAccess,unsigned> eptyp{}; 
        namespace EptypValC{
        }
        ///Multicount
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,unsigned> mcnt{}; 
        namespace McntValC{
        }
        ///Device address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,22),Register::ReadWriteAccess,unsigned> dad{}; 
        namespace DadValC{
        }
        ///Odd frame
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> oddfrm{}; 
        namespace OddfrmValC{
        }
        ///Channel disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> chdis{}; 
        namespace ChdisValC{
        }
        ///Channel enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> chena{}; 
        namespace ChenaValC{
        }
    }
    namespace NonefsHcint0{    ///<OTG_FS host channel-0 interrupt register
          (OTG_FS_HCINT0)
        using Addr = Register::Address<0x50000508,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint1{    ///<OTG_FS host channel-1 interrupt register
          (OTG_FS_HCINT1)
        using Addr = Register::Address<0x50000528,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint2{    ///<OTG_FS host channel-2 interrupt register
          (OTG_FS_HCINT2)
        using Addr = Register::Address<0x50000548,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint3{    ///<OTG_FS host channel-3 interrupt register
          (OTG_FS_HCINT3)
        using Addr = Register::Address<0x50000568,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint4{    ///<OTG_FS host channel-4 interrupt register
          (OTG_FS_HCINT4)
        using Addr = Register::Address<0x50000588,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint5{    ///<OTG_FS host channel-5 interrupt register
          (OTG_FS_HCINT5)
        using Addr = Register::Address<0x500005a8,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint6{    ///<OTG_FS host channel-6 interrupt register
          (OTG_FS_HCINT6)
        using Addr = Register::Address<0x500005c8,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcint7{    ///<OTG_FS host channel-7 interrupt register
          (OTG_FS_HCINT7)
        using Addr = Register::Address<0x500005e8,0xfffff844,0,unsigned>;
        ///Transfer completed
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrc{}; 
        namespace XfrcValC{
        }
        ///Channel halted
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chh{}; 
        namespace ChhValC{
        }
        ///STALL response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
        ///NAK response received
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nak{}; 
        namespace NakValC{
        }
        ///ACK response received/transmitted
              interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///Transaction error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerr{}; 
        namespace TxerrValC{
        }
        ///Babble error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberr{}; 
        namespace BberrValC{
        }
        ///Frame overrun
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmor{}; 
        namespace FrmorValC{
        }
        ///Data toggle error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterr{}; 
        namespace DterrValC{
        }
    }
    namespace NonefsHcintmsk0{    ///<OTG_FS host channel-0 mask register
          (OTG_FS_HCINTMSK0)
        using Addr = Register::Address<0x5000050c,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk1{    ///<OTG_FS host channel-1 mask register
          (OTG_FS_HCINTMSK1)
        using Addr = Register::Address<0x5000052c,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk2{    ///<OTG_FS host channel-2 mask register
          (OTG_FS_HCINTMSK2)
        using Addr = Register::Address<0x5000054c,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk3{    ///<OTG_FS host channel-3 mask register
          (OTG_FS_HCINTMSK3)
        using Addr = Register::Address<0x5000056c,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk4{    ///<OTG_FS host channel-4 mask register
          (OTG_FS_HCINTMSK4)
        using Addr = Register::Address<0x5000058c,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk5{    ///<OTG_FS host channel-5 mask register
          (OTG_FS_HCINTMSK5)
        using Addr = Register::Address<0x500005ac,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk6{    ///<OTG_FS host channel-6 mask register
          (OTG_FS_HCINTMSK6)
        using Addr = Register::Address<0x500005cc,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHcintmsk7{    ///<OTG_FS host channel-7 mask register
          (OTG_FS_HCINTMSK7)
        using Addr = Register::Address<0x500005ec,0xfffff804,0,unsigned>;
        ///Transfer completed mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> xfrcm{}; 
        namespace XfrcmValC{
        }
        ///Channel halted mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chhm{}; 
        namespace ChhmValC{
        }
        ///STALL response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stallm{}; 
        namespace StallmValC{
        }
        ///NAK response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> nakm{}; 
        namespace NakmValC{
        }
        ///ACK response received/transmitted
              interrupt mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ackm{}; 
        namespace AckmValC{
        }
        ///response received interrupt
              mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> nyet{}; 
        namespace NyetValC{
        }
        ///Transaction error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txerrm{}; 
        namespace TxerrmValC{
        }
        ///Babble error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bberrm{}; 
        namespace BberrmValC{
        }
        ///Frame overrun mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> frmorm{}; 
        namespace FrmormValC{
        }
        ///Data toggle error mask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dterrm{}; 
        namespace DterrmValC{
        }
    }
    namespace NonefsHctsiz0{    ///<OTG_FS host channel-0 transfer size
          register
        using Addr = Register::Address<0x50000510,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz1{    ///<OTG_FS host channel-1 transfer size
          register
        using Addr = Register::Address<0x50000530,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz2{    ///<OTG_FS host channel-2 transfer size
          register
        using Addr = Register::Address<0x50000550,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz3{    ///<OTG_FS host channel-3 transfer size
          register
        using Addr = Register::Address<0x50000570,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz4{    ///<OTG_FS host channel-x transfer size
          register
        using Addr = Register::Address<0x50000590,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz5{    ///<OTG_FS host channel-5 transfer size
          register
        using Addr = Register::Address<0x500005b0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz6{    ///<OTG_FS host channel-6 transfer size
          register
        using Addr = Register::Address<0x500005d0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
    namespace NonefsHctsiz7{    ///<OTG_FS host channel-7 transfer size
          register
        using Addr = Register::Address<0x500005f0,0x80000000,0,unsigned>;
        ///Transfer size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,0),Register::ReadWriteAccess,unsigned> xfrsiz{}; 
        namespace XfrsizValC{
        }
        ///Packet count
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,19),Register::ReadWriteAccess,unsigned> pktcnt{}; 
        namespace PktcntValC{
        }
        ///Data PID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,29),Register::ReadWriteAccess,unsigned> dpid{}; 
        namespace DpidValC{
        }
    }
}
