#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low-speed CR Prescaler
    namespace NonelcrPrsld{    ///<Low-speed CR Prescaler Control Register
        using Addr = Register::Address<0x4003c000,0xffffffc0,0,unsigned char>;
        ///Low-speed CR Prescaler Load
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> lcrPrsld{}; 
    }
}
