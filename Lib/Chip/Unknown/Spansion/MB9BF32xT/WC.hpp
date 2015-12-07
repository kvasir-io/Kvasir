#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral WC 
    namespace Nonewcrd{    ///< register WCRD 
        using Addr = Register::Address<0x4003a000,0xffffffc0,0,unsigned char>;
        /// bitfield CTR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> ctr{}; 
        namespace CtrValC{
        }
    }
    namespace Nonewcrl{    ///< register WCRL 
        using Addr = Register::Address<0x4003a001,0xffffffc0,0,unsigned char>;
        /// bitfield RLC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> rlc{}; 
        namespace RlcValC{
        }
    }
    namespace Nonewccr{    ///< register WCCR 
        using Addr = Register::Address<0x4003a002,0xffffff30,0,unsigned char>;
        /// bitfield WCEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wcen{}; 
        namespace WcenValC{
        }
        /// bitfield WCOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wcop{}; 
        namespace WcopValC{
        }
        /// bitfield CS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> cs{}; 
        namespace CsValC{
        }
        /// bitfield WCIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wcie{}; 
        namespace WcieValC{
        }
        /// bitfield WCIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wcif{}; 
        namespace WcifValC{
        }
    }
    namespace NoneclkSel{    ///< register CLK_SEL 
        using Addr = Register::Address<0x4003a010,0xfffffefe,0,unsigned>;
        /// bitfield SEL_OUT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> selOut{}; 
        namespace SeloutValC{
        }
        /// bitfield SEL_IN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> selIn{}; 
        namespace SelinValC{
        }
    }
    namespace NoneclkEn{    ///< register CLK_EN 
        using Addr = Register::Address<0x4003a014,0xfffffffc,0,unsigned char>;
        /// bitfield CLK_EN_R 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> clkEnR{}; 
        namespace ClkenrValC{
        }
        /// bitfield CLK_EN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clkEn{}; 
        namespace ClkenValC{
        }
    }
}
