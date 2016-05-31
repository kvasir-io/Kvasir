#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral WC 
    namespace WcWcrd{    ///< register WCRD 
        using Addr = Register::Address<0x4003a000,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield CTR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ctr{}; 
    }
    namespace WcWcrl{    ///< register WCRL 
        using Addr = Register::Address<0x4003a001,0xffffffc0,0x00000000,unsigned char>;
        /// bitfield RLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> rlc{}; 
    }
    namespace WcWccr{    ///< register WCCR 
        using Addr = Register::Address<0x4003a002,0xffffff30,0x00000000,unsigned char>;
        /// bitfield WCEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wcen{}; 
        /// bitfield WCOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcop{}; 
        /// bitfield CS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cs{}; 
        /// bitfield WCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wcie{}; 
        /// bitfield WCIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcif{}; 
    }
    namespace WcClkSel{    ///< register CLK_SEL 
        using Addr = Register::Address<0x4003a010,0xfffffefe,0x00000000,unsigned>;
        /// bitfield SEL_OUT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> selOut{}; 
        /// bitfield SEL_IN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> selIn{}; 
    }
    namespace WcClkEn{    ///< register CLK_EN 
        using Addr = Register::Address<0x4003a014,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield CLK_EN_R 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkEnR{}; 
        /// bitfield CLK_EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkEn{}; 
    }
}
