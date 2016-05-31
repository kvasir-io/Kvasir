#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral SDIF 
    namespace SdifDummy{    ///< register DUMMY 
        using Addr = Register::Address<0x4006e000,0xffffffff,0x00000000,unsigned>;
    }
}
