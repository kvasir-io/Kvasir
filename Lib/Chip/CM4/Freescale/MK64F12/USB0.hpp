#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Universal Serial Bus, OTG Capable Controller
    namespace Usb0Perid{    ///<Peripheral ID register
        using Addr = Register::Address<0x40072000,0xffffffc0,0,unsigned char>;
        ///Peripheral Identification
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
    }
    namespace Usb0Idcomp{    ///<Peripheral ID Complement register
        using Addr = Register::Address<0x40072004,0xffffffc0,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> nid{}; 
    }
    namespace Usb0Rev{    ///<Peripheral Revision register
        using Addr = Register::Address<0x40072008,0xffffff00,0,unsigned char>;
        ///Revision
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rev{}; 
    }
    namespace Usb0Addinfo{    ///<Peripheral Additional Info register
        using Addr = Register::Address<0x4007200c,0xffffff06,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> iehost{}; 
        ///Assigned Interrupt Request Number
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,3),Register::ReadWriteAccess,unsigned> irqnum{}; 
    }
    namespace Usb0Otgistat{    ///<OTG Interrupt Status register
        using Addr = Register::Address<0x40072010,0xffffff12,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> avbuschg{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bSessChg{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sessvldchg{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lineStateChg{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsec{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idchg{}; 
    }
    namespace Usb0Otgicr{    ///<OTG Interrupt Control register
        using Addr = Register::Address<0x40072014,0xffffff12,0,unsigned char>;
        ///A VBUS Valid Interrupt Enable
        enum class avbusenVal {
            v0=0x00000000,     ///<Disables the AVBUSCHG interrupt.
            v1=0x00000001,     ///<Enables the AVBUSCHG interrupt.
        };
        namespace avbusenValC{
            constexpr MPL::Value<avbusenVal,avbusenVal::v0> v0{};
            constexpr MPL::Value<avbusenVal,avbusenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,avbusenVal> avbusen{}; 
        ///B Session END Interrupt Enable
        enum class bsessenVal {
            v0=0x00000000,     ///<Disables the B_SESS_CHG interrupt.
            v1=0x00000001,     ///<Enables the B_SESS_CHG interrupt.
        };
        namespace bsessenValC{
            constexpr MPL::Value<bsessenVal,bsessenVal::v0> v0{};
            constexpr MPL::Value<bsessenVal,bsessenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bsessenVal> bsessen{}; 
        ///Session Valid Interrupt Enable
        enum class sessvldenVal {
            v0=0x00000000,     ///<Disables the SESSVLDCHG interrupt.
            v1=0x00000001,     ///<Enables the SESSVLDCHG interrupt.
        };
        namespace sessvldenValC{
            constexpr MPL::Value<sessvldenVal,sessvldenVal::v0> v0{};
            constexpr MPL::Value<sessvldenVal,sessvldenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sessvldenVal> sessvlden{}; 
        ///Line State Change Interrupt Enable
        enum class linestateenVal {
            v0=0x00000000,     ///<Disables the LINE_STAT_CHG interrupt.
            v1=0x00000001,     ///<Enables the LINE_STAT_CHG interrupt.
        };
        namespace linestateenValC{
            constexpr MPL::Value<linestateenVal,linestateenVal::v0> v0{};
            constexpr MPL::Value<linestateenVal,linestateenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,linestateenVal> linestateen{}; 
        ///One Millisecond Interrupt Enable
        enum class onemsecenVal {
            v0=0x00000000,     ///<Diables the 1ms timer interrupt.
            v1=0x00000001,     ///<Enables the 1ms timer interrupt.
        };
        namespace onemsecenValC{
            constexpr MPL::Value<onemsecenVal,onemsecenVal::v0> v0{};
            constexpr MPL::Value<onemsecenVal,onemsecenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,onemsecenVal> onemsecen{}; 
        ///ID Interrupt Enable
        enum class idenVal {
            v0=0x00000000,     ///<The ID interrupt is disabled
            v1=0x00000001,     ///<The ID interrupt is enabled
        };
        namespace idenValC{
            constexpr MPL::Value<idenVal,idenVal::v0> v0{};
            constexpr MPL::Value<idenVal,idenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,idenVal> iden{}; 
    }
    namespace Usb0Otgstat{    ///<OTG Status register
        using Addr = Register::Address<0x40072018,0xffffff12,0,unsigned char>;
        ///A VBUS Valid
        enum class avbusvldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the A VBUS Valid threshold.
            v1=0x00000001,     ///<The VBUS voltage is above the A VBUS Valid threshold.
        };
        namespace avbusvldValC{
            constexpr MPL::Value<avbusvldVal,avbusvldVal::v0> v0{};
            constexpr MPL::Value<avbusvldVal,avbusvldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,avbusvldVal> avbusvld{}; 
        ///B Session End
        enum class bsessendVal {
            v0=0x00000000,     ///<The VBUS voltage is above the B session end threshold.
            v1=0x00000001,     ///<The VBUS voltage is below the B session end threshold.
        };
        namespace bsessendValC{
            constexpr MPL::Value<bsessendVal,bsessendVal::v0> v0{};
            constexpr MPL::Value<bsessendVal,bsessendVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,bsessendVal> bsessend{}; 
        ///Session Valid
        enum class sessVldVal {
            v0=0x00000000,     ///<The VBUS voltage is below the B session valid threshold
            v1=0x00000001,     ///<The VBUS voltage is above the B session valid threshold.
        };
        namespace sessVldValC{
            constexpr MPL::Value<sessVldVal,sessVldVal::v0> v0{};
            constexpr MPL::Value<sessVldVal,sessVldVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,sessVldVal> sessVld{}; 
        ///no description available
        enum class linestatestableVal {
            v0=0x00000000,     ///<The LINE_STAT_CHG bit is not yet stable.
            v1=0x00000001,     ///<The LINE_STAT_CHG bit has been debounced and is stable.
        };
        namespace linestatestableValC{
            constexpr MPL::Value<linestatestableVal,linestatestableVal::v0> v0{};
            constexpr MPL::Value<linestatestableVal,linestatestableVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,linestatestableVal> linestatestable{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> onemsecen{}; 
        ///no description available
        enum class idVal {
            v0=0x00000000,     ///<Indicates a Type A cable is plugged into the USB connector.
            v1=0x00000001,     ///<Indicates no cable is attached or a Type B cable is plugged into the USB connector.
        };
        namespace idValC{
            constexpr MPL::Value<idVal,idVal::v0> v0{};
            constexpr MPL::Value<idVal,idVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,idVal> id{}; 
    }
    namespace Usb0Otgctl{    ///<OTG Control register
        using Addr = Register::Address<0x4007201c,0xffffff4b,0,unsigned char>;
        ///On-The-Go pullup/pulldown resistor enable
        enum class otgenVal {
            v0=0x00000000,     ///<If USB_EN is 1 and HOST_MODE is 0 in the Control Register (CTL), then the D+ Data Line pull-up resistors are enabled. If HOST_MODE is 1 the D+ and D- Data Line pull-down resistors are engaged.
            v1=0x00000001,     ///<The pull-up and pull-down controls in this register are used.
        };
        namespace otgenValC{
            constexpr MPL::Value<otgenVal,otgenVal::v0> v0{};
            constexpr MPL::Value<otgenVal,otgenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,otgenVal> otgen{}; 
        ///D- Data Line pull-down resistor enable
        enum class dmlowVal {
            v0=0x00000000,     ///<D- pulldown resistor is not enabled.
            v1=0x00000001,     ///<D- pulldown resistor is enabled.
        };
        namespace dmlowValC{
            constexpr MPL::Value<dmlowVal,dmlowVal::v0> v0{};
            constexpr MPL::Value<dmlowVal,dmlowVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dmlowVal> dmlow{}; 
        ///D+ Data Line pull-down resistor enable
        enum class dplowVal {
            v0=0x00000000,     ///<D+ pulldown resistor is not enabled.
            v1=0x00000001,     ///<D+ pulldown resistor is enabled.
        };
        namespace dplowValC{
            constexpr MPL::Value<dplowVal,dplowVal::v0> v0{};
            constexpr MPL::Value<dplowVal,dplowVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dplowVal> dplow{}; 
        ///D+ Data Line pullup resistor enable
        enum class dphighVal {
            v0=0x00000000,     ///<D+ pullup resistor is not enabled
            v1=0x00000001,     ///<D+ pullup resistor is enabled
        };
        namespace dphighValC{
            constexpr MPL::Value<dphighVal,dphighVal::v0> v0{};
            constexpr MPL::Value<dphighVal,dphighVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dphighVal> dphigh{}; 
    }
    namespace Usb0Istat{    ///<Interrupt Status register
        using Addr = Register::Address<0x40072080,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> usbrst{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> error{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> softok{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tokdne{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sleep{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> resume{}; 
        ///Attach Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> attach{}; 
        ///Stall Interrupt
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stall{}; 
    }
    namespace Usb0Inten{    ///<Interrupt Enable register
        using Addr = Register::Address<0x40072084,0xffffff00,0,unsigned char>;
        ///USBRST Interrupt Enable
        enum class usbrstenVal {
            v0=0x00000000,     ///<Disables the USBRST interrupt.
            v1=0x00000001,     ///<Enables the USBRST interrupt.
        };
        namespace usbrstenValC{
            constexpr MPL::Value<usbrstenVal,usbrstenVal::v0> v0{};
            constexpr MPL::Value<usbrstenVal,usbrstenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usbrstenVal> usbrsten{}; 
        ///ERROR Interrupt Enable
        enum class errorenVal {
            v0=0x00000000,     ///<Disables the ERROR interrupt.
            v1=0x00000001,     ///<Enables the ERROR interrupt.
        };
        namespace errorenValC{
            constexpr MPL::Value<errorenVal,errorenVal::v0> v0{};
            constexpr MPL::Value<errorenVal,errorenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,errorenVal> erroren{}; 
        ///SOFTOK Interrupt Enable
        enum class softokenVal {
            v0=0x00000000,     ///<Disbles the SOFTOK interrupt.
            v1=0x00000001,     ///<Enables the SOFTOK interrupt.
        };
        namespace softokenValC{
            constexpr MPL::Value<softokenVal,softokenVal::v0> v0{};
            constexpr MPL::Value<softokenVal,softokenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,softokenVal> softoken{}; 
        ///TOKDNE Interrupt Enable
        enum class tokdneenVal {
            v0=0x00000000,     ///<Disables the TOKDNE interrupt.
            v1=0x00000001,     ///<Enables the TOKDNE interrupt.
        };
        namespace tokdneenValC{
            constexpr MPL::Value<tokdneenVal,tokdneenVal::v0> v0{};
            constexpr MPL::Value<tokdneenVal,tokdneenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,tokdneenVal> tokdneen{}; 
        ///SLEEP Interrupt Enable
        enum class sleepenVal {
            v0=0x00000000,     ///<Disables the SLEEP interrupt.
            v1=0x00000001,     ///<Enables the SLEEP interrupt.
        };
        namespace sleepenValC{
            constexpr MPL::Value<sleepenVal,sleepenVal::v0> v0{};
            constexpr MPL::Value<sleepenVal,sleepenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,sleepenVal> sleepen{}; 
        ///RESUME Interrupt Enable
        enum class resumeenVal {
            v0=0x00000000,     ///<Disables the RESUME interrupt.
            v1=0x00000001,     ///<Enables the RESUME interrupt.
        };
        namespace resumeenValC{
            constexpr MPL::Value<resumeenVal,resumeenVal::v0> v0{};
            constexpr MPL::Value<resumeenVal,resumeenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,resumeenVal> resumeen{}; 
        ///ATTACH Interrupt Enable
        enum class attachenVal {
            v0=0x00000000,     ///<Disables the ATTACH interrupt.
            v1=0x00000001,     ///<Enables the ATTACH interrupt.
        };
        namespace attachenValC{
            constexpr MPL::Value<attachenVal,attachenVal::v0> v0{};
            constexpr MPL::Value<attachenVal,attachenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,attachenVal> attachen{}; 
        ///STALL Interrupt Enable
        enum class stallenVal {
            v0=0x00000000,     ///<Diasbles the STALL interrupt.
            v1=0x00000001,     ///<Enables the STALL interrupt.
        };
        namespace stallenValC{
            constexpr MPL::Value<stallenVal,stallenVal::v0> v0{};
            constexpr MPL::Value<stallenVal,stallenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,stallenVal> stallen{}; 
    }
    namespace Usb0Errstat{    ///<Error Interrupt Status register
        using Addr = Register::Address<0x40072088,0xffffff40,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> piderr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc5eof{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> crc16{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dfn8{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> btoerr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dmaerr{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> btserr{}; 
    }
    namespace Usb0Erren{    ///<Error Interrupt Enable register
        using Addr = Register::Address<0x4007208c,0xffffff40,0,unsigned char>;
        ///PIDERR Interrupt Enable
        enum class piderrenVal {
            v0=0x00000000,     ///<Disables the PIDERR interrupt.
            v1=0x00000001,     ///<Enters the PIDERR interrupt.
        };
        namespace piderrenValC{
            constexpr MPL::Value<piderrenVal,piderrenVal::v0> v0{};
            constexpr MPL::Value<piderrenVal,piderrenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,piderrenVal> piderren{}; 
        ///CRC5/EOF Interrupt Enable
        enum class crc5eofenVal {
            v0=0x00000000,     ///<Disables the CRC5/EOF interrupt.
            v1=0x00000001,     ///<Enables the CRC5/EOF interrupt.
        };
        namespace crc5eofenValC{
            constexpr MPL::Value<crc5eofenVal,crc5eofenVal::v0> v0{};
            constexpr MPL::Value<crc5eofenVal,crc5eofenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,crc5eofenVal> crc5eofen{}; 
        ///CRC16 Interrupt Enable
        enum class crc16enVal {
            v0=0x00000000,     ///<Disables the CRC16 interrupt.
            v1=0x00000001,     ///<Enables the CRC16 interrupt.
        };
        namespace crc16enValC{
            constexpr MPL::Value<crc16enVal,crc16enVal::v0> v0{};
            constexpr MPL::Value<crc16enVal,crc16enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,crc16enVal> crc16en{}; 
        ///DFN8 Interrupt Enable
        enum class dfn8enVal {
            v0=0x00000000,     ///<Disables the DFN8 interrupt.
            v1=0x00000001,     ///<Enables the DFN8 interrupt.
        };
        namespace dfn8enValC{
            constexpr MPL::Value<dfn8enVal,dfn8enVal::v0> v0{};
            constexpr MPL::Value<dfn8enVal,dfn8enVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,dfn8enVal> dfn8en{}; 
        ///BTOERR Interrupt Enable
        enum class btoerrenVal {
            v0=0x00000000,     ///<Disables the BTOERR interrupt.
            v1=0x00000001,     ///<Enables the BTOERR interrupt.
        };
        namespace btoerrenValC{
            constexpr MPL::Value<btoerrenVal,btoerrenVal::v0> v0{};
            constexpr MPL::Value<btoerrenVal,btoerrenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,btoerrenVal> btoerren{}; 
        ///DMAERR Interrupt Enable
        enum class dmaerrenVal {
            v0=0x00000000,     ///<Disables the DMAERR interrupt.
            v1=0x00000001,     ///<Enables the DMAERR interrupt.
        };
        namespace dmaerrenValC{
            constexpr MPL::Value<dmaerrenVal,dmaerrenVal::v0> v0{};
            constexpr MPL::Value<dmaerrenVal,dmaerrenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,dmaerrenVal> dmaerren{}; 
        ///BTSERR Interrupt Enable
        enum class btserrenVal {
            v0=0x00000000,     ///<Disables the BTSERR interrupt.
            v1=0x00000001,     ///<Enables the BTSERR interrupt.
        };
        namespace btserrenValC{
            constexpr MPL::Value<btserrenVal,btserrenVal::v0> v0{};
            constexpr MPL::Value<btserrenVal,btserrenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,btserrenVal> btserren{}; 
    }
    namespace Usb0Stat{    ///<Status register
        using Addr = Register::Address<0x40072090,0xffffff03,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odd{}; 
        ///Transmit Indicator
        enum class txVal {
            v0=0x00000000,     ///<The most recent transaction was a receive operation.
            v1=0x00000001,     ///<The most recent transaction was a transmit operation.
        };
        namespace txValC{
            constexpr MPL::Value<txVal,txVal::v0> v0{};
            constexpr MPL::Value<txVal,txVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,txVal> tx{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> endp{}; 
    }
    namespace Usb0Ctl{    ///<Control register
        using Addr = Register::Address<0x40072094,0xffffff00,0,unsigned char>;
        ///USB Enable
        enum class usbensofenVal {
            v0=0x00000000,     ///<Disables the USB Module.
            v1=0x00000001,     ///<Enables the USB Module.
        };
        namespace usbensofenValC{
            constexpr MPL::Value<usbensofenVal,usbensofenVal::v0> v0{};
            constexpr MPL::Value<usbensofenVal,usbensofenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usbensofenVal> usbensofen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> oddrst{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> resume{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> hostmodeen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> reset{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txsuspendtokenbusy{}; 
        ///Live USB Single Ended Zero signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> se0{}; 
        ///Live USB differential receiver JSTATE signal
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> jstate{}; 
    }
    namespace Usb0Addr{    ///<Address register
        using Addr = Register::Address<0x40072098,0xffffff00,0,unsigned char>;
        ///USB Address
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> addr{}; 
        ///Low Speed Enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lsen{}; 
    }
    namespace Usb0Bdtpage1{    ///<BDT Page register 1
        using Addr = Register::Address<0x4007209c,0xffffff01,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,1),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Frmnuml{    ///<Frame Number register Low
        using Addr = Register::Address<0x400720a0,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> frm{}; 
    }
    namespace Usb0Frmnumh{    ///<Frame Number register High
        using Addr = Register::Address<0x400720a4,0xfffffff8,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> frm{}; 
    }
    namespace Usb0Token{    ///<Token register
        using Addr = Register::Address<0x400720a8,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> tokenendpt{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> tokenpid{}; 
    }
    namespace Usb0Softhld{    ///<SOF Threshold register
        using Addr = Register::Address<0x400720ac,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cnt{}; 
    }
    namespace Usb0Bdtpage2{    ///<BDT Page Register 2
        using Addr = Register::Address<0x400720b0,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Bdtpage3{    ///<BDT Page Register 3
        using Addr = Register::Address<0x400720b4,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bdtba{}; 
    }
    namespace Usb0Endpt0{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c0,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt1{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c4,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt2{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720c8,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt3{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720cc,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt4{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d0,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt5{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d4,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt6{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720d8,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt7{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720dc,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt8{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e0,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt9{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e4,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt10{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720e8,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt11{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720ec,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt12{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f0,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt13{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f4,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt14{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720f8,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Endpt15{    ///<Endpoint Control register
        using Addr = Register::Address<0x400720fc,0xffffff20,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ephshk{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> epstall{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eptxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eprxen{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> epctldis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> retrydis{}; 
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hostwohub{}; 
    }
    namespace Usb0Usbctrl{    ///<USB Control register
        using Addr = Register::Address<0x40072100,0xffffff3f,0,unsigned char>;
        ///no description available
        enum class pdeVal {
            v0=0x00000000,     ///<Weak pulldowns are disabled on D+ and D-.
            v1=0x00000001,     ///<Weak pulldowns are enabled on D+ and D-.
        };
        namespace pdeValC{
            constexpr MPL::Value<pdeVal,pdeVal::v0> v0{};
            constexpr MPL::Value<pdeVal,pdeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,pdeVal> pde{}; 
        ///no description available
        enum class suspVal {
            v0=0x00000000,     ///<USB transceiver is not in suspend state.
            v1=0x00000001,     ///<USB transceiver is in suspend state.
        };
        namespace suspValC{
            constexpr MPL::Value<suspVal,suspVal::v0> v0{};
            constexpr MPL::Value<suspVal,suspVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,suspVal> susp{}; 
    }
    namespace Usb0Observe{    ///<USB OTG Observe register
        using Addr = Register::Address<0x40072104,0xffffff2f,0,unsigned char>;
        ///no description available
        enum class dmpdVal {
            v0=0x00000000,     ///<D- pulldown disabled.
            v1=0x00000001,     ///<D- pulldown enabled.
        };
        namespace dmpdValC{
            constexpr MPL::Value<dmpdVal,dmpdVal::v0> v0{};
            constexpr MPL::Value<dmpdVal,dmpdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dmpdVal> dmpd{}; 
        ///no description available
        enum class dppdVal {
            v0=0x00000000,     ///<D+ pulldown disabled.
            v1=0x00000001,     ///<D+ pulldown enabled.
        };
        namespace dppdValC{
            constexpr MPL::Value<dppdVal,dppdVal::v0> v0{};
            constexpr MPL::Value<dppdVal,dppdVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,dppdVal> dppd{}; 
        ///no description available
        enum class dppuVal {
            v0=0x00000000,     ///<D+ pullup disabled.
            v1=0x00000001,     ///<D+ pullup enabled.
        };
        namespace dppuValC{
            constexpr MPL::Value<dppuVal,dppuVal::v0> v0{};
            constexpr MPL::Value<dppuVal,dppuVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dppuVal> dppu{}; 
    }
    namespace Usb0Control{    ///<USB OTG Control register
        using Addr = Register::Address<0x40072108,0xffffffef,0,unsigned char>;
        ///no description available
        enum class dppullupnonotgVal {
            v0=0x00000000,     ///<DP Pullup in non-OTG device mode is not enabled.
            v1=0x00000001,     ///<DP Pullup in non-OTG device mode is enabled.
        };
        namespace dppullupnonotgValC{
            constexpr MPL::Value<dppullupnonotgVal,dppullupnonotgVal::v0> v0{};
            constexpr MPL::Value<dppullupnonotgVal,dppullupnonotgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,dppullupnonotgVal> dppullupnonotg{}; 
    }
    namespace Usb0Usbtrc0{    ///<USB Transceiver Control register 0
        using Addr = Register::Address<0x4007210c,0xffffff58,0,unsigned char>;
        ///USB Asynchronous Interrupt
        enum class usbResumeIntVal {
            v0=0x00000000,     ///<No interrupt was generated.
            v1=0x00000001,     ///<Interrupt was generated because of the USB asynchronous interrupt.
        };
        namespace usbResumeIntValC{
            constexpr MPL::Value<usbResumeIntVal,usbResumeIntVal::v0> v0{};
            constexpr MPL::Value<usbResumeIntVal,usbResumeIntVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,usbResumeIntVal> usbResumeInt{}; 
        ///Synchronous USB Interrupt Detect
        enum class syncDetVal {
            v0=0x00000000,     ///<Synchronous interrupt has not been detected.
            v1=0x00000001,     ///<Synchronous interrupt has been detected.
        };
        namespace syncDetValC{
            constexpr MPL::Value<syncDetVal,syncDetVal::v0> v0{};
            constexpr MPL::Value<syncDetVal,syncDetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,syncDetVal> syncDet{}; 
        ///Combined USB Clock Recovery interrupt status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> usbClkRecoveryInt{}; 
        ///Asynchronous Resume Interrupt Enable
        enum class usbresmenVal {
            v0=0x00000000,     ///<USB asynchronous wakeup from suspend mode disabled.
            v1=0x00000001,     ///<USB asynchronous wakeup from suspend mode enabled. The asynchronous resume interrupt differs from the synchronous resume interrupt in that it asynchronously detects K-state using the unfiltered state of the D+ and D- pins. This interrupt should only be enabled when the Transceiver is suspended.
        };
        namespace usbresmenValC{
            constexpr MPL::Value<usbresmenVal,usbresmenVal::v0> v0{};
            constexpr MPL::Value<usbresmenVal,usbresmenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,usbresmenVal> usbresmen{}; 
        ///USB Reset
        enum class usbresetVal {
            v0=0x00000000,     ///<Normal USB module operation.
            v1=0x00000001,     ///<Returns the USB module to its reset state.
        };
        namespace usbresetValC{
            constexpr MPL::Value<usbresetVal,usbresetVal::v0> v0{};
            constexpr MPL::Value<usbresetVal,usbresetVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,usbresetVal> usbreset{}; 
    }
    namespace Usb0Usbfrmadjust{    ///<Frame Adjust Register
        using Addr = Register::Address<0x40072114,0xffffff00,0,unsigned char>;
        ///Frame Adjustment
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adj{}; 
    }
    namespace Usb0ClkRecoverCtrl{    ///<USB Clock recovery control
        using Addr = Register::Address<0x40072140,0xffffff1f,0,unsigned char>;
        ///Restart from IFR trim value
        enum class restartIfrtrimEnVal {
            v0=0x00000000,     ///<Trim fine adjustment always works based on the previous updated trim fine value (default)
            v1=0x00000001,     ///<Trim fine restarts from the IFR trim value whenever bus_reset/bus_resume is detected or module enable is desasserted
        };
        namespace restartIfrtrimEnValC{
            constexpr MPL::Value<restartIfrtrimEnVal,restartIfrtrimEnVal::v0> v0{};
            constexpr MPL::Value<restartIfrtrimEnVal,restartIfrtrimEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,restartIfrtrimEnVal> restartIfrtrimEn{}; 
        ///Reset/resume to rough phase enable
        enum class resetResumeRoughEnVal {
            v0=0x00000000,     ///<Always works in tracking phase after the 1st time rough to track transition (default)
            v1=0x00000001,     ///<Go back to rough stage whenever bus reset or bus resume occurs
        };
        namespace resetResumeRoughEnValC{
            constexpr MPL::Value<resetResumeRoughEnVal,resetResumeRoughEnVal::v0> v0{};
            constexpr MPL::Value<resetResumeRoughEnVal,resetResumeRoughEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,resetResumeRoughEnVal> resetResumeRoughEn{}; 
        ///Crystal-less USB enable
        enum class clockRecoverEnVal {
            v0=0x00000000,     ///<Disable clock recovery block (default)
            v1=0x00000001,     ///<Enable clock recovery block
        };
        namespace clockRecoverEnValC{
            constexpr MPL::Value<clockRecoverEnVal,clockRecoverEnVal::v0> v0{};
            constexpr MPL::Value<clockRecoverEnVal,clockRecoverEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,clockRecoverEnVal> clockRecoverEn{}; 
    }
    namespace Usb0ClkRecoverIrcEn{    ///<IRC48M oscillator enable register
        using Addr = Register::Address<0x40072144,0xfffffffc,0,unsigned char>;
        ///IRC48M regulator enable
        enum class regEnVal {
            v0=0x00000000,     ///<IRC48M local regulator is disabled
            v1=0x00000001,     ///<IRC48M local regulator is enabled (default)
        };
        namespace regEnValC{
            constexpr MPL::Value<regEnVal,regEnVal::v0> v0{};
            constexpr MPL::Value<regEnVal,regEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,regEnVal> regEn{}; 
        ///IRC48M enable
        enum class ircEnVal {
            v0=0x00000000,     ///<Disable the IRC48M module (default)
            v1=0x00000001,     ///<Enable the IRC48M module
        };
        namespace ircEnValC{
            constexpr MPL::Value<ircEnVal,ircEnVal::v0> v0{};
            constexpr MPL::Value<ircEnVal,ircEnVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,ircEnVal> ircEn{}; 
    }
    namespace Usb0ClkRecoverIntStatus{    ///<Clock recovery separated interrupt status
        using Addr = Register::Address<0x4007215c,0xffffffef,0,unsigned char>;
        ///no description available
        enum class ovfErrorVal {
            v0=0x00000000,     ///<No interrupt is reported
            v1=0x00000001,     ///<Unmasked interrupt has been generated
        };
        namespace ovfErrorValC{
            constexpr MPL::Value<ovfErrorVal,ovfErrorVal::v0> v0{};
            constexpr MPL::Value<ovfErrorVal,ovfErrorVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,ovfErrorVal> ovfError{}; 
    }
}
