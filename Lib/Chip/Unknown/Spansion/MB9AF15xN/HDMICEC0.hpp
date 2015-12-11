#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HDMI-CEC ch.0
    namespace Nonetxctrl{    ///<Transmission Control Register
        using Addr = Register::Address<0x40034000,0xffffffc2,0,unsigned char>;
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
    namespace Nonetxdata{    ///<Transmission Data Register
        using Addr = Register::Address<0x40034004,0xffffff00,0,unsigned char>;
        ///Transmission Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
    }
    namespace Nonetxsts{    ///<Transmission Status Register 
        using Addr = Register::Address<0x40034008,0xffffffce,0,unsigned char>;
        ///Bus error detection interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        ///Transmission status interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        ///ACK cycle value bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
    }
    namespace Nonesfree{    ///<Signal Free Time Setting Register
        using Addr = Register::Address<0x4003400c,0xfffffff0,0,unsigned char>;
        ///Signal free time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
    }
    namespace Nonercst{    ///<Reception Interrupt Control Register
        using Addr = Register::Address<0x40034040,0xffffff00,0,unsigned char>;
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
    namespace Nonerccr{    ///<Reception Control Register
        using Addr = Register::Address<0x40034041,0xffffff70,0,unsigned char>;
        ///Threshold selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        ///Address comparison enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        ///Operation mode setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> mod1{}; 
        ///Operation mode setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> mod0{}; 
        ///Operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace Nonercdahw{    ///<"H" Width Setting Register A
        using Addr = Register::Address<0x40034044,0xffffff00,0,unsigned char>;
        ///"H" Width Setting A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
    }
    namespace Nonercshw{    ///<Start Bit "H" Width Setting Register
        using Addr = Register::Address<0x40034045,0xffffff00,0,unsigned char>;
        ///Start Bit "H" Width Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
    }
    namespace Nonercdbhw{    ///<"H" Width Setting Register B
        using Addr = Register::Address<0x40034049,0xffffff00,0,unsigned char>;
        ///"H" Width Setting B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
    }
    namespace Nonercadr2{    ///<Device Address Setting Register 2
        using Addr = Register::Address<0x4003404c,0xffffffe0,0,unsigned char>;
        ///Device Address 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
    }
    namespace Nonercadr1{    ///<Device Address Setting Register 1
        using Addr = Register::Address<0x4003404d,0xffffffe0,0,unsigned char>;
        ///Device Address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
    }
    namespace Nonercdthl{    ///<Data Save Register (High-Low)
        using Addr = Register::Address<0x40034050,0xffffff00,0,unsigned char>;
        ///RCDTHL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthl{}; 
    }
    namespace Nonercdthh{    ///<Data Save Register (High-High)
        using Addr = Register::Address<0x40034051,0xffffff00,0,unsigned char>;
        ///RCDTHH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthh{}; 
    }
    namespace Nonercdtll{    ///<Data Save Register (Low-Low)
        using Addr = Register::Address<0x40034054,0xffffff00,0,unsigned char>;
        ///RCDTLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtll{}; 
    }
    namespace Nonercdtlh{    ///<Data Save Register (Low-High)
        using Addr = Register::Address<0x40034055,0xffffff00,0,unsigned char>;
        ///RCDTLH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtlh{}; 
    }
    namespace Nonercckd{    ///<Clock Division Setting Register
        using Addr = Register::Address<0x40034058,0xffffe000,0,unsigned>;
        ///Operating clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        ///Operating clock division setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
    }
    namespace Nonercrhw{    ///<Repeat Code "H" Width Setting Register
        using Addr = Register::Address<0x4003405c,0xffffff00,0,unsigned char>;
        ///"Repeat code "H" width setting bits"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
    }
    namespace Nonercrc{    ///<Repeat Code Interrupt Control Register
        using Addr = Register::Address<0x4003405d,0xffffffee,0,unsigned char>;
        ///Repeat Code Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        ///Repeat code detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
    }
    namespace Nonercle{    ///<Data Bit Width Violation Control Register
        using Addr = Register::Address<0x40034061,0xffffff04,0,unsigned char>;
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
    namespace Nonerclesw{    ///<Minimum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034064,0xffffff00,0,unsigned char>;
        ///Minimum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
    }
    namespace Nonerclelw{    ///<Maximum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034065,0xffffff00,0,unsigned char>;
        ///Maximum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
    }
}
