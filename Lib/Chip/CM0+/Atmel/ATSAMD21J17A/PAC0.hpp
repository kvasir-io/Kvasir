#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Peripheral Access Controller 0
    namespace Pac0Wpclr{    ///<Write Protection Clear
        using Addr = Register::Address<0x40000000,0x00000001,0x00000000,unsigned>;
        ///Write Protection Clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> wp{}; 
    }
    namespace Pac0Wpset{    ///<Write Protection Set
        using Addr = Register::Address<0x40000004,0x00000001,0x00000000,unsigned>;
        ///Write Protection Set
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> wp{}; 
    }
}
