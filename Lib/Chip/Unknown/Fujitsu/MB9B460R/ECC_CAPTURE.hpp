#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//ECC Capture Address
    namespace EccCaptureFerrad{    ///<Flash ECC Error Address Capture Register
        using Addr = Register::Address<0x40000300,0xff800000,0x00000000,unsigned>;
        ///Flash ECC Error Address Capture
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errad{}; 
    }
}
