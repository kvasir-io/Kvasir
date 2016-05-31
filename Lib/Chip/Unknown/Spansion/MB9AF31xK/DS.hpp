#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Low Power Consumption Mode
    namespace DsPmdCtl{    ///<RTC Mode Control Register
        using Addr = Register::Address<0x40035800,0xfffffffe,0x00000000,unsigned char>;
        ///RTC mode control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
    }
    namespace DsWrfsr{    ///<Deep Standby Return Cause Register 1
        using Addr = Register::Address<0x40035804,0xfffffffc,0x00000000,unsigned char>;
        ///Low-voltage detection reset return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdh{}; 
        ///INITX pin input reset return bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> winitx{}; 
    }
    namespace DsWifsr{    ///<Deep Standby Return Cause Register 2
        using Addr = Register::Address<0x40035808,0xffffffc0,0x00000000,unsigned char>;
        ///WKUP pin input return bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui3{}; 
        ///WKUP pin input return bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui2{}; 
        ///WKUP pin input return bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui1{}; 
        ///WKUP pin input return bit 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wui0{}; 
        ///LVD interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wlvdi{}; 
        ///RTC interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> wrtci{}; 
    }
    namespace DsWier{    ///<Deep Standby Return Enable Register
        using Addr = Register::Address<0x4003580c,0xffffffc4,0x00000000,unsigned char>;
        ///WKUP pin input return enable bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3e{}; 
        ///WKUP pin input return enable bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2e{}; 
        ///WKUP pin input return enable bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1e{}; 
        ///LVD interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvde{}; 
        ///RTC interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtce{}; 
    }
    namespace DsWilvr{    ///<WKUP Pin Input Level Register
        using Addr = Register::Address<0x40035810,0xfffffff8,0x00000000,unsigned char>;
        ///WKUP pin input level select bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui3lv{}; 
        ///WKUP pin input level select bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wui2lv{}; 
        ///WKUP pin input level select bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wui1lv{}; 
    }
    namespace DsDsramr{    ///<Deep Standby RAM Retention Register
        using Addr = Register::Address<0x40035814,0xfffffffc,0x00000000,unsigned char>;
        ///On-chip SRAM retention control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sramr{}; 
    }
    namespace DsBur01{    ///<Backup Registers from 1
        using Addr = Register::Address<0x40035900,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur02{    ///<Backup Registers from 2
        using Addr = Register::Address<0x40035901,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur03{    ///<Backup Registers from 3
        using Addr = Register::Address<0x40035902,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur04{    ///<Backup Registers from 4
        using Addr = Register::Address<0x40035903,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur05{    ///<Backup Registers from 5
        using Addr = Register::Address<0x40035904,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur06{    ///<Backup Registers from 6
        using Addr = Register::Address<0x40035905,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur07{    ///<Backup Registers from 7
        using Addr = Register::Address<0x40035906,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur08{    ///<Backup Registers from 8
        using Addr = Register::Address<0x40035907,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur09{    ///<Backup Registers from 9
        using Addr = Register::Address<0x40035908,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur10{    ///<Backup Registers from 10
        using Addr = Register::Address<0x40035909,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur11{    ///<Backup Registers from 11
        using Addr = Register::Address<0x4003590a,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur12{    ///<Backup Registers from 12
        using Addr = Register::Address<0x4003590b,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur13{    ///<Backup Registers from 13
        using Addr = Register::Address<0x4003590c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur14{    ///<Backup Registers from 14
        using Addr = Register::Address<0x4003590d,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur15{    ///<Backup Registers from 15
        using Addr = Register::Address<0x4003590e,0xffffffff,0x00000000,unsigned char>;
    }
    namespace DsBur16{    ///<Backup Registers from 16
        using Addr = Register::Address<0x4003590f,0xffffffff,0x00000000,unsigned char>;
    }
}
