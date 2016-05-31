#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral MFS0 
    namespace Mfs8UartScr{    ///< register UART_SCR 
        using Addr = Register::Address<0x40038801,0xffffff60,0x00000000,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield RXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        /// bitfield TXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Mfs8UartSmr{    ///< register UART_SMR 
        using Addr = Register::Address<0x40038800,0xffffff12,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield SBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        /// bitfield BDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs8UartSsr{    ///< register UART_SSR 
        using Addr = Register::Address<0x40038805,0xffffff40,0x00000000,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield PE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pe{}; 
        /// bitfield FRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fre{}; 
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs8UartEscr{    ///< register UART_ESCR 
        using Addr = Register::Address<0x40038804,0xffffff00,0x00000000,unsigned char>;
        /// bitfield FLWEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flwen{}; 
        /// bitfield ESBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        /// bitfield INV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inv{}; 
        /// bitfield PEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen{}; 
        /// bitfield P 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p{}; 
        /// bitfield L 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace Mfs8UartRdr{    ///< register UART_RDR 
        using Addr = Register::Address<0x40038808,0xfffffe00,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8UartTdr{    ///< register UART_TDR 
        using Addr = Register::Address<0x40038808,0xfffffe00,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8UartBgr{    ///< register UART_BGR 
        using Addr = Register::Address<0x4003880c,0xffff0000,0x00000000,unsigned>;
        /// bitfield EXT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs8UartFcr1{    ///< register UART_FCR1 
        using Addr = Register::Address<0x40038815,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs8UartFcr0{    ///< register UART_FCR0 
        using Addr = Register::Address<0x40038814,0xffffff80,0x00000000,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs8UartFbyte1{    ///< register UART_FBYTE1 
        using Addr = Register::Address<0x40038818,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8UartFbyte2{    ///< register UART_FBYTE2 
        using Addr = Register::Address<0x40038819,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioScr{    ///< register CSIO_SCR 
        using Addr = Register::Address<0x40038801,0xffffff00,0x00000000,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        /// bitfield MS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        /// bitfield SPI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi{}; 
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield RXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        /// bitfield TXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Mfs8CsioSmr{    ///< register CSIO_SMR 
        using Addr = Register::Address<0x40038800,0xffffff10,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield SCINV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        /// bitfield BDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        /// bitfield SCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs8CsioSsr{    ///< register CSIO_SSR 
        using Addr = Register::Address<0x40038805,0xffffff60,0x00000000,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield AWC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> awc{}; 
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs8CsioEscr{    ///< register CSIO_ESCR 
        using Addr = Register::Address<0x40038804,0xffffff20,0x00000000,unsigned char>;
        /// bitfield SOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        /// bitfield L3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> l3{}; 
        /// bitfield WT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        /// bitfield L 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace Mfs8CsioRdr{    ///< register CSIO_RDR 
        using Addr = Register::Address<0x40038808,0xffff0000,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8CsioTdr{    ///< register CSIO_TDR 
        using Addr = Register::Address<0x40038808,0xffff0000,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8CsioBgr{    ///< register CSIO_BGR 
        using Addr = Register::Address<0x4003880c,0xffff8000,0x00000000,unsigned>;
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs8CsioFcr1{    ///< register CSIO_FCR1 
        using Addr = Register::Address<0x40038815,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs8CsioFcr0{    ///< register CSIO_FCR0 
        using Addr = Register::Address<0x40038814,0xffffff80,0x00000000,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs8CsioFbyte1{    ///< register CSIO_FBYTE1 
        using Addr = Register::Address<0x40038818,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioFbyte2{    ///< register CSIO_FBYTE2 
        using Addr = Register::Address<0x40038819,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioScstr0{    ///< register CSIO_SCSTR0 
        using Addr = Register::Address<0x4003881c,0xffffff00,0x00000000,unsigned char>;
        /// bitfield CSHD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cshd{}; 
    }
    namespace Mfs8CsioScstr1{    ///< register CSIO_SCSTR1 
        using Addr = Register::Address<0x4003881d,0xffffff00,0x00000000,unsigned char>;
        /// bitfield CSSU 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> cssu{}; 
    }
    namespace Mfs8CsioScstr2{    ///< register CSIO_SCSTR2 
        using Addr = Register::Address<0x40038820,0xffff0000,0x00000000,unsigned>;
        /// bitfield CSDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> csds{}; 
    }
    namespace Mfs8CsioScstr3{    ///< register CSIO_SCSTR3 
        using Addr = Register::Address<0x40038821,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioSacsr{    ///< register CSIO_SACSR 
        using Addr = Register::Address<0x40038824,0xffffc620,0x00000000,unsigned>;
        /// bitfield TBEEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tbeen{}; 
        /// bitfield CSEIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> cseie{}; 
        /// bitfield CSE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> cse{}; 
        /// bitfield TINT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tint{}; 
        /// bitfield TINTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> tinte{}; 
        /// bitfield TSYNE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tsyne{}; 
        /// bitfield TDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,1),Register::ReadWriteAccess,unsigned> tdiv{}; 
        /// bitfield TMRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tmre{}; 
    }
    namespace Mfs8CsioStmr{    ///< register CSIO_STMR 
        using Addr = Register::Address<0x40038828,0xffff0000,0x00000000,unsigned>;
        /// bitfield TM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tm{}; 
    }
    namespace Mfs8CsioStmcr{    ///< register CSIO_STMCR 
        using Addr = Register::Address<0x4003882c,0xffff0000,0x00000000,unsigned>;
        /// bitfield TC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Mfs8CsioScscr{    ///< register CSIO_SCSCR 
        using Addr = Register::Address<0x40038830,0xfffffc1c,0x00000000,unsigned>;
        /// bitfield SCAM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> scam{}; 
        /// bitfield CDIV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,6),Register::ReadWriteAccess,unsigned> cdiv{}; 
        /// bitfield CSLVL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> cslvl{}; 
        /// bitfield CSEN0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> csen0{}; 
        /// bitfield CSOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> csoe{}; 
    }
    namespace Mfs8CsioTbyte0{    ///< register CSIO_TBYTE0 
        using Addr = Register::Address<0x4003883c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioTbyte1{    ///< register CSIO_TBYTE1 
        using Addr = Register::Address<0x4003883d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioTbyte2{    ///< register CSIO_TBYTE2 
        using Addr = Register::Address<0x40038840,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8CsioTbyte3{    ///< register CSIO_TBYTE3 
        using Addr = Register::Address<0x40038841,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8LinScr{    ///< register LIN_SCR 
        using Addr = Register::Address<0x40038801,0xffffff00,0x00000000,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        /// bitfield MS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        /// bitfield LBR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbr{}; 
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield RXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        /// bitfield TXE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace Mfs8LinSmr{    ///< register LIN_SMR 
        using Addr = Register::Address<0x40038800,0xffffff06,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs8LinSsr{    ///< register LIN_SSR 
        using Addr = Register::Address<0x40038805,0xffffff40,0x00000000,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield LBD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbd{}; 
        /// bitfield FRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fre{}; 
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs8LinEscr{    ///< register LIN_ESCR 
        using Addr = Register::Address<0x40038804,0xffffffa0,0x00000000,unsigned char>;
        /// bitfield ESBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        /// bitfield LBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbie{}; 
        /// bitfield LBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> lbl{}; 
        /// bitfield DEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> del{}; 
    }
    namespace Mfs8LinRdr{    ///< register LIN_RDR 
        using Addr = Register::Address<0x40038808,0xffffff00,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8LinTdr{    ///< register LIN_TDR 
        using Addr = Register::Address<0x40038808,0xffffff00,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8LinBgr{    ///< register LIN_BGR 
        using Addr = Register::Address<0x4003880c,0xffff0000,0x00000000,unsigned>;
        /// bitfield EXT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs8LinFcr1{    ///< register LIN_FCR1 
        using Addr = Register::Address<0x40038815,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs8LinFcr0{    ///< register LIN_FCR0 
        using Addr = Register::Address<0x40038814,0xffffff80,0x00000000,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs8LinFbyte1{    ///< register LIN_FBYTE1 
        using Addr = Register::Address<0x40038818,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8LinFbyte2{    ///< register LIN_FBYTE2 
        using Addr = Register::Address<0x40038819,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8I2cIbcr{    ///< register I2C_IBCR 
        using Addr = Register::Address<0x40038801,0xffffff00,0x00000000,unsigned char>;
        /// bitfield MSS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mss{}; 
        /// bitfield ACT_SCC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> actScc{}; 
        /// bitfield ACKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acke{}; 
        /// bitfield WSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wsel{}; 
        /// bitfield CNDE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cnde{}; 
        /// bitfield INTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inte{}; 
        /// bitfield BER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ber{}; 
        /// bitfield INT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int_{}; 
    }
    namespace Mfs8I2cSmr{    ///< register I2C_SMR 
        using Addr = Register::Address<0x40038800,0xffffff13,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Mfs8I2cIbsr{    ///< register I2C_IBSR 
        using Addr = Register::Address<0x40038804,0xffffff00,0x00000000,unsigned char>;
        /// bitfield FBT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> fbt{}; 
        /// bitfield RACK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rack{}; 
        /// bitfield RSA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rsa{}; 
        /// bitfield TRX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trx{}; 
        /// bitfield AL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> al{}; 
        /// bitfield RSC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsc{}; 
        /// bitfield SPC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spc{}; 
        /// bitfield BB 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bb{}; 
    }
    namespace Mfs8I2cSsr{    ///< register I2C_SSR 
        using Addr = Register::Address<0x40038805,0xffffff00,0x00000000,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield TSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tset{}; 
        /// bitfield DMA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dma{}; 
        /// bitfield TBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs8I2cRdr{    ///< register I2C_RDR 
        using Addr = Register::Address<0x40038808,0xffffff00,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8I2cTdr{    ///< register I2C_TDR 
        using Addr = Register::Address<0x40038808,0xffffff00,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
    namespace Mfs8I2cBgr{    ///< register I2C_BGR 
        using Addr = Register::Address<0x4003880c,0xffff8000,0x00000000,unsigned>;
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs8I2cIsmk{    ///< register I2C_ISMK 
        using Addr = Register::Address<0x40038811,0xffffff00,0x00000000,unsigned char>;
        /// bitfield EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        /// bitfield SM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
    }
    namespace Mfs8I2cIsba{    ///< register I2C_ISBA 
        using Addr = Register::Address<0x40038810,0xffffff00,0x00000000,unsigned char>;
        /// bitfield SAEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        /// bitfield SA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Mfs8I2cFcr1{    ///< register I2C_FCR1 
        using Addr = Register::Address<0x40038815,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Mfs8I2cFcr0{    ///< register I2C_FCR0 
        using Addr = Register::Address<0x40038814,0xffffff80,0x00000000,unsigned char>;
        /// bitfield FLST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Mfs8I2cFbyte1{    ///< register I2C_FBYTE1 
        using Addr = Register::Address<0x40038818,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8I2cFbyte2{    ///< register I2C_FBYTE2 
        using Addr = Register::Address<0x40038819,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs8I2cNfcr{    ///< register I2C_NFCR 
        using Addr = Register::Address<0x4003881c,0xffffffe0,0x00000000,unsigned char>;
        /// bitfield NFT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nft{}; 
    }
    namespace Mfs8I2cEibcr{    ///< register I2C_EIBCR 
        using Addr = Register::Address<0x4003881d,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield SDAS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sdas{}; 
        /// bitfield SCLS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scls{}; 
        /// bitfield SDAC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdac{}; 
        /// bitfield SCLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sclc{}; 
        /// bitfield SOCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soce{}; 
        /// bitfield BEC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bec{}; 
    }
}
