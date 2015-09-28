#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTMRE_fccobix{
        using Addr = Register::Address<0x40020001,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CCOBIX; 
    }
    namespace FTMRE_fsec{
        using Addr = Register::Address<0x40020002,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace FTMRE_fclkdiv{
        using Addr = Register::Address<0x40020003,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FDIVLCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FDIVLD; 
    }
    namespace FTMRE_fstat{
        using Addr = Register::Address<0x40020005,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MGSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MGBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIF; 
    }
    namespace FTMRE_fcnfg{
        using Addr = Register::Address<0x40020007,0xffffff5f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERSAREQ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIE; 
    }
    namespace FTMRE_fccoblo{
        using Addr = Register::Address<0x40020008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOB; 
    }
    namespace FTMRE_fccobhi{
        using Addr = Register::Address<0x40020009,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOB; 
    }
    namespace FTMRE_fprot{
        using Addr = Register::Address<0x4002000b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FPLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FPLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> RNV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RNV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FPOPEN; 
    }
    namespace FTMRE_fopt{
        using Addr = Register::Address<0x4002000f,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NV; 
    }
}
