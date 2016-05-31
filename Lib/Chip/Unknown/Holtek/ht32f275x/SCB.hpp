#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//SCB
    namespace ScbScr{    ///<SCR
        using Addr = Register::Address<0xe000ed10,0x00000009,0x00000000,unsigned>;
        ///SLEEPONEXIT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sleeponexit{}; 
        ///SLEEPDEEP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> sleepdeep{}; 
        ///SEVONPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> sevonpend{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,5),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScbCcr{    ///<CCR
        using Addr = Register::Address<0xe000ed14,0x000000e4,0x00000000,unsigned>;
        ///NONEBASETHRDENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nonebasethrdena{}; 
        ///USERSETMPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> usersetmpend{}; 
        ///UNALIGN_TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> unalignTrp{}; 
        ///DIV_0_TRP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> div0Trp{}; 
        ///BFHFNMIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> bfhfnmign{}; 
        ///STKALIGN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> stkalign{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
