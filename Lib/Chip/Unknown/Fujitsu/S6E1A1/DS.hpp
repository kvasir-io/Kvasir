#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low Power Consumption Mode Registers
    namespace DsRegCtl{    ///<Sub Oscillation Circuit Power Supply Control Register
        using Addr = Register::Address<0x40035100,0xfffffff9,0x00000000,unsigned char>;
        ///Sub oscillation circuit current setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
    }
    namespace DsRckCtl{    ///<Sub Clock Control Register
        using Addr = Register::Address<0x40035104,0xfffffffc,0x00000000,unsigned char>;
        ///CEC clock control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ceccke{}; 
        ///RTC clock control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
    }
    namespace DsPmdCtl{    ///<RTC Mode Control Register
        using Addr = Register::Address<0x40035800,0xfffffffe,0x00000000,unsigned char>;
        ///RTC mode control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
    }
    namespace DsWrfsr{    ///<Deep Standby Return Factor Register 1
        using Addr = Register::Address<0x40035804,0xfffffffc,0x00000000,unsigned char>;
        ///Low-voltage detection reset return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wlvdh{}; 
        ///INITX pin input reset return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> winitx{}; 
    }
    namespace DsWifsr{    ///<Deep Standby Return Factor Register 2
        using Addr = Register::Address<0x40035808,0xfffffc00,0x00000000,unsigned>;
        ///CEC ch.1 interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcec1i{}; 
        ///CEC ch.0 interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wcec0i{}; 
        ///WKUP5 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui5{}; 
        ///WKUP4 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui4{}; 
        ///WKUP3 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui3{}; 
        ///WKUP2 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui2{}; 
        ///WKUP1 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui1{}; 
        ///WKUP0 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui0{}; 
        ///LVD interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wlvdi{}; 
        ///RTC interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrtci{}; 
    }
    namespace DsWier{    ///<Deep Standby Return Enable Register
        using Addr = Register::Address<0x4003580c,0xfffffc04,0x00000000,unsigned>;
        ///HDMI-CEC/ Remote Control Reception ch.1 interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1e{}; 
        ///HDMI-CEC/ Remote Control Reception ch.0 interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0e{}; 
        ///WKUP5 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5e{}; 
        ///WKUP4 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4e{}; 
        ///WKUP3 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3e{}; 
        ///WKUP2 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2e{}; 
        ///WKUP1 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1e{}; 
        ///LVD interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvde{}; 
        ///RTC interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtce{}; 
    }
    namespace DsWilvr{    ///<WKUP Pin Input Level Register
        using Addr = Register::Address<0x40035810,0xffffffe0,0x00000000,unsigned char>;
        ///WKUP5 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui5lv{}; 
        ///WKUP4 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui4lv{}; 
        ///WKUP3 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui3lv{}; 
        ///WKUP2 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wui2lv{}; 
        ///WKUP1 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wui1lv{}; 
    }
    namespace DsDsramr{    ///<Deep Standby RAM Retention Register
        using Addr = Register::Address<0x40035814,0xfffffffc,0x00000000,unsigned char>;
        ///On-chip SRAM retention control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sramr{}; 
    }
    namespace DsBur01{    ///<Backup Register 01
        using Addr = Register::Address<0x40035900,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur02{    ///<Backup Register 02
        using Addr = Register::Address<0x40035901,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur03{    ///<Backup Register 03
        using Addr = Register::Address<0x40035902,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur04{    ///<Backup Register 04
        using Addr = Register::Address<0x40035903,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur05{    ///<Backup Register 05
        using Addr = Register::Address<0x40035904,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur06{    ///<Backup Register 06
        using Addr = Register::Address<0x40035905,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur07{    ///<Backup Register 07
        using Addr = Register::Address<0x40035906,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur08{    ///<Backup Register 08
        using Addr = Register::Address<0x40035907,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur09{    ///<Backup Register 09
        using Addr = Register::Address<0x40035908,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur10{    ///<Backup Register 10
        using Addr = Register::Address<0x40035909,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur11{    ///<Backup Register 11
        using Addr = Register::Address<0x4003590a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur12{    ///<Backup Register 12
        using Addr = Register::Address<0x4003590b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur13{    ///<Backup Register 13
        using Addr = Register::Address<0x4003590c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur14{    ///<Backup Register 14
        using Addr = Register::Address<0x4003590d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur15{    ///<Backup Register 15
        using Addr = Register::Address<0x4003590e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur16{    ///<Backup Register 16
        using Addr = Register::Address<0x4003590f,0xffffffff,0x00000000,unsigned char>;
    }
}
