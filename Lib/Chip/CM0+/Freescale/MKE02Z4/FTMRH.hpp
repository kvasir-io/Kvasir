#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace FTMRH_fclkdiv{
        using Addr = Register::Address<0x40020000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0)> FDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FDIVLCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FDIVLD; 
    }
    namespace FTMRH_fsec{
        using Addr = Register::Address<0x40020001,0xffffff3c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> SEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> KEYEN; 
    }
    namespace FTMRH_fccobix{
        using Addr = Register::Address<0x40020002,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> CCOBIX; 
    }
    namespace FTMRH_fcnfg{
        using Addr = Register::Address<0x40020004,0xffffff6c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FSFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FDFD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IGNSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIE; 
    }
    namespace FTMRH_fercnfg{
        using Addr = Register::Address<0x40020005,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SFDIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DFDIE; 
    }
    namespace FTMRH_fstat{
        using Addr = Register::Address<0x40020006,0xffffff44>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> MGSTAT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MGBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FPVIOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ACCERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CCIF; 
    }
    namespace FTMRH_ferstat{
        using Addr = Register::Address<0x40020007,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SFDIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DFDIF; 
    }
    namespace FTMRH_fprot{
        using Addr = Register::Address<0x40020008,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> FPLS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FPLDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> FPHS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FPHDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RNV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FPOPEN; 
    }
    namespace FTMRH_eeprot{
        using Addr = Register::Address<0x40020009,0xffffff78>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> DPS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DPOPEN; 
    }
    namespace FTMRH_fccobhi{
        using Addr = Register::Address<0x4002000a,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOB; 
    }
    namespace FTMRH_fccoblo{
        using Addr = Register::Address<0x4002000b,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> CCOB; 
    }
    namespace FTMRH_fopt{
        using Addr = Register::Address<0x4002000c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> NV; 
    }
}
