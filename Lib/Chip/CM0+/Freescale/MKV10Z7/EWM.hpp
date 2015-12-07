#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Watchdog Monitor
    namespace EwmCtrl{    ///<Control Register
        using Addr = Register::Address<0x40061000,0xfffffff0,0,unsigned char>;
        ///EWM enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewmen{}; 
        namespace EwmenValC{
        }
        ///EWM_in's Assertion State Select.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> assin{}; 
        namespace AssinValC{
        }
        ///Input Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inen{}; 
        namespace InenValC{
        }
        ///Interrupt Enable.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> inten{}; 
        namespace IntenValC{
        }
    }
    namespace EwmServ{    ///<Service Register
        using Addr = Register::Address<0x40061001,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> service{}; 
        namespace ServiceValC{
        }
    }
    namespace EwmCmpl{    ///<Compare Low Register
        using Addr = Register::Address<0x40061002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> comparel{}; 
        namespace ComparelValC{
        }
    }
    namespace EwmCmph{    ///<Compare High Register
        using Addr = Register::Address<0x40061003,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> compareh{}; 
        namespace ComparehValC{
        }
    }
    namespace EwmClkctrl{    ///<Clock Control Register
        using Addr = Register::Address<0x40061004,0xfffffffc,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> clksel{}; 
        namespace ClkselValC{
        }
    }
    namespace EwmClkprescaler{    ///<Clock Prescaler Register
        using Addr = Register::Address<0x40061005,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> clkDiv{}; 
        namespace ClkdivValC{
        }
    }
}
