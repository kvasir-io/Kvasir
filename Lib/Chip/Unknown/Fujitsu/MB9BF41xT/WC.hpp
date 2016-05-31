#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Watch Counter
    namespace WcWcrd{    ///<Watch Counter Read Register
        using Addr = Register::Address<0x4003a000,0xffffffc0,0x00000000,unsigned char>;
        ///counter value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctr{}; 
    }
    namespace WcWcrl{    ///<Watch Counter Reload Register
        using Addr = Register::Address<0x4003a001,0xffffffc0,0x00000000,unsigned char>;
        ///reload value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> rlc{}; 
    }
    namespace WcWccr{    ///<Watch Counter Control Register
        using Addr = Register::Address<0x4003a002,0xffffff30,0x00000000,unsigned char>;
        ///Watch counter operation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wcen{}; 
        ///Watch counter operating state flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcop{}; 
        ///Count clock select bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cs{}; 
        ///Interrupt request enable bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wcie{}; 
        ///Interrupt request flag bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcif{}; 
    }
    namespace WcClkSel{    ///<Clock Selection Register
        using Addr = Register::Address<0x4003a010,0xfffffefe,0x00000000,unsigned>;
        ///Output clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> selOut{}; 
        ///Input clock selection bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> selIn{}; 
    }
    namespace WcClkEn{    ///<Division Clock Enable Register
        using Addr = Register::Address<0x4003a014,0xfffffffc,0x00000000,unsigned char>;
        ///Division clock enable read bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkEnR{}; 
        ///Division clock enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkEn{}; 
    }
}
