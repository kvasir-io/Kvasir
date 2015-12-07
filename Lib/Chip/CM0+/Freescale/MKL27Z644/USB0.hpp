#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Serial Bus, OTG Capable Controller
    namespace Usb0Perid{    ///<Peripheral ID register
        using Addr = Register::Address<0x40072000,0xffffffc0,0,unsigned char>;
        ///Peripheral Identification
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
        namespace IdValC{
        }
    }
    namespace Usb0Idcomp{    ///<Peripheral ID Complement register
        using Addr = Register::Address<0x40072004,0xffffffc0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nid{}; 
        namespace NidValC{
        }
    }
    namespace Usb0Rev{    ///<Peripheral Revision register
        using Addr = Register::Address<0x40072008,0xffffff00,0,unsigned char>;
        ///Revision
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rev{}; 
        namespace RevValC{
        }
    }
    namespace Usb0Addinfo{    ///<Peripheral Additional Info register
        using Addr = Register::Address<0x4007200c,0xfffffffe,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iehost{}; 
        namespace IehostValC{
        }
    }
    namespace Usb0Otgctl{    ///<OTG Control register
        using Addr = Register::Address<0x4007201c,0xffffff7f,0,unsigned char>;
        ///D+ Data Line pullup resistor enable
        enum class DphighVal {
            v0=0x00000000,     ///<D+ pullup resistor is not enabled
            v1=0x00000001,     ///<D+ pullup resistor is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DphighVal> dphigh{}; 
        namespace DphighValC{
            constexpr Register::FieldValue<decltype(dphigh),DphighVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dphigh),DphighVal::v1> v1{};
        }
    }
    namespace Usb0Istat{    ///<Interrupt Status register
        using Addr = Register::Address<0x40072080,0xffffff40,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst{}; 
        namespace UsbrstValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
        namespace ErrorValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softok{}; 
        namespace SoftokValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tokdne{}; 
        namespace TokdneValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sleep{}; 
        namespace SleepValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resume{}; 
        namespace ResumeValC{
        }
        ///Stall Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
    }
    namespace Usb0Inten{    ///<Interrupt Enable register
        using Addr = Register::Address<0x40072084,0xffffff40,0,unsigned char>;
        ///USBRST Interrupt Enable
        enum class UsbrstenVal {
            v0=0x00000000,     ///<Disables the USBRST interrupt.
            v1=0x00000001,     ///<Enables the USBRST interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbrstenVal> usbrsten{}; 
        namespace UsbrstenValC{
            constexpr Register::FieldValue<decltype(usbrsten),UsbrstenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbrsten),UsbrstenVal::v1> v1{};
        }
        ///ERROR Interrupt Enable
        enum class ErrorenVal {
            v0=0x00000000,     ///<Disables the ERROR interrupt.
            v1=0x00000001,     ///<Enables the ERROR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ErrorenVal> erroren{}; 
        namespace ErrorenValC{
            constexpr Register::FieldValue<decltype(erroren),ErrorenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(erroren),ErrorenVal::v1> v1{};
        }
        ///SOFTOK Interrupt Enable
        enum class SoftokenVal {
            v0=0x00000000,     ///<Disbles the SOFTOK interrupt.
            v1=0x00000001,     ///<Enables the SOFTOK interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SoftokenVal> softoken{}; 
        namespace SoftokenValC{
            constexpr Register::FieldValue<decltype(softoken),SoftokenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(softoken),SoftokenVal::v1> v1{};
        }
        ///TOKDNE Interrupt Enable
        enum class TokdneenVal {
            v0=0x00000000,     ///<Disables the TOKDNE interrupt.
            v1=0x00000001,     ///<Enables the TOKDNE interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TokdneenVal> tokdneen{}; 
        namespace TokdneenValC{
            constexpr Register::FieldValue<decltype(tokdneen),TokdneenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tokdneen),TokdneenVal::v1> v1{};
        }
        ///SLEEP Interrupt Enable
        enum class SleepenVal {
            v0=0x00000000,     ///<Disables the SLEEP interrupt.
            v1=0x00000001,     ///<Enables the SLEEP interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,SleepenVal> sleepen{}; 
        namespace SleepenValC{
            constexpr Register::FieldValue<decltype(sleepen),SleepenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sleepen),SleepenVal::v1> v1{};
        }
        ///RESUME Interrupt Enable
        enum class ResumeenVal {
            v0=0x00000000,     ///<Disables the RESUME interrupt.
            v1=0x00000001,     ///<Enables the RESUME interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,ResumeenVal> resumeen{}; 
        namespace ResumeenValC{
            constexpr Register::FieldValue<decltype(resumeen),ResumeenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resumeen),ResumeenVal::v1> v1{};
        }
        ///STALL Interrupt Enable
        enum class StallenVal {
            v0=0x00000000,     ///<Diasbles the STALL interrupt.
            v1=0x00000001,     ///<Enables the STALL interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,StallenVal> stallen{}; 
        namespace StallenValC{
            constexpr Register::FieldValue<decltype(stallen),StallenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stallen),StallenVal::v1> v1{};
        }
    }
    namespace Usb0Errstat{    ///<Error Interrupt Status register
        using Addr = Register::Address<0x40072088,0xffffff40,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> piderr{}; 
        namespace PiderrValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc5{}; 
        namespace Crc5ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crc16{}; 
        namespace Crc16ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfn8{}; 
        namespace Dfn8ValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btoerr{}; 
        namespace BtoerrValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmaerr{}; 
        namespace DmaerrValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btserr{}; 
        namespace BtserrValC{
        }
    }
    namespace Usb0Erren{    ///<Error Interrupt Enable register
        using Addr = Register::Address<0x4007208c,0xffffff40,0,unsigned char>;
        ///PIDERR Interrupt Enable
        enum class PiderrenVal {
            v0=0x00000000,     ///<Disables the PIDERR interrupt.
            v1=0x00000001,     ///<Enters the PIDERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,PiderrenVal> piderren{}; 
        namespace PiderrenValC{
            constexpr Register::FieldValue<decltype(piderren),PiderrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(piderren),PiderrenVal::v1> v1{};
        }
        ///CRC5/EOF Interrupt Enable
        enum class Crc5eofenVal {
            v0=0x00000000,     ///<Disables the CRC5/EOF interrupt.
            v1=0x00000001,     ///<Enables the CRC5/EOF interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Crc5eofenVal> crc5eofen{}; 
        namespace Crc5eofenValC{
            constexpr Register::FieldValue<decltype(crc5eofen),Crc5eofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc5eofen),Crc5eofenVal::v1> v1{};
        }
        ///CRC16 Interrupt Enable
        enum class Crc16enVal {
            v0=0x00000000,     ///<Disables the CRC16 interrupt.
            v1=0x00000001,     ///<Enables the CRC16 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Crc16enVal> crc16en{}; 
        namespace Crc16enValC{
            constexpr Register::FieldValue<decltype(crc16en),Crc16enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(crc16en),Crc16enVal::v1> v1{};
        }
        ///DFN8 Interrupt Enable
        enum class Dfn8enVal {
            v0=0x00000000,     ///<Disables the DFN8 interrupt.
            v1=0x00000001,     ///<Enables the DFN8 interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Dfn8enVal> dfn8en{}; 
        namespace Dfn8enValC{
            constexpr Register::FieldValue<decltype(dfn8en),Dfn8enVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dfn8en),Dfn8enVal::v1> v1{};
        }
        ///BTOERR Interrupt Enable
        enum class BtoerrenVal {
            v0=0x00000000,     ///<Disables the BTOERR interrupt.
            v1=0x00000001,     ///<Enables the BTOERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BtoerrenVal> btoerren{}; 
        namespace BtoerrenValC{
            constexpr Register::FieldValue<decltype(btoerren),BtoerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btoerren),BtoerrenVal::v1> v1{};
        }
        ///DMAERR Interrupt Enable
        enum class DmaerrenVal {
            v0=0x00000000,     ///<Disables the DMAERR interrupt.
            v1=0x00000001,     ///<Enables the DMAERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DmaerrenVal> dmaerren{}; 
        namespace DmaerrenValC{
            constexpr Register::FieldValue<decltype(dmaerren),DmaerrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaerren),DmaerrenVal::v1> v1{};
        }
        ///BTSERR Interrupt Enable
        enum class BtserrenVal {
            v0=0x00000000,     ///<Disables the BTSERR interrupt.
            v1=0x00000001,     ///<Enables the BTSERR interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,BtserrenVal> btserren{}; 
        namespace BtserrenValC{
            constexpr Register::FieldValue<decltype(btserren),BtserrenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(btserren),BtserrenVal::v1> v1{};
        }
    }
    namespace Usb0Stat{    ///<Status register
        using Addr = Register::Address<0x40072090,0xffffff03,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odd{}; 
        namespace OddValC{
        }
        ///Transmit Indicator
        enum class TxVal {
            v0=0x00000000,     ///<The most recent transaction was a receive operation.
            v1=0x00000001,     ///<The most recent transaction was a transmit operation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,TxVal> tx{}; 
        namespace TxValC{
            constexpr Register::FieldValue<decltype(tx),TxVal::v0> v0{};
            constexpr Register::FieldValue<decltype(tx),TxVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> endp{}; 
        namespace EndpValC{
        }
    }
    namespace Usb0Ctl{    ///<Control register
        using Addr = Register::Address<0x40072094,0xffffff1c,0,unsigned char>;
        ///USB Enable
        enum class UsbensofenVal {
            v0=0x00000000,     ///<Disables the USB Module.
            v1=0x00000001,     ///<Enables the USB Module.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbensofenVal> usbensofen{}; 
        namespace UsbensofenValC{
            constexpr Register::FieldValue<decltype(usbensofen),UsbensofenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbensofen),UsbensofenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddrst{}; 
        namespace OddrstValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txsuspendtokenbusy{}; 
        namespace TxsuspendtokenbusyValC{
        }
        ///Live USB Single Ended Zero signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> se0{}; 
        namespace Se0ValC{
        }
        ///Live USB differential receiver JSTATE signal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jstate{}; 
        namespace JstateValC{
        }
    }
    namespace Usb0Addr{    ///<Address register
        using Addr = Register::Address<0x40072098,0xffffff80,0,unsigned char>;
        ///USB Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
    }
    namespace Usb0Bdtpage1{    ///<BDT Page register 1
        using Addr = Register::Address<0x4007209c,0xffffff01,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> bdtba{}; 
        namespace BdtbaValC{
        }
    }
    namespace Usb0Frmnuml{    ///<Frame Number register Low
        using Addr = Register::Address<0x400720a0,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frm{}; 
        namespace FrmValC{
        }
    }
    namespace Usb0Frmnumh{    ///<Frame Number register High
        using Addr = Register::Address<0x400720a4,0xfffffff8,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frm{}; 
        namespace FrmValC{
        }
    }
    namespace Usb0Bdtpage2{    ///<BDT Page Register 2
        using Addr = Register::Address<0x400720b0,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
        namespace BdtbaValC{
        }
    }
    namespace Usb0Bdtpage3{    ///<BDT Page Register 3
        using Addr = Register::Address<0x400720b4,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
        namespace BdtbaValC{
        }
    }
    namespace Usb0Endpt0{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c0,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt1{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c4,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt2{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c8,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt3{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720cc,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt4{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d0,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt5{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d4,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt6{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d8,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt7{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720dc,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt8{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e0,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt9{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e4,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt10{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e8,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt11{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720ec,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt12{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f0,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt13{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f4,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt14{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f8,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Endpt15{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720fc,0xffffffe0,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        namespace EphshkValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        namespace EpstallValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        namespace EptxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        namespace EprxenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        namespace EpctldisValC{
        }
    }
    namespace Usb0Usbctrl{    ///<USB Control register
        using Addr = Register::Address<0x40072100,0xffffff3f,0,unsigned char>;
        ///no description available
        enum class PdeVal {
            v0=0x00000000,     ///<Weak pulldowns are disabled on D+ and D-.
            v1=0x00000001,     ///<Weak pulldowns are enabled on D+ and D-.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,PdeVal> pde{}; 
        namespace PdeValC{
            constexpr Register::FieldValue<decltype(pde),PdeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pde),PdeVal::v1> v1{};
        }
        ///no description available
        enum class SuspVal {
            v0=0x00000000,     ///<USB transceiver is not in suspend state.
            v1=0x00000001,     ///<USB transceiver is in suspend state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SuspVal> susp{}; 
        namespace SuspValC{
            constexpr Register::FieldValue<decltype(susp),SuspVal::v0> v0{};
            constexpr Register::FieldValue<decltype(susp),SuspVal::v1> v1{};
        }
    }
    namespace Usb0Observe{    ///<USB OTG Observe register
        using Addr = Register::Address<0x40072104,0xffffff2f,0,unsigned char>;
        ///no description available
        enum class DmpdVal {
            v0=0x00000000,     ///<D- pulldown disabled.
            v1=0x00000001,     ///<D- pulldown enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DmpdVal> dmpd{}; 
        namespace DmpdValC{
            constexpr Register::FieldValue<decltype(dmpd),DmpdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmpd),DmpdVal::v1> v1{};
        }
        ///no description available
        enum class DppdVal {
            v0=0x00000000,     ///<D+ pulldown disabled.
            v1=0x00000001,     ///<D+ pulldown enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DppdVal> dppd{}; 
        namespace DppdValC{
            constexpr Register::FieldValue<decltype(dppd),DppdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppd),DppdVal::v1> v1{};
        }
        ///no description available
        enum class DppuVal {
            v0=0x00000000,     ///<D+ pullup disabled.
            v1=0x00000001,     ///<D+ pullup enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DppuVal> dppu{}; 
        namespace DppuValC{
            constexpr Register::FieldValue<decltype(dppu),DppuVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppu),DppuVal::v1> v1{};
        }
    }
    namespace Usb0Control{    ///<USB OTG Control register
        using Addr = Register::Address<0x40072108,0xffffffef,0,unsigned char>;
        ///no description available
        enum class DppullupnonotgVal {
            v0=0x00000000,     ///<DP Pullup in non-OTG device mode is not enabled.
            v1=0x00000001,     ///<DP Pullup in non-OTG device mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DppullupnonotgVal> dppullupnonotg{}; 
        namespace DppullupnonotgValC{
            constexpr Register::FieldValue<decltype(dppullupnonotg),DppullupnonotgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dppullupnonotg),DppullupnonotgVal::v1> v1{};
        }
    }
    namespace Usb0Usbtrc0{    ///<USB Transceiver Control register 0
        using Addr = Register::Address<0x4007210c,0xffffff58,0,unsigned char>;
        ///USB Asynchronous Interrupt
        enum class UsbresumeintVal {
            v0=0x00000000,     ///<No interrupt was generated.
            v1=0x00000001,     ///<Interrupt was generated because of the USB asynchronous interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbresumeintVal> usbResumeInt{}; 
        namespace UsbresumeintValC{
            constexpr Register::FieldValue<decltype(usbResumeInt),UsbresumeintVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbResumeInt),UsbresumeintVal::v1> v1{};
        }
        ///Synchronous USB Interrupt Detect
        enum class SyncdetVal {
            v0=0x00000000,     ///<Synchronous interrupt has not been detected.
            v1=0x00000001,     ///<Synchronous interrupt has been detected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,SyncdetVal> syncDet{}; 
        namespace SyncdetValC{
            constexpr Register::FieldValue<decltype(syncDet),SyncdetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(syncDet),SyncdetVal::v1> v1{};
        }
        ///Combined USB Clock Recovery interrupt status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbClkRecoveryInt{}; 
        namespace UsbclkrecoveryintValC{
        }
        ///Asynchronous Resume Interrupt Enable
        enum class UsbresmenVal {
            v0=0x00000000,     ///<USB asynchronous wakeup from suspend mode disabled.
            v1=0x00000001,     ///<USB asynchronous wakeup from suspend mode enabled. The asynchronous resume interrupt differs from the synchronous resume interrupt in that it asynchronously detects K-state using the unfiltered state of the D+ and D- pins. This interrupt should only be enabled when the Transceiver is suspended.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,UsbresmenVal> usbresmen{}; 
        namespace UsbresmenValC{
            constexpr Register::FieldValue<decltype(usbresmen),UsbresmenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbresmen),UsbresmenVal::v1> v1{};
        }
        ///USB Reset
        enum class UsbresetVal {
            v0=0x00000000,     ///<Normal USB module operation.
            v1=0x00000001,     ///<Returns the USB module to its reset state.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,UsbresetVal> usbreset{}; 
        namespace UsbresetValC{
            constexpr Register::FieldValue<decltype(usbreset),UsbresetVal::v0> v0{};
            constexpr Register::FieldValue<decltype(usbreset),UsbresetVal::v1> v1{};
        }
    }
    namespace Usb0Usbfrmadjust{    ///<Frame Adjust Register
        using Addr = Register::Address<0x40072114,0xffffff00,0,unsigned char>;
        ///Frame Adjustment
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adj{}; 
        namespace AdjValC{
        }
    }
    namespace Usb0KeepAliveCtrl{    ///<Keep Alive mode control
        using Addr = Register::Address<0x40072124,0xffffff60,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> keepAliveEn{}; 
        namespace KeepaliveenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ownOverrdEn{}; 
        namespace OwnoverrdenValC{
        }
        ///no description available
        enum class StopackdlyenVal {
            v0=0x00000000,     ///<Enter KEEP_ALIVE mode until the USB core is idle and there is no USB AHB transfer.
            v1=0x00000001,     ///<Enter KEEP_ALIVE mode immediately when there is no USB AHB transfer.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,StopackdlyenVal> stopAckDlyEn{}; 
        namespace StopackdlyenValC{
            constexpr Register::FieldValue<decltype(stopAckDlyEn),StopackdlyenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(stopAckDlyEn),StopackdlyenVal::v1> v1{};
        }
        ///no description available
        enum class AhbdlyenVal {
            v0=0x00000000,     ///<Do not delay the USB AHB transfer if the USB AHB transfer occurs while exiting KEEP_ALIVE mode.
            v1=0x00000001,     ///<Delay the USB AHB transfer until the clock is recovered, if the USB AHB transfer occurs while exiting KEEP_ALIVE mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,AhbdlyenVal> ahbDlyEn{}; 
        namespace AhbdlyenValC{
            constexpr Register::FieldValue<decltype(ahbDlyEn),AhbdlyenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ahbDlyEn),AhbdlyenVal::v1> v1{};
        }
        ///Wakeup Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wakeIntEn{}; 
        namespace WakeintenValC{
        }
        ///Wakeup Interrupt Status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wakeIntSts{}; 
        namespace WakeintstsValC{
        }
    }
    namespace Usb0KeepAliveWkctrl{    ///<Keep Alive mode wakeup control
        using Addr = Register::Address<0x40072128,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> wakeOnThis{}; 
        namespace WakeonthisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> wakeEndpt{}; 
        namespace WakeendptValC{
        }
    }
    namespace Usb0ClkRecoverCtrl{    ///<USB Clock recovery control
        using Addr = Register::Address<0x40072140,0xffffff1f,0,unsigned char>;
        ///Restart from IFR trim value
        enum class RestartifrtrimenVal {
            v0=0x00000000,     ///<Trim fine adjustment always works based on the previous updated trim fine value (default)
            v1=0x00000001,     ///<Trim fine restarts from the IFR trim value whenever bus_reset/bus_resume is detected or module enable is desasserted
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,RestartifrtrimenVal> restartIfrtrimEn{}; 
        namespace RestartifrtrimenValC{
            constexpr Register::FieldValue<decltype(restartIfrtrimEn),RestartifrtrimenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(restartIfrtrimEn),RestartifrtrimenVal::v1> v1{};
        }
        ///Reset/resume to rough phase enable
        enum class ResetresumeroughenVal {
            v0=0x00000000,     ///<Always works in tracking phase after the 1st time rough to track transition (default)
            v1=0x00000001,     ///<Go back to rough stage whenever bus reset or bus resume occurs
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ResetresumeroughenVal> resetResumeRoughEn{}; 
        namespace ResetresumeroughenValC{
            constexpr Register::FieldValue<decltype(resetResumeRoughEn),ResetresumeroughenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(resetResumeRoughEn),ResetresumeroughenVal::v1> v1{};
        }
        ///Crystal-less USB enable
        enum class ClockrecoverenVal {
            v0=0x00000000,     ///<Disable clock recovery block (default)
            v1=0x00000001,     ///<Enable clock recovery block
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,ClockrecoverenVal> clockRecoverEn{}; 
        namespace ClockrecoverenValC{
            constexpr Register::FieldValue<decltype(clockRecoverEn),ClockrecoverenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(clockRecoverEn),ClockrecoverenVal::v1> v1{};
        }
    }
    namespace Usb0ClkRecoverIrcEn{    ///<IRC48M oscillator enable register
        using Addr = Register::Address<0x40072144,0xfffffffd,0,unsigned char>;
        ///IRC48M enable
        enum class IrcenVal {
            v0=0x00000000,     ///<Disable the IRC48M module (default)
            v1=0x00000001,     ///<Enable the IRC48M module
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,IrcenVal> ircEn{}; 
        namespace IrcenValC{
            constexpr Register::FieldValue<decltype(ircEn),IrcenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ircEn),IrcenVal::v1> v1{};
        }
    }
    namespace Usb0ClkRecoverIntEn{    ///<Clock recovery combined interrupt enable
        using Addr = Register::Address<0x40072154,0xffffffef,0,unsigned char>;
        ///no description available
        enum class OvferrorenVal {
            v0=0x00000000,     ///<The interrupt will be masked
            v1=0x00000001,     ///<The interrupt will be enabled (default)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OvferrorenVal> ovfErrorEn{}; 
        namespace OvferrorenValC{
            constexpr Register::FieldValue<decltype(ovfErrorEn),OvferrorenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ovfErrorEn),OvferrorenVal::v1> v1{};
        }
    }
    namespace Usb0ClkRecoverIntStatus{    ///<Clock recovery separated interrupt status
        using Addr = Register::Address<0x4007215c,0xffffffef,0,unsigned char>;
        ///no description available
        enum class OvferrorVal {
            v0=0x00000000,     ///<No interrupt is reported
            v1=0x00000001,     ///<Unmasked interrupt has been generated
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,OvferrorVal> ovfError{}; 
        namespace OvferrorValC{
            constexpr Register::FieldValue<decltype(ovfError),OvferrorVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ovfError),OvferrorVal::v1> v1{};
        }
    }
}
