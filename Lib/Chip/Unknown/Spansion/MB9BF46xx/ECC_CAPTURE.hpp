#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral ECC_CAPTURE 
    namespace EccCaptureFerrad{    ///< register FERRAD 
        using Addr = Register::Address<0x40000300,0xff800000,0x00000000,unsigned>;
        /// bitfield ERRAD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> errad{}; 
    }
}
