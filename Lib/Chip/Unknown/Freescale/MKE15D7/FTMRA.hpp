#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTMRA_fsec{
        using Addr = Register::Address<0x40039000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> RNV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace FTMRA_fclkdiv{
        using Addr = Register::Address<0x40039001,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> FDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FDIVLD; 
    }
    namespace FTMRA_feccrix{
        using Addr = Register::Address<0x40039002,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ECCRIX; 
    }
    namespace FTMRA_fccobix{
        using Addr = Register::Address<0x40039003,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CCOBIX; 
    }
    namespace FTMRA_fercnfg{
        using Addr = Register::Address<0x40039004,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SFDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DFDIE; 
    }
    namespace FTMRA_fcnfg{
        using Addr = Register::Address<0x40039005,0xffffff4c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FDFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IGNSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERSAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIE; 
    }
    namespace FTMRA_ferstat{
        using Addr = Register::Address<0x40039006,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SFDIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DFDIF; 
    }
    namespace FTMRA_fstat{
        using Addr = Register::Address<0x40039007,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MGSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MGBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIF; 
    }
    namespace FTMRA_dfprot{
        using Addr = Register::Address<0x40039008,0xffffff60>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> DPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DPOPEN; 
    }
    namespace FTMRA_fprot{
        using Addr = Register::Address<0x40039009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FPLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FPLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> FPHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FPHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RNV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FPOPEN; 
    }
    namespace FTMRA_fccoblo{
        using Addr = Register::Address<0x4003900a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTMRA_fccobhi{
        using Addr = Register::Address<0x4003900b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOBn; 
    }
    namespace FTMRA_feccrlo{
        using Addr = Register::Address<0x4003900e,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ECCR; 
    }
    namespace FTMRA_feccrhi{
        using Addr = Register::Address<0x4003900f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> ECCR; 
    }
    namespace FTMRA_fopt{
        using Addr = Register::Address<0x40039011,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NV; 
    }
}
