#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Dual ADC Configuration
    namespace AdilvMo1{    ///<Dual Unit Mode Trigger Controller  START Register 1
        using Addr = Register::Address<0x40052000,0xffffff7f,0x00000000,unsigned>;
        ///SWATRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> swatrg{}; 
    }
    namespace AdilvMo2{    ///<Dual Unit Mode Trigger Controller  START Register 2
        using Addr = Register::Address<0x40052004,0xffffff60,0x00000000,unsigned>;
        ///TRGAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trgaen{}; 
        ///TRGASEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::ReadWriteAccess,unsigned> trgasel{}; 
        ///TRGASTA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> trgasta{}; 
        ///ADILV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> adilv{}; 
    }
    namespace AdilvMo3{    ///<Dual Unit Mode Trigger Controller  START Register 3
        using Addr = Register::Address<0x40052008,0xffffff00,0x00000000,unsigned>;
        ///CORCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> corcnt{}; 
    }
}
