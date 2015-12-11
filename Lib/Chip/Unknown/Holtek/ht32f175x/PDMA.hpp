#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PDMA
    namespace NonepdmaCh0cr{    ///<PDMA_CH0CR
        using Addr = Register::Address<0x40090000,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh0sadr{    ///<PDMA_CH0SADR
        using Addr = Register::Address<0x40090004,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh0dadr{    ///<PDMA_CH0DADR
        using Addr = Register::Address<0x40090008,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh0cadr{    ///<PDMA_CH0CADR
        using Addr = Register::Address<0x4009000c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh0tsr{    ///<PDMA_CH0TSR
        using Addr = Register::Address<0x40090010,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh0ctsr{    ///<PDMA_CH0CTSR
        using Addr = Register::Address<0x40090014,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh1cr{    ///<PDMA_CH1CR
        using Addr = Register::Address<0x40090018,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh1sadr{    ///<PDMA_CH1SADR
        using Addr = Register::Address<0x4009001c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh1dadr{    ///<PDMA_CH1DADR
        using Addr = Register::Address<0x40090020,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh1cadr{    ///<PDMA_CH1CADR
        using Addr = Register::Address<0x40090024,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh1tsr{    ///<PDMA_CH1TSR
        using Addr = Register::Address<0x40090028,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh1ctsr{    ///<PDMA_CH1CTSR
        using Addr = Register::Address<0x4009002c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh2cr{    ///<PDMA_CH2CR
        using Addr = Register::Address<0x40090030,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh2sadr{    ///<PDMA_CH2SADR
        using Addr = Register::Address<0x40090034,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh2dadr{    ///<PDMA_CH2DADR
        using Addr = Register::Address<0x40090038,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh2cadr{    ///<PDMA_CH2CADR
        using Addr = Register::Address<0x4009003c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh2tsr{    ///<PDMA_CH2TSR
        using Addr = Register::Address<0x40090040,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh2ctsr{    ///<PDMA_CH2CTSR
        using Addr = Register::Address<0x40090044,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh3cr{    ///<PDMA_CH3CR
        using Addr = Register::Address<0x40090048,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh3sadr{    ///<PDMA_CH3SADR
        using Addr = Register::Address<0x4009004c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh3dadr{    ///<PDMA_CH3DADR
        using Addr = Register::Address<0x40090050,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh3cadr{    ///<PDMA_CH3CADR
        using Addr = Register::Address<0x40090054,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh3tsr{    ///<PDMA_CH3TSR
        using Addr = Register::Address<0x40090058,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh3ctsr{    ///<PDMA_CH3CTSR
        using Addr = Register::Address<0x4009005c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh4cr{    ///<PDMA_CH4CR
        using Addr = Register::Address<0x40090060,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh4sadr{    ///<PDMA_CH4SADR
        using Addr = Register::Address<0x40090064,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh4dadr{    ///<PDMA_CH4DADR
        using Addr = Register::Address<0x40090068,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh4cadr{    ///<PDMA_CH4CADR
        using Addr = Register::Address<0x4009006c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh4tsr{    ///<PDMA_CH4TSR
        using Addr = Register::Address<0x40090070,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh4ctsr{    ///<PDMA_CH4CTSR
        using Addr = Register::Address<0x40090074,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh5cr{    ///<PDMA_CH5CR
        using Addr = Register::Address<0x40090078,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh5sadr{    ///<PDMA_CH5SADR
        using Addr = Register::Address<0x4009007c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh5dadr{    ///<PDMA_CH5DADR
        using Addr = Register::Address<0x40090080,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh5cadr{    ///<PDMA_CH5CADR
        using Addr = Register::Address<0x40090084,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh5tsr{    ///<PDMA_CH5TSR
        using Addr = Register::Address<0x40090088,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh5ctsr{    ///<PDMA_CH5CTSR
        using Addr = Register::Address<0x4009008c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh6cr{    ///<PDMA_CH6CR
        using Addr = Register::Address<0x40090090,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh6sadr{    ///<PDMA_CH6SADR
        using Addr = Register::Address<0x40090094,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh6dadr{    ///<PDMA_CH6DADR
        using Addr = Register::Address<0x40090098,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh6cadr{    ///<PDMA_CH6CADR
        using Addr = Register::Address<0x4009009c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh6tsr{    ///<PDMA_CH6TSR
        using Addr = Register::Address<0x400900a0,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh6ctsr{    ///<PDMA_CH6CTSR
        using Addr = Register::Address<0x400900a4,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh7cr{    ///<PDMA_CH7CR
        using Addr = Register::Address<0x400900a8,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh7sadr{    ///<PDMA_CH7SADR
        using Addr = Register::Address<0x400900ac,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh7dadr{    ///<PDMA_CH7DADR
        using Addr = Register::Address<0x400900b0,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh7cadr{    ///<PDMA_CH7CADR
        using Addr = Register::Address<0x400900b4,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh7tsr{    ///<PDMA_CH7TSR
        using Addr = Register::Address<0x400900b8,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh7ctsr{    ///<PDMA_CH7CTSR
        using Addr = Register::Address<0x400900bc,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh8cr{    ///<PDMA_CH8CR
        using Addr = Register::Address<0x400900c0,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh8sadr{    ///<PDMA_CH8SADR
        using Addr = Register::Address<0x400900c4,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh8dadr{    ///<PDMA_CH8DADR
        using Addr = Register::Address<0x400900c8,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh8cadr{    ///<PDMA_CH8CADR
        using Addr = Register::Address<0x400900cc,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh8tsr{    ///<PDMA_CH8TSR
        using Addr = Register::Address<0x400900d0,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh8ctsr{    ///<PDMA_CH8CTSR
        using Addr = Register::Address<0x400900d4,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh9cr{    ///<PDMA_CH9CR
        using Addr = Register::Address<0x400900d8,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh9sadr{    ///<PDMA_CH9SADR
        using Addr = Register::Address<0x400900dc,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh9dadr{    ///<PDMA_CH9DADR
        using Addr = Register::Address<0x400900e0,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh9cadr{    ///<PDMA_CH9CADR
        using Addr = Register::Address<0x400900e4,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh9tsr{    ///<PDMA_CH9TSR
        using Addr = Register::Address<0x400900e8,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh9ctsr{    ///<PDMA_CH9CTSR
        using Addr = Register::Address<0x400900ec,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh10cr{    ///<PDMA_CH10CR
        using Addr = Register::Address<0x400900f0,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh10sadr{    ///<PDMA_CH10SADR
        using Addr = Register::Address<0x400900f4,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh10dadr{    ///<PDMA_CH10DADR
        using Addr = Register::Address<0x400900f8,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh10cadr{    ///<PDMA_CH10CADR
        using Addr = Register::Address<0x400900fc,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh10tsr{    ///<PDMA_CH10TSR
        using Addr = Register::Address<0x40090100,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh10ctsr{    ///<PDMA_CH10CTSR
        using Addr = Register::Address<0x40090104,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaCh11cr{    ///<PDMA_CH11CR
        using Addr = Register::Address<0x40090108,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
    }
    namespace NonepdmaCh11sadr{    ///<PDMA_CH11SADR
        using Addr = Register::Address<0x4009010c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
    }
    namespace NonepdmaCh11dadr{    ///<PDMA_CH11DADR
        using Addr = Register::Address<0x40090110,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
    }
    namespace NonepdmaCh11cadr{    ///<PDMA_CH11CADR
        using Addr = Register::Address<0x40090114,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
    }
    namespace NonepdmaCh11tsr{    ///<PDMA_CH11TSR
        using Addr = Register::Address<0x40090118,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
    }
    namespace NonepdmaCh11ctsr{    ///<PDMA_CH11CTSR
        using Addr = Register::Address<0x4009011c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
    }
    namespace NonepdmaIsr0{    ///<PDMA_ISR0
        using Addr = Register::Address<0x40090120,0xc0000000,0,unsigned>;
        ///GEISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geista0{}; 
        ///BEISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beista0{}; 
        ///HTISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htista0{}; 
        ///TCISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcista0{}; 
        ///TEISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teista0{}; 
        ///GEISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geista1{}; 
        ///BEISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beista1{}; 
        ///HTISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htista1{}; 
        ///TCISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcista1{}; 
        ///TEISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teista1{}; 
        ///GEISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geista2{}; 
        ///BEISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beista2{}; 
        ///HTISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htista2{}; 
        ///TCISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcista2{}; 
        ///TEISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teista2{}; 
        ///GEISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geista3{}; 
        ///BEISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beista3{}; 
        ///HTISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htista3{}; 
        ///TCISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcista3{}; 
        ///TEISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teista3{}; 
        ///GEISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geista4{}; 
        ///BEISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beista4{}; 
        ///HTISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htista4{}; 
        ///TCISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcista4{}; 
        ///TEISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teista4{}; 
        ///GEISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geista5{}; 
        ///BEISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beista5{}; 
        ///HTISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htista5{}; 
        ///TCISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcista5{}; 
        ///TEISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teista5{}; 
    }
    namespace NonepdmaIsr1{    ///<PDMA_ISR1
        using Addr = Register::Address<0x40090124,0xc0000000,0,unsigned>;
        ///GEISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geista6{}; 
        ///BEISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beista6{}; 
        ///HTISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htista6{}; 
        ///TCISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcista6{}; 
        ///TEISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teista6{}; 
        ///GEISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geista7{}; 
        ///BEISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beista7{}; 
        ///HTISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htista7{}; 
        ///TCISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcista7{}; 
        ///TEISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teista7{}; 
        ///GEISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geista8{}; 
        ///BEISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beista8{}; 
        ///HTISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htista8{}; 
        ///TCISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcista8{}; 
        ///TEISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teista8{}; 
        ///GEISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geista9{}; 
        ///BEISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beista9{}; 
        ///HTISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htista9{}; 
        ///TCISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcista9{}; 
        ///TEISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teista9{}; 
        ///GEISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geista10{}; 
        ///BEISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beista10{}; 
        ///HTISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htista10{}; 
        ///TCISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcista10{}; 
        ///TEISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teista10{}; 
        ///GEISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geista11{}; 
        ///BEISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beista11{}; 
        ///HTISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htista11{}; 
        ///TCISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcista11{}; 
        ///TEISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teista11{}; 
    }
    namespace NonepdmaIscr0{    ///<PDMA_ISCR0
        using Addr = Register::Address<0x40090128,0xc0000000,0,unsigned>;
        ///GEICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geiclr0{}; 
        ///BEICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beiclr0{}; 
        ///HTICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hticlr0{}; 
        ///TCICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tciclr0{}; 
        ///TEICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teiclr0{}; 
        ///GEICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geiclr1{}; 
        ///BEICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beiclr1{}; 
        ///HTICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hticlr1{}; 
        ///TCICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tciclr1{}; 
        ///TEICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teiclr1{}; 
        ///GEICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geiclr2{}; 
        ///BEICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beiclr2{}; 
        ///HTICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hticlr2{}; 
        ///TCICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tciclr2{}; 
        ///TEICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teiclr2{}; 
        ///GEICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geiclr3{}; 
        ///BEICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beiclr3{}; 
        ///HTICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hticlr3{}; 
        ///TCICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tciclr3{}; 
        ///TEICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teiclr3{}; 
        ///GEICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geiclr4{}; 
        ///BEICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beiclr4{}; 
        ///HTICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> hticlr4{}; 
        ///TCICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tciclr4{}; 
        ///TEICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teiclr4{}; 
        ///GEICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geiclr5{}; 
        ///BEICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beiclr5{}; 
        ///HTICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hticlr5{}; 
        ///TCICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tciclr5{}; 
        ///TEICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teiclr5{}; 
    }
    namespace NonepdmaIscr1{    ///<PDMA_ISCR1
        using Addr = Register::Address<0x4009012c,0xc0000000,0,unsigned>;
        ///GEICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geiclr6{}; 
        ///BEICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beiclr6{}; 
        ///HTICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hticlr6{}; 
        ///TCICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tciclr6{}; 
        ///TEICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teiclr6{}; 
        ///GEICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geiclr7{}; 
        ///BEICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beiclr7{}; 
        ///HTICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hticlr7{}; 
        ///TCICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tciclr7{}; 
        ///TEICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teiclr7{}; 
        ///GEICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geiclr8{}; 
        ///BEICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beiclr8{}; 
        ///HTICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hticlr8{}; 
        ///TCICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tciclr8{}; 
        ///TEICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teiclr8{}; 
        ///GEICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geiclr9{}; 
        ///BEICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beiclr9{}; 
        ///HTICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hticlr9{}; 
        ///TCICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tciclr9{}; 
        ///TEICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teiclr9{}; 
        ///GEICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geiclr10{}; 
        ///BEICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beiclr10{}; 
        ///HTICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> hticlr10{}; 
        ///TCICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tciclr10{}; 
        ///TEICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teiclr10{}; 
        ///GEICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geiclr11{}; 
        ///BEICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beiclr11{}; 
        ///HTICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hticlr11{}; 
        ///TCICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tciclr11{}; 
        ///TEICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teiclr11{}; 
    }
    namespace NonepdmaIer0{    ///<PDMA_IER0
        using Addr = Register::Address<0x40090130,0xc0000000,0,unsigned>;
        ///GEIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geie0{}; 
        ///BEIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beie0{}; 
        ///HTIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie0{}; 
        ///TCIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcie0{}; 
        ///TEIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teie0{}; 
        ///GEIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geie1{}; 
        ///BEIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beie1{}; 
        ///HTIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htie1{}; 
        ///TCIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcie1{}; 
        ///TEIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teie1{}; 
        ///GEIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geie2{}; 
        ///BEIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beie2{}; 
        ///HTIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htie2{}; 
        ///TCIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcie2{}; 
        ///TEIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teie2{}; 
        ///GEIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geie3{}; 
        ///BEIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beie3{}; 
        ///HTIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htie3{}; 
        ///TCIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcie3{}; 
        ///TEIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teie3{}; 
        ///GEIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geie4{}; 
        ///BEIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beie4{}; 
        ///HTIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htie4{}; 
        ///TCIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcie4{}; 
        ///TEIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teie4{}; 
        ///GEIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geie5{}; 
        ///BEIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beie5{}; 
        ///HTIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htie5{}; 
        ///TCIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcie5{}; 
        ///TEIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teie5{}; 
    }
    namespace NonepdmaIer1{    ///<PDMA_IER1
        using Addr = Register::Address<0x40090134,0xc0000000,0,unsigned>;
        ///GEIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geie6{}; 
        ///BEIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beie6{}; 
        ///HTIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie6{}; 
        ///TCIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcie6{}; 
        ///TEIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teie6{}; 
        ///GEIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geie7{}; 
        ///BEIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beie7{}; 
        ///HTIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htie7{}; 
        ///TCIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcie7{}; 
        ///TEIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teie7{}; 
        ///GEIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geie8{}; 
        ///BEIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beie8{}; 
        ///HTIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htie8{}; 
        ///TCIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcie8{}; 
        ///TEIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teie8{}; 
        ///GEIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geie9{}; 
        ///BEIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beie9{}; 
        ///HTIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htie9{}; 
        ///TCIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcie9{}; 
        ///TEIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teie9{}; 
        ///GEIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geie10{}; 
        ///BEIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beie10{}; 
        ///HTIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htie10{}; 
        ///TCIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcie10{}; 
        ///TEIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teie10{}; 
        ///GEIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geie11{}; 
        ///BEIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beie11{}; 
        ///HTIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htie11{}; 
        ///TCIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcie11{}; 
        ///TEIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teie11{}; 
    }
}
