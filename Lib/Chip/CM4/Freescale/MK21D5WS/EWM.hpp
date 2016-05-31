#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//External Watchdog Monitor
    namespace EwmCtrl{    ///<Control Register
        using Addr = Register::Address<0x40061000,0xffffff00,0x00000000,unsigned char>;
        ///EWM enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewmen{}; 
        ///EWM_in's Assertion State Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> assin{}; 
        ///Input Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inen{}; 
        ///Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inten{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace EwmServ{    ///<Service Register
        using Addr = Register::Address<0x40061001,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> service{}; 
    }
    namespace EwmCmpl{    ///<Compare Low Register
        using Addr = Register::Address<0x40061002,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> comparel{}; 
    }
    namespace EwmCmph{    ///<Compare High Register
        using Addr = Register::Address<0x40061003,0xffffff00,0x00000000,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> compareh{}; 
    }
}
