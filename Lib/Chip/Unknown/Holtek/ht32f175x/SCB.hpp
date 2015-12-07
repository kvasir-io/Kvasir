#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//SCB
    namespace Nonescr{    ///<SCR
        using Addr = Register::Address<0xe000ed10,0xffffffe9,0,unsigned>;
        ///SLEEPONEXIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sleeponexit{}; 
        namespace SleeponexitValC{
        }
        ///SLEEPDEEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sleepdeep{}; 
        namespace SleepdeepValC{
        }
        ///SEVONPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sevonpend{}; 
        namespace SevonpendValC{
        }
    }
    namespace Noneccr{    ///<CCR
        using Addr = Register::Address<0xe000ed14,0xfffffce4,0,unsigned>;
        ///NONEBASETHRDENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonebasethrdena{}; 
        namespace NonebasethrdenaValC{
        }
        ///USERSETMPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usersetmpend{}; 
        namespace UsersetmpendValC{
        }
        ///UNALIGN_TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unalignTrp{}; 
        namespace UnaligntrpValC{
        }
        ///DIV_0_TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> div0Trp{}; 
        namespace Div0trpValC{
        }
        ///BFHFNMIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bfhfnmign{}; 
        namespace BfhfnmignValC{
        }
        ///STKALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stkalign{}; 
        namespace StkalignValC{
        }
    }
}
