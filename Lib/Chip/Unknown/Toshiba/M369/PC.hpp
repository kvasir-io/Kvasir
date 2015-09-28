#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0200,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0204,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0208,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7F1; 
    }
    namespace Nonefr2{
        using Addr = Register::Address<0x400c020c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0F2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1F2; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0228,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c022c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7UP; 
    }
    namespace Nonepdn{
        using Addr = Register::Address<0x400c0230,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6DN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7DN; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0238,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PC0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PC1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PC2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PC3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PC4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PC5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PC6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PC7IE; 
    }
}
