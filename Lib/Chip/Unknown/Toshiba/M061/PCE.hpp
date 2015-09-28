#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonepintcr{
        using Addr = Register::Address<0x4406f000,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCERST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCENMI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PCEINT; 
    }
    namespace Nonemintcr{
        using Addr = Register::Address<0x4406f004,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MAININT; 
    }
    namespace Nonepclkcr{
        using Addr = Register::Address<0x4406f008,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PCECLK; 
    }
    namespace Nonepnmiflg{
        using Addr = Register::Address<0x4406f00c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDTNMIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCEIFNMIF; 
    }
    namespace Nonepnmiclr{
        using Addr = Register::Address<0x4406f010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WDTNMIC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PCEIFNMIC; 
    }
}
