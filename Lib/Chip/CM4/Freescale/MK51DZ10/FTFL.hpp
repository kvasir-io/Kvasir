#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTFL_fstat{
        using Addr = Register::Address<0x40020000,0xffffff0e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MGSTAT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDCOLERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIF; 
    }
    namespace FTFL_fcnfg{
        using Addr = Register::Address<0x40020001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EEERDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAMRDY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PFLSH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SWAP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ERSSUSP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERSAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RDCOLLIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIE; 
    }
    namespace FTFL_fsec{
        using Addr = Register::Address<0x40020002,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> FSLACC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> MEEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace FTFL_fopt{
        using Addr = Register::Address<0x40020003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> OPT; 
    }
    namespace FTFL_fccob3{
        using Addr = Register::Address<0x40020004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob2{
        using Addr = Register::Address<0x40020005,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob1{
        using Addr = Register::Address<0x40020006,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob0{
        using Addr = Register::Address<0x40020007,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob7{
        using Addr = Register::Address<0x40020008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob6{
        using Addr = Register::Address<0x40020009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob5{
        using Addr = Register::Address<0x4002000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob4{
        using Addr = Register::Address<0x4002000b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccobb{
        using Addr = Register::Address<0x4002000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccoba{
        using Addr = Register::Address<0x4002000d,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob9{
        using Addr = Register::Address<0x4002000e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fccob8{
        using Addr = Register::Address<0x4002000f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTFL_fprot3{
        using Addr = Register::Address<0x40020010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFL_fprot2{
        using Addr = Register::Address<0x40020011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFL_fprot1{
        using Addr = Register::Address<0x40020012,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
    namespace FTFL_fprot0{
        using Addr = Register::Address<0x40020013,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PROT; 
    }
}
