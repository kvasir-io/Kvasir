#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral MFS0 
    namespace Mfs12UartScr{    ///< register UART_SCR 
        using Addr = Register::Address<0x40038c01,0xffffff60,0x00000000,unsigned char>;
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
    namespace Mfs12UartSmr{    ///< register UART_SMR 
        using Addr = Register::Address<0x40038c00,0xffffff02,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        /// bitfield BDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs12UartSsr{    ///< register UART_SSR 
        using Addr = Register::Address<0x40038c05,0xffffff40,0x00000000,unsigned char>;
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
    namespace Mfs12UartEscr{    ///< register UART_ESCR 
        using Addr = Register::Address<0x40038c04,0xffffff00,0x00000000,unsigned char>;
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
    namespace Mfs12UartRdr{    ///< register UART_RDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12UartTdr{    ///< register UART_TDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12UartBgr{    ///< register UART_BGR 
        using Addr = Register::Address<0x40038c0c,0xffff0000,0x00000000,unsigned>;
        /// bitfield EXT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs12UartFcr1{    ///< register UART_FCR1 
        using Addr = Register::Address<0x40038c15,0xffffffe0,0x00000000,unsigned char>;
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
    namespace Mfs12UartFcr0{    ///< register UART_FCR0 
        using Addr = Register::Address<0x40038c14,0xffffff80,0x00000000,unsigned char>;
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
    namespace Mfs12UartFbyte1{    ///< register UART_FBYTE1 
        using Addr = Register::Address<0x40038c18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12UartFbyte2{    ///< register UART_FBYTE2 
        using Addr = Register::Address<0x40038c19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12CsioScr{    ///< register CSIO_SCR 
        using Addr = Register::Address<0x40038c01,0xffffff00,0x00000000,unsigned char>;
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
    namespace Mfs12CsioSmr{    ///< register CSIO_SMR 
        using Addr = Register::Address<0x40038c00,0xffffff00,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SCINV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        /// bitfield BDS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        /// bitfield SCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs12CsioSsr{    ///< register CSIO_SSR 
        using Addr = Register::Address<0x40038c05,0xffffff70,0x00000000,unsigned char>;
        /// bitfield REC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield ORE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> tbi{}; 
    }
    namespace Mfs12CsioEscr{    ///< register CSIO_ESCR 
        using Addr = Register::Address<0x40038c04,0xffffff60,0x00000000,unsigned char>;
        /// bitfield SOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        /// bitfield WT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        /// bitfield L 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace Mfs12CsioRdr{    ///< register CSIO_RDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12CsioTdr{    ///< register CSIO_TDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12CsioBgr{    ///< register CSIO_BGR 
        using Addr = Register::Address<0x40038c0c,0xffff8000,0x00000000,unsigned>;
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs12CsioFcr1{    ///< register CSIO_FCR1 
        using Addr = Register::Address<0x40038c15,0xffffffe0,0x00000000,unsigned char>;
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
    namespace Mfs12CsioFcr0{    ///< register CSIO_FCR0 
        using Addr = Register::Address<0x40038c14,0xffffff80,0x00000000,unsigned char>;
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
    namespace Mfs12CsioFbyte1{    ///< register CSIO_FBYTE1 
        using Addr = Register::Address<0x40038c18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12CsioFbyte2{    ///< register CSIO_FBYTE2 
        using Addr = Register::Address<0x40038c19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12LinScr{    ///< register LIN_SCR 
        using Addr = Register::Address<0x40038c01,0xffffff00,0x00000000,unsigned char>;
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
    namespace Mfs12LinSmr{    ///< register LIN_SMR 
        using Addr = Register::Address<0x40038c00,0xffffff06,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        /// bitfield SOE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace Mfs12LinSsr{    ///< register LIN_SSR 
        using Addr = Register::Address<0x40038c05,0xffffff40,0x00000000,unsigned char>;
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
    namespace Mfs12LinEscr{    ///< register LIN_ESCR 
        using Addr = Register::Address<0x40038c04,0xffffffa0,0x00000000,unsigned char>;
        /// bitfield ESBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        /// bitfield LBIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbie{}; 
        /// bitfield LBL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> lbl{}; 
        /// bitfield DEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> del{}; 
    }
    namespace Mfs12LinRdr{    ///< register LIN_RDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12LinTdr{    ///< register LIN_TDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12LinBgr{    ///< register LIN_BGR 
        using Addr = Register::Address<0x40038c0c,0xffff0000,0x00000000,unsigned>;
        /// bitfield EXT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs12LinFcr1{    ///< register LIN_FCR1 
        using Addr = Register::Address<0x40038c15,0xffffffe0,0x00000000,unsigned char>;
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
    namespace Mfs12LinFcr0{    ///< register LIN_FCR0 
        using Addr = Register::Address<0x40038c14,0xffffff80,0x00000000,unsigned char>;
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
    namespace Mfs12LinFbyte1{    ///< register LIN_FBYTE1 
        using Addr = Register::Address<0x40038c18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12LinFbyte2{    ///< register LIN_FBYTE2 
        using Addr = Register::Address<0x40038c19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12I2cIbcr{    ///< register I2C_IBCR 
        using Addr = Register::Address<0x40038c01,0xffffff00,0x00000000,unsigned char>;
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
    namespace Mfs12I2cSmr{    ///< register I2C_SMR 
        using Addr = Register::Address<0x40038c00,0xffffff03,0x00000000,unsigned char>;
        /// bitfield MD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield RIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Mfs12I2cIbsr{    ///< register I2C_IBSR 
        using Addr = Register::Address<0x40038c04,0xffffff00,0x00000000,unsigned char>;
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
    namespace Mfs12I2cSsr{    ///< register I2C_SSR 
        using Addr = Register::Address<0x40038c05,0xffffff00,0x00000000,unsigned char>;
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
    namespace Mfs12I2cRdr{    ///< register I2C_RDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12I2cTdr{    ///< register I2C_TDR 
        using Addr = Register::Address<0x40038c08,0xffffffff,0x00000000,unsigned>;
    }
    namespace Mfs12I2cBgr{    ///< register I2C_BGR 
        using Addr = Register::Address<0x40038c0c,0xffff8000,0x00000000,unsigned>;
        /// bitfield BGR1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Mfs12I2cIsmk{    ///< register I2C_ISMK 
        using Addr = Register::Address<0x40038c11,0xffffff00,0x00000000,unsigned char>;
        /// bitfield EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        /// bitfield SM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
    }
    namespace Mfs12I2cIsba{    ///< register I2C_ISBA 
        using Addr = Register::Address<0x40038c10,0xffffff00,0x00000000,unsigned char>;
        /// bitfield SAEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        /// bitfield SA 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Mfs12I2cFcr1{    ///< register I2C_FCR1 
        using Addr = Register::Address<0x40038c15,0xffffffe0,0x00000000,unsigned char>;
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
    namespace Mfs12I2cFcr0{    ///< register I2C_FCR0 
        using Addr = Register::Address<0x40038c14,0xffffff80,0x00000000,unsigned char>;
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
    namespace Mfs12I2cFbyte1{    ///< register I2C_FBYTE1 
        using Addr = Register::Address<0x40038c18,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12I2cFbyte2{    ///< register I2C_FBYTE2 
        using Addr = Register::Address<0x40038c19,0xffffffff,0x00000000,unsigned char>;
    }
    namespace Mfs12I2cEibcr{    ///< register I2C_EIBCR 
        using Addr = Register::Address<0x40038c1d,0xffffffc0,0x00000000,unsigned char>;
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
