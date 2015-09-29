#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Peripheral Access Controller 0
    namespace PacWpclr{    ///<Write Protection Clear
        using Addr = Register::Address<0x40000000,0x00000001,0,unsigned>;
        ///Write Protection Clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> wp{}; 
    }
    namespace PacWpset{    ///<Write Protection Set
        using Addr = Register::Address<0x40000004,0x00000001,0,unsigned>;
        ///Write Protection Set
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> wp{}; 
    }
}
