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
        using Addr = Register::Address<0x4007200c,0xffffff06,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iehost{}; 
        namespace IehostValC{
        }
        ///Assigned Interrupt Request Number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> irqnum{}; 
        namespace IrqnumValC{
        }
    }
    namespace Usb0Otgistat{    ///<OTG Interrupt Status register
        using Addr = Register::Address<0x40072010,0xffffff12,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> avbuschg{}; 
        namespace AvbuschgValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bSessChg{}; 
        namespace BsesschgValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sessvldchg{}; 
        namespace SessvldchgValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lineStateChg{}; 
        namespace LinestatechgValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsec{}; 
        namespace OnemsecValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idchg{}; 
        namespace IdchgValC{
        }
    }
    namespace Usb0Otgicr{    ///<OTG Interrupt Control Register
        using Addr = Register::Address<0x40072014,0xffffff12,0,unsigned char>;
        ///A VBUS Valid Interrupt Enable
        enum class AvbusenVal {
            v0=0x00000000,     ///<Disables the AVBUSCHG interrupt.
            v1=0x00000001,     ///<Enables the AVBUSCHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AvbusenVal> avbusen{}; 
        namespace AvbusenValC{
            constexpr Register::FieldValue<decltype(avbusen),AvbusenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avbusen),AvbusenVal::v1> v1{};
        }
        ///B Session END Interrupt Enable
        enum class BsessenVal {
            v0=0x00000000,     ///<Disables the B_SESS_CHG interrupt.
            v1=0x00000001,     ///<Enables the B_SESS_CHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BsessenVal> bsessen{}; 
        namespace BsessenValC{
            constexpr Register::FieldValue<decltype(bsessen),BsessenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsessen),BsessenVal::v1> v1{};
        }
        ///Session Valid Interrupt Enable
        enum class SessvldenVal {
            v0=0x00000000,     ///<Disables the SESSVLDCHG interrupt.
            v1=0x00000001,     ///<Enables the SESSVLDCHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SessvldenVal> sessvlden{}; 
        namespace SessvldenValC{
            constexpr Register::FieldValue<decltype(sessvlden),SessvldenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sessvlden),SessvldenVal::v1> v1{};
        }
        ///Line State Change Interrupt Enable
        enum class LinestateenVal {
            v0=0x00000000,     ///<Disables the LINE_STAT_CHG interrupt.
            v1=0x00000001,     ///<Enables the LINE_STAT_CHG interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LinestateenVal> linestateen{}; 
        namespace LinestateenValC{
            constexpr Register::FieldValue<decltype(linestateen),LinestateenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linestateen),LinestateenVal::v1> v1{};
        }
        ///One Millisecond Interrupt Enable
        enum class OnemsecenVal {
            v0=0x00000000,     ///<Diables the 1ms timer interrupt.
            v1=0x00000001,     ///<Enables the 1ms timer interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,OnemsecenVal> onemsecen{}; 
        namespace OnemsecenValC{
            constexpr Register::FieldValue<decltype(onemsecen),OnemsecenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(onemsecen),OnemsecenVal::v1> v1{};
        }
        ///ID Interrupt Enable
        enum class IdenVal {
            v0=0x00000000,     ///<The ID interrupt is disabled
            v1=0x00000001,     ///<The ID interrupt is enabled
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdenVal> iden{}; 
        namespace IdenValC{
            constexpr Register::FieldValue<decltype(iden),IdenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(iden),IdenVal::v1> v1{};
        }
    }
    namespace Usb0Otgstat{    ///<OTG Status register
        using Addr = Register::Address<0x40072018,0xffffff12,0,unsigned char>;
        ///A VBUS Valid
        enum class AvbusvldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the A VBUS Valid threshold.
            v1=0x00000001,     ///<The VBUS voltage is above the A VBUS Valid threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,AvbusvldVal> avbusvld{}; 
        namespace AvbusvldValC{
            constexpr Register::FieldValue<decltype(avbusvld),AvbusvldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(avbusvld),AvbusvldVal::v1> v1{};
        }
        ///B Session End
        enum class BsessendVal {
            v0=0x00000000,     ///<The VBUS voltage is above the B session end threshold.
            v1=0x00000001,     ///<The VBUS voltage is below the B session end threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,BsessendVal> bsessend{}; 
        namespace BsessendValC{
            constexpr Register::FieldValue<decltype(bsessend),BsessendVal::v0> v0{};
            constexpr Register::FieldValue<decltype(bsessend),BsessendVal::v1> v1{};
        }
        ///Session Valid
        enum class SessvldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the B session valid threshold
            v1=0x00000001,     ///<The VBUS voltage is above the B session valid threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,SessvldVal> sessVld{}; 
        namespace SessvldValC{
            constexpr Register::FieldValue<decltype(sessVld),SessvldVal::v0> v0{};
            constexpr Register::FieldValue<decltype(sessVld),SessvldVal::v1> v1{};
        }
        ///no description available
        enum class LinestatestableVal {
            v0=0x00000000,     ///<The LINE_STAT_CHG bit is not yet stable.
            v1=0x00000001,     ///<The LINE_STAT_CHG bit has been debounced and is stable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,LinestatestableVal> linestatestable{}; 
        namespace LinestatestableValC{
            constexpr Register::FieldValue<decltype(linestatestable),LinestatestableVal::v0> v0{};
            constexpr Register::FieldValue<decltype(linestatestable),LinestatestableVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsecen{}; 
        namespace OnemsecenValC{
        }
        ///no description available
        enum class IdVal {
            v0=0x00000000,     ///<Indicates a Type A cable is plugged into the USB connector.
            v1=0x00000001,     ///<Indicates no cable is attached or a Type B cable is plugged into the USB connector.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,IdVal> id{}; 
        namespace IdValC{
            constexpr Register::FieldValue<decltype(id),IdVal::v0> v0{};
            constexpr Register::FieldValue<decltype(id),IdVal::v1> v1{};
        }
    }
    namespace Usb0Otgctl{    ///<OTG Control register
        using Addr = Register::Address<0x4007201c,0xffffff4b,0,unsigned char>;
        ///On-The-Go pullup/pulldown resistor enable
        enum class OtgenVal {
            v0=0x00000000,     ///<If USB_EN is 1 and HOST_MODE is 0 in the Control Register (CTL), then the D+ Data Line pull-up resistors are enabled. If HOST_MODE is 1 the D+ and D- Data Line pull-down resistors are engaged.
            v1=0x00000001,     ///<The pull-up and pull-down controls in this register are used.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,OtgenVal> otgen{}; 
        namespace OtgenValC{
            constexpr Register::FieldValue<decltype(otgen),OtgenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(otgen),OtgenVal::v1> v1{};
        }
        ///D- Data Line pull-down resistor enable
        enum class DmlowVal {
            v0=0x00000000,     ///<D- pulldown resistor is not enabled.
            v1=0x00000001,     ///<D- pulldown resistor is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,DmlowVal> dmlow{}; 
        namespace DmlowValC{
            constexpr Register::FieldValue<decltype(dmlow),DmlowVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmlow),DmlowVal::v1> v1{};
        }
        ///D+ Data Line pull-down resistor enable
        enum class DplowVal {
            v0=0x00000000,     ///<D+ pulldown resistor is not enabled.
            v1=0x00000001,     ///<D+ pulldown resistor is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,DplowVal> dplow{}; 
        namespace DplowValC{
            constexpr Register::FieldValue<decltype(dplow),DplowVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dplow),DplowVal::v1> v1{};
        }
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
        using Addr = Register::Address<0x40072080,0xffffff00,0,unsigned char>;
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
        ///Attach Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> attach{}; 
        namespace AttachValC{
        }
        ///Stall Interrupt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stall{}; 
        namespace StallValC{
        }
    }
    namespace Usb0Inten{    ///<Interrupt Enable register
        using Addr = Register::Address<0x40072084,0xffffff00,0,unsigned char>;
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
        ///ATTACH Interrupt Enable
        enum class AttachenVal {
            v0=0x00000000,     ///<Disables the ATTACH interrupt.
            v1=0x00000001,     ///<Enables the ATTACH interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AttachenVal> attachen{}; 
        namespace AttachenValC{
            constexpr Register::FieldValue<decltype(attachen),AttachenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(attachen),AttachenVal::v1> v1{};
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc5eof{}; 
        namespace Crc5eofValC{
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
        using Addr = Register::Address<0x40072094,0xffffff00,0,unsigned char>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resume{}; 
        namespace ResumeValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hostmodeen{}; 
        namespace HostmodeenValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reset{}; 
        namespace ResetValC{
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
        using Addr = Register::Address<0x40072098,0xffffff00,0,unsigned char>;
        ///USB Address
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> addr{}; 
        namespace AddrValC{
        }
        ///Low Speed Enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsen{}; 
        namespace LsenValC{
        }
    }
    namespace Usb0Bdtpage1{    ///<BDT Page Register 1
        using Addr = Register::Address<0x4007209c,0xffffff01,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> bdtba{}; 
        namespace BdtbaValC{
        }
    }
    namespace Usb0Frmnuml{    ///<Frame Number Register Low
        using Addr = Register::Address<0x400720a0,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frm{}; 
        namespace FrmValC{
        }
    }
    namespace Usb0Frmnumh{    ///<Frame Number Register High
        using Addr = Register::Address<0x400720a4,0xfffffff8,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frm{}; 
        namespace FrmValC{
        }
    }
    namespace Usb0Token{    ///<Token register
        using Addr = Register::Address<0x400720a8,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tokenendpt{}; 
        namespace TokenendptValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tokenpid{}; 
        namespace TokenpidValC{
        }
    }
    namespace Usb0Softhld{    ///<SOF Threshold Register
        using Addr = Register::Address<0x400720ac,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cnt{}; 
        namespace CntValC{
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
        using Addr = Register::Address<0x400720c0,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt1{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c4,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt2{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c8,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt3{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720cc,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt4{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d0,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt5{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d4,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt6{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d8,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt7{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720dc,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt8{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e0,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt9{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e4,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt10{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e8,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt11{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720ec,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt12{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f0,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt13{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f4,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt14{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f8,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
        }
    }
    namespace Usb0Endpt15{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720fc,0xffffff20,0,unsigned char>;
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        namespace RetrydisValC{
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
        namespace HostwohubValC{
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
    namespace Usb0Usbtrc0{    ///<USB Transceiver Control Register 0
        using Addr = Register::Address<0x4007210c,0xffffff5c,0,unsigned char>;
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
        ///Asynchronous Resume Interrupt Enable
        enum class UsbresmenVal {
            v0=0x00000000,     ///<USB asynchronous wakeup from suspend mode disabled.
            v1=0x00000001,     ///<USB asynchronous wakeup from suspend mode enabled. The asynchronous resume interrupt differs from the synchronous resume interrupt in that it asynchronously detects K-state using the unfiltered state of the D+ and D- pins. This interupt should only be enabled when the Transceiver is suspended.
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
}
