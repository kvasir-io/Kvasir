#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Lposc0Oscval{    ///<Low Power Oscillator Output Value
        using Addr = Register::Address<0x40041000,0xfffffff0,0x00000000,unsigned>;
        ///Low Power Oscillator Output Value. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> oscval{}; 
    }
}
