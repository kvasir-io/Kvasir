#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Independent watchdog
    namespace Nonekr{    ///<Key register (IWDG_KR)
        using Addr = Register::Address<0x40003000,0xffff0000,0,unsigned>;
        ///Key value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> key{}; 
        namespace KeyValC{
        }
    }
    namespace Nonepr{    ///<Prescaler register (IWDG_PR)
        using Addr = Register::Address<0x40003004,0xfffffff8,0,unsigned>;
        ///Prescaler divider
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> pr{}; 
        namespace PrValC{
        }
    }
    namespace Nonerlr{    ///<Reload register (IWDG_RLR)
        using Addr = Register::Address<0x40003008,0xfffff000,0,unsigned>;
        ///Watchdog counter reload
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> rl{}; 
        namespace RlValC{
        }
    }
    namespace Nonesr{    ///<Status register (IWDG_SR)
        using Addr = Register::Address<0x4000300c,0xfffffffc,0,unsigned>;
        ///Watchdog prescaler value
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pvu{}; 
        namespace PvuValC{
        }
        ///Watchdog counter reload value
              update
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> rvu{}; 
        namespace RvuValC{
        }
    }
}
