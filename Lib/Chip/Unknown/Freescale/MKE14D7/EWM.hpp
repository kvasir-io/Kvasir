#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Watchdog Monitor
    namespace EwmCtrl{    ///<Control Register
        using Addr = Register::Address<0x40041000,0xfffffff8,0,unsigned char>;
        ///EWM enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ewmen{}; 
        ///EWM_in's Assertion State Select.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> assin{}; 
        ///Input Enable.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> inen{}; 
    }
    namespace EwmServ{    ///<Service Register
        using Addr = Register::Address<0x40041001,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> service{}; 
    }
    namespace EwmCmpl{    ///<Compare Low Register
        using Addr = Register::Address<0x40041002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> comparel{}; 
    }
    namespace EwmCmph{    ///<Compare High Register
        using Addr = Register::Address<0x40041003,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> compareh{}; 
    }
}
