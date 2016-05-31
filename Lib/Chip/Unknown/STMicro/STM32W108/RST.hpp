#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Reset event
    namespace RstRstSr{    ///<Reset Status Register
        using Addr = Register::Address<0x4000002c,0xffffff00,0x00000000,unsigned>;
        ///LKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lkup{}; 
        ///OBFAIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> obfail{}; 
        ///WKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wkup{}; 
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swrst{}; 
        ///WDG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdg{}; 
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pin{}; 
        ///PWRLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwrlv{}; 
        ///PWRHV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwrhv{}; 
    }
}
