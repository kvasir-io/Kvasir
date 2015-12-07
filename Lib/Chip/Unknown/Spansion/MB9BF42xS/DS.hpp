#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DS 
    namespace NoneregCtl{    ///< register REG_CTL 
        using Addr = Register::Address<0x40035100,0xfffffff9,0,unsigned char>;
        /// bitfield ISUBSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
        namespace IsubselValC{
        }
    }
    namespace NonerckCtl{    ///< register RCK_CTL 
        using Addr = Register::Address<0x40035104,0xfffffffc,0,unsigned char>;
        /// bitfield CECCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ceccke{}; 
        namespace CecckeValC{
        }
        /// bitfield RTCCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
        namespace RtcckeValC{
        }
    }
    namespace NonepmdCtl{    ///< register PMD_CTL 
        using Addr = Register::Address<0x40035800,0xfffffffe,0,unsigned char>;
        /// bitfield RTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
        namespace RtceValC{
        }
    }
    namespace Nonewrfsr{    ///< register WRFSR 
        using Addr = Register::Address<0x40035804,0xfffffffc,0,unsigned char>;
        /// bitfield WLVDH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdh{}; 
        namespace WlvdhValC{
        }
        /// bitfield WINITX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> winitx{}; 
        namespace WinitxValC{
        }
    }
    namespace Nonewifsr{    ///< register WIFSR 
        using Addr = Register::Address<0x40035808,0xfffffc00,0,unsigned>;
        /// bitfield WCEC1I 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1i{}; 
        namespace Wcec1iValC{
        }
        /// bitfield WCEC0I 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0i{}; 
        namespace Wcec0iValC{
        }
        /// bitfield WUI5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5{}; 
        namespace Wui5ValC{
        }
        /// bitfield WUI4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4{}; 
        namespace Wui4ValC{
        }
        /// bitfield WUI3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3{}; 
        namespace Wui3ValC{
        }
        /// bitfield WUI2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2{}; 
        namespace Wui2ValC{
        }
        /// bitfield WUI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1{}; 
        namespace Wui1ValC{
        }
        /// bitfield WUI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui0{}; 
        namespace Wui0ValC{
        }
        /// bitfield WLVDI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdi{}; 
        namespace WlvdiValC{
        }
        /// bitfield WRTCI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtci{}; 
        namespace WrtciValC{
        }
    }
    namespace Nonewier{    ///< register WIER 
        using Addr = Register::Address<0x4003580c,0xfffffc04,0,unsigned>;
        /// bitfield WCEC1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1e{}; 
        namespace Wcec1eValC{
        }
        /// bitfield WCEC0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0e{}; 
        namespace Wcec0eValC{
        }
        /// bitfield WUI5E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5e{}; 
        namespace Wui5eValC{
        }
        /// bitfield WUI4E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4e{}; 
        namespace Wui4eValC{
        }
        /// bitfield WUI3E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3e{}; 
        namespace Wui3eValC{
        }
        /// bitfield WUI2E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2e{}; 
        namespace Wui2eValC{
        }
        /// bitfield WUI1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1e{}; 
        namespace Wui1eValC{
        }
        /// bitfield WLVDE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvde{}; 
        namespace WlvdeValC{
        }
        /// bitfield WRTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtce{}; 
        namespace WrtceValC{
        }
    }
    namespace Nonewilvr{    ///< register WILVR 
        using Addr = Register::Address<0x40035810,0xffffffe0,0,unsigned char>;
        /// bitfield WUI5LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui5lv{}; 
        namespace Wui5lvValC{
        }
        /// bitfield WUI4LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui4lv{}; 
        namespace Wui4lvValC{
        }
        /// bitfield WUI3LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui3lv{}; 
        namespace Wui3lvValC{
        }
        /// bitfield WUI2LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wui2lv{}; 
        namespace Wui2lvValC{
        }
        /// bitfield WUI1LV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wui1lv{}; 
        namespace Wui1lvValC{
        }
    }
    namespace Nonedsramr{    ///< register DSRAMR 
        using Addr = Register::Address<0x40035814,0xfffffffc,0,unsigned char>;
        /// bitfield SRAMR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sramr{}; 
        namespace SramrValC{
        }
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
