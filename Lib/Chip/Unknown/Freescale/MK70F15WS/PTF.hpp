#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General Purpose Input/Output
    namespace PtfPdor{    ///<Port Data Output Register
        using Addr = Register::Address<0x400ff140,0x00000000,0x00000000,unsigned>;
        ///Port Data Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdo{}; 
    }
    namespace PtfPsor{    ///<Port Set Output Register
        using Addr = Register::Address<0x400ff144,0x00000000,0x00000000,unsigned>;
        ///Port Set Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptso{}; 
    }
    namespace PtfPcor{    ///<Port Clear Output Register
        using Addr = Register::Address<0x400ff148,0x00000000,0x00000000,unsigned>;
        ///Port Clear Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptco{}; 
    }
    namespace PtfPtor{    ///<Port Toggle Output Register
        using Addr = Register::Address<0x400ff14c,0x00000000,0x00000000,unsigned>;
        ///Port Toggle Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ptto{}; 
    }
    namespace PtfPdir{    ///<Port Data Input Register
        using Addr = Register::Address<0x400ff150,0x00000000,0x00000000,unsigned>;
        ///Port Data Input
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdi{}; 
    }
    namespace PtfPddr{    ///<Port Data Direction Register
        using Addr = Register::Address<0x400ff154,0x00000000,0x00000000,unsigned>;
        ///Port data direction
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pdd{}; 
    }
}
