#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Low Power Consumption Mode
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
    namespace Nonewrfsr{    ///<Deep Standby Return Cause Register 1
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
    namespace Nonewifsr{    ///<Deep Standby Return Cause Register 2
        using Addr = Register::Address<0x40035808,0xfffffcc0,0,unsigned>;
        ///CEC ch.1 interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1i{}; 
        namespace Wcec1iValC{
        }
        ///CEC ch.0 interrupt return bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0i{}; 
        namespace Wcec0iValC{
        }
        ///WKUP pin input return bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3{}; 
        namespace Wui3ValC{
        }
        ///WKUP pin input return bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2{}; 
        namespace Wui2ValC{
        }
        ///WKUP pin input return bit 1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wui1{}; 
        namespace Wui1ValC{
        }
        ///WKUP pin input return bit 0
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
        using Addr = Register::Address<0x4003580c,0xfffffcc4,0,unsigned>;
        ///HDMI-CEC/ Remote Control Reception ch.1 interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> wcec1e{}; 
        namespace Wcec1eValC{
        }
        ///HDMI-CEC/ Remote Control Reception ch.0 interrupt return enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> wcec0e{}; 
        namespace Wcec0eValC{
        }
        ///WKUP pin input return enable bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wui3e{}; 
        namespace Wui3eValC{
        }
        ///WKUP pin input return enable bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> wui2e{}; 
        namespace Wui2eValC{
        }
        ///WKUP pin input return enable bit 1
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
        using Addr = Register::Address<0x40035810,0xfffffff8,0,unsigned char>;
        ///WKUP pin input level select bit 3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wui3lv{}; 
        namespace Wui3lvValC{
        }
        ///WKUP pin input level select bit 2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wui2lv{}; 
        namespace Wui2lvValC{
        }
        ///WKUP pin input level select bit 1
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
    namespace Nonebur01{    ///<Backup Registers from 1
        using Addr = Register::Address<0x40035900,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur02{    ///<Backup Registers from 2
        using Addr = Register::Address<0x40035901,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur03{    ///<Backup Registers from 3
        using Addr = Register::Address<0x40035902,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur04{    ///<Backup Registers from 4
        using Addr = Register::Address<0x40035903,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur05{    ///<Backup Registers from 5
        using Addr = Register::Address<0x40035904,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur06{    ///<Backup Registers from 6
        using Addr = Register::Address<0x40035905,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur07{    ///<Backup Registers from 7
        using Addr = Register::Address<0x40035906,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur08{    ///<Backup Registers from 8
        using Addr = Register::Address<0x40035907,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur09{    ///<Backup Registers from 9
        using Addr = Register::Address<0x40035908,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur10{    ///<Backup Registers from 10
        using Addr = Register::Address<0x40035909,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur11{    ///<Backup Registers from 11
        using Addr = Register::Address<0x4003590a,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur12{    ///<Backup Registers from 12
        using Addr = Register::Address<0x4003590b,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur13{    ///<Backup Registers from 13
        using Addr = Register::Address<0x4003590c,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur14{    ///<Backup Registers from 14
        using Addr = Register::Address<0x4003590d,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur15{    ///<Backup Registers from 15
        using Addr = Register::Address<0x4003590e,0xffffffff,0,unsigned char>;
    }
    namespace Nonebur16{    ///<Backup Registers from 16
        using Addr = Register::Address<0x4003590f,0xffffffff,0,unsigned char>;
    }
}
