#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneps2con{
        using Addr = Register::Address<0x40100000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS2EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RXINTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,3)> TXFIFO_DEPTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ACK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLRFIFO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVERRIDE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> FPS2CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> FPS2DAT; 
    }
    namespace Noneps2txdata0{
        using Addr = Register::Address<0x40100004,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXDATA; 
    }
    namespace Noneps2txdata1{
        using Addr = Register::Address<0x40100008,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXDATA; 
    }
    namespace Noneps2txdata2{
        using Addr = Register::Address<0x4010000c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXDATA; 
    }
    namespace Noneps2txdata3{
        using Addr = Register::Address<0x40100010,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> TXDATA; 
    }
    namespace Noneps2rxdata{
        using Addr = Register::Address<0x40100014,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> PS2RXDATA; 
    }
    namespace Noneps2status{
        using Addr = Register::Address<0x40100018,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PS2CLK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PS2DATA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRAMERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RXPARITY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RXBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> TXBUSY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RXOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TXEMPTY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> BYTEIDX; 
    }
    namespace Noneps2intid{
        using Addr = Register::Address<0x4010001c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RXINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> TXINT; 
    }
}
