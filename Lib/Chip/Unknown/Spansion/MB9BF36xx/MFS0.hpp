#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFS0 
    namespace NoneuartScr{    ///< register UART_SCR 
        using Addr = Register::Address<0x40038001,0xffffff60,0,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        namespace UpclValC{
        }
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        /// bitfield RXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        /// bitfield TXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace NoneuartSmr{    ///< register UART_SMR 
        using Addr = Register::Address<0x40038000,0xffffff12,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        /// bitfield SBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        namespace SblValC{
        }
        /// bitfield BDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        namespace BdsValC{
        }
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
        namespace SoeValC{
        }
    }
    namespace NoneuartSsr{    ///< register UART_SSR 
        using Addr = Register::Address<0x40038005,0xffffff40,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        namespace PeValC{
        }
        /// bitfield FRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        namespace FreValC{
        }
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace NoneuartEscr{    ///< register UART_ESCR 
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        /// bitfield FLWEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flwen{}; 
        namespace FlwenValC{
        }
        /// bitfield ESBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        namespace EsblValC{
        }
        /// bitfield INV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inv{}; 
        namespace InvValC{
        }
        /// bitfield PEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen{}; 
        namespace PenValC{
        }
        /// bitfield P 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p{}; 
        namespace PValC{
        }
        /// bitfield L 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
        namespace LValC{
        }
    }
    namespace NoneuartRdr{    ///< register UART_RDR 
        using Addr = Register::Address<0x40038008,0xfffffe00,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NoneuartTdr{    ///< register UART_TDR 
        using Addr = Register::Address<0x40038008,0xfffffe00,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NoneuartBgr{    ///< register UART_BGR 
        using Addr = Register::Address<0x4003800c,0xffff0000,0,unsigned>;
        /// bitfield EXT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace NoneuartFcr1{    ///< register UART_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace NoneuartFcr0{    ///< register UART_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace NoneuartFbyte1{    ///< register UART_FBYTE1 
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NoneuartFbyte2{    ///< register UART_FBYTE2 
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioScr{    ///< register CSIO_SCR 
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        namespace UpclValC{
        }
        /// bitfield MS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        namespace MsValC{
        }
        /// bitfield SPI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi{}; 
        namespace SpiValC{
        }
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        /// bitfield RXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        /// bitfield TXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace NonecsioSmr{    ///< register CSIO_SMR 
        using Addr = Register::Address<0x40038000,0xffffff10,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        /// bitfield SCINV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        namespace ScinvValC{
        }
        /// bitfield BDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        namespace BdsValC{
        }
        /// bitfield SCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        namespace SckeValC{
        }
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
        namespace SoeValC{
        }
    }
    namespace NonecsioSsr{    ///< register CSIO_SSR 
        using Addr = Register::Address<0x40038005,0xffffff60,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        /// bitfield AWC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awc{}; 
        namespace AwcValC{
        }
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace NonecsioEscr{    ///< register CSIO_ESCR 
        using Addr = Register::Address<0x40038004,0xffffff20,0,unsigned char>;
        /// bitfield SOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        namespace SopValC{
        }
        /// bitfield L3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> l3{}; 
        namespace L3ValC{
        }
        /// bitfield WT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        namespace WtValC{
        }
        /// bitfield L 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
        namespace LValC{
        }
    }
    namespace NonecsioRdr{    ///< register CSIO_RDR 
        using Addr = Register::Address<0x40038008,0xffff0000,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonecsioTdr{    ///< register CSIO_TDR 
        using Addr = Register::Address<0x40038008,0xffff0000,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonecsioBgr{    ///< register CSIO_BGR 
        using Addr = Register::Address<0x4003800c,0xffff8000,0,unsigned>;
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace NonecsioFcr1{    ///< register CSIO_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace NonecsioFcr0{    ///< register CSIO_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace NonecsioFbyte1{    ///< register CSIO_FBYTE1 
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioFbyte2{    ///< register CSIO_FBYTE2 
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioScstr0{    ///< register CSIO_SCSTR0 
        using Addr = Register::Address<0x4003801c,0xffffff00,0,unsigned char>;
        /// bitfield CSHD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cshd{}; 
        namespace CshdValC{
        }
    }
    namespace NonecsioScstr1{    ///< register CSIO_SCSTR1 
        using Addr = Register::Address<0x4003801d,0xffffff00,0,unsigned char>;
        /// bitfield CSSU 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cssu{}; 
        namespace CssuValC{
        }
    }
    namespace NonecsioScstr2{    ///< register CSIO_SCSTR2 
        using Addr = Register::Address<0x40038020,0xffff0000,0,unsigned>;
        /// bitfield CSDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csds{}; 
        namespace CsdsValC{
        }
    }
    namespace NonecsioScstr3{    ///< register CSIO_SCSTR3 
        using Addr = Register::Address<0x40038021,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioSacsr{    ///< register CSIO_SACSR 
        using Addr = Register::Address<0x40038024,0xffffc620,0,unsigned>;
        /// bitfield TBEEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tbeen{}; 
        namespace TbeenValC{
        }
        /// bitfield CSEIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cseie{}; 
        namespace CseieValC{
        }
        /// bitfield CSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cse{}; 
        namespace CseValC{
        }
        /// bitfield TINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint{}; 
        namespace TintValC{
        }
        /// bitfield TINTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tinte{}; 
        namespace TinteValC{
        }
        /// bitfield TSYNE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tsyne{}; 
        namespace TsyneValC{
        }
        /// bitfield TDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> tdiv{}; 
        namespace TdivValC{
        }
        /// bitfield TMRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmre{}; 
        namespace TmreValC{
        }
    }
    namespace NonecsioStmr{    ///< register CSIO_STMR 
        using Addr = Register::Address<0x40038028,0xffff0000,0,unsigned>;
        /// bitfield TM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tm{}; 
        namespace TmValC{
        }
    }
    namespace NonecsioStmcr{    ///< register CSIO_STMCR 
        using Addr = Register::Address<0x4003802c,0xffff0000,0,unsigned>;
        /// bitfield TC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tc{}; 
        namespace TcValC{
        }
    }
    namespace NonecsioScscr{    ///< register CSIO_SCSCR 
        using Addr = Register::Address<0x40038030,0xfffffc1c,0,unsigned>;
        /// bitfield SCAM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scam{}; 
        namespace ScamValC{
        }
        /// bitfield CDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cdiv{}; 
        namespace CdivValC{
        }
        /// bitfield CSLVL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cslvl{}; 
        namespace CslvlValC{
        }
        /// bitfield CSEN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csen0{}; 
        namespace Csen0ValC{
        }
        /// bitfield CSOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csoe{}; 
        namespace CsoeValC{
        }
    }
    namespace NonecsioTbyte0{    ///< register CSIO_TBYTE0 
        using Addr = Register::Address<0x4003803c,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioTbyte1{    ///< register CSIO_TBYTE1 
        using Addr = Register::Address<0x4003803d,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioTbyte2{    ///< register CSIO_TBYTE2 
        using Addr = Register::Address<0x40038040,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioTbyte3{    ///< register CSIO_TBYTE3 
        using Addr = Register::Address<0x40038041,0xffffffff,0,unsigned char>;
    }
    namespace NonelinScr{    ///< register LIN_SCR 
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        namespace UpclValC{
        }
        /// bitfield MS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        namespace MsValC{
        }
        /// bitfield LBR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbr{}; 
        namespace LbrValC{
        }
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        /// bitfield RXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        namespace RxeValC{
        }
        /// bitfield TXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
        namespace TxeValC{
        }
    }
    namespace NonelinSmr{    ///< register LIN_SMR 
        using Addr = Register::Address<0x40038000,0xffffff06,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        /// bitfield WUCR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        namespace WucrValC{
        }
        /// bitfield SBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        namespace SblValC{
        }
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
        namespace SoeValC{
        }
    }
    namespace NonelinSsr{    ///< register LIN_SSR 
        using Addr = Register::Address<0x40038005,0xffffff40,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        /// bitfield LBD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbd{}; 
        namespace LbdValC{
        }
        /// bitfield FRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        namespace FreValC{
        }
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace NonelinEscr{    ///< register LIN_ESCR 
        using Addr = Register::Address<0x40038004,0xffffffa0,0,unsigned char>;
        /// bitfield ESBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        namespace EsblValC{
        }
        /// bitfield LBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbie{}; 
        namespace LbieValC{
        }
        /// bitfield LBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> lbl{}; 
        namespace LblValC{
        }
        /// bitfield DEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> del{}; 
        namespace DelValC{
        }
    }
    namespace NonelinRdr{    ///< register LIN_RDR 
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonelinTdr{    ///< register LIN_TDR 
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace NonelinBgr{    ///< register LIN_BGR 
        using Addr = Register::Address<0x4003800c,0xffff0000,0,unsigned>;
        /// bitfield EXT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        namespace ExtValC{
        }
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace NonelinFcr1{    ///< register LIN_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace NonelinFcr0{    ///< register LIN_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace NonelinFbyte1{    ///< register LIN_FBYTE1 
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NonelinFbyte2{    ///< register LIN_FBYTE2 
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cIbcr{    ///< register I2C_IBCR 
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        /// bitfield MSS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mss{}; 
        namespace MssValC{
        }
        /// bitfield ACT_SCC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> actScc{}; 
        namespace ActsccValC{
        }
        /// bitfield ACKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acke{}; 
        namespace AckeValC{
        }
        /// bitfield WSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wsel{}; 
        namespace WselValC{
        }
        /// bitfield CNDE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cnde{}; 
        namespace CndeValC{
        }
        /// bitfield INTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inte{}; 
        namespace InteValC{
        }
        /// bitfield BER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ber{}; 
        namespace BerValC{
        }
        /// bitfield INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int_{}; 
        namespace Int_ValC{
        }
    }
    namespace Nonei2cSmr{    ///< register I2C_SMR 
        using Addr = Register::Address<0x40038000,0xffffff13,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        namespace MdValC{
        }
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        namespace RieValC{
        }
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
        namespace TieValC{
        }
    }
    namespace Nonei2cIbsr{    ///< register I2C_IBSR 
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        /// bitfield FBT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fbt{}; 
        namespace FbtValC{
        }
        /// bitfield RACK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rack{}; 
        namespace RackValC{
        }
        /// bitfield RSA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsa{}; 
        namespace RsaValC{
        }
        /// bitfield TRX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trx{}; 
        namespace TrxValC{
        }
        /// bitfield AL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> al{}; 
        namespace AlValC{
        }
        /// bitfield RSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsc{}; 
        namespace RscValC{
        }
        /// bitfield SPC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spc{}; 
        namespace SpcValC{
        }
        /// bitfield BB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bb{}; 
        namespace BbValC{
        }
    }
    namespace Nonei2cSsr{    ///< register I2C_SSR 
        using Addr = Register::Address<0x40038005,0xffffff00,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        namespace RecValC{
        }
        /// bitfield TSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tset{}; 
        namespace TsetValC{
        }
        /// bitfield DMA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dma{}; 
        namespace DmaValC{
        }
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbie{}; 
        namespace TbieValC{
        }
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        namespace OreValC{
        }
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        namespace RdrfValC{
        }
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        namespace TdreValC{
        }
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
        namespace TbiValC{
        }
    }
    namespace Nonei2cRdr{    ///< register I2C_RDR 
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonei2cTdr{    ///< register I2C_TDR 
        using Addr = Register::Address<0x40038008,0xffffff00,0,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> d{}; 
        namespace DValC{
        }
    }
    namespace Nonei2cBgr{    ///< register I2C_BGR 
        using Addr = Register::Address<0x4003800c,0xffff8000,0,unsigned>;
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        namespace Bgr1ValC{
        }
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
        namespace Bgr0ValC{
        }
    }
    namespace Nonei2cIsmk{    ///< register I2C_ISMK 
        using Addr = Register::Address<0x40038011,0xffffff00,0,unsigned char>;
        /// bitfield EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        namespace EnValC{
        }
        /// bitfield SM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
        namespace SmValC{
        }
    }
    namespace Nonei2cIsba{    ///< register I2C_ISBA 
        using Addr = Register::Address<0x40038010,0xffffff00,0,unsigned char>;
        /// bitfield SAEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        namespace SaenValC{
        }
        /// bitfield SA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
        namespace SaValC{
        }
    }
    namespace Nonei2cFcr1{    ///< register I2C_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        namespace FlsteValC{
        }
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        namespace FriieValC{
        }
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        namespace FdrqValC{
        }
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        namespace FtieValC{
        }
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
        namespace FselValC{
        }
    }
    namespace Nonei2cFcr0{    ///< register I2C_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        namespace FlstValC{
        }
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        namespace FldValC{
        }
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        namespace FsetValC{
        }
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        namespace Fcl2ValC{
        }
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        namespace Fcl1ValC{
        }
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        namespace Fe2ValC{
        }
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
        namespace Fe1ValC{
        }
    }
    namespace Nonei2cFbyte1{    ///< register I2C_FBYTE1 
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cFbyte2{    ///< register I2C_FBYTE2 
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cNfcr{    ///< register I2C_NFCR 
        using Addr = Register::Address<0x4003801c,0xffffffe0,0,unsigned char>;
        /// bitfield NFT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nft{}; 
        namespace NftValC{
        }
    }
    namespace Nonei2cEibcr{    ///< register I2C_EIBCR 
        using Addr = Register::Address<0x4003801d,0xffffffc0,0,unsigned char>;
        /// bitfield SDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sdas{}; 
        namespace SdasValC{
        }
        /// bitfield SCLS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scls{}; 
        namespace SclsValC{
        }
        /// bitfield SDAC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdac{}; 
        namespace SdacValC{
        }
        /// bitfield SCLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sclc{}; 
        namespace SclcValC{
        }
        /// bitfield SOCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soce{}; 
        namespace SoceValC{
        }
        /// bitfield BEC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bec{}; 
        namespace BecValC{
        }
    }
}
