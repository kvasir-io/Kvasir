#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//HDMI-CEC ch.0
    namespace Hdmicec1Txctrl{    ///<Transmission Control Register
        using Addr = Register::Address<0x40034100,0xffffffc2,0x00000000,unsigned char>;
        ///Bus error detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibren{}; 
        ///transmission status interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itsten{}; 
        ///EOM setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eom{}; 
        ///START setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        ///Transmission operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
    }
    namespace Hdmicec1Txdata{    ///<Transmission Data Register
        using Addr = Register::Address<0x40034104,0xffffff00,0x00000000,unsigned char>;
        ///Transmission Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Hdmicec1Txsts{    ///<Transmission Status Register 
        using Addr = Register::Address<0x40034108,0xffffffce,0x00000000,unsigned char>;
        ///Bus error detection interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        ///Transmission status interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        ///ACK cycle value bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
    }
    namespace Hdmicec1Sfree{    ///<Signal Free Time Setting Register
        using Addr = Register::Address<0x4003410c,0xfffffff0,0x00000000,unsigned char>;
        ///Signal free time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
    }
    namespace Hdmicec1Rcst{    ///<Reception Interrupt Control Register
        using Addr = Register::Address<0x40034140,0xffffff00,0x00000000,unsigned char>;
        ///Start bit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stie{}; 
        /// ACK interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ackie{}; 
        ///Counter overflow interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovfie{}; 
        ///Counter overflow detection condition setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovfsel{}; 
        ///Start bit detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> st{}; 
        ///ACK: ACK detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ack{}; 
        ///EOM detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eom{}; 
        ///Counter overflow detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
    }
    namespace Hdmicec1Rccr{    ///<Reception Control Register
        using Addr = Register::Address<0x40034141,0xffffff70,0x00000000,unsigned char>;
        ///Threshold selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        ///Address comparison enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        ///Operation mode setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> mod{}; 
        ///Operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Hdmicec1Rcdahw{    ///<"H" Width Setting Register A
        using Addr = Register::Address<0x40034144,0xffffff00,0x00000000,unsigned char>;
        ///"H" Width Setting A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
    }
    namespace Hdmicec1Rcshw{    ///<Start Bit "H" Width Setting Register
        using Addr = Register::Address<0x40034145,0xffffff00,0x00000000,unsigned char>;
        ///Start Bit "H" Width Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
    }
    namespace Hdmicec1Rcdbhw{    ///<"H" Width Setting Register B
        using Addr = Register::Address<0x40034149,0xffffff00,0x00000000,unsigned char>;
        ///"H" Width Setting B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
    }
    namespace Hdmicec1Rcadr2{    ///<Device Address Setting Register 2
        using Addr = Register::Address<0x4003414c,0xffffffe0,0x00000000,unsigned char>;
        ///Device Address 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
    }
    namespace Hdmicec1Rcadr1{    ///<Device Address Setting Register 1
        using Addr = Register::Address<0x4003414d,0xffffffe0,0x00000000,unsigned char>;
        ///Device Address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
    }
    namespace Hdmicec1Rcdthl{    ///<Data Save Register (High-Low)
        using Addr = Register::Address<0x40034150,0xffffff00,0x00000000,unsigned char>;
        ///RCDTHL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdthl{}; 
    }
    namespace Hdmicec1Rcdthh{    ///<Data Save Register (High-High)
        using Addr = Register::Address<0x40034151,0xffffff00,0x00000000,unsigned char>;
        ///RCDTHH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdthh{}; 
    }
    namespace Hdmicec1Rcdtll{    ///<Data Save Register (Low-Low)
        using Addr = Register::Address<0x40034154,0xffffff00,0x00000000,unsigned char>;
        ///RCDTLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdtll{}; 
    }
    namespace Hdmicec1Rcdtlh{    ///<Data Save Register (Low-High)
        using Addr = Register::Address<0x40034155,0xffffff00,0x00000000,unsigned char>;
        ///RCDTLH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdtlh{}; 
    }
    namespace Hdmicec1Rcckd{    ///<Clock Division Setting Register
        using Addr = Register::Address<0x40034158,0xffffe000,0x00000000,unsigned>;
        ///Operating clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        ///Operating clock division setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Hdmicec1Rcrhw{    ///<Repeat Code "H" Width Setting Register
        using Addr = Register::Address<0x4003415c,0xffffff00,0x00000000,unsigned char>;
        ///"Repeat code "H" width setting bits"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
    }
    namespace Hdmicec1Rcrc{    ///<Repeat Code Interrupt Control Register
        using Addr = Register::Address<0x4003415d,0xffffffee,0x00000000,unsigned char>;
        ///Repeat Code Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        ///Repeat code detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Hdmicec1Rcle{    ///<Data Bit Width Violation Control Register
        using Addr = Register::Address<0x40034161,0xffffff04,0x00000000,unsigned char>;
        ///Maximum data bit width violation interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lelie{}; 
        ///Minimum data bit width violation interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lesie{}; 
        ///Maximum data bit width violation detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lele{}; 
        ///Minimum data bit width violation detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lese{}; 
        ///Error pulse output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epe{}; 
        ///Maximum data bit width violation detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lel{}; 
        ///Minimum data bit width violation detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> les{}; 
    }
    namespace Hdmicec1Rclesw{    ///<Minimum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034164,0xffffff00,0x00000000,unsigned char>;
        ///Minimum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
    }
    namespace Hdmicec1Rclelw{    ///<Maximum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034165,0xffffff00,0x00000000,unsigned char>;
        ///Maximum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
    }
}
