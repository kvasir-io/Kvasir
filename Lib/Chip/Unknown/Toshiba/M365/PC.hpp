#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0200,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0204,0xffffff08>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0208,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2F1; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0210,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0214,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2F4; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0228,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c022c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0238,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2IE; 
    }
}
