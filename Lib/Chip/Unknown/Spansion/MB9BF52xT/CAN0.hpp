#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral CAN0 
    namespace Nonectrlr{    ///< register CTRLR 
        using Addr = Register::Address<0x40062000,0xffffff10,0,unsigned>;
        /// bitfield TEST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> test{}; 
        /// bitfield CCE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cce{}; 
        /// bitfield DAR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dar{}; 
        /// bitfield EIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> eie{}; 
        /// bitfield SIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sie{}; 
        /// bitfield IE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ie{}; 
        /// bitfield INIT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace Nonestatr{    ///< register STATR 
        using Addr = Register::Address<0x40062002,0xffffff00,0,unsigned>;
        /// bitfield BOFF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> boff{}; 
        /// bitfield EWARN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ewarn{}; 
        /// bitfield EPASS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> epass{}; 
        /// bitfield RXOK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rxok{}; 
        /// bitfield TXOK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txok{}; 
        /// bitfield LEC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> lec{}; 
    }
    namespace Noneerrcnt{    ///< register ERRCNT 
        using Addr = Register::Address<0x40062004,0xffff0000,0,unsigned>;
        /// bitfield RP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> rp{}; 
        /// bitfield REC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,8),Register::ReadWriteAccess,unsigned> rec{}; 
        /// bitfield TEC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> tec{}; 
    }
    namespace Nonebtr{    ///< register BTR 
        using Addr = Register::Address<0x40062006,0xffff8000,0,unsigned>;
        /// bitfield TSEG2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> tseg2{}; 
        /// bitfield TSEG1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> tseg1{}; 
        /// bitfield SJW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> sjw{}; 
        /// bitfield BRP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> brp{}; 
    }
    namespace Noneintr{    ///< register INTR 
        using Addr = Register::Address<0x40062008,0xffff0000,0,unsigned>;
        /// bitfield INTID 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> intid{}; 
    }
    namespace Nonetestr{    ///< register TESTR 
        using Addr = Register::Address<0x4006200a,0xffffff03,0,unsigned>;
        /// bitfield RX 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> rx{}; 
        /// bitfield TX 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,unsigned> tx{}; 
        /// bitfield LBACK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> lback{}; 
        /// bitfield SILENT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> silent{}; 
        /// bitfield BASIC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> basic{}; 
    }
    namespace Nonebrper{    ///< register BRPER 
        using Addr = Register::Address<0x4006200c,0xfffffff0,0,unsigned>;
        /// bitfield BRPE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> brpe{}; 
    }
    namespace Noneif1creq{    ///< register IF1CREQ 
        using Addr = Register::Address<0x40062010,0xffff7f00,0,unsigned>;
        /// bitfield BUSY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        /// bitfield MESSAGENUMBER 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
    }
    namespace Noneif1cmsk{    ///< register IF1CMSK 
        using Addr = Register::Address<0x40062012,0xffffff00,0,unsigned>;
        /// bitfield WRRD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrrd{}; 
        /// bitfield MASK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ARB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        /// bitfield CONTROL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        /// bitfield CIP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cip{}; 
        /// bitfield NEWDAT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat{}; 
        /// bitfield DATAA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dataa{}; 
        /// bitfield DATAB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datab{}; 
    }
    namespace Noneif1msk1{    ///< register IF1MSK1 
        using Addr = Register::Address<0x40062014,0xffff0000,0,unsigned>;
        /// bitfield MSK15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk15{}; 
        /// bitfield MSK14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msk14{}; 
        /// bitfield MSK13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msk13{}; 
        /// bitfield MSK12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk12{}; 
        /// bitfield MSK11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk11{}; 
        /// bitfield MSK10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk10{}; 
        /// bitfield MSK9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk9{}; 
        /// bitfield MSK8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk8{}; 
        /// bitfield MSK7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk7{}; 
        /// bitfield MSK6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk6{}; 
        /// bitfield MSK5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk5{}; 
        /// bitfield MSK4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk4{}; 
        /// bitfield MSK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk3{}; 
        /// bitfield MSK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk2{}; 
        /// bitfield MSK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk1{}; 
        /// bitfield MSK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk0{}; 
    }
    namespace Noneif1msk2{    ///< register IF1MSK2 
        using Addr = Register::Address<0x40062016,0xffff2000,0,unsigned>;
        /// bitfield MXTD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        /// bitfield MDIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        /// bitfield MSK28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk28{}; 
        /// bitfield MSK27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk27{}; 
        /// bitfield MSK26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk26{}; 
        /// bitfield MSK25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk25{}; 
        /// bitfield MSK24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk24{}; 
        /// bitfield MSK23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk23{}; 
        /// bitfield MSK22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk22{}; 
        /// bitfield MSK21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk21{}; 
        /// bitfield MSK20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk20{}; 
        /// bitfield MSK19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk19{}; 
        /// bitfield MSK18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk18{}; 
        /// bitfield MSK17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk17{}; 
        /// bitfield MSK16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk16{}; 
    }
    namespace Noneif1arb1{    ///< register IF1ARB1 
        using Addr = Register::Address<0x40062018,0xffff0000,0,unsigned>;
        /// bitfield ID15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        /// bitfield ID14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        /// bitfield ID13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        /// bitfield ID12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        /// bitfield ID11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        /// bitfield ID10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        /// bitfield ID9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        /// bitfield ID8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        /// bitfield ID7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        /// bitfield ID6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        /// bitfield ID5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        /// bitfield ID4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        /// bitfield ID3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        /// bitfield ID2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        /// bitfield ID1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        /// bitfield ID0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
    }
    namespace Noneif1arb2{    ///< register IF1ARB2 
        using Addr = Register::Address<0x4006201a,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        /// bitfield XTD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        /// bitfield DIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        /// bitfield ID28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id28{}; 
        /// bitfield ID27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id27{}; 
        /// bitfield ID26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id26{}; 
        /// bitfield ID25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id25{}; 
        /// bitfield ID24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id24{}; 
        /// bitfield ID23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id23{}; 
        /// bitfield ID22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id22{}; 
        /// bitfield ID21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id21{}; 
        /// bitfield ID20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id20{}; 
        /// bitfield ID19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id19{}; 
        /// bitfield ID18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id18{}; 
        /// bitfield ID17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id17{}; 
        /// bitfield ID16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id16{}; 
    }
    namespace Noneif1mctr{    ///< register IF1MCTR 
        using Addr = Register::Address<0x4006201c,0xffff0070,0,unsigned>;
        /// bitfield NEWDAT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        /// bitfield MSGLST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        /// bitfield INTPND 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        /// bitfield UMASK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        /// bitfield TXIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        /// bitfield RXIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        /// bitfield RMTEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        /// bitfield TXRQST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        /// bitfield EOB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        /// bitfield DLC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
    }
    namespace Noneif1dta1L{    ///< register IF1DTA1_L 
        using Addr = Register::Address<0x40062020,0xffff0000,0,unsigned>;
        /// bitfield DATA_1_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        /// bitfield DATA_0_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Noneif1dta2L{    ///< register IF1DTA2_L 
        using Addr = Register::Address<0x40062022,0xffff0000,0,unsigned>;
        /// bitfield DATA_3_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        /// bitfield DATA_2_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
    }
    namespace Noneif1dtb1L{    ///< register IF1DTB1_L 
        using Addr = Register::Address<0x40062024,0xffff0000,0,unsigned>;
        /// bitfield DATA_5_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        /// bitfield DATA_4_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Noneif1dtb2L{    ///< register IF1DTB2_L 
        using Addr = Register::Address<0x40062026,0xffff0000,0,unsigned>;
        /// bitfield DATA_7_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        /// bitfield DATA_6_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
    }
    namespace Noneif1dta2B{    ///< register IF1DTA2_B 
        using Addr = Register::Address<0x40062030,0xffff0000,0,unsigned>;
        /// bitfield DATA_2_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        /// bitfield DATA_3_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data3{}; 
    }
    namespace Noneif1dta1B{    ///< register IF1DTA1_B 
        using Addr = Register::Address<0x40062032,0xffff0000,0,unsigned>;
        /// bitfield DATA_0_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data0{}; 
        /// bitfield DATA_1_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Noneif1dtb2B{    ///< register IF1DTB2_B 
        using Addr = Register::Address<0x40062034,0xffff0000,0,unsigned>;
        /// bitfield DATA_6_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        /// bitfield DATA_7_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data7{}; 
    }
    namespace Noneif1dtb1B{    ///< register IF1DTB1_B 
        using Addr = Register::Address<0x40062036,0xffff0000,0,unsigned>;
        /// bitfield DATA_4_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data4{}; 
        /// bitfield DATA_5_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
    }
    namespace Noneif2creq{    ///< register IF2CREQ 
        using Addr = Register::Address<0x40062040,0xffff7f00,0,unsigned>;
        /// bitfield BUSY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> busy{}; 
        /// bitfield MESSAGENUMBER 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> messagenumber{}; 
    }
    namespace Noneif2cmsk{    ///< register IF2CMSK 
        using Addr = Register::Address<0x40062042,0xffffff00,0,unsigned>;
        /// bitfield WRRD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wrrd{}; 
        /// bitfield MASK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> mask{}; 
        /// bitfield ARB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> arb{}; 
        /// bitfield CONTROL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> control{}; 
        /// bitfield CIP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> cip{}; 
        /// bitfield NEWDAT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat{}; 
        /// bitfield DATAA 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dataa{}; 
        /// bitfield DATAB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> datab{}; 
    }
    namespace Noneif2msk1{    ///< register IF2MSK1 
        using Addr = Register::Address<0x40062044,0xffff0000,0,unsigned>;
        /// bitfield MSK15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msk15{}; 
        /// bitfield MSK14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msk14{}; 
        /// bitfield MSK13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msk13{}; 
        /// bitfield MSK12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk12{}; 
        /// bitfield MSK11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk11{}; 
        /// bitfield MSK10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk10{}; 
        /// bitfield MSK9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk9{}; 
        /// bitfield MSK8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk8{}; 
        /// bitfield MSK7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk7{}; 
        /// bitfield MSK6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk6{}; 
        /// bitfield MSK5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk5{}; 
        /// bitfield MSK4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk4{}; 
        /// bitfield MSK3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk3{}; 
        /// bitfield MSK2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk2{}; 
        /// bitfield MSK1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk1{}; 
        /// bitfield MSK0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk0{}; 
    }
    namespace Noneif2msk2{    ///< register IF2MSK2 
        using Addr = Register::Address<0x40062046,0xffff2000,0,unsigned>;
        /// bitfield MXTD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> mxtd{}; 
        /// bitfield MDIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> mdir{}; 
        /// bitfield MSK28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msk28{}; 
        /// bitfield MSK27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msk27{}; 
        /// bitfield MSK26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msk26{}; 
        /// bitfield MSK25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msk25{}; 
        /// bitfield MSK24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msk24{}; 
        /// bitfield MSK23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msk23{}; 
        /// bitfield MSK22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msk22{}; 
        /// bitfield MSK21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msk21{}; 
        /// bitfield MSK20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msk20{}; 
        /// bitfield MSK19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msk19{}; 
        /// bitfield MSK18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msk18{}; 
        /// bitfield MSK17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msk17{}; 
        /// bitfield MSK16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msk16{}; 
    }
    namespace Noneif2arb1{    ///< register IF2ARB1 
        using Addr = Register::Address<0x40062048,0xffff0000,0,unsigned>;
        /// bitfield ID15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> id15{}; 
        /// bitfield ID14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> id14{}; 
        /// bitfield ID13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> id13{}; 
        /// bitfield ID12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id12{}; 
        /// bitfield ID11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id11{}; 
        /// bitfield ID10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id10{}; 
        /// bitfield ID9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id9{}; 
        /// bitfield ID8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id8{}; 
        /// bitfield ID7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        /// bitfield ID6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        /// bitfield ID5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        /// bitfield ID4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        /// bitfield ID3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        /// bitfield ID2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        /// bitfield ID1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        /// bitfield ID0 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
    }
    namespace Noneif2arb2{    ///< register IF2ARB2 
        using Addr = Register::Address<0x4006204a,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval{}; 
        /// bitfield XTD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> xtd{}; 
        /// bitfield DIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dir{}; 
        /// bitfield ID28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> id28{}; 
        /// bitfield ID27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> id27{}; 
        /// bitfield ID26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> id26{}; 
        /// bitfield ID25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> id25{}; 
        /// bitfield ID24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> id24{}; 
        /// bitfield ID23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id23{}; 
        /// bitfield ID22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id22{}; 
        /// bitfield ID21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id21{}; 
        /// bitfield ID20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id20{}; 
        /// bitfield ID19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id19{}; 
        /// bitfield ID18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id18{}; 
        /// bitfield ID17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id17{}; 
        /// bitfield ID16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id16{}; 
    }
    namespace Noneif2mctr{    ///< register IF2MCTR 
        using Addr = Register::Address<0x4006204c,0xffff0070,0,unsigned>;
        /// bitfield NEWDAT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat{}; 
        /// bitfield MSGLST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msglst{}; 
        /// bitfield INTPND 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd{}; 
        /// bitfield UMASK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> umask{}; 
        /// bitfield TXIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txie{}; 
        /// bitfield RXIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> rxie{}; 
        /// bitfield RMTEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> rmten{}; 
        /// bitfield TXRQST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst{}; 
        /// bitfield EOB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> eob{}; 
        /// bitfield DLC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> dlc{}; 
    }
    namespace Noneif2dta1L{    ///< register IF2DTA1_L 
        using Addr = Register::Address<0x40062050,0xffff0000,0,unsigned>;
        /// bitfield DATA_1_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data1{}; 
        /// bitfield DATA_0_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data0{}; 
    }
    namespace Noneif2dta2L{    ///< register IF2DTA2_L 
        using Addr = Register::Address<0x40062052,0xffff0000,0,unsigned>;
        /// bitfield DATA_3_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data3{}; 
        /// bitfield DATA_2_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data2{}; 
    }
    namespace Noneif2dtb1L{    ///< register IF2DTB1_L 
        using Addr = Register::Address<0x40062054,0xffff0000,0,unsigned>;
        /// bitfield DATA_5_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data5{}; 
        /// bitfield DATA_4_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data4{}; 
    }
    namespace Noneif2dtb2L{    ///< register IF2DTB2_L 
        using Addr = Register::Address<0x40062056,0xffff0000,0,unsigned>;
        /// bitfield DATA_7_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data7{}; 
        /// bitfield DATA_6_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data6{}; 
    }
    namespace Noneif2dta2B{    ///< register IF2DTA2_B 
        using Addr = Register::Address<0x40062060,0xffff0000,0,unsigned>;
        /// bitfield DATA_2_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data2{}; 
        /// bitfield DATA_3_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data3{}; 
    }
    namespace Noneif2dta1B{    ///< register IF2DTA1_B 
        using Addr = Register::Address<0x40062062,0xffff0000,0,unsigned>;
        /// bitfield DATA_0_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data0{}; 
        /// bitfield DATA_1_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data1{}; 
    }
    namespace Noneif2dtb2B{    ///< register IF2DTB2_B 
        using Addr = Register::Address<0x40062064,0xffff0000,0,unsigned>;
        /// bitfield DATA_6_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data6{}; 
        /// bitfield DATA_7_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data7{}; 
    }
    namespace Noneif2dtb1B{    ///< register IF2DTB1_B 
        using Addr = Register::Address<0x40062066,0xffff0000,0,unsigned>;
        /// bitfield DATA_4_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> data4{}; 
        /// bitfield DATA_5_ 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> data5{}; 
    }
    namespace Nonetreqr1{    ///< register TREQR1 
        using Addr = Register::Address<0x40062080,0xffff0000,0,unsigned>;
        /// bitfield TXRQST16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txrqst16{}; 
        /// bitfield TXRQST15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txrqst15{}; 
        /// bitfield TXRQST14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txrqst14{}; 
        /// bitfield TXRQST13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txrqst13{}; 
        /// bitfield TXRQST12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrqst12{}; 
        /// bitfield TXRQST11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txrqst11{}; 
        /// bitfield TXRQST10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrqst10{}; 
        /// bitfield TXRQST9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst9{}; 
        /// bitfield TXRQST8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txrqst8{}; 
        /// bitfield TXRQST7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txrqst7{}; 
        /// bitfield TXRQST6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrqst6{}; 
        /// bitfield TXRQST5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txrqst5{}; 
        /// bitfield TXRQST4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txrqst4{}; 
        /// bitfield TXRQST3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqst3{}; 
        /// bitfield TXRQST2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrqst2{}; 
        /// bitfield TXRQST1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrqst1{}; 
    }
    namespace Nonetreqr2{    ///< register TREQR2 
        using Addr = Register::Address<0x40062082,0xffff0000,0,unsigned>;
        /// bitfield TXRQST32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> txrqst32{}; 
        /// bitfield TXRQST31 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> txrqst31{}; 
        /// bitfield TXRQST30 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> txrqst30{}; 
        /// bitfield TXRQST29 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> txrqst29{}; 
        /// bitfield TXRQST28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> txrqst28{}; 
        /// bitfield TXRQST27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> txrqst27{}; 
        /// bitfield TXRQST26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> txrqst26{}; 
        /// bitfield TXRQST25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> txrqst25{}; 
        /// bitfield TXRQST24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> txrqst24{}; 
        /// bitfield TXRQST23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> txrqst23{}; 
        /// bitfield TXRQST22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> txrqst22{}; 
        /// bitfield TXRQST21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> txrqst21{}; 
        /// bitfield TXRQST20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> txrqst20{}; 
        /// bitfield TXRQST19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> txrqst19{}; 
        /// bitfield TXRQST18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> txrqst18{}; 
        /// bitfield TXRQST17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> txrqst17{}; 
    }
    namespace Nonenewdt1{    ///< register NEWDT1 
        using Addr = Register::Address<0x40062090,0xffff0000,0,unsigned>;
        /// bitfield NEWDAT16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat16{}; 
        /// bitfield NEWDAT15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> newdat15{}; 
        /// bitfield NEWDAT14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> newdat14{}; 
        /// bitfield NEWDAT13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> newdat13{}; 
        /// bitfield NEWDAT12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> newdat12{}; 
        /// bitfield NEWDAT11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> newdat11{}; 
        /// bitfield NEWDAT10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> newdat10{}; 
        /// bitfield NEWDAT9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> newdat9{}; 
        /// bitfield NEWDAT8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> newdat8{}; 
        /// bitfield NEWDAT7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> newdat7{}; 
        /// bitfield NEWDAT6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> newdat6{}; 
        /// bitfield NEWDAT5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> newdat5{}; 
        /// bitfield NEWDAT4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> newdat4{}; 
        /// bitfield NEWDAT3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat3{}; 
        /// bitfield NEWDAT2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newdat2{}; 
        /// bitfield NEWDAT1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> newdat1{}; 
    }
    namespace Nonenewdt2{    ///< register NEWDT2 
        using Addr = Register::Address<0x40062092,0xffff0000,0,unsigned>;
        /// bitfield NEWDAT32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> newdat32{}; 
        /// bitfield NEWDAT31 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> newdat31{}; 
        /// bitfield NEWDAT30 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> newdat30{}; 
        /// bitfield NEWDAT29 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> newdat29{}; 
        /// bitfield NEWDAT28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> newdat28{}; 
        /// bitfield NEWDAT27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> newdat27{}; 
        /// bitfield NEWDAT26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> newdat26{}; 
        /// bitfield NEWDAT25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> newdat25{}; 
        /// bitfield NEWDAT24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> newdat24{}; 
        /// bitfield NEWDAT23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> newdat23{}; 
        /// bitfield NEWDAT22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> newdat22{}; 
        /// bitfield NEWDAT21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> newdat21{}; 
        /// bitfield NEWDAT20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> newdat20{}; 
        /// bitfield NEWDAT19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> newdat19{}; 
        /// bitfield NEWDAT18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> newdat18{}; 
        /// bitfield NEWDAT17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> newdat17{}; 
    }
    namespace Noneintpnd1{    ///< register INTPND1 
        using Addr = Register::Address<0x400620a0,0xffff0000,0,unsigned>;
        /// bitfield INTPND16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intpnd16{}; 
        /// bitfield INTPND15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> intpnd15{}; 
        /// bitfield INTPND14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd14{}; 
        /// bitfield INTPND13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> intpnd13{}; 
        /// bitfield INTPND12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> intpnd12{}; 
        /// bitfield INTPND11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intpnd11{}; 
        /// bitfield INTPND10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intpnd10{}; 
        /// bitfield INTPND9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intpnd9{}; 
        /// bitfield INTPND8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intpnd8{}; 
        /// bitfield INTPND7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intpnd7{}; 
        /// bitfield INTPND6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intpnd6{}; 
        /// bitfield INTPND5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intpnd5{}; 
        /// bitfield INTPND4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intpnd4{}; 
        /// bitfield INTPND3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intpnd3{}; 
        /// bitfield INTPND2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intpnd2{}; 
        /// bitfield INTPND1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intpnd1{}; 
    }
    namespace Noneintpnd2{    ///< register INTPND2 
        using Addr = Register::Address<0x400620a2,0xffff0000,0,unsigned>;
        /// bitfield INTPND32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> intpnd32{}; 
        /// bitfield INTPND31 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> intpnd31{}; 
        /// bitfield INTPND30 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> intpnd30{}; 
        /// bitfield INTPND29 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> intpnd29{}; 
        /// bitfield INTPND28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> intpnd28{}; 
        /// bitfield INTPND27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> intpnd27{}; 
        /// bitfield INTPND26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> intpnd26{}; 
        /// bitfield INTPND25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> intpnd25{}; 
        /// bitfield INTPND24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> intpnd24{}; 
        /// bitfield INTPND23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> intpnd23{}; 
        /// bitfield INTPND22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> intpnd22{}; 
        /// bitfield INTPND21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> intpnd21{}; 
        /// bitfield INTPND20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> intpnd20{}; 
        /// bitfield INTPND19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> intpnd19{}; 
        /// bitfield INTPND18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> intpnd18{}; 
        /// bitfield INTPND17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> intpnd17{}; 
    }
    namespace Nonemsgval1{    ///< register MSGVAL1 
        using Addr = Register::Address<0x400620b0,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL16 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval16{}; 
        /// bitfield MSGVAL15 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msgval15{}; 
        /// bitfield MSGVAL14 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msgval14{}; 
        /// bitfield MSGVAL13 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msgval13{}; 
        /// bitfield MSGVAL12 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msgval12{}; 
        /// bitfield MSGVAL11 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msgval11{}; 
        /// bitfield MSGVAL10 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msgval10{}; 
        /// bitfield MSGVAL9 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msgval9{}; 
        /// bitfield MSGVAL8 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msgval8{}; 
        /// bitfield MSGVAL7 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msgval7{}; 
        /// bitfield MSGVAL6 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msgval6{}; 
        /// bitfield MSGVAL5 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msgval5{}; 
        /// bitfield MSGVAL4 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msgval4{}; 
        /// bitfield MSGVAL3 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msgval3{}; 
        /// bitfield MSGVAL2 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msgval2{}; 
        /// bitfield MSGVAL1 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msgval1{}; 
    }
    namespace Nonemsgval2{    ///< register MSGVAL2 
        using Addr = Register::Address<0x400620b2,0xffff0000,0,unsigned>;
        /// bitfield MSGVAL32 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> msgval32{}; 
        /// bitfield MSGVAL31 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> msgval31{}; 
        /// bitfield MSGVAL30 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> msgval30{}; 
        /// bitfield MSGVAL29 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> msgval29{}; 
        /// bitfield MSGVAL28 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> msgval28{}; 
        /// bitfield MSGVAL27 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> msgval27{}; 
        /// bitfield MSGVAL26 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> msgval26{}; 
        /// bitfield MSGVAL25 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> msgval25{}; 
        /// bitfield MSGVAL24 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> msgval24{}; 
        /// bitfield MSGVAL23 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> msgval23{}; 
        /// bitfield MSGVAL22 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> msgval22{}; 
        /// bitfield MSGVAL21 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> msgval21{}; 
        /// bitfield MSGVAL20 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> msgval20{}; 
        /// bitfield MSGVAL19 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> msgval19{}; 
        /// bitfield MSGVAL18 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> msgval18{}; 
        /// bitfield MSGVAL17 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> msgval17{}; 
    }
}
