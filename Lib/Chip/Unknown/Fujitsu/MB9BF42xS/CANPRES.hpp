#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//CAN Prescaler Register
    namespace Nonecanpre{    ///<CAN Prescaler Register
        using Addr = Register::Address<0x40037000,0xffffffff,0,unsigned char>;
    }
}
