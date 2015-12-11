#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DS 
    namespace NonerckCtl{    ///< register RCK_CTL 
        using Addr = Register::Address<0x40035104,0xfffffffe,0,unsigned char>;
        /// bitfield RTCCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
    }
    namespace NonepmdCtl{    ///< register PMD_CTL 
        using Addr = Register::Address<0x40035800,0xfffffffe,0,unsigned char>;
        /// bitfield RTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
    }
    namespace Nonewrfsr{    ///< register WRFSR 
        using Addr = Register::Address<0x40035804,0xfffffffc,0,unsigned char>;
        /// bitfield WLVDH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdh{}; 
        /// bitfield WINITX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> winitx{}; 
    }
    namespace Nonewifsr{    ///< register WIFSR 
        using Addr = Register::Address<0x40035808,0xffffff00,0,unsigned>;
        /// bitfield WUI5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5{}; 
        /// bitfield WUI4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4{}; 
        /// bitfield WUI3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3{}; 
        /// bitfield WUI2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2{}; 
        /// bitfield WUI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1{}; 
        /// bitfield WUI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui0{}; 
        /// bitfield WLVDI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdi{}; 
        /// bitfield WRTCI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtci{}; 
    }
    namespace Nonewier{    ///< register WIER 
        using Addr = Register::Address<0x4003580c,0xffffff04,0,unsigned>;
        /// bitfield WUI5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5e{}; 
        /// bitfield WUI4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4e{}; 
        /// bitfield WUI3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3e{}; 
        /// bitfield WUI2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2e{}; 
        /// bitfield WUI1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1e{}; 
        /// bitfield WLVDE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvde{}; 
        /// bitfield WRTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtce{}; 
    }
    namespace Nonewilvr{    ///< register WILVR 
        using Addr = Register::Address<0x40035810,0xffffffe0,0,unsigned char>;
        /// bitfield WUI5LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui5lv{}; 
        /// bitfield WUI4LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui4lv{}; 
        /// bitfield WUI3LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui3lv{}; 
        /// bitfield WUI2LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wui2lv{}; 
        /// bitfield WUI1LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wui1lv{}; 
    }
    namespace Nonedsramr{    ///< register DSRAMR 
        using Addr = Register::Address<0x40035814,0xfffffffc,0,unsigned char>;
        /// bitfield SRAMR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sramr{}; 
    }
    namespace Nonebur01{    ///< register BUR01 
        using Addr = Register::Address<0x40035900,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur02{    ///< register BUR02 
        using Addr = Register::Address<0x40035901,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur03{    ///< register BUR03 
        using Addr = Register::Address<0x40035902,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur04{    ///< register BUR04 
        using Addr = Register::Address<0x40035903,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur05{    ///< register BUR05 
        using Addr = Register::Address<0x40035904,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur06{    ///< register BUR06 
        using Addr = Register::Address<0x40035905,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur07{    ///< register BUR07 
        using Addr = Register::Address<0x40035906,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur08{    ///< register BUR08 
        using Addr = Register::Address<0x40035907,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur09{    ///< register BUR09 
        using Addr = Register::Address<0x40035908,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur10{    ///< register BUR10 
        using Addr = Register::Address<0x40035909,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur11{    ///< register BUR11 
        using Addr = Register::Address<0x4003590a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur12{    ///< register BUR12 
        using Addr = Register::Address<0x4003590b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur13{    ///< register BUR13 
        using Addr = Register::Address<0x4003590c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur14{    ///< register BUR14 
        using Addr = Register::Address<0x4003590d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur15{    ///< register BUR15 
        using Addr = Register::Address<0x4003590e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur16{    ///< register BUR16 
        using Addr = Register::Address<0x4003590f,0xffffffff,0,unsigned char>;
    }
}
