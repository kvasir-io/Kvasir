#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt       Controller
    namespace Noneiser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
    }
    namespace Noneicer{    ///<Interrupt Clear Enable           Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
    }
    namespace Noneispr{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
    }
    namespace Noneicpr{    ///<Interrupt Clear-Pending           Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
    }
    namespace Noneipr0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f,0,unsigned>;
        ///PRI_00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri00{}; 
        ///PRI_01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri01{}; 
        ///PRI_02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri02{}; 
        ///PRI_03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri03{}; 
    }
    namespace Noneipr1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f,0,unsigned>;
        ///PRI_40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri40{}; 
        ///PRI_41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri41{}; 
        ///PRI_42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri42{}; 
        ///PRI_43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri43{}; 
    }
    namespace Noneipr2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f,0,unsigned>;
        ///PRI_80
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri80{}; 
        ///PRI_81
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri81{}; 
        ///PRI_82
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri82{}; 
        ///PRI_83
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri83{}; 
    }
    namespace Noneipr3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f,0,unsigned>;
        ///PRI_120
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri120{}; 
        ///PRI_121
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri121{}; 
        ///PRI_122
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri122{}; 
        ///PRI_123
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri123{}; 
    }
    namespace Noneipr4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f,0,unsigned>;
        ///PRI_160
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri160{}; 
        ///PRI_161
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri161{}; 
        ///PRI_162
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri162{}; 
        ///PRI_163
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri163{}; 
    }
    namespace Noneipr5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f,0,unsigned>;
        ///PRI_200
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri200{}; 
        ///PRI_201
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri201{}; 
        ///PRI_202
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri202{}; 
        ///PRI_203
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri203{}; 
    }
    namespace Noneipr6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f,0,unsigned>;
        ///PRI_240
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri240{}; 
        ///PRI_241
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri241{}; 
        ///PRI_242
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri242{}; 
        ///PRI_243
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri243{}; 
    }
    namespace Noneipr7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f,0,unsigned>;
        ///PRI_280
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri280{}; 
        ///PRI_281
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri281{}; 
        ///PRI_282
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri282{}; 
        ///PRI_283
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri283{}; 
    }
}
