#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Watchdog Timer
    namespace WdtCr{    ///<Control Register
        using Addr = Register::Address<0x400e1250,0x00fffffe,0,unsigned>;
        ///Watchdog Restart
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdrstt{}; 
        namespace WdrsttValC{
        }
        ///Password
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace WdtMr{    ///<Mode Register
        using Addr = Register::Address<0x400e1254,0xc0000000,0,unsigned>;
        ///Watchdog Counter Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> wdv{}; 
        namespace WdvValC{
        }
        ///Watchdog Fault Interrupt Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> wdfien{}; 
        namespace WdfienValC{
        }
        ///Watchdog Reset Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> wdrsten{}; 
        namespace WdrstenValC{
        }
        ///Watchdog Reset Processor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> wdrproc{}; 
        namespace WdrprocValC{
        }
        ///Watchdog Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wddis{}; 
        namespace WddisValC{
        }
        ///Watchdog Delta Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> wdd{}; 
        namespace WddValC{
        }
        ///Watchdog Debug Halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> wddbghlt{}; 
        namespace WddbghltValC{
        }
        ///Watchdog Idle Halt
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> wdidlehlt{}; 
        namespace WdidlehltValC{
        }
    }
    namespace WdtSr{    ///<Status Register
        using Addr = Register::Address<0x400e1258,0xfffffffc,0,unsigned>;
        ///Watchdog Underflow
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> wdunf{}; 
        namespace WdunfValC{
        }
        ///Watchdog Error
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> wderr{}; 
        namespace WderrValC{
        }
    }
}
