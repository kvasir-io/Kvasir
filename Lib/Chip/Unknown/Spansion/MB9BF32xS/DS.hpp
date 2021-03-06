#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral DS 
    namespace DsRegCtl{    ///< register REG_CTL 
        using Addr = Register::Address<0x40035100,0xfffffff9,0x00000000,unsigned char>;
        /// bitfield ISUBSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
    }
    namespace DsRckCtl{    ///< register RCK_CTL 
        using Addr = Register::Address<0x40035104,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield CECCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ceccke{}; 
        /// bitfield RTCCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
    }
    namespace DsPmdCtl{    ///< register PMD_CTL 
        using Addr = Register::Address<0x40035800,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
    }
    namespace DsWrfsr{    ///< register WRFSR 
        using Addr = Register::Address<0x40035804,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield WLVDH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdh{}; 
        /// bitfield WINITX 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> winitx{}; 
    }
    namespace DsWifsr{    ///< register WIFSR 
        using Addr = Register::Address<0x40035808,0xfffffc00,0x00000000,unsigned>;
        /// bitfield WCEC1I 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcec1i{}; 
        /// bitfield WCEC0I 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcec0i{}; 
        /// bitfield WUI5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui5{}; 
        /// bitfield WUI4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui4{}; 
        /// bitfield WUI3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui3{}; 
        /// bitfield WUI2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui2{}; 
        /// bitfield WUI1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui1{}; 
        /// bitfield WUI0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui0{}; 
        /// bitfield WLVDI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wlvdi{}; 
        /// bitfield WRTCI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrtci{}; 
    }
    namespace DsWier{    ///< register WIER 
        using Addr = Register::Address<0x4003580c,0xfffffc04,0x00000000,unsigned>;
        /// bitfield WCEC1E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1e{}; 
        /// bitfield WCEC0E 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0e{}; 
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
    namespace DsWilvr{    ///< register WILVR 
        using Addr = Register::Address<0x40035810,0xffffffe0,0x00000000,unsigned char>;
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
    namespace DsDsramr{    ///< register DSRAMR 
        using Addr = Register::Address<0x40035814,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield SRAMR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sramr{}; 
    }
    namespace DsBur01{    ///< register BUR01 
        using Addr = Register::Address<0x40035900,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur02{    ///< register BUR02 
        using Addr = Register::Address<0x40035901,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur03{    ///< register BUR03 
        using Addr = Register::Address<0x40035902,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur04{    ///< register BUR04 
        using Addr = Register::Address<0x40035903,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur05{    ///< register BUR05 
        using Addr = Register::Address<0x40035904,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur06{    ///< register BUR06 
        using Addr = Register::Address<0x40035905,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur07{    ///< register BUR07 
        using Addr = Register::Address<0x40035906,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur08{    ///< register BUR08 
        using Addr = Register::Address<0x40035907,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur09{    ///< register BUR09 
        using Addr = Register::Address<0x40035908,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur10{    ///< register BUR10 
        using Addr = Register::Address<0x40035909,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur11{    ///< register BUR11 
        using Addr = Register::Address<0x4003590a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur12{    ///< register BUR12 
        using Addr = Register::Address<0x4003590b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur13{    ///< register BUR13 
        using Addr = Register::Address<0x4003590c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur14{    ///< register BUR14 
        using Addr = Register::Address<0x4003590d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur15{    ///< register BUR15 
        using Addr = Register::Address<0x4003590e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur16{    ///< register BUR16 
        using Addr = Register::Address<0x4003590f,0xffffffff,0x00000000,unsigned char>;
    }
}
