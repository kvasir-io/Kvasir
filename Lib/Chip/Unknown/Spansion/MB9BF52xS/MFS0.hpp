#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral MFS0 
    namespace NoneuartScr{    ///< register UART_SCR 
        using Addr = Register::Address<0x40038001,0xffffff60,0,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        /// bitfield RIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        /// bitfield TBIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield RXE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        /// bitfield TXE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace NoneuartSmr{    ///< register UART_SMR 
        using Addr = Register::Address<0x40038000,0xffffff02,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SBL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        /// bitfield BDS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        /// bitfield SOE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace NoneuartSsr{    ///< register UART_SSR 
        using Addr = Register::Address<0x40038005,0xffffff40,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield PE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pe{}; 
        /// bitfield FRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        /// bitfield ORE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace NoneuartEscr{    ///< register UART_ESCR 
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        /// bitfield FLWEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> flwen{}; 
        /// bitfield ESBL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        /// bitfield INV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> inv{}; 
        /// bitfield PEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pen{}; 
        /// bitfield P 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> p{}; 
        /// bitfield L 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace NoneuartRdr{    ///< register UART_RDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NoneuartTdr{    ///< register UART_TDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NoneuartBgr{    ///< register UART_BGR 
        using Addr = Register::Address<0x4003800c,0xffff0000,0,unsigned>;
        /// bitfield EXT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        /// bitfield BGR1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace NoneuartFcr1{    ///< register UART_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace NoneuartFcr0{    ///< register UART_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        /// bitfield MS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        /// bitfield SPI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi{}; 
        /// bitfield RIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        /// bitfield TBIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield RXE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        /// bitfield TXE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace NonecsioSmr{    ///< register CSIO_SMR 
        using Addr = Register::Address<0x40038000,0xffffff00,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SCINV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> scinv{}; 
        /// bitfield BDS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bds{}; 
        /// bitfield SCKE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> scke{}; 
        /// bitfield SOE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace NonecsioSsr{    ///< register CSIO_SSR 
        using Addr = Register::Address<0x40038005,0xffffff70,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield ORE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace NonecsioEscr{    ///< register CSIO_ESCR 
        using Addr = Register::Address<0x40038004,0xffffff60,0,unsigned char>;
        /// bitfield SOP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sop{}; 
        /// bitfield WT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,unsigned> wt{}; 
        /// bitfield L 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> l{}; 
    }
    namespace NonecsioRdr{    ///< register CSIO_RDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NonecsioTdr{    ///< register CSIO_TDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NonecsioBgr{    ///< register CSIO_BGR 
        using Addr = Register::Address<0x4003800c,0xffff8000,0,unsigned>;
        /// bitfield BGR1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace NonecsioFcr1{    ///< register CSIO_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace NonecsioFcr0{    ///< register CSIO_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace NonecsioFbyte1{    ///< register CSIO_FBYTE1 
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace NonecsioFbyte2{    ///< register CSIO_FBYTE2 
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace NonelinScr{    ///< register LIN_SCR 
        using Addr = Register::Address<0x40038001,0xffffff00,0,unsigned char>;
        /// bitfield UPCL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> upcl{}; 
        /// bitfield MS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ms{}; 
        /// bitfield LBR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbr{}; 
        /// bitfield RIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tie{}; 
        /// bitfield TBIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield RXE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rxe{}; 
        /// bitfield TXE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txe{}; 
    }
    namespace NonelinSmr{    ///< register LIN_SMR 
        using Addr = Register::Address<0x40038000,0xffffff06,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield SBL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sbl{}; 
        /// bitfield SOE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> soe{}; 
    }
    namespace NonelinSsr{    ///< register LIN_SSR 
        using Addr = Register::Address<0x40038005,0xffffff40,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield LBD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lbd{}; 
        /// bitfield FRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fre{}; 
        /// bitfield ORE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace NonelinEscr{    ///< register LIN_ESCR 
        using Addr = Register::Address<0x40038004,0xffffffa0,0,unsigned char>;
        /// bitfield ESBL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> esbl{}; 
        /// bitfield LBIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lbie{}; 
        /// bitfield LBL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> lbl{}; 
        /// bitfield DEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> del{}; 
    }
    namespace NonelinRdr{    ///< register LIN_RDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NonelinTdr{    ///< register LIN_TDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace NonelinBgr{    ///< register LIN_BGR 
        using Addr = Register::Address<0x4003800c,0xffff0000,0,unsigned>;
        /// bitfield EXT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ext{}; 
        /// bitfield BGR1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace NonelinFcr1{    ///< register LIN_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace NonelinFcr0{    ///< register LIN_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
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
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> mss{}; 
        /// bitfield ACT_SCC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> actScc{}; 
        /// bitfield ACKE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> acke{}; 
        /// bitfield WSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wsel{}; 
        /// bitfield CNDE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cnde{}; 
        /// bitfield INTE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inte{}; 
        /// bitfield BER 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ber{}; 
        /// bitfield INT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> int_{}; 
    }
    namespace Nonei2cSmr{    ///< register I2C_SMR 
        using Addr = Register::Address<0x40038000,0xffffff03,0,unsigned char>;
        /// bitfield MD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,unsigned> md{}; 
        /// bitfield WUCR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wucr{}; 
        /// bitfield RIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> rie{}; 
        /// bitfield TIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tie{}; 
    }
    namespace Nonei2cIbsr{    ///< register I2C_IBSR 
        using Addr = Register::Address<0x40038004,0xffffff00,0,unsigned char>;
        /// bitfield FBT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> fbt{}; 
        /// bitfield RACK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rack{}; 
        /// bitfield RSA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> rsa{}; 
        /// bitfield TRX 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> trx{}; 
        /// bitfield AL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> al{}; 
        /// bitfield RSC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rsc{}; 
        /// bitfield SPC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spc{}; 
        /// bitfield BB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bb{}; 
    }
    namespace Nonei2cSsr{    ///< register I2C_SSR 
        using Addr = Register::Address<0x40038005,0xffffff00,0,unsigned char>;
        /// bitfield REC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield TSET 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> tset{}; 
        /// bitfield DMA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dma{}; 
        /// bitfield TBIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tbie{}; 
        /// bitfield ORE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ore{}; 
        /// bitfield RDRF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rdrf{}; 
        /// bitfield TDRE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> tdre{}; 
        /// bitfield TBI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> tbi{}; 
    }
    namespace Nonei2cRdr{    ///< register I2C_RDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace Nonei2cTdr{    ///< register I2C_TDR 
        using Addr = Register::Address<0x40038008,0xffffffff,0,unsigned>;
    }
    namespace Nonei2cBgr{    ///< register I2C_BGR 
        using Addr = Register::Address<0x4003800c,0xffff8000,0,unsigned>;
        /// bitfield BGR1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> bgr1{}; 
        /// bitfield BGR0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> bgr0{}; 
    }
    namespace Nonei2cIsmk{    ///< register I2C_ISMK 
        using Addr = Register::Address<0x40038011,0xffffff00,0,unsigned char>;
        /// bitfield EN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> en{}; 
        /// bitfield SM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sm{}; 
    }
    namespace Nonei2cIsba{    ///< register I2C_ISBA 
        using Addr = Register::Address<0x40038010,0xffffff00,0,unsigned char>;
        /// bitfield SAEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> saen{}; 
        /// bitfield SA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> sa{}; 
    }
    namespace Nonei2cFcr1{    ///< register I2C_FCR1 
        using Addr = Register::Address<0x40038015,0xffffffe0,0,unsigned char>;
        /// bitfield FLSTE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> flste{}; 
        /// bitfield FRIIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> friie{}; 
        /// bitfield FDRQ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fdrq{}; 
        /// bitfield FTIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ftie{}; 
        /// bitfield FSEL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fsel{}; 
    }
    namespace Nonei2cFcr0{    ///< register I2C_FCR0 
        using Addr = Register::Address<0x40038014,0xffffff80,0,unsigned char>;
        /// bitfield FLST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> flst{}; 
        /// bitfield FLD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> fld{}; 
        /// bitfield FSET 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fset{}; 
        /// bitfield FCL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> fcl2{}; 
        /// bitfield FCL1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> fcl1{}; 
        /// bitfield FE2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> fe2{}; 
        /// bitfield FE1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe1{}; 
    }
    namespace Nonei2cFbyte1{    ///< register I2C_FBYTE1 
        using Addr = Register::Address<0x40038018,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cFbyte2{    ///< register I2C_FBYTE2 
        using Addr = Register::Address<0x40038019,0xffffffff,0,unsigned char>;
    }
    namespace Nonei2cEibcr{    ///< register I2C_EIBCR 
        using Addr = Register::Address<0x4003801d,0xffffffc0,0,unsigned char>;
        /// bitfield SDAS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> sdas{}; 
        /// bitfield SCLS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> scls{}; 
        /// bitfield SDAC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sdac{}; 
        /// bitfield SCLC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sclc{}; 
        /// bitfield SOCE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> soce{}; 
        /// bitfield BEC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bec{}; 
    }
}
