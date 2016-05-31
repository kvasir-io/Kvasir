#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Internal High-speed Oscillation Adjustment
    namespace TrmoscPro{    ///<Protection Register
        using Addr = Register::Address<0x400f3200,0xffffff00,0x00000000,unsigned>;
        ///PROTECT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> protect{}; 
    }
    namespace TrmoscEn{    ///<Enable Register
        using Addr = Register::Address<0x400f3204,0xfffffffe,0x00000000,unsigned>;
        ///TRIMEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trimen{}; 
    }
    namespace TrmoscInit{    ///<Initial Trimming Level Monitor Register
        using Addr = Register::Address<0x400f3208,0xffffc0f0,0x00000000,unsigned>;
        ///TRIMINITF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> triminitf{}; 
        ///TRIMINITC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> triminitc{}; 
    }
    namespace TrmoscSet{    ///<Trimming Level Setting Register
        using Addr = Register::Address<0x400f320c,0xffffc0f0,0x00000000,unsigned>;
        ///TRIMSETF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> trimsetf{}; 
        ///TRIMSETC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,8),Register::ReadWriteAccess,unsigned> trimsetc{}; 
    }
}
