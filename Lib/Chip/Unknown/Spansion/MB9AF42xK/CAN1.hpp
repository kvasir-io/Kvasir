#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CAN1 
    namespace Nonectrlr{    ///< register CTRLR 
        using Addr = Register::Address<0x40063000,0xffffff10,0,unsigned>;
        /// bitfield TEST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        namespace TestValC{
        }
        /// bitfield CCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cce{}; 
        namespace CceValC{
        }
        /// bitfield DAR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dar{}; 
        namespace DarValC{
        }
        /// bitfield EIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eie{}; 
        namespace EieValC{
        }
        /// bitfield SIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sie{}; 
        namespace SieValC{
        }
        /// bitfield IE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        namespace IeValC{
        }
        /// bitfield INIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
        namespace InitValC{
        }
    }
    namespace Nonestatr{    ///< register STATR 
        using Addr = Register::Address<0x40063002,0xffffff00,0,unsigned>;
        /// bitfield BOFF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> boff{}; 
        namespace BoffValC{
        }
        /// bitfield EWARN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ewarn{}; 
        namespace EwarnValC{
        }
        /// bitfield EPASS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epass{}; 
        namespace EpassValC{
        }
        /// bitfield RXOK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxok{}; 
        namespace RxokValC{
        }
        /// bitfield TXOK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txok{}; 
        namespace TxokValC{
        }
        /// bitfield LEC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lec{}; 
        namespace LecValC{
        }
    }
    namespace Noneerrcnt{    ///< register ERRCNT 
        using Addr = Register::Address<0x40063004,0xffff0000,0,unsigned>;
        /// bitfield RP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rp{}; 
        namespace RpValC{
        }
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        /// bitfield TEC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec{}; 
        namespace TecValC{
        }
    }
    namespace Nonebtr{    ///< register BTR 
        using Addr = Register::Address<0x40063006,0xffff8000,0,unsigned>;
        /// bitfield TSEG2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        namespace Tseg2ValC{
        }
        /// bitfield TSEG1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        namespace Tseg1ValC{
        }
        /// bitfield SJW 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        namespace SjwValC{
        }
        /// bitfield BRP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
        namespace BrpValC{
        }
    }
    namespace Noneintr{    ///< register INTR 
        using Addr = Register::Address<0x40063008,0xffff0000,0,unsigned>;
        /// bitfield INTID 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
        namespace IntidValC{
        }
    }
    namespace Nonetestr{    ///< register TESTR 
        using Addr = Register::Address<0x4006300a,0xffffff03,0,unsigned>;
        /// bitfield RX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
        namespace RxValC{
        }
        /// bitfield TX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        namespace TxValC{
        }
        /// bitfield LBACK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lback{}; 
        namespace LbackValC{
        }
        /// bitfield SILENT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> silent{}; 
        namespace SilentValC{
        }
        /// bitfield BASIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> basic{}; 
        namespace BasicValC{
        }
    }
    namespace Nonebrper{    ///< register BRPER 
        using Addr = Register::Address<0x4006300c,0xfffffff0,0,unsigned>;
        /// bitfield BRPE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
        namespace BrpeValC{
        }
    }
    namespace Noneif1creq{    ///< register IF1CREQ 
        using Addr = Register::Address<0x40063010,0xffff7f00,0,unsigned>;
        /// bitfield BUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        /// bitfield MESSAGENUMBER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
        namespace MessagenumberValC{
        }
    }
    namespace Noneif1cmsk{    ///< register IF1CMSK 
        using Addr = Register::Address<0x40063012,0xffffff00,0,unsigned>;
        /// bitfield WRRD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrrd{}; 
        namespace WrrdValC{
        }
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ARB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        namespace ArbValC{
        }
        /// bitfield CONTROL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        namespace ControlValC{
        }
        /// bitfield CIP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cip{}; 
        namespace CipValC{
        }
        /// bitfield NEWDAT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        /// bitfield DATAA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dataa{}; 
        namespace DataaValC{
        }
        /// bitfield DATAB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datab{}; 
        namespace DatabValC{
        }
    }
    namespace Noneif1msk1{    ///< register IF1MSK1 
        using Addr = Register::Address<0x40063014,0xffff0000,0,unsigned>;
        /// bitfield MSK15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk15{}; 
        namespace Msk15ValC{
        }
        /// bitfield MSK14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msk14{}; 
        namespace Msk14ValC{
        }
        /// bitfield MSK13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msk13{}; 
        namespace Msk13ValC{
        }
        /// bitfield MSK12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk12{}; 
        namespace Msk12ValC{
        }
        /// bitfield MSK11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk11{}; 
        namespace Msk11ValC{
        }
        /// bitfield MSK10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk10{}; 
        namespace Msk10ValC{
        }
        /// bitfield MSK9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk9{}; 
        namespace Msk9ValC{
        }
        /// bitfield MSK8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk8{}; 
        namespace Msk8ValC{
        }
        /// bitfield MSK7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk7{}; 
        namespace Msk7ValC{
        }
        /// bitfield MSK6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk6{}; 
        namespace Msk6ValC{
        }
        /// bitfield MSK5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk5{}; 
        namespace Msk5ValC{
        }
        /// bitfield MSK4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk4{}; 
        namespace Msk4ValC{
        }
        /// bitfield MSK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk3{}; 
        namespace Msk3ValC{
        }
        /// bitfield MSK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk2{}; 
        namespace Msk2ValC{
        }
        /// bitfield MSK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk1{}; 
        namespace Msk1ValC{
        }
        /// bitfield MSK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk0{}; 
        namespace Msk0ValC{
        }
    }
    namespace Noneif1msk2{    ///< register IF1MSK2 
        using Addr = Register::Address<0x40063016,0xffff2000,0,unsigned>;
        /// bitfield MXTD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        namespace MxtdValC{
        }
        /// bitfield MDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        namespace MdirValC{
        }
        /// bitfield MSK28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk28{}; 
        namespace Msk28ValC{
        }
        /// bitfield MSK27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk27{}; 
        namespace Msk27ValC{
        }
        /// bitfield MSK26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk26{}; 
        namespace Msk26ValC{
        }
        /// bitfield MSK25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk25{}; 
        namespace Msk25ValC{
        }
        /// bitfield MSK24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk24{}; 
        namespace Msk24ValC{
        }
        /// bitfield MSK23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk23{}; 
        namespace Msk23ValC{
        }
        /// bitfield MSK22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk22{}; 
        namespace Msk22ValC{
        }
        /// bitfield MSK21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk21{}; 
        namespace Msk21ValC{
        }
        /// bitfield MSK20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk20{}; 
        namespace Msk20ValC{
        }
        /// bitfield MSK19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk19{}; 
        namespace Msk19ValC{
        }
        /// bitfield MSK18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk18{}; 
        namespace Msk18ValC{
        }
        /// bitfield MSK17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk17{}; 
        namespace Msk17ValC{
        }
        /// bitfield MSK16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk16{}; 
        namespace Msk16ValC{
        }
    }
    namespace Noneif1arb1{    ///< register IF1ARB1 
        using Addr = Register::Address<0x40063018,0xffff0000,0,unsigned>;
        /// bitfield ID15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        namespace Id15ValC{
        }
        /// bitfield ID14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        namespace Id14ValC{
        }
        /// bitfield ID13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        namespace Id13ValC{
        }
        /// bitfield ID12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        namespace Id12ValC{
        }
        /// bitfield ID11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        namespace Id11ValC{
        }
        /// bitfield ID10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        namespace Id10ValC{
        }
        /// bitfield ID9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        namespace Id9ValC{
        }
        /// bitfield ID8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        namespace Id8ValC{
        }
        /// bitfield ID7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        namespace Id7ValC{
        }
        /// bitfield ID6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        namespace Id6ValC{
        }
        /// bitfield ID5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        namespace Id5ValC{
        }
        /// bitfield ID4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        namespace Id4ValC{
        }
        /// bitfield ID3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        namespace Id3ValC{
        }
        /// bitfield ID2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        namespace Id2ValC{
        }
        /// bitfield ID1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        namespace Id1ValC{
        }
        /// bitfield ID0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        namespace Id0ValC{
        }
    }
    namespace Noneif1arb2{    ///< register IF1ARB2 
        using Addr = Register::Address<0x4006301a,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        namespace MsgvalValC{
        }
        /// bitfield XTD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        namespace XtdValC{
        }
        /// bitfield DIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        /// bitfield ID28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id28{}; 
        namespace Id28ValC{
        }
        /// bitfield ID27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id27{}; 
        namespace Id27ValC{
        }
        /// bitfield ID26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id26{}; 
        namespace Id26ValC{
        }
        /// bitfield ID25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id25{}; 
        namespace Id25ValC{
        }
        /// bitfield ID24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id24{}; 
        namespace Id24ValC{
        }
        /// bitfield ID23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id23{}; 
        namespace Id23ValC{
        }
        /// bitfield ID22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id22{}; 
        namespace Id22ValC{
        }
        /// bitfield ID21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id21{}; 
        namespace Id21ValC{
        }
        /// bitfield ID20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id20{}; 
        namespace Id20ValC{
        }
        /// bitfield ID19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id19{}; 
        namespace Id19ValC{
        }
        /// bitfield ID18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id18{}; 
        namespace Id18ValC{
        }
        /// bitfield ID17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id17{}; 
        namespace Id17ValC{
        }
        /// bitfield ID16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id16{}; 
        namespace Id16ValC{
        }
    }
    namespace Noneif1mctr{    ///< register IF1MCTR 
        using Addr = Register::Address<0x4006301c,0xffff0070,0,unsigned>;
        /// bitfield NEWDAT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        /// bitfield MSGLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        namespace MsglstValC{
        }
        /// bitfield INTPND 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        namespace IntpndValC{
        }
        /// bitfield UMASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        namespace UmaskValC{
        }
        /// bitfield TXIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        /// bitfield RXIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        /// bitfield RMTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        namespace RmtenValC{
        }
        /// bitfield TXRQST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        namespace TxrqstValC{
        }
        /// bitfield EOB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        namespace EobValC{
        }
        /// bitfield DLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
    }
    namespace Noneif1dta1L{    ///< register IF1DTA1_L 
        using Addr = Register::Address<0x40063020,0xffff0000,0,unsigned>;
        /// bitfield DATA_1_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
        /// bitfield DATA_0_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
    }
    namespace Noneif1dta2L{    ///< register IF1DTA2_L 
        using Addr = Register::Address<0x40063022,0xffff0000,0,unsigned>;
        /// bitfield DATA_3_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
        /// bitfield DATA_2_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
    }
    namespace Noneif1dtb1L{    ///< register IF1DTB1_L 
        using Addr = Register::Address<0x40063024,0xffff0000,0,unsigned>;
        /// bitfield DATA_5_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
        /// bitfield DATA_4_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
    }
    namespace Noneif1dtb2L{    ///< register IF1DTB2_L 
        using Addr = Register::Address<0x40063026,0xffff0000,0,unsigned>;
        /// bitfield DATA_7_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
        /// bitfield DATA_6_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
    }
    namespace Noneif1dta2B{    ///< register IF1DTA2_B 
        using Addr = Register::Address<0x40063030,0xffff0000,0,unsigned>;
        /// bitfield DATA_2_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        /// bitfield DATA_3_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Noneif1dta1B{    ///< register IF1DTA1_B 
        using Addr = Register::Address<0x40063032,0xffff0000,0,unsigned>;
        /// bitfield DATA_0_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        /// bitfield DATA_1_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Noneif1dtb2B{    ///< register IF1DTB2_B 
        using Addr = Register::Address<0x40063034,0xffff0000,0,unsigned>;
        /// bitfield DATA_6_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        /// bitfield DATA_7_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Noneif1dtb1B{    ///< register IF1DTB1_B 
        using Addr = Register::Address<0x40063036,0xffff0000,0,unsigned>;
        /// bitfield DATA_4_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        /// bitfield DATA_5_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Noneif2creq{    ///< register IF2CREQ 
        using Addr = Register::Address<0x40063040,0xffff7f00,0,unsigned>;
        /// bitfield BUSY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        namespace BusyValC{
        }
        /// bitfield MESSAGENUMBER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
        namespace MessagenumberValC{
        }
    }
    namespace Noneif2cmsk{    ///< register IF2CMSK 
        using Addr = Register::Address<0x40063042,0xffffff00,0,unsigned>;
        /// bitfield WRRD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrrd{}; 
        namespace WrrdValC{
        }
        /// bitfield MASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        namespace MaskValC{
        }
        /// bitfield ARB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        namespace ArbValC{
        }
        /// bitfield CONTROL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        namespace ControlValC{
        }
        /// bitfield CIP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cip{}; 
        namespace CipValC{
        }
        /// bitfield NEWDAT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        /// bitfield DATAA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dataa{}; 
        namespace DataaValC{
        }
        /// bitfield DATAB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datab{}; 
        namespace DatabValC{
        }
    }
    namespace Noneif2msk1{    ///< register IF2MSK1 
        using Addr = Register::Address<0x40063044,0xffff0000,0,unsigned>;
        /// bitfield MSK15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk15{}; 
        namespace Msk15ValC{
        }
        /// bitfield MSK14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msk14{}; 
        namespace Msk14ValC{
        }
        /// bitfield MSK13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msk13{}; 
        namespace Msk13ValC{
        }
        /// bitfield MSK12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk12{}; 
        namespace Msk12ValC{
        }
        /// bitfield MSK11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk11{}; 
        namespace Msk11ValC{
        }
        /// bitfield MSK10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk10{}; 
        namespace Msk10ValC{
        }
        /// bitfield MSK9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk9{}; 
        namespace Msk9ValC{
        }
        /// bitfield MSK8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk8{}; 
        namespace Msk8ValC{
        }
        /// bitfield MSK7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk7{}; 
        namespace Msk7ValC{
        }
        /// bitfield MSK6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk6{}; 
        namespace Msk6ValC{
        }
        /// bitfield MSK5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk5{}; 
        namespace Msk5ValC{
        }
        /// bitfield MSK4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk4{}; 
        namespace Msk4ValC{
        }
        /// bitfield MSK3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk3{}; 
        namespace Msk3ValC{
        }
        /// bitfield MSK2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk2{}; 
        namespace Msk2ValC{
        }
        /// bitfield MSK1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk1{}; 
        namespace Msk1ValC{
        }
        /// bitfield MSK0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk0{}; 
        namespace Msk0ValC{
        }
    }
    namespace Noneif2msk2{    ///< register IF2MSK2 
        using Addr = Register::Address<0x40063046,0xffff2000,0,unsigned>;
        /// bitfield MXTD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        namespace MxtdValC{
        }
        /// bitfield MDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        namespace MdirValC{
        }
        /// bitfield MSK28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk28{}; 
        namespace Msk28ValC{
        }
        /// bitfield MSK27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk27{}; 
        namespace Msk27ValC{
        }
        /// bitfield MSK26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk26{}; 
        namespace Msk26ValC{
        }
        /// bitfield MSK25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk25{}; 
        namespace Msk25ValC{
        }
        /// bitfield MSK24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk24{}; 
        namespace Msk24ValC{
        }
        /// bitfield MSK23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk23{}; 
        namespace Msk23ValC{
        }
        /// bitfield MSK22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk22{}; 
        namespace Msk22ValC{
        }
        /// bitfield MSK21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk21{}; 
        namespace Msk21ValC{
        }
        /// bitfield MSK20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk20{}; 
        namespace Msk20ValC{
        }
        /// bitfield MSK19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk19{}; 
        namespace Msk19ValC{
        }
        /// bitfield MSK18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk18{}; 
        namespace Msk18ValC{
        }
        /// bitfield MSK17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk17{}; 
        namespace Msk17ValC{
        }
        /// bitfield MSK16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk16{}; 
        namespace Msk16ValC{
        }
    }
    namespace Noneif2arb1{    ///< register IF2ARB1 
        using Addr = Register::Address<0x40063048,0xffff0000,0,unsigned>;
        /// bitfield ID15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        namespace Id15ValC{
        }
        /// bitfield ID14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        namespace Id14ValC{
        }
        /// bitfield ID13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        namespace Id13ValC{
        }
        /// bitfield ID12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        namespace Id12ValC{
        }
        /// bitfield ID11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        namespace Id11ValC{
        }
        /// bitfield ID10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        namespace Id10ValC{
        }
        /// bitfield ID9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        namespace Id9ValC{
        }
        /// bitfield ID8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        namespace Id8ValC{
        }
        /// bitfield ID7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        namespace Id7ValC{
        }
        /// bitfield ID6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        namespace Id6ValC{
        }
        /// bitfield ID5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        namespace Id5ValC{
        }
        /// bitfield ID4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        namespace Id4ValC{
        }
        /// bitfield ID3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        namespace Id3ValC{
        }
        /// bitfield ID2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        namespace Id2ValC{
        }
        /// bitfield ID1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        namespace Id1ValC{
        }
        /// bitfield ID0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        namespace Id0ValC{
        }
    }
    namespace Noneif2arb2{    ///< register IF2ARB2 
        using Addr = Register::Address<0x4006304a,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        namespace MsgvalValC{
        }
        /// bitfield XTD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        namespace XtdValC{
        }
        /// bitfield DIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        namespace DirValC{
        }
        /// bitfield ID28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id28{}; 
        namespace Id28ValC{
        }
        /// bitfield ID27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id27{}; 
        namespace Id27ValC{
        }
        /// bitfield ID26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id26{}; 
        namespace Id26ValC{
        }
        /// bitfield ID25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id25{}; 
        namespace Id25ValC{
        }
        /// bitfield ID24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id24{}; 
        namespace Id24ValC{
        }
        /// bitfield ID23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id23{}; 
        namespace Id23ValC{
        }
        /// bitfield ID22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id22{}; 
        namespace Id22ValC{
        }
        /// bitfield ID21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id21{}; 
        namespace Id21ValC{
        }
        /// bitfield ID20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id20{}; 
        namespace Id20ValC{
        }
        /// bitfield ID19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id19{}; 
        namespace Id19ValC{
        }
        /// bitfield ID18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id18{}; 
        namespace Id18ValC{
        }
        /// bitfield ID17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id17{}; 
        namespace Id17ValC{
        }
        /// bitfield ID16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id16{}; 
        namespace Id16ValC{
        }
    }
    namespace Noneif2mctr{    ///< register IF2MCTR 
        using Addr = Register::Address<0x4006304c,0xffff0070,0,unsigned>;
        /// bitfield NEWDAT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        namespace NewdatValC{
        }
        /// bitfield MSGLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        namespace MsglstValC{
        }
        /// bitfield INTPND 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        namespace IntpndValC{
        }
        /// bitfield UMASK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        namespace UmaskValC{
        }
        /// bitfield TXIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        namespace TxieValC{
        }
        /// bitfield RXIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        namespace RxieValC{
        }
        /// bitfield RMTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        namespace RmtenValC{
        }
        /// bitfield TXRQST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        namespace TxrqstValC{
        }
        /// bitfield EOB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        namespace EobValC{
        }
        /// bitfield DLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
        namespace DlcValC{
        }
    }
    namespace Noneif2dta1L{    ///< register IF2DTA1_L 
        using Addr = Register::Address<0x40063050,0xffff0000,0,unsigned>;
        /// bitfield DATA_1_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
        /// bitfield DATA_0_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
    }
    namespace Noneif2dta2L{    ///< register IF2DTA2_L 
        using Addr = Register::Address<0x40063052,0xffff0000,0,unsigned>;
        /// bitfield DATA_3_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
        /// bitfield DATA_2_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
    }
    namespace Noneif2dtb1L{    ///< register IF2DTB1_L 
        using Addr = Register::Address<0x40063054,0xffff0000,0,unsigned>;
        /// bitfield DATA_5_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
        /// bitfield DATA_4_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
    }
    namespace Noneif2dtb2L{    ///< register IF2DTB2_L 
        using Addr = Register::Address<0x40063056,0xffff0000,0,unsigned>;
        /// bitfield DATA_7_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
        /// bitfield DATA_6_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
    }
    namespace Noneif2dta2B{    ///< register IF2DTA2_B 
        using Addr = Register::Address<0x40063060,0xffff0000,0,unsigned>;
        /// bitfield DATA_2_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        namespace Data2ValC{
        }
        /// bitfield DATA_3_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data3{}; 
        namespace Data3ValC{
        }
    }
    namespace Noneif2dta1B{    ///< register IF2DTA1_B 
        using Addr = Register::Address<0x40063062,0xffff0000,0,unsigned>;
        /// bitfield DATA_0_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data0{}; 
        namespace Data0ValC{
        }
        /// bitfield DATA_1_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
        namespace Data1ValC{
        }
    }
    namespace Noneif2dtb2B{    ///< register IF2DTB2_B 
        using Addr = Register::Address<0x40063064,0xffff0000,0,unsigned>;
        /// bitfield DATA_6_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        namespace Data6ValC{
        }
        /// bitfield DATA_7_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data7{}; 
        namespace Data7ValC{
        }
    }
    namespace Noneif2dtb1B{    ///< register IF2DTB1_B 
        using Addr = Register::Address<0x40063066,0xffff0000,0,unsigned>;
        /// bitfield DATA_4_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data4{}; 
        namespace Data4ValC{
        }
        /// bitfield DATA_5_ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
        namespace Data5ValC{
        }
    }
    namespace Nonetreqr1{    ///< register TREQR1 
        using Addr = Register::Address<0x40063080,0xffff0000,0,unsigned>;
        /// bitfield TXRQST16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txrqst16{}; 
        namespace Txrqst16ValC{
        }
        /// bitfield TXRQST15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txrqst15{}; 
        namespace Txrqst15ValC{
        }
        /// bitfield TXRQST14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txrqst14{}; 
        namespace Txrqst14ValC{
        }
        /// bitfield TXRQST13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txrqst13{}; 
        namespace Txrqst13ValC{
        }
        /// bitfield TXRQST12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrqst12{}; 
        namespace Txrqst12ValC{
        }
        /// bitfield TXRQST11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txrqst11{}; 
        namespace Txrqst11ValC{
        }
        /// bitfield TXRQST10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrqst10{}; 
        namespace Txrqst10ValC{
        }
        /// bitfield TXRQST9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst9{}; 
        namespace Txrqst9ValC{
        }
        /// bitfield TXRQST8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txrqst8{}; 
        namespace Txrqst8ValC{
        }
        /// bitfield TXRQST7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txrqst7{}; 
        namespace Txrqst7ValC{
        }
        /// bitfield TXRQST6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrqst6{}; 
        namespace Txrqst6ValC{
        }
        /// bitfield TXRQST5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txrqst5{}; 
        namespace Txrqst5ValC{
        }
        /// bitfield TXRQST4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txrqst4{}; 
        namespace Txrqst4ValC{
        }
        /// bitfield TXRQST3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqst3{}; 
        namespace Txrqst3ValC{
        }
        /// bitfield TXRQST2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrqst2{}; 
        namespace Txrqst2ValC{
        }
        /// bitfield TXRQST1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrqst1{}; 
        namespace Txrqst1ValC{
        }
    }
    namespace Nonetreqr2{    ///< register TREQR2 
        using Addr = Register::Address<0x40063082,0xffff0000,0,unsigned>;
        /// bitfield TXRQST32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txrqst32{}; 
        namespace Txrqst32ValC{
        }
        /// bitfield TXRQST31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txrqst31{}; 
        namespace Txrqst31ValC{
        }
        /// bitfield TXRQST30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txrqst30{}; 
        namespace Txrqst30ValC{
        }
        /// bitfield TXRQST29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txrqst29{}; 
        namespace Txrqst29ValC{
        }
        /// bitfield TXRQST28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrqst28{}; 
        namespace Txrqst28ValC{
        }
        /// bitfield TXRQST27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txrqst27{}; 
        namespace Txrqst27ValC{
        }
        /// bitfield TXRQST26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrqst26{}; 
        namespace Txrqst26ValC{
        }
        /// bitfield TXRQST25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst25{}; 
        namespace Txrqst25ValC{
        }
        /// bitfield TXRQST24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txrqst24{}; 
        namespace Txrqst24ValC{
        }
        /// bitfield TXRQST23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txrqst23{}; 
        namespace Txrqst23ValC{
        }
        /// bitfield TXRQST22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrqst22{}; 
        namespace Txrqst22ValC{
        }
        /// bitfield TXRQST21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txrqst21{}; 
        namespace Txrqst21ValC{
        }
        /// bitfield TXRQST20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txrqst20{}; 
        namespace Txrqst20ValC{
        }
        /// bitfield TXRQST19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqst19{}; 
        namespace Txrqst19ValC{
        }
        /// bitfield TXRQST18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrqst18{}; 
        namespace Txrqst18ValC{
        }
        /// bitfield TXRQST17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrqst17{}; 
        namespace Txrqst17ValC{
        }
    }
    namespace Nonenewdt1{    ///< register NEWDT1 
        using Addr = Register::Address<0x40063090,0xffff0000,0,unsigned>;
        /// bitfield NEWDAT16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat16{}; 
        namespace Newdat16ValC{
        }
        /// bitfield NEWDAT15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> newdat15{}; 
        namespace Newdat15ValC{
        }
        /// bitfield NEWDAT14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> newdat14{}; 
        namespace Newdat14ValC{
        }
        /// bitfield NEWDAT13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> newdat13{}; 
        namespace Newdat13ValC{
        }
        /// bitfield NEWDAT12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> newdat12{}; 
        namespace Newdat12ValC{
        }
        /// bitfield NEWDAT11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> newdat11{}; 
        namespace Newdat11ValC{
        }
        /// bitfield NEWDAT10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> newdat10{}; 
        namespace Newdat10ValC{
        }
        /// bitfield NEWDAT9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> newdat9{}; 
        namespace Newdat9ValC{
        }
        /// bitfield NEWDAT8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> newdat8{}; 
        namespace Newdat8ValC{
        }
        /// bitfield NEWDAT7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> newdat7{}; 
        namespace Newdat7ValC{
        }
        /// bitfield NEWDAT6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> newdat6{}; 
        namespace Newdat6ValC{
        }
        /// bitfield NEWDAT5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> newdat5{}; 
        namespace Newdat5ValC{
        }
        /// bitfield NEWDAT4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> newdat4{}; 
        namespace Newdat4ValC{
        }
        /// bitfield NEWDAT3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat3{}; 
        namespace Newdat3ValC{
        }
        /// bitfield NEWDAT2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newdat2{}; 
        namespace Newdat2ValC{
        }
        /// bitfield NEWDAT1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> newdat1{}; 
        namespace Newdat1ValC{
        }
    }
    namespace Nonenewdt2{    ///< register NEWDT2 
        using Addr = Register::Address<0x40063092,0xffff0000,0,unsigned>;
        /// bitfield NEWDAT32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat32{}; 
        namespace Newdat32ValC{
        }
        /// bitfield NEWDAT31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> newdat31{}; 
        namespace Newdat31ValC{
        }
        /// bitfield NEWDAT30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> newdat30{}; 
        namespace Newdat30ValC{
        }
        /// bitfield NEWDAT29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> newdat29{}; 
        namespace Newdat29ValC{
        }
        /// bitfield NEWDAT28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> newdat28{}; 
        namespace Newdat28ValC{
        }
        /// bitfield NEWDAT27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> newdat27{}; 
        namespace Newdat27ValC{
        }
        /// bitfield NEWDAT26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> newdat26{}; 
        namespace Newdat26ValC{
        }
        /// bitfield NEWDAT25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> newdat25{}; 
        namespace Newdat25ValC{
        }
        /// bitfield NEWDAT24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> newdat24{}; 
        namespace Newdat24ValC{
        }
        /// bitfield NEWDAT23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> newdat23{}; 
        namespace Newdat23ValC{
        }
        /// bitfield NEWDAT22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> newdat22{}; 
        namespace Newdat22ValC{
        }
        /// bitfield NEWDAT21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> newdat21{}; 
        namespace Newdat21ValC{
        }
        /// bitfield NEWDAT20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> newdat20{}; 
        namespace Newdat20ValC{
        }
        /// bitfield NEWDAT19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat19{}; 
        namespace Newdat19ValC{
        }
        /// bitfield NEWDAT18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newdat18{}; 
        namespace Newdat18ValC{
        }
        /// bitfield NEWDAT17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> newdat17{}; 
        namespace Newdat17ValC{
        }
    }
    namespace Noneintpnd1{    ///< register INTPND1 
        using Addr = Register::Address<0x400630a0,0xffff0000,0,unsigned>;
        /// bitfield INTPND16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intpnd16{}; 
        namespace Intpnd16ValC{
        }
        /// bitfield INTPND15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> intpnd15{}; 
        namespace Intpnd15ValC{
        }
        /// bitfield INTPND14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd14{}; 
        namespace Intpnd14ValC{
        }
        /// bitfield INTPND13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> intpnd13{}; 
        namespace Intpnd13ValC{
        }
        /// bitfield INTPND12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> intpnd12{}; 
        namespace Intpnd12ValC{
        }
        /// bitfield INTPND11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intpnd11{}; 
        namespace Intpnd11ValC{
        }
        /// bitfield INTPND10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intpnd10{}; 
        namespace Intpnd10ValC{
        }
        /// bitfield INTPND9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intpnd9{}; 
        namespace Intpnd9ValC{
        }
        /// bitfield INTPND8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intpnd8{}; 
        namespace Intpnd8ValC{
        }
        /// bitfield INTPND7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intpnd7{}; 
        namespace Intpnd7ValC{
        }
        /// bitfield INTPND6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intpnd6{}; 
        namespace Intpnd6ValC{
        }
        /// bitfield INTPND5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intpnd5{}; 
        namespace Intpnd5ValC{
        }
        /// bitfield INTPND4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intpnd4{}; 
        namespace Intpnd4ValC{
        }
        /// bitfield INTPND3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intpnd3{}; 
        namespace Intpnd3ValC{
        }
        /// bitfield INTPND2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intpnd2{}; 
        namespace Intpnd2ValC{
        }
        /// bitfield INTPND1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intpnd1{}; 
        namespace Intpnd1ValC{
        }
    }
    namespace Noneintpnd2{    ///< register INTPND2 
        using Addr = Register::Address<0x400630a2,0xffff0000,0,unsigned>;
        /// bitfield INTPND32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intpnd32{}; 
        namespace Intpnd32ValC{
        }
        /// bitfield INTPND31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> intpnd31{}; 
        namespace Intpnd31ValC{
        }
        /// bitfield INTPND30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd30{}; 
        namespace Intpnd30ValC{
        }
        /// bitfield INTPND29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> intpnd29{}; 
        namespace Intpnd29ValC{
        }
        /// bitfield INTPND28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> intpnd28{}; 
        namespace Intpnd28ValC{
        }
        /// bitfield INTPND27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intpnd27{}; 
        namespace Intpnd27ValC{
        }
        /// bitfield INTPND26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intpnd26{}; 
        namespace Intpnd26ValC{
        }
        /// bitfield INTPND25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intpnd25{}; 
        namespace Intpnd25ValC{
        }
        /// bitfield INTPND24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intpnd24{}; 
        namespace Intpnd24ValC{
        }
        /// bitfield INTPND23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intpnd23{}; 
        namespace Intpnd23ValC{
        }
        /// bitfield INTPND22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intpnd22{}; 
        namespace Intpnd22ValC{
        }
        /// bitfield INTPND21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intpnd21{}; 
        namespace Intpnd21ValC{
        }
        /// bitfield INTPND20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intpnd20{}; 
        namespace Intpnd20ValC{
        }
        /// bitfield INTPND19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intpnd19{}; 
        namespace Intpnd19ValC{
        }
        /// bitfield INTPND18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intpnd18{}; 
        namespace Intpnd18ValC{
        }
        /// bitfield INTPND17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intpnd17{}; 
        namespace Intpnd17ValC{
        }
    }
    namespace Nonemsgval1{    ///< register MSGVAL1 
        using Addr = Register::Address<0x400630b0,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL16 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval16{}; 
        namespace Msgval16ValC{
        }
        /// bitfield MSGVAL15 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msgval15{}; 
        namespace Msgval15ValC{
        }
        /// bitfield MSGVAL14 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msgval14{}; 
        namespace Msgval14ValC{
        }
        /// bitfield MSGVAL13 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msgval13{}; 
        namespace Msgval13ValC{
        }
        /// bitfield MSGVAL12 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msgval12{}; 
        namespace Msgval12ValC{
        }
        /// bitfield MSGVAL11 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msgval11{}; 
        namespace Msgval11ValC{
        }
        /// bitfield MSGVAL10 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msgval10{}; 
        namespace Msgval10ValC{
        }
        /// bitfield MSGVAL9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msgval9{}; 
        namespace Msgval9ValC{
        }
        /// bitfield MSGVAL8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msgval8{}; 
        namespace Msgval8ValC{
        }
        /// bitfield MSGVAL7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msgval7{}; 
        namespace Msgval7ValC{
        }
        /// bitfield MSGVAL6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msgval6{}; 
        namespace Msgval6ValC{
        }
        /// bitfield MSGVAL5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msgval5{}; 
        namespace Msgval5ValC{
        }
        /// bitfield MSGVAL4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msgval4{}; 
        namespace Msgval4ValC{
        }
        /// bitfield MSGVAL3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msgval3{}; 
        namespace Msgval3ValC{
        }
        /// bitfield MSGVAL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msgval2{}; 
        namespace Msgval2ValC{
        }
        /// bitfield MSGVAL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msgval1{}; 
        namespace Msgval1ValC{
        }
    }
    namespace Nonemsgval2{    ///< register MSGVAL2 
        using Addr = Register::Address<0x400630b2,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval32{}; 
        namespace Msgval32ValC{
        }
        /// bitfield MSGVAL31 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msgval31{}; 
        namespace Msgval31ValC{
        }
        /// bitfield MSGVAL30 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msgval30{}; 
        namespace Msgval30ValC{
        }
        /// bitfield MSGVAL29 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msgval29{}; 
        namespace Msgval29ValC{
        }
        /// bitfield MSGVAL28 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msgval28{}; 
        namespace Msgval28ValC{
        }
        /// bitfield MSGVAL27 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msgval27{}; 
        namespace Msgval27ValC{
        }
        /// bitfield MSGVAL26 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msgval26{}; 
        namespace Msgval26ValC{
        }
        /// bitfield MSGVAL25 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msgval25{}; 
        namespace Msgval25ValC{
        }
        /// bitfield MSGVAL24 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msgval24{}; 
        namespace Msgval24ValC{
        }
        /// bitfield MSGVAL23 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msgval23{}; 
        namespace Msgval23ValC{
        }
        /// bitfield MSGVAL22 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msgval22{}; 
        namespace Msgval22ValC{
        }
        /// bitfield MSGVAL21 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msgval21{}; 
        namespace Msgval21ValC{
        }
        /// bitfield MSGVAL20 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msgval20{}; 
        namespace Msgval20ValC{
        }
        /// bitfield MSGVAL19 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msgval19{}; 
        namespace Msgval19ValC{
        }
        /// bitfield MSGVAL18 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msgval18{}; 
        namespace Msgval18ValC{
        }
        /// bitfield MSGVAL17 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msgval17{}; 
        namespace Msgval17ValC{
        }
    }
}
