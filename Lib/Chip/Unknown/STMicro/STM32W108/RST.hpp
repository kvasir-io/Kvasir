#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Reset event
    namespace NonerstSr{    ///<Reset Status Register
        using Addr = Register::Address<0x4000002c,0xffffff00,0,unsigned>;
        ///LKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lkup{}; 
        namespace LkupValC{
        }
        ///OBFAIL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> obfail{}; 
        namespace ObfailValC{
        }
        ///WKUP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> wkup{}; 
        namespace WkupValC{
        }
        ///SWRST
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> swrst{}; 
        namespace SwrstValC{
        }
        ///WDG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> wdg{}; 
        namespace WdgValC{
        }
        ///PIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pin{}; 
        namespace PinValC{
        }
        ///PWRLV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pwrlv{}; 
        namespace PwrlvValC{
        }
        ///PWRHV
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pwrhv{}; 
        namespace PwrhvValC{
        }
    }
}
