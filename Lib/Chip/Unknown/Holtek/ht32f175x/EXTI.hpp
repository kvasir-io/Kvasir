#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//EXTI
    namespace ExtiExtiCfgr0{    ///<EXTI_CFGR0
        using Addr = Register::Address<0x40024000,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr1{    ///<EXTI_CFGR1
        using Addr = Register::Address<0x40024004,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr2{    ///<EXTI_CFGR2
        using Addr = Register::Address<0x40024008,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr3{    ///<EXTI_CFGR3
        using Addr = Register::Address<0x4002400c,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr4{    ///<EXTI_CFGR4
        using Addr = Register::Address<0x40024010,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr5{    ///<EXTI_CFGR5
        using Addr = Register::Address<0x40024014,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr6{    ///<EXTI_CFGR6
        using Addr = Register::Address<0x40024018,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr7{    ///<EXTI_CFGR7
        using Addr = Register::Address<0x4002401c,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr8{    ///<EXTI_CFGR8
        using Addr = Register::Address<0x40024020,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr9{    ///<EXTI_CFGR9
        using Addr = Register::Address<0x40024024,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr10{    ///<EXTI_CFGR10
        using Addr = Register::Address<0x40024028,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr11{    ///<EXTI_CFGR11
        using Addr = Register::Address<0x4002402c,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr12{    ///<EXTI_CFGR12
        using Addr = Register::Address<0x40024030,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr13{    ///<EXTI_CFGR13
        using Addr = Register::Address<0x40024034,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr14{    ///<EXTI_CFGR14
        using Addr = Register::Address<0x40024038,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCfgr15{    ///<EXTI_CFGR15
        using Addr = Register::Address<0x4002403c,0x00000000,0x00000000,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
    }
    namespace ExtiExtiCr{    ///<EXTI_CR
        using Addr = Register::Address<0x40024040,0x00000000,0x00000000,unsigned>;
        ///EXTI0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0en{}; 
        ///EXTI1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1en{}; 
        ///EXTI2EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2en{}; 
        ///EXTI3EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3en{}; 
        ///EXTI4EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4en{}; 
        ///EXTI5EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5en{}; 
        ///EXTI6EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6en{}; 
        ///EXTI7EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7en{}; 
        ///EXTI8EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8en{}; 
        ///EXTI9EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9en{}; 
        ///EXTI10EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10en{}; 
        ///EXTI11EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11en{}; 
        ///EXTI12EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12en{}; 
        ///EXTI13EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13en{}; 
        ///EXTI14EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14en{}; 
        ///EXTI15EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15en{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ExtiExtiEdgeflgr{    ///<EXTI_EDGEFLGR
        using Addr = Register::Address<0x40024044,0x00000000,0x00000000,unsigned>;
        ///EXTI0EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0edf{}; 
        ///EXTI1EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1edf{}; 
        ///EXTI2EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2edf{}; 
        ///EXTI3EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3edf{}; 
        ///EXTI4EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4edf{}; 
        ///EXTI5EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5edf{}; 
        ///EXTI6EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6edf{}; 
        ///EXTI7EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7edf{}; 
        ///EXTI8EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8edf{}; 
        ///EXTI9EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9edf{}; 
        ///EXTI10EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10edf{}; 
        ///EXTI11EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11edf{}; 
        ///EXTI12EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12edf{}; 
        ///EXTI13EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13edf{}; 
        ///EXTI14EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14edf{}; 
        ///EXTI15EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15edf{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ExtiExtiEdgesr{    ///<EXTI_EDGESR
        using Addr = Register::Address<0x40024048,0x00000000,0x00000000,unsigned>;
        ///EXTI0EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0eds{}; 
        ///EXTI1EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1eds{}; 
        ///EXTI2EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2eds{}; 
        ///EXTI3EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3eds{}; 
        ///EXTI4EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4eds{}; 
        ///EXTI5EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5eds{}; 
        ///EXTI6EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6eds{}; 
        ///EXTI7EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7eds{}; 
        ///EXTI8EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8eds{}; 
        ///EXTI9EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9eds{}; 
        ///EXTI10EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10eds{}; 
        ///EXTI11EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11eds{}; 
        ///EXTI12EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12eds{}; 
        ///EXTI13EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13eds{}; 
        ///EXTI14EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14eds{}; 
        ///EXTI15EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15eds{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ExtiExtiSscr{    ///<EXTI_SSCR
        using Addr = Register::Address<0x4002404c,0x00000000,0x00000000,unsigned>;
        ///EXTI0SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0sc{}; 
        ///EXTI1SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1sc{}; 
        ///EXTI2SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2sc{}; 
        ///EXTI3SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3sc{}; 
        ///EXTI4SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4sc{}; 
        ///EXTI5SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5sc{}; 
        ///EXTI6SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6sc{}; 
        ///EXTI7SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7sc{}; 
        ///EXTI8SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8sc{}; 
        ///EXTI9SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9sc{}; 
        ///EXTI10SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10sc{}; 
        ///EXTI11SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11sc{}; 
        ///EXTI12SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12sc{}; 
        ///EXTI13SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13sc{}; 
        ///EXTI14SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14sc{}; 
        ///EXTI15SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15sc{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ExtiExtiWakupcr{    ///<EXTI_WAKUPCR
        using Addr = Register::Address<0x40024050,0x7fff0000,0x00000000,unsigned>;
        ///EXTI0WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0wen{}; 
        ///EXTI1WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1wen{}; 
        ///EXTI2WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2wen{}; 
        ///EXTI3WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3wen{}; 
        ///EXTI4WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4wen{}; 
        ///EXTI5WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5wen{}; 
        ///EXTI6WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6wen{}; 
        ///EXTI7WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7wen{}; 
        ///EXTI8WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8wen{}; 
        ///EXTI9WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9wen{}; 
        ///EXTI10WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10wen{}; 
        ///EXTI11WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11wen{}; 
        ///EXTI12WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12wen{}; 
        ///EXTI13WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13wen{}; 
        ///EXTI14WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14wen{}; 
        ///EXTI15WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15wen{}; 
        ///EVWUPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> evwupien{}; 
    }
    namespace ExtiExtiWakuppolr{    ///<EXTI_WAKUPPOLR
        using Addr = Register::Address<0x40024054,0x00000000,0x00000000,unsigned>;
        ///EXTI0POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0pol{}; 
        ///EXTI1POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1pol{}; 
        ///EXTI2POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2pol{}; 
        ///EXTI3POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3pol{}; 
        ///EXTI4POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4pol{}; 
        ///EXTI5POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5pol{}; 
        ///EXTI6POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6pol{}; 
        ///EXTI7POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7pol{}; 
        ///EXTI8POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8pol{}; 
        ///EXTI9POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9pol{}; 
        ///EXTI10POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10pol{}; 
        ///EXTI11POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11pol{}; 
        ///EXTI12POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12pol{}; 
        ///EXTI13POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13pol{}; 
        ///EXTI14POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14pol{}; 
        ///EXTI15POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15pol{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ExtiExtiWakupflg{    ///<EXTI_WAKUPFLG
        using Addr = Register::Address<0x40024058,0x00000000,0x00000000,unsigned>;
        ///EXTI0WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0wfl{}; 
        ///EXTI1WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1wfl{}; 
        ///EXTI2WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2wfl{}; 
        ///EXTI3WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3wfl{}; 
        ///EXTI4WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4wfl{}; 
        ///EXTI5WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5wfl{}; 
        ///EXTI6WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6wfl{}; 
        ///EXTI7WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7wfl{}; 
        ///EXTI8WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8wfl{}; 
        ///EXTI9WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9wfl{}; 
        ///EXTI10WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10wfl{}; 
        ///EXTI11WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11wfl{}; 
        ///EXTI12WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12wfl{}; 
        ///EXTI13WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13wfl{}; 
        ///EXTI14WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14wfl{}; 
        ///EXTI15WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15wfl{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
