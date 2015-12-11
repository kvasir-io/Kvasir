#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Independent watchdog
    namespace Nonekr{    ///<Key register
        using Addr = Register::Address<0x40003000,0xffff0000,0,unsigned>;
        ///Key value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace Nonepr{    ///<Prescaler register
        using Addr = Register::Address<0x40003004,0xfffffff8,0,unsigned>;
        ///Prescaler divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pr{}; 
    }
    namespace Nonerlr{    ///<Reload register
        using Addr = Register::Address<0x40003008,0xfffff000,0,unsigned>;
        ///Watchdog counter reload
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> rl{}; 
    }
    namespace Nonesr{    ///<Status register
        using Addr = Register::Address<0x4000300c,0xfffffff8,0,unsigned>;
        ///Watchdog prescaler value
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pvu{}; 
        ///Watchdog counter reload value
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rvu{}; 
        ///Watchdog counter window value
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> wvu{}; 
    }
    namespace Nonewinr{    ///<Window register
        using Addr = Register::Address<0x40003010,0xfffff000,0,unsigned>;
        ///Watchdog counter window
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> win{}; 
    }
}
