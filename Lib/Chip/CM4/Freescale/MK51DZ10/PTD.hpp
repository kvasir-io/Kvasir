#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace PtdPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff0c0,0x00000000,0x00000000,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace PtdPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff0c4,0x00000000,0x00000000,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace PtdPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff0c8,0x00000000,0x00000000,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace PtdPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff0cc,0x00000000,0x00000000,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace PtdPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff0d0,0x00000000,0x00000000,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace PtdPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff0d4,0x00000000,0x00000000,unsigned>;
        ///Port data direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
