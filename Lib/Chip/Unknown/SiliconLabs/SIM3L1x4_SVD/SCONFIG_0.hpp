#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x400490b0,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FDMAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PM8DBGEN; 
    }
}
