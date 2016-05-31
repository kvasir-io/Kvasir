#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpiodPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf80000c0,0x00000000,0x00000000,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace FgpiodPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf80000c4,0x00000000,0x00000000,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace FgpiodPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf80000c8,0x00000000,0x00000000,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace FgpiodPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf80000cc,0x00000000,0x00000000,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace FgpiodPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf80000d0,0x00000000,0x00000000,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace FgpiodPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf80000d4,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
