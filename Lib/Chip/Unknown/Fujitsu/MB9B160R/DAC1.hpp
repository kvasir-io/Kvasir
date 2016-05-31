#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//D/A Converter 0
    namespace Dac1Dacr{    ///<D/A Control Register
        using Addr = Register::Address<0x40033008,0xffffffcc,0x00000000,unsigned char>;
        ///10-bit mode data allocation selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ddas{}; 
        ///10-bit mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dac10{}; 
        ///D/A converter operation enable state bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> drdy{}; 
        ///D/A converter operating enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
    namespace Dac1Dadr{    ///<D/A Data Register
        using Addr = Register::Address<0x4003300c,0xfffff000,0x00000000,unsigned>;
        ///D/A Data Register
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> da{}; 
    }
}
