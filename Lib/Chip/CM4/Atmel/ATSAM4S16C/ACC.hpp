#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace ACC_cr{
        using Addr = Register::Address<0x40040000,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWRST; 
    }
    namespace ACC_mr{
        using Addr = Register::Address<0x40040004,0xffff8888>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SELMINUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4)> SELPLUS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ACEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,9)> EDGETYP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> INV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> SELFS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FE; 
    }
    namespace ACC_ier{
        using Addr = Register::Address<0x40040024,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
    }
    namespace ACC_idr{
        using Addr = Register::Address<0x40040028,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
    }
    namespace ACC_imr{
        using Addr = Register::Address<0x4004002c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
    }
    namespace ACC_isr{
        using Addr = Register::Address<0x40040030,0x7ffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SCO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> MASK; 
    }
    namespace ACC_acr{
        using Addr = Register::Address<0x40040094,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,1)> HYST; 
    }
    namespace ACC_wpmr{
        using Addr = Register::Address<0x400400e4,0x000000fe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,8)> WPKEY; 
    }
    namespace ACC_wpsr{
        using Addr = Register::Address<0x400400e8,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WPROTERR; 
    }
}
