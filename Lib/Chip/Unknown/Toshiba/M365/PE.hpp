#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x400c0400,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PE7; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x400c0404,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE1C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PE4C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE5C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PE6C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PE7C; 
    }
    namespace Nonefr1{
        using Addr = Register::Address<0x400c0408,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE1F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PE4F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE5F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PE6F1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PE7F1; 
    }
    namespace Nonefr3{
        using Addr = Register::Address<0x400c0410,0xfffffff3>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2F3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3F3; 
    }
    namespace Nonefr4{
        using Addr = Register::Address<0x400c0414,0xfffffffb>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2F4; 
    }
    namespace Noneod{
        using Addr = Register::Address<0x400c0428,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE1OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PE4OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE5OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PE6OD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PE7OD; 
    }
    namespace Nonepup{
        using Addr = Register::Address<0x400c042c,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE1UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PE4UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE5UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PE6UP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PE7UP; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x400c0438,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PE1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PE4IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PE5IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PE6IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PE7IE; 
    }
}
