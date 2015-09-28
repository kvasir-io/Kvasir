#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecr1{
        using Addr = Register::Address<0x400f1000,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> OFDWEN; 
    }
    namespace Nonecr2{
        using Addr = Register::Address<0x400f1004,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> OFDEN; 
    }
    namespace Nonemn0{
        using Addr = Register::Address<0x400f1008,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> OFDMN0; 
    }
    namespace Nonemn1{
        using Addr = Register::Address<0x400f100c,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> OFDMN1; 
    }
    namespace Nonemx0{
        using Addr = Register::Address<0x400f1010,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> OFDMX0; 
    }
    namespace Nonemx1{
        using Addr = Register::Address<0x400f1014,0xfffffe00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,0)> OFDMX1; 
    }
    namespace Nonerst{
        using Addr = Register::Address<0x400f1018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OFDRSTEN; 
    }
    namespace Nonestat{
        using Addr = Register::Address<0x400f101c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRQERR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OFDBUSY; 
    }
    namespace Nonemon{
        using Addr = Register::Address<0x400f1020,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OFDMON; 
    }
}
