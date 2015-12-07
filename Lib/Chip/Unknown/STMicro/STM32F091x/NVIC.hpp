#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Nested Vectored Interrupt
      Controller
    namespace Noneiser{    ///<Interrupt Set Enable Register
        using Addr = Register::Address<0xe000e100,0x00000000,0,unsigned>;
        ///SETENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setena{}; 
        namespace SetenaValC{
        }
    }
    namespace Noneicer{    ///<Interrupt Clear Enable
          Register
        using Addr = Register::Address<0xe000e180,0x00000000,0,unsigned>;
        ///CLRENA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrena{}; 
        namespace ClrenaValC{
        }
    }
    namespace Noneispr{    ///<Interrupt Set-Pending Register
        using Addr = Register::Address<0xe000e200,0x00000000,0,unsigned>;
        ///SETPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> setpend{}; 
        namespace SetpendValC{
        }
    }
    namespace Noneicpr{    ///<Interrupt Clear-Pending
          Register
        using Addr = Register::Address<0xe000e280,0x00000000,0,unsigned>;
        ///CLRPEND
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> clrpend{}; 
        namespace ClrpendValC{
        }
    }
    namespace Noneipr0{    ///<Interrupt Priority Register 0
        using Addr = Register::Address<0xe000e400,0x3f3f3f3f,0,unsigned>;
        ///PRI_00
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri00{}; 
        namespace Pri00ValC{
        }
        ///PRI_01
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri01{}; 
        namespace Pri01ValC{
        }
        ///PRI_02
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri02{}; 
        namespace Pri02ValC{
        }
        ///PRI_03
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri03{}; 
        namespace Pri03ValC{
        }
    }
    namespace Noneipr1{    ///<Interrupt Priority Register 1
        using Addr = Register::Address<0xe000e404,0x3f3f3f3f,0,unsigned>;
        ///PRI_40
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri40{}; 
        namespace Pri40ValC{
        }
        ///PRI_41
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri41{}; 
        namespace Pri41ValC{
        }
        ///PRI_42
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri42{}; 
        namespace Pri42ValC{
        }
        ///PRI_43
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri43{}; 
        namespace Pri43ValC{
        }
    }
    namespace Noneipr2{    ///<Interrupt Priority Register 2
        using Addr = Register::Address<0xe000e408,0x3f3f3f3f,0,unsigned>;
        ///PRI_80
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri80{}; 
        namespace Pri80ValC{
        }
        ///PRI_81
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri81{}; 
        namespace Pri81ValC{
        }
        ///PRI_82
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri82{}; 
        namespace Pri82ValC{
        }
        ///PRI_83
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri83{}; 
        namespace Pri83ValC{
        }
    }
    namespace Noneipr3{    ///<Interrupt Priority Register 3
        using Addr = Register::Address<0xe000e40c,0x3f3f3f3f,0,unsigned>;
        ///PRI_120
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri120{}; 
        namespace Pri120ValC{
        }
        ///PRI_121
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri121{}; 
        namespace Pri121ValC{
        }
        ///PRI_122
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri122{}; 
        namespace Pri122ValC{
        }
        ///PRI_123
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri123{}; 
        namespace Pri123ValC{
        }
    }
    namespace Noneipr4{    ///<Interrupt Priority Register 4
        using Addr = Register::Address<0xe000e410,0x3f3f3f3f,0,unsigned>;
        ///PRI_160
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri160{}; 
        namespace Pri160ValC{
        }
        ///PRI_161
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri161{}; 
        namespace Pri161ValC{
        }
        ///PRI_162
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri162{}; 
        namespace Pri162ValC{
        }
        ///PRI_163
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri163{}; 
        namespace Pri163ValC{
        }
    }
    namespace Noneipr5{    ///<Interrupt Priority Register 5
        using Addr = Register::Address<0xe000e414,0x3f3f3f3f,0,unsigned>;
        ///PRI_200
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri200{}; 
        namespace Pri200ValC{
        }
        ///PRI_201
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri201{}; 
        namespace Pri201ValC{
        }
        ///PRI_202
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri202{}; 
        namespace Pri202ValC{
        }
        ///PRI_203
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri203{}; 
        namespace Pri203ValC{
        }
    }
    namespace Noneipr6{    ///<Interrupt Priority Register 6
        using Addr = Register::Address<0xe000e418,0x3f3f3f3f,0,unsigned>;
        ///PRI_240
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri240{}; 
        namespace Pri240ValC{
        }
        ///PRI_241
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri241{}; 
        namespace Pri241ValC{
        }
        ///PRI_242
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri242{}; 
        namespace Pri242ValC{
        }
        ///PRI_243
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri243{}; 
        namespace Pri243ValC{
        }
    }
    namespace Noneipr7{    ///<Interrupt Priority Register 7
        using Addr = Register::Address<0xe000e41c,0x3f3f3f3f,0,unsigned>;
        ///PRI_280
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> pri280{}; 
        namespace Pri280ValC{
        }
        ///PRI_281
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,14),Register::ReadWriteAccess,unsigned> pri281{}; 
        namespace Pri281ValC{
        }
        ///PRI_282
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> pri282{}; 
        namespace Pri282ValC{
        }
        ///PRI_283
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,30),Register::ReadWriteAccess,unsigned> pri283{}; 
        namespace Pri283ValC{
        }
    }
}
