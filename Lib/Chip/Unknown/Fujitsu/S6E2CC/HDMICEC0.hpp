#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//HDMI-CEC ch.0
    namespace Hdmicec0Txctrl{    ///<Transmission Control Register
        using Addr = Register::Address<0x40034000,0xffffffc2,0x00000000,unsigned char>;
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
    namespace Hdmicec0Txdata{    ///<Transmission Data Register
        using Addr = Register::Address<0x40034004,0xffffff00,0x00000000,unsigned char>;
        ///Transmission Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Hdmicec0Txsts{    ///<Transmission Status Register 
        using Addr = Register::Address<0x40034008,0xffffffce,0x00000000,unsigned char>;
        ///Bus error detection interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        ///Transmission status interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        ///ACK cycle value bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
    }
    namespace Hdmicec0Sfree{    ///<Signal Free Time Setting Register
        using Addr = Register::Address<0x4003400c,0xfffffff0,0x00000000,unsigned char>;
        ///Signal free time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
    }
    namespace Hdmicec0Rcst{    ///<Reception Interrupt Control Register
        using Addr = Register::Address<0x40034040,0xffffff00,0x00000000,unsigned char>;
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
    namespace Hdmicec0Rccr{    ///<Reception Control Register
        using Addr = Register::Address<0x40034041,0xffffff70,0x00000000,unsigned char>;
        ///Threshold selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        ///Address comparison enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        ///Operation mode setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> mod{}; 
        ///Operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Hdmicec0Rcdahw{    ///<"H" Width Setting Register A
        using Addr = Register::Address<0x40034044,0xffffff00,0x00000000,unsigned char>;
        ///"H" Width Setting A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
    }
    namespace Hdmicec0Rcshw{    ///<Start Bit "H" Width Setting Register
        using Addr = Register::Address<0x40034045,0xffffff00,0x00000000,unsigned char>;
        ///Start Bit "H" Width Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
    }
    namespace Hdmicec0Rcdbhw{    ///<"H" Width Setting Register B
        using Addr = Register::Address<0x40034049,0xffffff00,0x00000000,unsigned char>;
        ///"H" Width Setting B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
    }
    namespace Hdmicec0Rcadr2{    ///<Device Address Setting Register 2
        using Addr = Register::Address<0x4003404c,0xffffffe0,0x00000000,unsigned char>;
        ///Device Address 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
    }
    namespace Hdmicec0Rcadr1{    ///<Device Address Setting Register 1
        using Addr = Register::Address<0x4003404d,0xffffffe0,0x00000000,unsigned char>;
        ///Device Address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
    }
    namespace Hdmicec0Rcdthl{    ///<Data Save Register (High-Low)
        using Addr = Register::Address<0x40034050,0xffffff00,0x00000000,unsigned char>;
        ///RCDTHL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdthl{}; 
    }
    namespace Hdmicec0Rcdthh{    ///<Data Save Register (High-High)
        using Addr = Register::Address<0x40034051,0xffffff00,0x00000000,unsigned char>;
        ///RCDTHH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdthh{}; 
    }
    namespace Hdmicec0Rcdtll{    ///<Data Save Register (Low-Low)
        using Addr = Register::Address<0x40034054,0xffffff00,0x00000000,unsigned char>;
        ///RCDTLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdtll{}; 
    }
    namespace Hdmicec0Rcdtlh{    ///<Data Save Register (Low-High)
        using Addr = Register::Address<0x40034055,0xffffff00,0x00000000,unsigned char>;
        ///RCDTLH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rcdtlh{}; 
    }
    namespace Hdmicec0Rcckd{    ///<Clock Division Setting Register
        using Addr = Register::Address<0x40034058,0xffffe000,0x00000000,unsigned>;
        ///Operating clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        ///Operating clock division setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Hdmicec0Rcrhw{    ///<Repeat Code "H" Width Setting Register
        using Addr = Register::Address<0x4003405c,0xffffff00,0x00000000,unsigned char>;
        ///"Repeat code "H" width setting bits"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
    }
    namespace Hdmicec0Rcrc{    ///<Repeat Code Interrupt Control Register
        using Addr = Register::Address<0x4003405d,0xffffffee,0x00000000,unsigned char>;
        ///Repeat Code Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        ///Repeat code detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Hdmicec0Rcle{    ///<Data Bit Width Violation Control Register
        using Addr = Register::Address<0x40034061,0xffffff04,0x00000000,unsigned char>;
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
    namespace Hdmicec0Rclesw{    ///<Minimum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034064,0xffffff00,0x00000000,unsigned char>;
        ///Minimum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
    }
    namespace Hdmicec0Rclelw{    ///<Maximum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034065,0xffffff00,0x00000000,unsigned char>;
        ///Maximum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
    }
}
