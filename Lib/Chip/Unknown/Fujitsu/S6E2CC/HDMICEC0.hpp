#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//HDMI-CEC ch.0
    namespace Nonetxctrl{    ///<Transmission Control Register
        using Addr = Register::Address<0x40034000,0xffffffc2,0,unsigned char>;
        ///Bus error detection interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibren{}; 
        namespace IbrenValC{
        }
        ///transmission status interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itsten{}; 
        namespace ItstenValC{
        }
        ///EOM setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eom{}; 
        namespace EomValC{
        }
        ///START setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> start{}; 
        namespace StartValC{
        }
        ///Transmission operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txen{}; 
        namespace TxenValC{
        }
    }
    namespace Nonetxdata{    ///<Transmission Data Register
        using Addr = Register::Address<0x40034004,0xffffff00,0,unsigned char>;
        ///Transmission Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> txdata{}; 
        namespace TxdataValC{
        }
    }
    namespace Nonetxsts{    ///<Transmission Status Register 
        using Addr = Register::Address<0x40034008,0xffffffce,0,unsigned char>;
        ///Bus error detection interrupt request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ibr{}; 
        namespace IbrValC{
        }
        ///Transmission status interrupt request bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> itst{}; 
        namespace ItstValC{
        }
        ///ACK cycle value bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> acksv{}; 
        namespace AcksvValC{
        }
    }
    namespace Nonesfree{    ///<Signal Free Time Setting Register
        using Addr = Register::Address<0x4003400c,0xfffffff0,0,unsigned char>;
        ///Signal free time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> sfree{}; 
        namespace SfreeValC{
        }
    }
    namespace Nonercst{    ///<Reception Interrupt Control Register
        using Addr = Register::Address<0x40034040,0xffffff00,0,unsigned char>;
        ///Start bit interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> stie{}; 
        namespace StieValC{
        }
        /// ACK interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ackie{}; 
        namespace AckieValC{
        }
        ///Counter overflow interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ovfie{}; 
        namespace OvfieValC{
        }
        ///Counter overflow detection condition setting bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ovfsel{}; 
        namespace OvfselValC{
        }
        ///Start bit detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> st{}; 
        namespace StValC{
        }
        ///ACK: ACK detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ack{}; 
        namespace AckValC{
        }
        ///EOM detection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> eom{}; 
        namespace EomValC{
        }
        ///Counter overflow detection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ovf{}; 
        namespace OvfValC{
        }
    }
    namespace Nonerccr{    ///<Reception Control Register
        using Addr = Register::Address<0x40034041,0xffffff70,0,unsigned char>;
        ///Threshold selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> thsel{}; 
        namespace ThselValC{
        }
        ///Address comparison enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> adrce{}; 
        namespace AdrceValC{
        }
        ///Operation mode setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> mod{}; 
        namespace ModValC{
        }
        ///Operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
    }
    namespace Nonercdahw{    ///<"H" Width Setting Register A
        using Addr = Register::Address<0x40034044,0xffffff00,0,unsigned char>;
        ///"H" Width Setting A
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdahw{}; 
        namespace RcdahwValC{
        }
    }
    namespace Nonercshw{    ///<Start Bit "H" Width Setting Register
        using Addr = Register::Address<0x40034045,0xffffff00,0,unsigned char>;
        ///Start Bit "H" Width Setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcshw{}; 
        namespace RcshwValC{
        }
    }
    namespace Nonercdbhw{    ///<"H" Width Setting Register B
        using Addr = Register::Address<0x40034049,0xffffff00,0,unsigned char>;
        ///"H" Width Setting B
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdbhw{}; 
        namespace RcdbhwValC{
        }
    }
    namespace Nonercadr2{    ///<Device Address Setting Register 2
        using Addr = Register::Address<0x4003404c,0xffffffe0,0,unsigned char>;
        ///Device Address 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr2{}; 
        namespace Rcadr2ValC{
        }
    }
    namespace Nonercadr1{    ///<Device Address Setting Register 1
        using Addr = Register::Address<0x4003404d,0xffffffe0,0,unsigned char>;
        ///Device Address 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> rcadr1{}; 
        namespace Rcadr1ValC{
        }
    }
    namespace Nonercdthl{    ///<Data Save Register (High-Low)
        using Addr = Register::Address<0x40034050,0xffffff00,0,unsigned char>;
        ///RCDTHL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthl{}; 
        namespace RcdthlValC{
        }
    }
    namespace Nonercdthh{    ///<Data Save Register (High-High)
        using Addr = Register::Address<0x40034051,0xffffff00,0,unsigned char>;
        ///RCDTHH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdthh{}; 
        namespace RcdthhValC{
        }
    }
    namespace Nonercdtll{    ///<Data Save Register (Low-Low)
        using Addr = Register::Address<0x40034054,0xffffff00,0,unsigned char>;
        ///RCDTLL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtll{}; 
        namespace RcdtllValC{
        }
    }
    namespace Nonercdtlh{    ///<Data Save Register (Low-High)
        using Addr = Register::Address<0x40034055,0xffffff00,0,unsigned char>;
        ///RCDTLH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcdtlh{}; 
        namespace RcdtlhValC{
        }
    }
    namespace Nonercckd{    ///<Clock Division Setting Register
        using Addr = Register::Address<0x40034058,0xffffe000,0,unsigned>;
        ///Operating clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cksel{}; 
        namespace CkselValC{
        }
        ///Operating clock division setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> ckdiv{}; 
        namespace CkdivValC{
        }
    }
    namespace Nonercrhw{    ///<Repeat Code "H" Width Setting Register
        using Addr = Register::Address<0x4003405c,0xffffff00,0,unsigned char>;
        ///"Repeat code "H" width setting bits"
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rcrhw{}; 
        namespace RcrhwValC{
        }
    }
    namespace Nonercrc{    ///<Repeat Code Interrupt Control Register
        using Addr = Register::Address<0x4003405d,0xffffffee,0,unsigned char>;
        ///Repeat Code Interrupt enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rcie{}; 
        namespace RcieValC{
        }
        ///Repeat code detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rc{}; 
        namespace RcValC{
        }
    }
    namespace Nonercle{    ///<Data Bit Width Violation Control Register
        using Addr = Register::Address<0x40034061,0xffffff04,0,unsigned char>;
        ///Maximum data bit width violation interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lelie{}; 
        namespace LelieValC{
        }
        ///Minimum data bit width violation interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lesie{}; 
        namespace LesieValC{
        }
        ///Maximum data bit width violation detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lele{}; 
        namespace LeleValC{
        }
        ///Minimum data bit width violation detection enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lese{}; 
        namespace LeseValC{
        }
        ///Error pulse output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> epe{}; 
        namespace EpeValC{
        }
        ///Maximum data bit width violation detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lel{}; 
        namespace LelValC{
        }
        ///Minimum data bit width violation detection flag bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> les{}; 
        namespace LesValC{
        }
    }
    namespace Nonerclesw{    ///<Minimum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034064,0xffffff00,0,unsigned char>;
        ///Minimum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclesw{}; 
        namespace RcleswValC{
        }
    }
    namespace Nonerclelw{    ///<Maximum Data Bit Width Setting Register
        using Addr = Register::Address<0x40034065,0xffffff00,0,unsigned char>;
        ///Maximum data bit width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> rclelw{}; 
        namespace RclelwValC{
        }
    }
}
