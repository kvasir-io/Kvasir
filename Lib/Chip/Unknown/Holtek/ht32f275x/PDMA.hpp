#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepdma_ch0cr{
        using Addr = Register::Address<0x40090000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch0sadr{
        using Addr = Register::Address<0x40090004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch0dadr{
        using Addr = Register::Address<0x40090008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch0cadr{
        using Addr = Register::Address<0x4009000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch0tsr{
        using Addr = Register::Address<0x40090010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch0ctsr{
        using Addr = Register::Address<0x40090014,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch1cr{
        using Addr = Register::Address<0x40090018,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch1sadr{
        using Addr = Register::Address<0x4009001c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch1dadr{
        using Addr = Register::Address<0x40090020,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch1cadr{
        using Addr = Register::Address<0x40090024,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch1tsr{
        using Addr = Register::Address<0x40090028,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch1ctsr{
        using Addr = Register::Address<0x4009002c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch2cr{
        using Addr = Register::Address<0x40090030,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch2sadr{
        using Addr = Register::Address<0x40090034,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch2dadr{
        using Addr = Register::Address<0x40090038,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch2cadr{
        using Addr = Register::Address<0x4009003c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch2tsr{
        using Addr = Register::Address<0x40090040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch2ctsr{
        using Addr = Register::Address<0x40090044,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch3cr{
        using Addr = Register::Address<0x40090048,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch3sadr{
        using Addr = Register::Address<0x4009004c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch3dadr{
        using Addr = Register::Address<0x40090050,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch3cadr{
        using Addr = Register::Address<0x40090054,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch3tsr{
        using Addr = Register::Address<0x40090058,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch3ctsr{
        using Addr = Register::Address<0x4009005c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch4cr{
        using Addr = Register::Address<0x40090060,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch4sadr{
        using Addr = Register::Address<0x40090064,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch4dadr{
        using Addr = Register::Address<0x40090068,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch4cadr{
        using Addr = Register::Address<0x4009006c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch4tsr{
        using Addr = Register::Address<0x40090070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch4ctsr{
        using Addr = Register::Address<0x40090074,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch5cr{
        using Addr = Register::Address<0x40090078,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch5sadr{
        using Addr = Register::Address<0x4009007c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch5dadr{
        using Addr = Register::Address<0x40090080,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch5cadr{
        using Addr = Register::Address<0x40090084,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch5tsr{
        using Addr = Register::Address<0x40090088,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch5ctsr{
        using Addr = Register::Address<0x4009008c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch6cr{
        using Addr = Register::Address<0x40090090,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch6sadr{
        using Addr = Register::Address<0x40090094,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch6dadr{
        using Addr = Register::Address<0x40090098,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch6cadr{
        using Addr = Register::Address<0x4009009c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch6tsr{
        using Addr = Register::Address<0x400900a0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch6ctsr{
        using Addr = Register::Address<0x400900a4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch7cr{
        using Addr = Register::Address<0x400900a8,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch7sadr{
        using Addr = Register::Address<0x400900ac,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch7dadr{
        using Addr = Register::Address<0x400900b0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch7cadr{
        using Addr = Register::Address<0x400900b4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch7tsr{
        using Addr = Register::Address<0x400900b8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch7ctsr{
        using Addr = Register::Address<0x400900bc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch8cr{
        using Addr = Register::Address<0x400900c0,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch8sadr{
        using Addr = Register::Address<0x400900c4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch8dadr{
        using Addr = Register::Address<0x400900c8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch8cadr{
        using Addr = Register::Address<0x400900cc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch8tsr{
        using Addr = Register::Address<0x400900d0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch8ctsr{
        using Addr = Register::Address<0x400900d4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch9cr{
        using Addr = Register::Address<0x400900d8,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch9sadr{
        using Addr = Register::Address<0x400900dc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch9dadr{
        using Addr = Register::Address<0x400900e0,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch9cadr{
        using Addr = Register::Address<0x400900e4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch9tsr{
        using Addr = Register::Address<0x400900e8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch9ctsr{
        using Addr = Register::Address<0x400900ec,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch10cr{
        using Addr = Register::Address<0x400900f0,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch10sadr{
        using Addr = Register::Address<0x400900f4,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch10dadr{
        using Addr = Register::Address<0x400900f8,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch10cadr{
        using Addr = Register::Address<0x400900fc,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch10tsr{
        using Addr = Register::Address<0x40090100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch10ctsr{
        using Addr = Register::Address<0x40090104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_ch11cr{
        using Addr = Register::Address<0x40090108,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CHEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SWTRIG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DWIDTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DSTAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DSTAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> SRCAINC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> SRCAMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> CHPRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FIXAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> AUTORL; 
    }
    namespace Nonepdma_ch11sadr{
        using Addr = Register::Address<0x4009010c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> SADR; 
    }
    namespace Nonepdma_ch11dadr{
        using Addr = Register::Address<0x40090110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> DADR; 
    }
    namespace Nonepdma_ch11cadr{
        using Addr = Register::Address<0x40090114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CDADR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CSADR; 
    }
    namespace Nonepdma_ch11tsr{
        using Addr = Register::Address<0x40090118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> BLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> BLKCNT; 
    }
    namespace Nonepdma_ch11ctsr{
        using Addr = Register::Address<0x4009011c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CBLKLEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CBLKCNT; 
    }
    namespace Nonepdma_isr0{
        using Addr = Register::Address<0x40090120,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GEISTA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BEISTA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTISTA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCISTA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEISTA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GEISTA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BEISTA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HTISTA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCISTA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEISTA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GEISTA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BEISTA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HTISTA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCISTA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEISTA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GEISTA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BEISTA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HTISTA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCISTA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEISTA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GEISTA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEISTA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTISTA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCISTA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEISTA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GEISTA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BEISTA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HTISTA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TCISTA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TEISTA5; 
    }
    namespace Nonepdma_isr1{
        using Addr = Register::Address<0x40090124,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GEISTA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BEISTA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTISTA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCISTA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEISTA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GEISTA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BEISTA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HTISTA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCISTA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEISTA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GEISTA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BEISTA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HTISTA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCISTA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEISTA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GEISTA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BEISTA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HTISTA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCISTA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEISTA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GEISTA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEISTA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTISTA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCISTA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEISTA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GEISTA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BEISTA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HTISTA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TCISTA11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TEISTA11; 
    }
    namespace Nonepdma_iscr0{
        using Addr = Register::Address<0x40090128,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GEICLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BEICLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTICLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCICLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEICLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GEICLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BEICLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HTICLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCICLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEICLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GEICLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BEICLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HTICLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCICLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEICLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GEICLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BEICLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HTICLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCICLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEICLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GEICLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEICLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTICLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCICLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEICLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GEICLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BEICLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HTICLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TCICLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TEICLR5; 
    }
    namespace Nonepdma_iscr1{
        using Addr = Register::Address<0x4009012c,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GEICLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BEICLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTICLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCICLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEICLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GEICLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BEICLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HTICLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCICLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEICLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GEICLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BEICLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HTICLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCICLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEICLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GEICLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BEICLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HTICLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCICLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEICLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GEICLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEICLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTICLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCICLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEICLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GEICLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BEICLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HTICLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TCICLR11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TEICLR11; 
    }
    namespace Nonepdma_ier0{
        using Addr = Register::Address<0x40090130,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GEIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BEIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEIE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GEIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BEIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HTIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEIE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GEIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BEIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HTIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEIE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GEIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BEIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HTIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEIE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GEIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEIE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GEIE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BEIE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HTIE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TCIE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TEIE5; 
    }
    namespace Nonepdma_ier1{
        using Addr = Register::Address<0x40090134,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GEIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BEIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> HTIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> TCIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TEIE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GEIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BEIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> HTIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TCIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TEIE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GEIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BEIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> HTIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> TCIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> TEIE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> GEIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> BEIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> HTIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> TCIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> TEIE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GEIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> BEIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> HTIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> TCIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> TEIE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GEIE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> BEIE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> HTIE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> TCIE11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TEIE11; 
    }
}
