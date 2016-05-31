#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low-speed CR Prescaler
    namespace LcrLcrPrsld{    ///<Low-speed CR Prescaler Control Register
        using Addr = Register::Address<0x4003c000,0xffffffc0,0x00000000,unsigned char>;
        ///Low-speed CR Prescaler Load
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> lcrPrsld{}; 
    }
}
