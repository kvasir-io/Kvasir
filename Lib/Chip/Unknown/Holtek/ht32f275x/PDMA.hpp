#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//PDMA
    namespace NonepdmaCh0cr{    ///<PDMA_CH0CR
        using Addr = Register::Address<0x40090000,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh0sadr{    ///<PDMA_CH0SADR
        using Addr = Register::Address<0x40090004,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh0dadr{    ///<PDMA_CH0DADR
        using Addr = Register::Address<0x40090008,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh0cadr{    ///<PDMA_CH0CADR
        using Addr = Register::Address<0x4009000c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh0tsr{    ///<PDMA_CH0TSR
        using Addr = Register::Address<0x40090010,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh0ctsr{    ///<PDMA_CH0CTSR
        using Addr = Register::Address<0x40090014,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh1cr{    ///<PDMA_CH1CR
        using Addr = Register::Address<0x40090018,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh1sadr{    ///<PDMA_CH1SADR
        using Addr = Register::Address<0x4009001c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh1dadr{    ///<PDMA_CH1DADR
        using Addr = Register::Address<0x40090020,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh1cadr{    ///<PDMA_CH1CADR
        using Addr = Register::Address<0x40090024,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh1tsr{    ///<PDMA_CH1TSR
        using Addr = Register::Address<0x40090028,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh1ctsr{    ///<PDMA_CH1CTSR
        using Addr = Register::Address<0x4009002c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh2cr{    ///<PDMA_CH2CR
        using Addr = Register::Address<0x40090030,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh2sadr{    ///<PDMA_CH2SADR
        using Addr = Register::Address<0x40090034,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh2dadr{    ///<PDMA_CH2DADR
        using Addr = Register::Address<0x40090038,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh2cadr{    ///<PDMA_CH2CADR
        using Addr = Register::Address<0x4009003c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh2tsr{    ///<PDMA_CH2TSR
        using Addr = Register::Address<0x40090040,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh2ctsr{    ///<PDMA_CH2CTSR
        using Addr = Register::Address<0x40090044,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh3cr{    ///<PDMA_CH3CR
        using Addr = Register::Address<0x40090048,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh3sadr{    ///<PDMA_CH3SADR
        using Addr = Register::Address<0x4009004c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh3dadr{    ///<PDMA_CH3DADR
        using Addr = Register::Address<0x40090050,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh3cadr{    ///<PDMA_CH3CADR
        using Addr = Register::Address<0x40090054,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh3tsr{    ///<PDMA_CH3TSR
        using Addr = Register::Address<0x40090058,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh3ctsr{    ///<PDMA_CH3CTSR
        using Addr = Register::Address<0x4009005c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh4cr{    ///<PDMA_CH4CR
        using Addr = Register::Address<0x40090060,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh4sadr{    ///<PDMA_CH4SADR
        using Addr = Register::Address<0x40090064,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh4dadr{    ///<PDMA_CH4DADR
        using Addr = Register::Address<0x40090068,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh4cadr{    ///<PDMA_CH4CADR
        using Addr = Register::Address<0x4009006c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh4tsr{    ///<PDMA_CH4TSR
        using Addr = Register::Address<0x40090070,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh4ctsr{    ///<PDMA_CH4CTSR
        using Addr = Register::Address<0x40090074,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh5cr{    ///<PDMA_CH5CR
        using Addr = Register::Address<0x40090078,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh5sadr{    ///<PDMA_CH5SADR
        using Addr = Register::Address<0x4009007c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh5dadr{    ///<PDMA_CH5DADR
        using Addr = Register::Address<0x40090080,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh5cadr{    ///<PDMA_CH5CADR
        using Addr = Register::Address<0x40090084,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh5tsr{    ///<PDMA_CH5TSR
        using Addr = Register::Address<0x40090088,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh5ctsr{    ///<PDMA_CH5CTSR
        using Addr = Register::Address<0x4009008c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh6cr{    ///<PDMA_CH6CR
        using Addr = Register::Address<0x40090090,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh6sadr{    ///<PDMA_CH6SADR
        using Addr = Register::Address<0x40090094,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh6dadr{    ///<PDMA_CH6DADR
        using Addr = Register::Address<0x40090098,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh6cadr{    ///<PDMA_CH6CADR
        using Addr = Register::Address<0x4009009c,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh6tsr{    ///<PDMA_CH6TSR
        using Addr = Register::Address<0x400900a0,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh6ctsr{    ///<PDMA_CH6CTSR
        using Addr = Register::Address<0x400900a4,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh7cr{    ///<PDMA_CH7CR
        using Addr = Register::Address<0x400900a8,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh7sadr{    ///<PDMA_CH7SADR
        using Addr = Register::Address<0x400900ac,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh7dadr{    ///<PDMA_CH7DADR
        using Addr = Register::Address<0x400900b0,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh7cadr{    ///<PDMA_CH7CADR
        using Addr = Register::Address<0x400900b4,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh7tsr{    ///<PDMA_CH7TSR
        using Addr = Register::Address<0x400900b8,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh7ctsr{    ///<PDMA_CH7CTSR
        using Addr = Register::Address<0x400900bc,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh8cr{    ///<PDMA_CH8CR
        using Addr = Register::Address<0x400900c0,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh8sadr{    ///<PDMA_CH8SADR
        using Addr = Register::Address<0x400900c4,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh8dadr{    ///<PDMA_CH8DADR
        using Addr = Register::Address<0x400900c8,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh8cadr{    ///<PDMA_CH8CADR
        using Addr = Register::Address<0x400900cc,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh8tsr{    ///<PDMA_CH8TSR
        using Addr = Register::Address<0x400900d0,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh8ctsr{    ///<PDMA_CH8CTSR
        using Addr = Register::Address<0x400900d4,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh9cr{    ///<PDMA_CH9CR
        using Addr = Register::Address<0x400900d8,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh9sadr{    ///<PDMA_CH9SADR
        using Addr = Register::Address<0x400900dc,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh9dadr{    ///<PDMA_CH9DADR
        using Addr = Register::Address<0x400900e0,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh9cadr{    ///<PDMA_CH9CADR
        using Addr = Register::Address<0x400900e4,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh9tsr{    ///<PDMA_CH9TSR
        using Addr = Register::Address<0x400900e8,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh9ctsr{    ///<PDMA_CH9CTSR
        using Addr = Register::Address<0x400900ec,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh10cr{    ///<PDMA_CH10CR
        using Addr = Register::Address<0x400900f0,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh10sadr{    ///<PDMA_CH10SADR
        using Addr = Register::Address<0x400900f4,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh10dadr{    ///<PDMA_CH10DADR
        using Addr = Register::Address<0x400900f8,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh10cadr{    ///<PDMA_CH10CADR
        using Addr = Register::Address<0x400900fc,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh10tsr{    ///<PDMA_CH10TSR
        using Addr = Register::Address<0x40090100,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh10ctsr{    ///<PDMA_CH10CTSR
        using Addr = Register::Address<0x40090104,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaCh11cr{    ///<PDMA_CH11CR
        using Addr = Register::Address<0x40090108,0xfffff000,0,unsigned>;
        ///CHEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen{}; 
        namespace ChenValC{
        }
        ///SWTRIG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig{}; 
        namespace SwtrigValC{
        }
        ///DWIDTH
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> dwidth{}; 
        namespace DwidthValC{
        }
        ///DSTAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dstainc{}; 
        namespace DstaincValC{
        }
        ///DSTAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> dstamod{}; 
        namespace DstamodValC{
        }
        ///SRCAINC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> srcainc{}; 
        namespace SrcaincValC{
        }
        ///SRCAMOD
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> srcamod{}; 
        namespace SrcamodValC{
        }
        ///CHPRI
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> chpri{}; 
        namespace ChpriValC{
        }
        ///FIXAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> fixaen{}; 
        namespace FixaenValC{
        }
        ///AUTORL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> autorl{}; 
        namespace AutorlValC{
        }
    }
    namespace NonepdmaCh11sadr{    ///<PDMA_CH11SADR
        using Addr = Register::Address<0x4009010c,0x00000000,0,unsigned>;
        ///SADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> sadr{}; 
        namespace SadrValC{
        }
    }
    namespace NonepdmaCh11dadr{    ///<PDMA_CH11DADR
        using Addr = Register::Address<0x40090110,0x00000000,0,unsigned>;
        ///DADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> dadr{}; 
        namespace DadrValC{
        }
    }
    namespace NonepdmaCh11cadr{    ///<PDMA_CH11CADR
        using Addr = Register::Address<0x40090114,0x00000000,0,unsigned>;
        ///CDADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cdadr{}; 
        namespace CdadrValC{
        }
        ///CSADR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> csadr{}; 
        namespace CsadrValC{
        }
    }
    namespace NonepdmaCh11tsr{    ///<PDMA_CH11TSR
        using Addr = Register::Address<0x40090118,0x00000000,0,unsigned>;
        ///BLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> blklen{}; 
        namespace BlklenValC{
        }
        ///BLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> blkcnt{}; 
        namespace BlkcntValC{
        }
    }
    namespace NonepdmaCh11ctsr{    ///<PDMA_CH11CTSR
        using Addr = Register::Address<0x4009011c,0x00000000,0,unsigned>;
        ///CBLKLEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cblklen{}; 
        namespace CblklenValC{
        }
        ///CBLKCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> cblkcnt{}; 
        namespace CblkcntValC{
        }
    }
    namespace NonepdmaIsr0{    ///<PDMA_ISR0
        using Addr = Register::Address<0x40090120,0xc0000000,0,unsigned>;
        ///GEISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geista0{}; 
        namespace Geista0ValC{
        }
        ///BEISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beista0{}; 
        namespace Beista0ValC{
        }
        ///HTISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htista0{}; 
        namespace Htista0ValC{
        }
        ///TCISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcista0{}; 
        namespace Tcista0ValC{
        }
        ///TEISTA0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teista0{}; 
        namespace Teista0ValC{
        }
        ///GEISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geista1{}; 
        namespace Geista1ValC{
        }
        ///BEISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beista1{}; 
        namespace Beista1ValC{
        }
        ///HTISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htista1{}; 
        namespace Htista1ValC{
        }
        ///TCISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcista1{}; 
        namespace Tcista1ValC{
        }
        ///TEISTA1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teista1{}; 
        namespace Teista1ValC{
        }
        ///GEISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geista2{}; 
        namespace Geista2ValC{
        }
        ///BEISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beista2{}; 
        namespace Beista2ValC{
        }
        ///HTISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htista2{}; 
        namespace Htista2ValC{
        }
        ///TCISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcista2{}; 
        namespace Tcista2ValC{
        }
        ///TEISTA2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teista2{}; 
        namespace Teista2ValC{
        }
        ///GEISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geista3{}; 
        namespace Geista3ValC{
        }
        ///BEISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beista3{}; 
        namespace Beista3ValC{
        }
        ///HTISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htista3{}; 
        namespace Htista3ValC{
        }
        ///TCISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcista3{}; 
        namespace Tcista3ValC{
        }
        ///TEISTA3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teista3{}; 
        namespace Teista3ValC{
        }
        ///GEISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geista4{}; 
        namespace Geista4ValC{
        }
        ///BEISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beista4{}; 
        namespace Beista4ValC{
        }
        ///HTISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htista4{}; 
        namespace Htista4ValC{
        }
        ///TCISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcista4{}; 
        namespace Tcista4ValC{
        }
        ///TEISTA4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teista4{}; 
        namespace Teista4ValC{
        }
        ///GEISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geista5{}; 
        namespace Geista5ValC{
        }
        ///BEISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beista5{}; 
        namespace Beista5ValC{
        }
        ///HTISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htista5{}; 
        namespace Htista5ValC{
        }
        ///TCISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcista5{}; 
        namespace Tcista5ValC{
        }
        ///TEISTA5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teista5{}; 
        namespace Teista5ValC{
        }
    }
    namespace NonepdmaIsr1{    ///<PDMA_ISR1
        using Addr = Register::Address<0x40090124,0xc0000000,0,unsigned>;
        ///GEISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geista6{}; 
        namespace Geista6ValC{
        }
        ///BEISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beista6{}; 
        namespace Beista6ValC{
        }
        ///HTISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htista6{}; 
        namespace Htista6ValC{
        }
        ///TCISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcista6{}; 
        namespace Tcista6ValC{
        }
        ///TEISTA6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teista6{}; 
        namespace Teista6ValC{
        }
        ///GEISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geista7{}; 
        namespace Geista7ValC{
        }
        ///BEISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beista7{}; 
        namespace Beista7ValC{
        }
        ///HTISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htista7{}; 
        namespace Htista7ValC{
        }
        ///TCISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcista7{}; 
        namespace Tcista7ValC{
        }
        ///TEISTA7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teista7{}; 
        namespace Teista7ValC{
        }
        ///GEISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geista8{}; 
        namespace Geista8ValC{
        }
        ///BEISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beista8{}; 
        namespace Beista8ValC{
        }
        ///HTISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htista8{}; 
        namespace Htista8ValC{
        }
        ///TCISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcista8{}; 
        namespace Tcista8ValC{
        }
        ///TEISTA8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teista8{}; 
        namespace Teista8ValC{
        }
        ///GEISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geista9{}; 
        namespace Geista9ValC{
        }
        ///BEISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beista9{}; 
        namespace Beista9ValC{
        }
        ///HTISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htista9{}; 
        namespace Htista9ValC{
        }
        ///TCISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcista9{}; 
        namespace Tcista9ValC{
        }
        ///TEISTA9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teista9{}; 
        namespace Teista9ValC{
        }
        ///GEISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geista10{}; 
        namespace Geista10ValC{
        }
        ///BEISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beista10{}; 
        namespace Beista10ValC{
        }
        ///HTISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htista10{}; 
        namespace Htista10ValC{
        }
        ///TCISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcista10{}; 
        namespace Tcista10ValC{
        }
        ///TEISTA10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teista10{}; 
        namespace Teista10ValC{
        }
        ///GEISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geista11{}; 
        namespace Geista11ValC{
        }
        ///BEISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beista11{}; 
        namespace Beista11ValC{
        }
        ///HTISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htista11{}; 
        namespace Htista11ValC{
        }
        ///TCISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcista11{}; 
        namespace Tcista11ValC{
        }
        ///TEISTA11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teista11{}; 
        namespace Teista11ValC{
        }
    }
    namespace NonepdmaIscr0{    ///<PDMA_ISCR0
        using Addr = Register::Address<0x40090128,0xc0000000,0,unsigned>;
        ///GEICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geiclr0{}; 
        namespace Geiclr0ValC{
        }
        ///BEICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beiclr0{}; 
        namespace Beiclr0ValC{
        }
        ///HTICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hticlr0{}; 
        namespace Hticlr0ValC{
        }
        ///TCICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tciclr0{}; 
        namespace Tciclr0ValC{
        }
        ///TEICLR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teiclr0{}; 
        namespace Teiclr0ValC{
        }
        ///GEICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geiclr1{}; 
        namespace Geiclr1ValC{
        }
        ///BEICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beiclr1{}; 
        namespace Beiclr1ValC{
        }
        ///HTICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hticlr1{}; 
        namespace Hticlr1ValC{
        }
        ///TCICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tciclr1{}; 
        namespace Tciclr1ValC{
        }
        ///TEICLR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teiclr1{}; 
        namespace Teiclr1ValC{
        }
        ///GEICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geiclr2{}; 
        namespace Geiclr2ValC{
        }
        ///BEICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beiclr2{}; 
        namespace Beiclr2ValC{
        }
        ///HTICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hticlr2{}; 
        namespace Hticlr2ValC{
        }
        ///TCICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tciclr2{}; 
        namespace Tciclr2ValC{
        }
        ///TEICLR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teiclr2{}; 
        namespace Teiclr2ValC{
        }
        ///GEICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geiclr3{}; 
        namespace Geiclr3ValC{
        }
        ///BEICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beiclr3{}; 
        namespace Beiclr3ValC{
        }
        ///HTICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hticlr3{}; 
        namespace Hticlr3ValC{
        }
        ///TCICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tciclr3{}; 
        namespace Tciclr3ValC{
        }
        ///TEICLR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teiclr3{}; 
        namespace Teiclr3ValC{
        }
        ///GEICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geiclr4{}; 
        namespace Geiclr4ValC{
        }
        ///BEICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beiclr4{}; 
        namespace Beiclr4ValC{
        }
        ///HTICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> hticlr4{}; 
        namespace Hticlr4ValC{
        }
        ///TCICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tciclr4{}; 
        namespace Tciclr4ValC{
        }
        ///TEICLR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teiclr4{}; 
        namespace Teiclr4ValC{
        }
        ///GEICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geiclr5{}; 
        namespace Geiclr5ValC{
        }
        ///BEICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beiclr5{}; 
        namespace Beiclr5ValC{
        }
        ///HTICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hticlr5{}; 
        namespace Hticlr5ValC{
        }
        ///TCICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tciclr5{}; 
        namespace Tciclr5ValC{
        }
        ///TEICLR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teiclr5{}; 
        namespace Teiclr5ValC{
        }
    }
    namespace NonepdmaIscr1{    ///<PDMA_ISCR1
        using Addr = Register::Address<0x4009012c,0xc0000000,0,unsigned>;
        ///GEICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geiclr6{}; 
        namespace Geiclr6ValC{
        }
        ///BEICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beiclr6{}; 
        namespace Beiclr6ValC{
        }
        ///HTICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> hticlr6{}; 
        namespace Hticlr6ValC{
        }
        ///TCICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tciclr6{}; 
        namespace Tciclr6ValC{
        }
        ///TEICLR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teiclr6{}; 
        namespace Teiclr6ValC{
        }
        ///GEICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geiclr7{}; 
        namespace Geiclr7ValC{
        }
        ///BEICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beiclr7{}; 
        namespace Beiclr7ValC{
        }
        ///HTICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> hticlr7{}; 
        namespace Hticlr7ValC{
        }
        ///TCICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tciclr7{}; 
        namespace Tciclr7ValC{
        }
        ///TEICLR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teiclr7{}; 
        namespace Teiclr7ValC{
        }
        ///GEICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geiclr8{}; 
        namespace Geiclr8ValC{
        }
        ///BEICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beiclr8{}; 
        namespace Beiclr8ValC{
        }
        ///HTICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hticlr8{}; 
        namespace Hticlr8ValC{
        }
        ///TCICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tciclr8{}; 
        namespace Tciclr8ValC{
        }
        ///TEICLR8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teiclr8{}; 
        namespace Teiclr8ValC{
        }
        ///GEICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geiclr9{}; 
        namespace Geiclr9ValC{
        }
        ///BEICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beiclr9{}; 
        namespace Beiclr9ValC{
        }
        ///HTICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> hticlr9{}; 
        namespace Hticlr9ValC{
        }
        ///TCICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tciclr9{}; 
        namespace Tciclr9ValC{
        }
        ///TEICLR9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teiclr9{}; 
        namespace Teiclr9ValC{
        }
        ///GEICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geiclr10{}; 
        namespace Geiclr10ValC{
        }
        ///BEICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beiclr10{}; 
        namespace Beiclr10ValC{
        }
        ///HTICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> hticlr10{}; 
        namespace Hticlr10ValC{
        }
        ///TCICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tciclr10{}; 
        namespace Tciclr10ValC{
        }
        ///TEICLR10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teiclr10{}; 
        namespace Teiclr10ValC{
        }
        ///GEICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geiclr11{}; 
        namespace Geiclr11ValC{
        }
        ///BEICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beiclr11{}; 
        namespace Beiclr11ValC{
        }
        ///HTICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> hticlr11{}; 
        namespace Hticlr11ValC{
        }
        ///TCICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tciclr11{}; 
        namespace Tciclr11ValC{
        }
        ///TEICLR11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teiclr11{}; 
        namespace Teiclr11ValC{
        }
    }
    namespace NonepdmaIer0{    ///<PDMA_IER0
        using Addr = Register::Address<0x40090130,0xc0000000,0,unsigned>;
        ///GEIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geie0{}; 
        namespace Geie0ValC{
        }
        ///BEIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beie0{}; 
        namespace Beie0ValC{
        }
        ///HTIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie0{}; 
        namespace Htie0ValC{
        }
        ///TCIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcie0{}; 
        namespace Tcie0ValC{
        }
        ///TEIE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teie0{}; 
        namespace Teie0ValC{
        }
        ///GEIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geie1{}; 
        namespace Geie1ValC{
        }
        ///BEIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beie1{}; 
        namespace Beie1ValC{
        }
        ///HTIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htie1{}; 
        namespace Htie1ValC{
        }
        ///TCIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcie1{}; 
        namespace Tcie1ValC{
        }
        ///TEIE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teie1{}; 
        namespace Teie1ValC{
        }
        ///GEIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geie2{}; 
        namespace Geie2ValC{
        }
        ///BEIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beie2{}; 
        namespace Beie2ValC{
        }
        ///HTIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htie2{}; 
        namespace Htie2ValC{
        }
        ///TCIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcie2{}; 
        namespace Tcie2ValC{
        }
        ///TEIE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teie2{}; 
        namespace Teie2ValC{
        }
        ///GEIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geie3{}; 
        namespace Geie3ValC{
        }
        ///BEIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beie3{}; 
        namespace Beie3ValC{
        }
        ///HTIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htie3{}; 
        namespace Htie3ValC{
        }
        ///TCIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcie3{}; 
        namespace Tcie3ValC{
        }
        ///TEIE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teie3{}; 
        namespace Teie3ValC{
        }
        ///GEIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geie4{}; 
        namespace Geie4ValC{
        }
        ///BEIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beie4{}; 
        namespace Beie4ValC{
        }
        ///HTIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htie4{}; 
        namespace Htie4ValC{
        }
        ///TCIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcie4{}; 
        namespace Tcie4ValC{
        }
        ///TEIE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teie4{}; 
        namespace Teie4ValC{
        }
        ///GEIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geie5{}; 
        namespace Geie5ValC{
        }
        ///BEIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beie5{}; 
        namespace Beie5ValC{
        }
        ///HTIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htie5{}; 
        namespace Htie5ValC{
        }
        ///TCIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcie5{}; 
        namespace Tcie5ValC{
        }
        ///TEIE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teie5{}; 
        namespace Teie5ValC{
        }
    }
    namespace NonepdmaIer1{    ///<PDMA_IER1
        using Addr = Register::Address<0x40090134,0xc0000000,0,unsigned>;
        ///GEIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> geie6{}; 
        namespace Geie6ValC{
        }
        ///BEIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> beie6{}; 
        namespace Beie6ValC{
        }
        ///HTIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> htie6{}; 
        namespace Htie6ValC{
        }
        ///TCIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tcie6{}; 
        namespace Tcie6ValC{
        }
        ///TEIE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> teie6{}; 
        namespace Teie6ValC{
        }
        ///GEIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> geie7{}; 
        namespace Geie7ValC{
        }
        ///BEIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> beie7{}; 
        namespace Beie7ValC{
        }
        ///HTIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> htie7{}; 
        namespace Htie7ValC{
        }
        ///TCIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> tcie7{}; 
        namespace Tcie7ValC{
        }
        ///TEIE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> teie7{}; 
        namespace Teie7ValC{
        }
        ///GEIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> geie8{}; 
        namespace Geie8ValC{
        }
        ///BEIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> beie8{}; 
        namespace Beie8ValC{
        }
        ///HTIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> htie8{}; 
        namespace Htie8ValC{
        }
        ///TCIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> tcie8{}; 
        namespace Tcie8ValC{
        }
        ///TEIE8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> teie8{}; 
        namespace Teie8ValC{
        }
        ///GEIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> geie9{}; 
        namespace Geie9ValC{
        }
        ///BEIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> beie9{}; 
        namespace Beie9ValC{
        }
        ///HTIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> htie9{}; 
        namespace Htie9ValC{
        }
        ///TCIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> tcie9{}; 
        namespace Tcie9ValC{
        }
        ///TEIE9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> teie9{}; 
        namespace Teie9ValC{
        }
        ///GEIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> geie10{}; 
        namespace Geie10ValC{
        }
        ///BEIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> beie10{}; 
        namespace Beie10ValC{
        }
        ///HTIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> htie10{}; 
        namespace Htie10ValC{
        }
        ///TCIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> tcie10{}; 
        namespace Tcie10ValC{
        }
        ///TEIE10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> teie10{}; 
        namespace Teie10ValC{
        }
        ///GEIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> geie11{}; 
        namespace Geie11ValC{
        }
        ///BEIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> beie11{}; 
        namespace Beie11ValC{
        }
        ///HTIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> htie11{}; 
        namespace Htie11ValC{
        }
        ///TCIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> tcie11{}; 
        namespace Tcie11ValC{
        }
        ///TEIE11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> teie11{}; 
        namespace Teie11ValC{
        }
    }
}
