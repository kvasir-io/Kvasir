#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Independent watchdog
    namespace IwdgKr{    ///<Key register (IWDG_KR)
        using Addr = Register::Address<0x40003000,0xffff0000,0x00000000,unsigned>;
        ///Key value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> key{}; 
    }
    namespace IwdgPr{    ///<Prescaler register (IWDG_PR)
        using Addr = Register::Address<0x40003004,0xfffffff8,0x00000000,unsigned>;
        ///Prescaler divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pr{}; 
    }
    namespace IwdgRlr{    ///<Reload register (IWDG_RLR)
        using Addr = Register::Address<0x40003008,0xfffff000,0x00000000,unsigned>;
        ///Watchdog counter reload              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> rl{}; 
    }
    namespace IwdgSr{    ///<Status register (IWDG_SR)
        using Addr = Register::Address<0x4000300c,0xfffffffc,0x00000000,unsigned>;
        ///Watchdog prescaler value              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pvu{}; 
        ///Watchdog counter reload value              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rvu{}; 
    }
}
