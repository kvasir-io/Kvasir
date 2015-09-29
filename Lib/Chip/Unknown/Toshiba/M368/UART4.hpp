#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//ARM Prime Cell PL011
    namespace Nonedr{    ///<Data Register
        using Addr = Register::Address<0x40048000,0xfffff000,0,unsigned>;
        ///DATA
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data{}; 
        ///FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> fe{}; 
        ///PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pe{}; 
        ///BE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> be{}; 
        ///OE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> oe{}; 
    }
    namespace Nonersr{    ///<Receive Status Register
        using Addr = Register::Address<0x40048004,0xfffffff0,0,unsigned>;
        ///FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe{}; 
        ///PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe{}; 
        ///BE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> be{}; 
        ///OE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oe{}; 
    }
    namespace Noneecr{    ///<Error Clear Register
        using Addr = Register::Address<0x40048004,0xfffffff0,0,unsigned>;
        ///FE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> fe{}; 
        ///PE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pe{}; 
        ///BE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> be{}; 
        ///OE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> oe{}; 
    }
    namespace Nonefr{    ///<Flag Register
        using Addr = Register::Address<0x40048018,0xfffffe00,0,unsigned>;
        ///CTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cts{}; 
        ///DSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dsr{}; 
        ///DCD
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcd{}; 
        ///BUSY
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> busy{}; 
        ///RXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxfe{}; 
        ///TXFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txff{}; 
        ///RXFF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rxff{}; 
        ///TXFE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txfe{}; 
        ///RI
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> ri{}; 
    }
    namespace Noneilpr{    ///<IrDA Low-power Counter register
        using Addr = Register::Address<0x40048020,0xffffff00,0,unsigned>;
        ///ILPDVSR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ilpdvsr{}; 
    }
    namespace Noneibdr{    ///<Integer Baud Rate Register
        using Addr = Register::Address<0x40048024,0xffff0000,0,unsigned>;
        ///BAUDDIVINT
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> bauddivint{}; 
    }
    namespace Nonefbdr{    ///<Fractional Baud Rate Register
        using Addr = Register::Address<0x40048028,0xffffffc0,0,unsigned>;
        ///BAUDDIVFRAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> bauddivfrac{}; 
    }
    namespace NonelcrH{    ///<Line Control Register
        using Addr = Register::Address<0x4004802c,0xffffff00,0,unsigned>;
        ///BRK
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> brk{}; 
        ///PEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pen{}; 
        ///EPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> eps{}; 
        ///STP2
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> stp2{}; 
        ///FEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> fen{}; 
        ///WLEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> wlen{}; 
        ///SPS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> sps{}; 
    }
    namespace Nonecr{    ///<Cntrol Register
        using Addr = Register::Address<0x40048030,0xffff30f8,0,unsigned>;
        ///UARTEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> uarten{}; 
        ///SIREN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> siren{}; 
        ///SIRLP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sirlp{}; 
        ///TXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txe{}; 
        ///RXE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rxe{}; 
        ///DTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> dtr{}; 
        ///RTS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> rts{}; 
        ///RTSEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> rtsen{}; 
        ///CTSEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ctsen{}; 
    }
    namespace Noneifls{    ///<Interrupt FIFO Level Select Register
        using Addr = Register::Address<0x40048034,0xffffffc0,0,unsigned>;
        ///TXIFLSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> txiflsel{}; 
        ///RXIFLSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> rxiflsel{}; 
    }
    namespace Noneimsc{    ///<Interrupt Mask set_Clear Register
        using Addr = Register::Address<0x40048038,0xfffff800,0,unsigned>;
        ///RIMIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rimim{}; 
        ///CTSMIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsmim{}; 
        ///DCDMIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdmim{}; 
        ///DSRMIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrmim{}; 
        ///RXIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxim{}; 
        ///TXIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txim{}; 
        ///RTIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtim{}; 
        ///FEIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feim{}; 
        ///PEIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peim{}; 
        ///BEIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> beim{}; 
        ///OEIM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oeim{}; 
    }
    namespace Noneris{    ///<Raw Interrupt Status Register
        using Addr = Register::Address<0x4004803c,0xfffff800,0,unsigned>;
        ///RIRMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rirmis{}; 
        ///CTSRMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsrmis{}; 
        ///DCDRMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdrmis{}; 
        ///DSRRMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrrmis{}; 
        ///RXRIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxris{}; 
        ///TXRIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txris{}; 
        ///RTRIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtris{}; 
        ///FERIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feris{}; 
        ///PERIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peris{}; 
        ///BERIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> beris{}; 
        ///OERIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oeris{}; 
    }
    namespace Nonemis{    ///<Masked Interrupt Status Register
        using Addr = Register::Address<0x40048040,0xfffff800,0,unsigned>;
        ///RIMMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rimmis{}; 
        ///CTSMMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsmmis{}; 
        ///DCDMMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdmmis{}; 
        ///DSRMMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrmmis{}; 
        ///RXMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxmis{}; 
        ///TXMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txmis{}; 
        ///RTMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtmis{}; 
        ///FEMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> femis{}; 
        ///PEMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pemis{}; 
        ///BEMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> bemis{}; 
        ///OEMIS
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oemis{}; 
    }
    namespace Noneicr{    ///<Interrupt Clear Register
        using Addr = Register::Address<0x40048044,0xfffff800,0,unsigned>;
        ///RIMIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rimic{}; 
        ///CTSMIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ctsmic{}; 
        ///DCDMIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dcdmic{}; 
        ///DSRMIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> dsrmic{}; 
        ///RXIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxic{}; 
        ///TXIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txic{}; 
        ///RTIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> rtic{}; 
        ///FEIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> feic{}; 
        ///PEIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> peic{}; 
        ///BEIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> beic{}; 
        ///OEIC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> oeic{}; 
    }
    namespace Nonedmacr{    ///<DMA Control Register
        using Addr = Register::Address<0x40048048,0xfffffff8,0,unsigned>;
        ///RXDMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rxdmae{}; 
        ///TXDMAE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txdmae{}; 
        ///DMAONERR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmaonerr{}; 
    }
}
