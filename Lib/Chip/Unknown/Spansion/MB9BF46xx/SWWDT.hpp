#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral SWWDT 
    namespace Nonewdogload{    ///< register WDOGLOAD 
        using Addr = Register::Address<0x40012000,0xffffffff,0,unsigned>;
    }
    namespace Nonewdogvalue{    ///< register WDOGVALUE 
        using Addr = Register::Address<0x40012004,0xffffffff,0,unsigned>;
    }
    namespace Nonewdogcontrol{    ///< register WDOGCONTROL 
        using Addr = Register::Address<0x40012008,0xffffffe0,0,unsigned char>;
        /// bitfield SPM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spm{}; 
        namespace SpmValC{
        }
        /// bitfield TWD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> twd{}; 
        namespace TwdValC{
        }
        /// bitfield RESEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        namespace ResenValC{
        }
        /// bitfield INTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
        namespace IntenValC{
        }
    }
    namespace Nonewdogintclr{    ///< register WDOGINTCLR 
        using Addr = Register::Address<0x4001200c,0xffffffff,0,unsigned>;
    }
    namespace Nonewdogris{    ///< register WDOGRIS 
        using Addr = Register::Address<0x40012010,0xfffffffe,0,unsigned char>;
        /// bitfield RIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ris{}; 
        namespace RisValC{
        }
    }
    namespace Nonewdogspmc{    ///< register WDOGSPMC 
        using Addr = Register::Address<0x40012018,0xfffffffe,0,unsigned char>;
        /// bitfield TRG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> trg{}; 
        namespace TrgValC{
        }
    }
    namespace Nonewdoglock{    ///< register WDOGLOCK 
        using Addr = Register::Address<0x40012c00,0xffffffff,0,unsigned>;
    }
}
