#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Power Consumption Mode Registers
    namespace NoneregCtl{    ///<Sub Oscillation Circuit Power Supply Control Register
        using Addr = Register::Address<0x40035100,0xfffffff9,0,unsigned char>;
        ///Sub oscillation circuit current setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
        namespace IsubselValC{
        }
    }
    namespace NonerckCtl{    ///<Sub Clock Control Register
        using Addr = Register::Address<0x40035104,0xfffffffc,0,unsigned char>;
        ///CEC clock control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ceccke{}; 
        namespace CecckeValC{
        }
        ///RTC clock control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
        namespace RtcckeValC{
        }
    }
    namespace NonepmdCtl{    ///<RTC Mode Control Register
        using Addr = Register::Address<0x40035800,0xfffffffe,0,unsigned char>;
        ///RTC mode control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
        namespace RtceValC{
        }
    }
    namespace Nonewrfsr{    ///<Deep Standby Return Factor Register 1
        using Addr = Register::Address<0x40035804,0xfffffffc,0,unsigned char>;
        ///Low-voltage detection reset return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdh{}; 
        namespace WlvdhValC{
        }
        ///INITX pin input reset return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> winitx{}; 
        namespace WinitxValC{
        }
    }
    namespace Nonewifsr{    ///<Deep Standby Return Factor Register 2
        using Addr = Register::Address<0x40035808,0xfffffc00,0,unsigned>;
        ///CEC ch.1 interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1i{}; 
        namespace Wcec1iValC{
        }
        ///CEC ch.0 interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0i{}; 
        namespace Wcec0iValC{
        }
        ///WKUP5 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5{}; 
        namespace Wui5ValC{
        }
        ///WKUP4 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4{}; 
        namespace Wui4ValC{
        }
        ///WKUP3 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3{}; 
        namespace Wui3ValC{
        }
        ///WKUP2 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2{}; 
        namespace Wui2ValC{
        }
        ///WKUP1 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1{}; 
        namespace Wui1ValC{
        }
        ///WKUP0 pin input return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui0{}; 
        namespace Wui0ValC{
        }
        ///LVD interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvdi{}; 
        namespace WlvdiValC{
        }
        ///RTC interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtci{}; 
        namespace WrtciValC{
        }
    }
    namespace Nonewier{    ///<Deep Standby Return Enable Register
        using Addr = Register::Address<0x4003580c,0xfffffc04,0,unsigned>;
        ///HDMI-CEC/ Remote Control Reception ch.1 interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1e{}; 
        namespace Wcec1eValC{
        }
        ///HDMI-CEC/ Remote Control Reception ch.0 interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0e{}; 
        namespace Wcec0eValC{
        }
        ///WKUP5 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wui5e{}; 
        namespace Wui5eValC{
        }
        ///WKUP4 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wui4e{}; 
        namespace Wui4eValC{
        }
        ///WKUP3 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3e{}; 
        namespace Wui3eValC{
        }
        ///WKUP2 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2e{}; 
        namespace Wui2eValC{
        }
        ///WKUP1 pin input return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1e{}; 
        namespace Wui1eValC{
        }
        ///LVD interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wlvde{}; 
        namespace WlvdeValC{
        }
        ///RTC interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wrtce{}; 
        namespace WrtceValC{
        }
    }
    namespace Nonewilvr{    ///<WKUP Pin Input Level Register
        using Addr = Register::Address<0x40035810,0xffffffe0,0,unsigned char>;
        ///WKUP5 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui5lv{}; 
        namespace Wui5lvValC{
        }
        ///WKUP4 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui4lv{}; 
        namespace Wui4lvValC{
        }
        ///WKUP3 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui3lv{}; 
        namespace Wui3lvValC{
        }
        ///WKUP2 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wui2lv{}; 
        namespace Wui2lvValC{
        }
        ///WKUP1 pin input level select bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wui1lv{}; 
        namespace Wui1lvValC{
        }
    }
    namespace Nonedsramr{    ///<Deep Standby RAM Retention Register
        using Addr = Register::Address<0x40035814,0xfffffffc,0,unsigned char>;
        ///On-chip SRAM retention control bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> sramr{}; 
        namespace SramrValC{
        }
    }
    namespace Nonebur01{    ///<Backup Register 01
        using Addr = Register::Address<0x40035900,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur02{    ///<Backup Register 02
        using Addr = Register::Address<0x40035901,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur03{    ///<Backup Register 03
        using Addr = Register::Address<0x40035902,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur04{    ///<Backup Register 04
        using Addr = Register::Address<0x40035903,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur05{    ///<Backup Register 05
        using Addr = Register::Address<0x40035904,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur06{    ///<Backup Register 06
        using Addr = Register::Address<0x40035905,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur07{    ///<Backup Register 07
        using Addr = Register::Address<0x40035906,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur08{    ///<Backup Register 08
        using Addr = Register::Address<0x40035907,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur09{    ///<Backup Register 09
        using Addr = Register::Address<0x40035908,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur10{    ///<Backup Register 10
        using Addr = Register::Address<0x40035909,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur11{    ///<Backup Register 11
        using Addr = Register::Address<0x4003590a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur12{    ///<Backup Register 12
        using Addr = Register::Address<0x4003590b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur13{    ///<Backup Register 13
        using Addr = Register::Address<0x4003590c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur14{    ///<Backup Register 14
        using Addr = Register::Address<0x4003590d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur15{    ///<Backup Register 15
        using Addr = Register::Address<0x4003590e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur16{    ///<Backup Register 16
        using Addr = Register::Address<0x4003590f,0xffffffff,0,unsigned char>;
    }
}
