#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace FgpiocPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0xf8000080,0x00000000,0x00000000,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace FgpiocPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0xf8000084,0x00000000,0x00000000,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace FgpiocPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0xf8000088,0x00000000,0x00000000,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace FgpiocPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0xf800008c,0x00000000,0x00000000,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace FgpiocPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0xf8000090,0x00000000,0x00000000,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace FgpiocPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0xf8000094,0x00000000,0x00000000,unsigned>;
        ///Port Data Direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
    namespace FgpiocPidr{    ///<Port Input Disable Register
        using Addr = Register::Address<0xf8000098,0x00000000,0x00000000,unsigned>;
        ///Port Input Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pid{}; 
    }
}
