#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Watchdog Monitor
    namespace EwmCtrl{    ///<Control Register
        using Addr = Register::Address<0x40041000,0xfffffff8,0,unsigned char>;
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
    }
    namespace EwmServ{    ///<Service Register
        using Addr = Register::Address<0x40041001,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> service{}; 
        namespace ServiceValC{
        }
    }
    namespace EwmCmpl{    ///<Compare Low Register
        using Addr = Register::Address<0x40041002,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> comparel{}; 
        namespace ComparelValC{
        }
    }
    namespace EwmCmph{    ///<Compare High Register
        using Addr = Register::Address<0x40041003,0xffffff00,0,unsigned char>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> compareh{}; 
        namespace ComparehValC{
        }
    }
}
