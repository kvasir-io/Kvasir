#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CAN Prescaler Register
    namespace CanpresCanpre{    ///<CAN Prescaler Register
        using Addr = Register::Address<0x40037000,0xffffffff,0x00000000,unsigned char>;
    }
}
