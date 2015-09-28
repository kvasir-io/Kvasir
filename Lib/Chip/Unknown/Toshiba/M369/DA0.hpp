#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecnt{
        using Addr = Register::Address<0x40054000,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> REFON; 
    }
    namespace Nonereg{
        using Addr = Register::Address<0x40054004,0xffff003f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6)> DAC; 
    }
    namespace Nonedctl{
        using Addr = Register::Address<0x40054008,0xffe0f07c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> WAVE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TRGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> TRGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> AMPSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> OFFSET; 
    }
    namespace Nonetctl{
        using Addr = Register::Address<0x4005400c,0xffff7ffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWTRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> DACCLR; 
    }
    namespace Nonevctl{
        using Addr = Register::Address<0x40054010,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> VHOLDCTF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> VHOLDCTB; 
    }
}
