#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN1 Registers
    namespace Nonectrlr{    ///<CAN Control Register
        using Addr = Register::Address<0x40063000,0xffffff10,0,unsigned>;
        ///Test mode enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
        ///Bit Timing Register write enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cce{}; 
        namespace CceValC{
        }
        /// Automatic retransmission disable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dar{}; 
        namespace DarValC{
        }
        ///Error interrupt code enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eie{}; 
        namespace EieValC{
        }
        ///Status interrupt code enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sie{}; 
        namespace SieValC{
        }
        ///Interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        ///Initialization bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace Nonestatr{    ///<CAN Status Register
        using Addr = Register::Address<0x40063002,0xffffff00,0,unsigned>;
        ///Busoff bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
        ///Warning bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ewarn{}; 
        namespace EwarnValC{
        }
        ///Error passive bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epass{}; 
        namespace EpassValC{
        }
        ///Successful message reception bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxok{}; 
        namespace RxokValC{
        }
        ///Successful message transmission bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txok{}; 
        namespace TxokValC{
        }
        ///Last error code bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lec{}; 
        namespace LecValC{
        }
    }
    namespace Noneerrcnt{    ///<CAN Error Counter
        using Addr = Register::Address<0x40063004,0xffff0000,0,unsigned>;
        ///Receive error passive indication 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rp{}; 
        namespace RpValC{
        }
        ///Receive error counter 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        ///Send error counter 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec{}; 
        namespace TecValC{
        }
    }
    namespace Nonebtr{    ///<CAN Bit Timing Register
        using Addr = Register::Address<0x40063006,0xffff8000,0,unsigned>;
        ///Time segment 2 setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
        ///Time segment 1 setting bits 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        ///Resynchronization jump width setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
        ///Baud rate prescaler setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
    }
    namespace Noneintr{    ///<CAN Interrupt Register
        using Addr = Register::Address<0x40063008,0xffff0000,0,unsigned>;
        ///Interrupt Code
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
        namespace IntidValC{
        }
    }
    namespace Nonetestr{    ///<CAN Test Register
        using Addr = Register::Address<0x4006300a,0xffffff03,0,unsigned>;
        ///Rx pin monitor bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
        namespace RxValC{
        }
        ///TX pin control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        namespace TxValC{
        }
        ///Loop back mode 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lback{}; 
        namespace LbackValC{
        }
        ///Silent mode 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> silent{}; 
        namespace SilentValC{
        }
        ///Basic mode 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> basic{}; 
        namespace BasicValC{
        }
    }
    namespace Nonebrper{    ///<CAN Prescaler Extension Register
        using Addr = Register::Address<0x4006300c,0xfffffff0,0,unsigned>;
        ///Baud rate prescaler extension bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
        namespace BrpeValC{
        }
    }
    namespace Noneif1creq{    ///<IF1 Command Request Register
        using Addr = Register::Address<0x40063010,0xffff7f00,0,unsigned>;
        ///Busy flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Message number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
        namespace MessagenumberValC{
        }
    }
    namespace Noneif1cmsk{    ///<IF1 Command Mask Register
        using Addr = Register::Address<0x40063012,0xffffff00,0,unsigned>;
        ///Writing or reading control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrrd{}; 
        namespace WrrdValC{
        }
        ///Mask data update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        ///Arbitration data update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        namespace ArbValC{
        }
        ///Control data update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        namespace ControlValC{
        }
        ///Interrupt clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cip{}; 
        namespace CipValC{
        }
        ///Message transmission request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        ///Data 0-3 update bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dataa{}; 
        namespace DataaValC{
        }
        ///Data 4-7 update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datab{}; 
        namespace DatabValC{
        }
    }
    namespace Noneif1msk1{    ///<IF1 Mask Registers 1
        using Addr = Register::Address<0x40063014,0xffff0000,0,unsigned>;
        ///Msk15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk15{}; 
        namespace Msk15ValC{
        }
        ///Msk14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msk14{}; 
        namespace Msk14ValC{
        }
        ///Msk13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msk13{}; 
        namespace Msk13ValC{
        }
        ///Msk12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk12{}; 
        namespace Msk12ValC{
        }
        ///Msk11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk11{}; 
        namespace Msk11ValC{
        }
        ///Msk10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk10{}; 
        namespace Msk10ValC{
        }
        ///Msk9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk9{}; 
        namespace Msk9ValC{
        }
        ///Msk8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk8{}; 
        namespace Msk8ValC{
        }
        ///Msk7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk7{}; 
        namespace Msk7ValC{
        }
        ///Msk6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk6{}; 
        namespace Msk6ValC{
        }
        ///Msk5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk5{}; 
        namespace Msk5ValC{
        }
        ///Msk4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk4{}; 
        namespace Msk4ValC{
        }
        ///Msk3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk3{}; 
        namespace Msk3ValC{
        }
        ///Msk2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk2{}; 
        namespace Msk2ValC{
        }
        ///Msk1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk1{}; 
        namespace Msk1ValC{
        }
        ///Msk0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk0{}; 
        namespace Msk0ValC{
        }
    }
    namespace Noneif1msk2{    ///<IF1 Mask Registers 2
        using Addr = Register::Address<0x40063016,0xffff2000,0,unsigned>;
        ///MXtd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        namespace MxtdValC{
        }
        ///MDir
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        namespace MdirValC{
        }
        ///Msk28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk28{}; 
        namespace Msk28ValC{
        }
        ///Msk27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk27{}; 
        namespace Msk27ValC{
        }
        ///Msk26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk26{}; 
        namespace Msk26ValC{
        }
        ///Msk25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk25{}; 
        namespace Msk25ValC{
        }
        ///Msk24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk24{}; 
        namespace Msk24ValC{
        }
        ///Msk23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk23{}; 
        namespace Msk23ValC{
        }
        ///Msk22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk22{}; 
        namespace Msk22ValC{
        }
        ///Msk21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk21{}; 
        namespace Msk21ValC{
        }
        ///Msk20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk20{}; 
        namespace Msk20ValC{
        }
        ///Msk19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk19{}; 
        namespace Msk19ValC{
        }
        ///Msk18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk18{}; 
        namespace Msk18ValC{
        }
        ///Msk17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk17{}; 
        namespace Msk17ValC{
        }
        ///Msk16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk16{}; 
        namespace Msk16ValC{
        }
    }
    namespace Noneif1arb1{    ///<IF1 Arbitration Registers 1
        using Addr = Register::Address<0x40063018,0xffff0000,0,unsigned>;
        ///ID15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        namespace Id15ValC{
        }
        ///ID14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        namespace Id14ValC{
        }
        ///ID13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        namespace Id13ValC{
        }
        ///ID12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        namespace Id12ValC{
        }
        ///ID11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        namespace Id11ValC{
        }
        ///ID10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        namespace Id10ValC{
        }
        ///ID9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        namespace Id9ValC{
        }
        ///ID8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        namespace Id8ValC{
        }
        ///ID7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        namespace Id7ValC{
        }
        ///ID6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        namespace Id6ValC{
        }
        ///ID5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        namespace Id5ValC{
        }
        ///ID4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        namespace Id4ValC{
        }
        ///ID3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        namespace Id3ValC{
        }
        ///ID2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        namespace Id2ValC{
        }
        ///ID1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        namespace Id1ValC{
        }
        ///ID0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        namespace Id0ValC{
        }
    }
    namespace Noneif1arb2{    ///<IF1 Arbitration Registers 2
        using Addr = Register::Address<0x4006301a,0xffff0000,0,unsigned>;
        ///MsgVal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        namespace MsgvalValC{
        }
        ///Xtd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        namespace XtdValC{
        }
        ///Dir
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///ID28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id28{}; 
        namespace Id28ValC{
        }
        ///ID27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id27{}; 
        namespace Id27ValC{
        }
        ///ID26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id26{}; 
        namespace Id26ValC{
        }
        ///ID25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id25{}; 
        namespace Id25ValC{
        }
        ///ID24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id24{}; 
        namespace Id24ValC{
        }
        ///ID23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id23{}; 
        namespace Id23ValC{
        }
        ///ID22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id22{}; 
        namespace Id22ValC{
        }
        ///ID21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id21{}; 
        namespace Id21ValC{
        }
        ///ID20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id20{}; 
        namespace Id20ValC{
        }
        ///ID19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id19{}; 
        namespace Id19ValC{
        }
        ///ID18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id18{}; 
        namespace Id18ValC{
        }
        ///ID17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id17{}; 
        namespace Id17ValC{
        }
        ///ID16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id16{}; 
        namespace Id16ValC{
        }
    }
    namespace Noneif1mctr{    ///<IF1 Message Control Register
        using Addr = Register::Address<0x4006301c,0xffff0070,0,unsigned>;
        ///NewDat
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        ///MsgLst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        namespace MsglstValC{
        }
        ///IntPnd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        namespace IntpndValC{
        }
        ///UMask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        namespace UmaskValC{
        }
        ///TxIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        ///RxIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        ///RmtEn
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        namespace RmtenValC{
        }
        ///TxRqst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        namespace TxrqstValC{
        }
        ///EoB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        namespace EobValC{
        }
        ///DLC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
    }
    namespace Noneif1dta1L{    ///<IF1 Data Registers A1
        using Addr = Register::Address<0x40063020,0xffff0000,0,unsigned>;
        ///Data(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
        ///Data(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
    }
    namespace Noneif1dta2L{    ///<IF1 Data Registers A2
        using Addr = Register::Address<0x40063022,0xffff0000,0,unsigned>;
        ///Data(3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
        ///Data(2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
    }
    namespace Noneif1dtb1L{    ///<IF1 Data Registers B1
        using Addr = Register::Address<0x40063024,0xffff0000,0,unsigned>;
        ///Data(5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
        ///Data(4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
    }
    namespace Noneif1dtb2L{    ///<IF1 Data Registers B2
        using Addr = Register::Address<0x40063026,0xffff0000,0,unsigned>;
        ///Data(7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
        ///Data(6)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
    }
    namespace Noneif1dta2B{    ///<IF1 Data Registers A2
        using Addr = Register::Address<0x40063030,0xffff0000,0,unsigned>;
        ///Data(2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data(3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Noneif1dta1B{    ///<IF1 Data Registers A1
        using Addr = Register::Address<0x40063032,0xffff0000,0,unsigned>;
        ///Data(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Noneif1dtb2B{    ///<IF1 Data Registers B2
        using Addr = Register::Address<0x40063034,0xffff0000,0,unsigned>;
        ///Data(6)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data(7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Noneif1dtb1B{    ///<IF1 Data Registers B1
        using Addr = Register::Address<0x40063036,0xffff0000,0,unsigned>;
        ///Data(4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data(5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Noneif2creq{    ///<IF2 Command Request Register
        using Addr = Register::Address<0x40063040,0xffff7f00,0,unsigned>;
        ///Busy flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        ///Message number
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
        namespace MessagenumberValC{
        }
    }
    namespace Noneif2cmsk{    ///<IF2 Command Mask Register
        using Addr = Register::Address<0x40063042,0xffffff00,0,unsigned>;
        ///Writing or reading control bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrrd{}; 
        namespace WrrdValC{
        }
        ///Mask data update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        ///Arbitration data update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        namespace ArbValC{
        }
        ///Control data update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        namespace ControlValC{
        }
        ///Interrupt clear bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cip{}; 
        namespace CipValC{
        }
        ///Message transmission request bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        ///Data 0-3 update bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dataa{}; 
        namespace DataaValC{
        }
        ///Data 4-7 update bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datab{}; 
        namespace DatabValC{
        }
    }
    namespace Noneif2msk1{    ///<IF2 Mask Registers 1
        using Addr = Register::Address<0x40063044,0xffff0000,0,unsigned>;
        ///Msk15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk15{}; 
        namespace Msk15ValC{
        }
        ///Msk14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msk14{}; 
        namespace Msk14ValC{
        }
        ///Msk13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msk13{}; 
        namespace Msk13ValC{
        }
        ///Msk12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk12{}; 
        namespace Msk12ValC{
        }
        ///Msk11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk11{}; 
        namespace Msk11ValC{
        }
        ///Msk10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk10{}; 
        namespace Msk10ValC{
        }
        ///Msk9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk9{}; 
        namespace Msk9ValC{
        }
        ///Msk8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk8{}; 
        namespace Msk8ValC{
        }
        ///Msk7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk7{}; 
        namespace Msk7ValC{
        }
        ///Msk6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk6{}; 
        namespace Msk6ValC{
        }
        ///Msk5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk5{}; 
        namespace Msk5ValC{
        }
        ///Msk4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk4{}; 
        namespace Msk4ValC{
        }
        ///Msk3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk3{}; 
        namespace Msk3ValC{
        }
        ///Msk2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk2{}; 
        namespace Msk2ValC{
        }
        ///Msk1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk1{}; 
        namespace Msk1ValC{
        }
        ///Msk0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk0{}; 
        namespace Msk0ValC{
        }
    }
    namespace Noneif2msk2{    ///<IF2 Mask Registers 2
        using Addr = Register::Address<0x40063046,0xffff2000,0,unsigned>;
        ///MXtd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        namespace MxtdValC{
        }
        ///MDir
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        namespace MdirValC{
        }
        ///Msk28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk28{}; 
        namespace Msk28ValC{
        }
        ///Msk27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk27{}; 
        namespace Msk27ValC{
        }
        ///Msk26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk26{}; 
        namespace Msk26ValC{
        }
        ///Msk25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk25{}; 
        namespace Msk25ValC{
        }
        ///Msk24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk24{}; 
        namespace Msk24ValC{
        }
        ///Msk23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk23{}; 
        namespace Msk23ValC{
        }
        ///Msk22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk22{}; 
        namespace Msk22ValC{
        }
        ///Msk21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk21{}; 
        namespace Msk21ValC{
        }
        ///Msk20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk20{}; 
        namespace Msk20ValC{
        }
        ///Msk19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk19{}; 
        namespace Msk19ValC{
        }
        ///Msk18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk18{}; 
        namespace Msk18ValC{
        }
        ///Msk17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk17{}; 
        namespace Msk17ValC{
        }
        ///Msk16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk16{}; 
        namespace Msk16ValC{
        }
    }
    namespace Noneif2arb1{    ///<IF2 Arbitration Registers 1
        using Addr = Register::Address<0x40063048,0xffff0000,0,unsigned>;
        ///ID15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        namespace Id15ValC{
        }
        ///ID14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        namespace Id14ValC{
        }
        ///ID13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        namespace Id13ValC{
        }
        ///ID12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        namespace Id12ValC{
        }
        ///ID11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        namespace Id11ValC{
        }
        ///ID10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        namespace Id10ValC{
        }
        ///ID9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        namespace Id9ValC{
        }
        ///ID8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        namespace Id8ValC{
        }
        ///ID7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        namespace Id7ValC{
        }
        ///ID6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        namespace Id6ValC{
        }
        ///ID5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        namespace Id5ValC{
        }
        ///ID4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        namespace Id4ValC{
        }
        ///ID3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        namespace Id3ValC{
        }
        ///ID2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        namespace Id2ValC{
        }
        ///ID1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        namespace Id1ValC{
        }
        ///ID0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        namespace Id0ValC{
        }
    }
    namespace Noneif2arb2{    ///<IF2 Arbitration Registers 2
        using Addr = Register::Address<0x4006304a,0xffff0000,0,unsigned>;
        ///MsgVal
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        namespace MsgvalValC{
        }
        ///Xtd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        namespace XtdValC{
        }
        ///Dir
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        ///ID28
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id28{}; 
        namespace Id28ValC{
        }
        ///ID27
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id27{}; 
        namespace Id27ValC{
        }
        ///ID26
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id26{}; 
        namespace Id26ValC{
        }
        ///ID25
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id25{}; 
        namespace Id25ValC{
        }
        ///ID24
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id24{}; 
        namespace Id24ValC{
        }
        ///ID23
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id23{}; 
        namespace Id23ValC{
        }
        ///ID22
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id22{}; 
        namespace Id22ValC{
        }
        ///ID21
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id21{}; 
        namespace Id21ValC{
        }
        ///ID20
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id20{}; 
        namespace Id20ValC{
        }
        ///ID19
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id19{}; 
        namespace Id19ValC{
        }
        ///ID18
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id18{}; 
        namespace Id18ValC{
        }
        ///ID17
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id17{}; 
        namespace Id17ValC{
        }
        ///ID16
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id16{}; 
        namespace Id16ValC{
        }
    }
    namespace Noneif2mctr{    ///<IF2 Message Control Register
        using Addr = Register::Address<0x4006304c,0xffff0070,0,unsigned>;
        ///NewDat
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        ///MsgLst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        namespace MsglstValC{
        }
        ///IntPnd
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        namespace IntpndValC{
        }
        ///UMask
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        namespace UmaskValC{
        }
        ///TxIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        ///RxIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        ///RmtEn
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        namespace RmtenValC{
        }
        ///TxRqst
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        namespace TxrqstValC{
        }
        ///EoB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        namespace EobValC{
        }
        ///DLC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
    }
    namespace Noneif2dta1L{    ///<IF2 Data Registers A1
        using Addr = Register::Address<0x40063050,0xffff0000,0,unsigned>;
        ///Data(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
        ///Data(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
    }
    namespace Noneif2dta2L{    ///<IF2 Data Registers A2
        using Addr = Register::Address<0x40063052,0xffff0000,0,unsigned>;
        ///Data(3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
        ///Data(2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
    }
    namespace Noneif2dtb1L{    ///<IF2 Data Registers B1
        using Addr = Register::Address<0x40063054,0xffff0000,0,unsigned>;
        ///Data(5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
        ///Data(4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
    }
    namespace Noneif2dtb2L{    ///<IF2 Data Registers B2
        using Addr = Register::Address<0x40063056,0xffff0000,0,unsigned>;
        ///Data(7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
        ///Data(6)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
    }
    namespace Noneif2dta2B{    ///<IF2 Data Registers A2
        using Addr = Register::Address<0x40063060,0xffff0000,0,unsigned>;
        ///Data(2)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        ///Data(3)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Noneif2dta1B{    ///<IF2 Data Registers A1
        using Addr = Register::Address<0x40063062,0xffff0000,0,unsigned>;
        ///Data(0)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        ///Data(1)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Noneif2dtb2B{    ///<IF2 Data Registers B2
        using Addr = Register::Address<0x40063064,0xffff0000,0,unsigned>;
        ///Data(6)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        ///Data(7)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Noneif2dtb1B{    ///<IF2 Data Registers B1
        using Addr = Register::Address<0x40063066,0xffff0000,0,unsigned>;
        ///Data(4)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        ///Data(5)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Nonetreqr1{    ///<CAN Transmit Request Registers 1
        using Addr = Register::Address<0x40063080,0xffff0000,0,unsigned>;
        ///Bit15 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txrqst16{}; 
        namespace Txrqst16ValC{
        }
        ///Bit14 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txrqst15{}; 
        namespace Txrqst15ValC{
        }
        ///Bit13 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txrqst14{}; 
        namespace Txrqst14ValC{
        }
        ///Bit12 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txrqst13{}; 
        namespace Txrqst13ValC{
        }
        ///Bit11 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrqst12{}; 
        namespace Txrqst12ValC{
        }
        ///Bit10 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txrqst11{}; 
        namespace Txrqst11ValC{
        }
        ///Bit9 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrqst10{}; 
        namespace Txrqst10ValC{
        }
        ///Bit8 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst9{}; 
        namespace Txrqst9ValC{
        }
        ///Bit7 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txrqst8{}; 
        namespace Txrqst8ValC{
        }
        ///Bit6 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txrqst7{}; 
        namespace Txrqst7ValC{
        }
        ///Bit5 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrqst6{}; 
        namespace Txrqst6ValC{
        }
        ///Bit4 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txrqst5{}; 
        namespace Txrqst5ValC{
        }
        ///Bit3 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txrqst4{}; 
        namespace Txrqst4ValC{
        }
        ///Bit2 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqst3{}; 
        namespace Txrqst3ValC{
        }
        ///Bit1 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrqst2{}; 
        namespace Txrqst2ValC{
        }
        ///Bit0 of TREQR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrqst1{}; 
        namespace Txrqst1ValC{
        }
    }
    namespace Nonetreqr2{    ///<CAN Transmit Request Registers 2
        using Addr = Register::Address<0x40063082,0xffff0000,0,unsigned>;
        ///Bit15 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txrqst32{}; 
        namespace Txrqst32ValC{
        }
        ///Bit14 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txrqst31{}; 
        namespace Txrqst31ValC{
        }
        ///Bit13 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txrqst30{}; 
        namespace Txrqst30ValC{
        }
        ///Bit12 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txrqst29{}; 
        namespace Txrqst29ValC{
        }
        ///Bit11 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrqst28{}; 
        namespace Txrqst28ValC{
        }
        ///Bit10 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txrqst27{}; 
        namespace Txrqst27ValC{
        }
        ///Bit9 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrqst26{}; 
        namespace Txrqst26ValC{
        }
        ///Bit8 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst25{}; 
        namespace Txrqst25ValC{
        }
        ///Bit7 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txrqst24{}; 
        namespace Txrqst24ValC{
        }
        ///Bit6 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txrqst23{}; 
        namespace Txrqst23ValC{
        }
        ///Bit5 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrqst22{}; 
        namespace Txrqst22ValC{
        }
        ///Bit4 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txrqst21{}; 
        namespace Txrqst21ValC{
        }
        ///Bit3 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txrqst20{}; 
        namespace Txrqst20ValC{
        }
        ///Bit2 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqst19{}; 
        namespace Txrqst19ValC{
        }
        ///Bit1 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrqst18{}; 
        namespace Txrqst18ValC{
        }
        ///Bit0 of TREQR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrqst17{}; 
        namespace Txrqst17ValC{
        }
    }
    namespace Nonenewdt1{    ///<CAN New Data Registers 1
        using Addr = Register::Address<0x40063090,0xffff0000,0,unsigned>;
        ///Bit15 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat16{}; 
        namespace Newdat16ValC{
        }
        ///Bit14 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> newdat15{}; 
        namespace Newdat15ValC{
        }
        ///Bit13 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> newdat14{}; 
        namespace Newdat14ValC{
        }
        ///Bit12 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> newdat13{}; 
        namespace Newdat13ValC{
        }
        ///Bit11 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> newdat12{}; 
        namespace Newdat12ValC{
        }
        ///Bit10 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> newdat11{}; 
        namespace Newdat11ValC{
        }
        ///Bit9 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> newdat10{}; 
        namespace Newdat10ValC{
        }
        ///Bit8 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> newdat9{}; 
        namespace Newdat9ValC{
        }
        ///Bit7 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> newdat8{}; 
        namespace Newdat8ValC{
        }
        ///Bit6 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> newdat7{}; 
        namespace Newdat7ValC{
        }
        ///Bit5 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> newdat6{}; 
        namespace Newdat6ValC{
        }
        ///Bit4 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> newdat5{}; 
        namespace Newdat5ValC{
        }
        ///Bit3 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> newdat4{}; 
        namespace Newdat4ValC{
        }
        ///Bit2 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat3{}; 
        namespace Newdat3ValC{
        }
        ///Bit1 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newdat2{}; 
        namespace Newdat2ValC{
        }
        ///Bit0 of NEWDT1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> newdat1{}; 
        namespace Newdat1ValC{
        }
    }
    namespace Nonenewdt2{    ///<CAN New Data Registers 2
        using Addr = Register::Address<0x40063092,0xffff0000,0,unsigned>;
        ///Bit15 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat32{}; 
        namespace Newdat32ValC{
        }
        ///Bit14 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> newdat31{}; 
        namespace Newdat31ValC{
        }
        ///Bit13 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> newdat30{}; 
        namespace Newdat30ValC{
        }
        ///Bit12 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> newdat29{}; 
        namespace Newdat29ValC{
        }
        ///Bit11 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> newdat28{}; 
        namespace Newdat28ValC{
        }
        ///Bit10 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> newdat27{}; 
        namespace Newdat27ValC{
        }
        ///Bit9 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> newdat26{}; 
        namespace Newdat26ValC{
        }
        ///Bit8 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> newdat25{}; 
        namespace Newdat25ValC{
        }
        ///Bit7 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> newdat24{}; 
        namespace Newdat24ValC{
        }
        ///Bit6 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> newdat23{}; 
        namespace Newdat23ValC{
        }
        ///Bit5 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> newdat22{}; 
        namespace Newdat22ValC{
        }
        ///Bit4 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> newdat21{}; 
        namespace Newdat21ValC{
        }
        ///Bit3 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> newdat20{}; 
        namespace Newdat20ValC{
        }
        ///Bit2 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat19{}; 
        namespace Newdat19ValC{
        }
        ///Bit1 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newdat18{}; 
        namespace Newdat18ValC{
        }
        ///Bit0 of NEWDT2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> newdat17{}; 
        namespace Newdat17ValC{
        }
    }
    namespace Noneintpnd1{    ///<CAN Interrupt Pending Registers 1
        using Addr = Register::Address<0x400630a0,0xffff0000,0,unsigned>;
        ///Bit15 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intpnd16{}; 
        namespace Intpnd16ValC{
        }
        ///Bit14 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> intpnd15{}; 
        namespace Intpnd15ValC{
        }
        ///Bit13 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd14{}; 
        namespace Intpnd14ValC{
        }
        ///Bit12 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> intpnd13{}; 
        namespace Intpnd13ValC{
        }
        ///Bit11 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> intpnd12{}; 
        namespace Intpnd12ValC{
        }
        ///Bit10 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intpnd11{}; 
        namespace Intpnd11ValC{
        }
        ///Bit9 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intpnd10{}; 
        namespace Intpnd10ValC{
        }
        ///Bit8 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intpnd9{}; 
        namespace Intpnd9ValC{
        }
        ///Bit7 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intpnd8{}; 
        namespace Intpnd8ValC{
        }
        ///Bit6 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intpnd7{}; 
        namespace Intpnd7ValC{
        }
        ///Bit5 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intpnd6{}; 
        namespace Intpnd6ValC{
        }
        ///Bit4 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intpnd5{}; 
        namespace Intpnd5ValC{
        }
        ///Bit3 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intpnd4{}; 
        namespace Intpnd4ValC{
        }
        ///Bit2 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intpnd3{}; 
        namespace Intpnd3ValC{
        }
        ///Bit1 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intpnd2{}; 
        namespace Intpnd2ValC{
        }
        ///Bit0 of INTPND1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intpnd1{}; 
        namespace Intpnd1ValC{
        }
    }
    namespace Noneintpnd2{    ///<CAN Interrupt Pending Registers 2
        using Addr = Register::Address<0x400630a2,0xffff0000,0,unsigned>;
        ///Bit15 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intpnd32{}; 
        namespace Intpnd32ValC{
        }
        ///Bit14 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> intpnd31{}; 
        namespace Intpnd31ValC{
        }
        ///Bit13 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd30{}; 
        namespace Intpnd30ValC{
        }
        ///Bit12 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> intpnd29{}; 
        namespace Intpnd29ValC{
        }
        ///Bit11 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> intpnd28{}; 
        namespace Intpnd28ValC{
        }
        ///Bit10 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intpnd27{}; 
        namespace Intpnd27ValC{
        }
        ///Bit9 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intpnd26{}; 
        namespace Intpnd26ValC{
        }
        ///Bit8 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intpnd25{}; 
        namespace Intpnd25ValC{
        }
        ///Bit7 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intpnd24{}; 
        namespace Intpnd24ValC{
        }
        ///Bit6 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intpnd23{}; 
        namespace Intpnd23ValC{
        }
        ///Bit5 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intpnd22{}; 
        namespace Intpnd22ValC{
        }
        ///Bit4 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intpnd21{}; 
        namespace Intpnd21ValC{
        }
        ///Bit3 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intpnd20{}; 
        namespace Intpnd20ValC{
        }
        ///Bit2 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intpnd19{}; 
        namespace Intpnd19ValC{
        }
        ///Bit1 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intpnd18{}; 
        namespace Intpnd18ValC{
        }
        ///Bit0 of INTPND2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intpnd17{}; 
        namespace Intpnd17ValC{
        }
    }
    namespace Nonemsgval1{    ///<CAN Message Valid Registers 1
        using Addr = Register::Address<0x400630b0,0xffff0000,0,unsigned>;
        ///Bit15 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval16{}; 
        namespace Msgval16ValC{
        }
        ///Bit14 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msgval15{}; 
        namespace Msgval15ValC{
        }
        ///Bit13 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msgval14{}; 
        namespace Msgval14ValC{
        }
        ///Bit12 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msgval13{}; 
        namespace Msgval13ValC{
        }
        ///Bit11 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msgval12{}; 
        namespace Msgval12ValC{
        }
        ///Bit10 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msgval11{}; 
        namespace Msgval11ValC{
        }
        ///Bit9 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msgval10{}; 
        namespace Msgval10ValC{
        }
        ///Bit8 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msgval9{}; 
        namespace Msgval9ValC{
        }
        ///Bit7 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msgval8{}; 
        namespace Msgval8ValC{
        }
        ///Bit6 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msgval7{}; 
        namespace Msgval7ValC{
        }
        ///Bit5 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msgval6{}; 
        namespace Msgval6ValC{
        }
        ///Bit4 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msgval5{}; 
        namespace Msgval5ValC{
        }
        ///Bit3 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msgval4{}; 
        namespace Msgval4ValC{
        }
        ///Bit2 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msgval3{}; 
        namespace Msgval3ValC{
        }
        ///Bit1 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msgval2{}; 
        namespace Msgval2ValC{
        }
        ///Bit0 of MSGVAL1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msgval1{}; 
        namespace Msgval1ValC{
        }
    }
    namespace Nonemsgval2{    ///<CAN Message Valid Registers 2
        using Addr = Register::Address<0x400630b2,0xffff0000,0,unsigned>;
        ///Bit15 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval32{}; 
        namespace Msgval32ValC{
        }
        ///Bit14 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msgval31{}; 
        namespace Msgval31ValC{
        }
        ///Bit13 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msgval30{}; 
        namespace Msgval30ValC{
        }
        ///Bit12 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msgval29{}; 
        namespace Msgval29ValC{
        }
        ///Bit11 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msgval28{}; 
        namespace Msgval28ValC{
        }
        ///Bit10 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msgval27{}; 
        namespace Msgval27ValC{
        }
        ///Bit9 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msgval26{}; 
        namespace Msgval26ValC{
        }
        ///Bit8 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msgval25{}; 
        namespace Msgval25ValC{
        }
        ///Bit7 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msgval24{}; 
        namespace Msgval24ValC{
        }
        ///Bit6 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msgval23{}; 
        namespace Msgval23ValC{
        }
        ///Bit5 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msgval22{}; 
        namespace Msgval22ValC{
        }
        ///Bit4 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msgval21{}; 
        namespace Msgval21ValC{
        }
        ///Bit3 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msgval20{}; 
        namespace Msgval20ValC{
        }
        ///Bit2 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msgval19{}; 
        namespace Msgval19ValC{
        }
        ///Bit1 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msgval18{}; 
        namespace Msgval18ValC{
        }
        ///Bit0 of MSGVAL2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msgval17{}; 
        namespace Msgval17ValC{
        }
    }
}
