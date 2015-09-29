#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral WC 
    namespace Nonewcrd{    ///< register WCRD 
        using Addr = Register::Address<0x4003a000,0xffffffc0,0,unsigned char>;
        /// bitfield CTR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ctr{}; 
    }
    namespace Nonewcrl{    ///< register WCRL 
        using Addr = Register::Address<0x4003a001,0xffffffc0,0,unsigned char>;
        /// bitfield RLC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> rlc{}; 
    }
    namespace Nonewccr{    ///< register WCCR 
        using Addr = Register::Address<0x4003a002,0xffffff30,0,unsigned char>;
        /// bitfield WCEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wcen{}; 
        /// bitfield WCOP 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wcop{}; 
        /// bitfield CS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cs{}; 
        /// bitfield WCIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wcie{}; 
        /// bitfield WCIF 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcif{}; 
    }
    namespace NoneclkSel{    ///< register CLK_SEL 
        using Addr = Register::Address<0x4003a010,0xfffff8fc,0,unsigned>;
        /// bitfield SEL_OUT 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> selOut{}; 
        /// bitfield SEL_IN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> selIn{}; 
    }
    namespace NoneclkEn{    ///< register CLK_EN 
        using Addr = Register::Address<0x4003a014,0xfffffffc,0,unsigned char>;
        /// bitfield CLK_EN_R 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkEnR{}; 
        /// bitfield CLK_EN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkEn{}; 
    }
}
