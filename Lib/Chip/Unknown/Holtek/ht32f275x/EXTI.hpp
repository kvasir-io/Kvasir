#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//EXTI
    namespace NoneextiCfgr0{    ///<EXTI_CFGR0
        using Addr = Register::Address<0x40024000,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr1{    ///<EXTI_CFGR1
        using Addr = Register::Address<0x40024004,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr2{    ///<EXTI_CFGR2
        using Addr = Register::Address<0x40024008,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr3{    ///<EXTI_CFGR3
        using Addr = Register::Address<0x4002400c,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr4{    ///<EXTI_CFGR4
        using Addr = Register::Address<0x40024010,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr5{    ///<EXTI_CFGR5
        using Addr = Register::Address<0x40024014,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr6{    ///<EXTI_CFGR6
        using Addr = Register::Address<0x40024018,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr7{    ///<EXTI_CFGR7
        using Addr = Register::Address<0x4002401c,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr8{    ///<EXTI_CFGR8
        using Addr = Register::Address<0x40024020,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr9{    ///<EXTI_CFGR9
        using Addr = Register::Address<0x40024024,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr10{    ///<EXTI_CFGR10
        using Addr = Register::Address<0x40024028,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr11{    ///<EXTI_CFGR11
        using Addr = Register::Address<0x4002402c,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr12{    ///<EXTI_CFGR12
        using Addr = Register::Address<0x40024030,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr13{    ///<EXTI_CFGR13
        using Addr = Register::Address<0x40024034,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr14{    ///<EXTI_CFGR14
        using Addr = Register::Address<0x40024038,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCfgr15{    ///<EXTI_CFGR15
        using Addr = Register::Address<0x4002403c,0x00000000,0,unsigned>;
        ///DBCNT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,0),Register::ReadWriteAccess,unsigned> dbcnt{}; 
        namespace DbcntValC{
        }
        ///SRCTYPE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> srctype{}; 
        namespace SrctypeValC{
        }
        ///DBEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> dben{}; 
        namespace DbenValC{
        }
    }
    namespace NoneextiCr{    ///<EXTI_CR
        using Addr = Register::Address<0x40024040,0xffff0000,0,unsigned>;
        ///EXTI0EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0en{}; 
        namespace Exti0enValC{
        }
        ///EXTI1EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1en{}; 
        namespace Exti1enValC{
        }
        ///EXTI2EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2en{}; 
        namespace Exti2enValC{
        }
        ///EXTI3EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3en{}; 
        namespace Exti3enValC{
        }
        ///EXTI4EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4en{}; 
        namespace Exti4enValC{
        }
        ///EXTI5EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5en{}; 
        namespace Exti5enValC{
        }
        ///EXTI6EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6en{}; 
        namespace Exti6enValC{
        }
        ///EXTI7EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7en{}; 
        namespace Exti7enValC{
        }
        ///EXTI8EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8en{}; 
        namespace Exti8enValC{
        }
        ///EXTI9EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9en{}; 
        namespace Exti9enValC{
        }
        ///EXTI10EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10en{}; 
        namespace Exti10enValC{
        }
        ///EXTI11EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11en{}; 
        namespace Exti11enValC{
        }
        ///EXTI12EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12en{}; 
        namespace Exti12enValC{
        }
        ///EXTI13EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13en{}; 
        namespace Exti13enValC{
        }
        ///EXTI14EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14en{}; 
        namespace Exti14enValC{
        }
        ///EXTI15EN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15en{}; 
        namespace Exti15enValC{
        }
    }
    namespace NoneextiEdgeflgr{    ///<EXTI_EDGEFLGR
        using Addr = Register::Address<0x40024044,0xffff0000,0,unsigned>;
        ///EXTI0EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0edf{}; 
        namespace Exti0edfValC{
        }
        ///EXTI1EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1edf{}; 
        namespace Exti1edfValC{
        }
        ///EXTI2EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2edf{}; 
        namespace Exti2edfValC{
        }
        ///EXTI3EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3edf{}; 
        namespace Exti3edfValC{
        }
        ///EXTI4EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4edf{}; 
        namespace Exti4edfValC{
        }
        ///EXTI5EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5edf{}; 
        namespace Exti5edfValC{
        }
        ///EXTI6EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6edf{}; 
        namespace Exti6edfValC{
        }
        ///EXTI7EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7edf{}; 
        namespace Exti7edfValC{
        }
        ///EXTI8EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8edf{}; 
        namespace Exti8edfValC{
        }
        ///EXTI9EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9edf{}; 
        namespace Exti9edfValC{
        }
        ///EXTI10EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10edf{}; 
        namespace Exti10edfValC{
        }
        ///EXTI11EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11edf{}; 
        namespace Exti11edfValC{
        }
        ///EXTI12EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12edf{}; 
        namespace Exti12edfValC{
        }
        ///EXTI13EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13edf{}; 
        namespace Exti13edfValC{
        }
        ///EXTI14EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14edf{}; 
        namespace Exti14edfValC{
        }
        ///EXTI15EDF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15edf{}; 
        namespace Exti15edfValC{
        }
    }
    namespace NoneextiEdgesr{    ///<EXTI_EDGESR
        using Addr = Register::Address<0x40024048,0xffff0000,0,unsigned>;
        ///EXTI0EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0eds{}; 
        namespace Exti0edsValC{
        }
        ///EXTI1EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1eds{}; 
        namespace Exti1edsValC{
        }
        ///EXTI2EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2eds{}; 
        namespace Exti2edsValC{
        }
        ///EXTI3EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3eds{}; 
        namespace Exti3edsValC{
        }
        ///EXTI4EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4eds{}; 
        namespace Exti4edsValC{
        }
        ///EXTI5EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5eds{}; 
        namespace Exti5edsValC{
        }
        ///EXTI6EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6eds{}; 
        namespace Exti6edsValC{
        }
        ///EXTI7EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7eds{}; 
        namespace Exti7edsValC{
        }
        ///EXTI8EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8eds{}; 
        namespace Exti8edsValC{
        }
        ///EXTI9EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9eds{}; 
        namespace Exti9edsValC{
        }
        ///EXTI10EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10eds{}; 
        namespace Exti10edsValC{
        }
        ///EXTI11EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11eds{}; 
        namespace Exti11edsValC{
        }
        ///EXTI12EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12eds{}; 
        namespace Exti12edsValC{
        }
        ///EXTI13EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13eds{}; 
        namespace Exti13edsValC{
        }
        ///EXTI14EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14eds{}; 
        namespace Exti14edsValC{
        }
        ///EXTI15EDS
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15eds{}; 
        namespace Exti15edsValC{
        }
    }
    namespace NoneextiSscr{    ///<EXTI_SSCR
        using Addr = Register::Address<0x4002404c,0xffff0000,0,unsigned>;
        ///EXTI0SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0sc{}; 
        namespace Exti0scValC{
        }
        ///EXTI1SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1sc{}; 
        namespace Exti1scValC{
        }
        ///EXTI2SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2sc{}; 
        namespace Exti2scValC{
        }
        ///EXTI3SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3sc{}; 
        namespace Exti3scValC{
        }
        ///EXTI4SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4sc{}; 
        namespace Exti4scValC{
        }
        ///EXTI5SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5sc{}; 
        namespace Exti5scValC{
        }
        ///EXTI6SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6sc{}; 
        namespace Exti6scValC{
        }
        ///EXTI7SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7sc{}; 
        namespace Exti7scValC{
        }
        ///EXTI8SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8sc{}; 
        namespace Exti8scValC{
        }
        ///EXTI9SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9sc{}; 
        namespace Exti9scValC{
        }
        ///EXTI10SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10sc{}; 
        namespace Exti10scValC{
        }
        ///EXTI11SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11sc{}; 
        namespace Exti11scValC{
        }
        ///EXTI12SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12sc{}; 
        namespace Exti12scValC{
        }
        ///EXTI13SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13sc{}; 
        namespace Exti13scValC{
        }
        ///EXTI14SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14sc{}; 
        namespace Exti14scValC{
        }
        ///EXTI15SC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15sc{}; 
        namespace Exti15scValC{
        }
    }
    namespace NoneextiWakupcr{    ///<EXTI_WAKUPCR
        using Addr = Register::Address<0x40024050,0x7fff0000,0,unsigned>;
        ///EXTI0WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0wen{}; 
        namespace Exti0wenValC{
        }
        ///EXTI1WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1wen{}; 
        namespace Exti1wenValC{
        }
        ///EXTI2WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2wen{}; 
        namespace Exti2wenValC{
        }
        ///EXTI3WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3wen{}; 
        namespace Exti3wenValC{
        }
        ///EXTI4WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4wen{}; 
        namespace Exti4wenValC{
        }
        ///EXTI5WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5wen{}; 
        namespace Exti5wenValC{
        }
        ///EXTI6WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6wen{}; 
        namespace Exti6wenValC{
        }
        ///EXTI7WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7wen{}; 
        namespace Exti7wenValC{
        }
        ///EXTI8WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8wen{}; 
        namespace Exti8wenValC{
        }
        ///EXTI9WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9wen{}; 
        namespace Exti9wenValC{
        }
        ///EXTI10WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10wen{}; 
        namespace Exti10wenValC{
        }
        ///EXTI11WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11wen{}; 
        namespace Exti11wenValC{
        }
        ///EXTI12WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12wen{}; 
        namespace Exti12wenValC{
        }
        ///EXTI13WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13wen{}; 
        namespace Exti13wenValC{
        }
        ///EXTI14WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14wen{}; 
        namespace Exti14wenValC{
        }
        ///EXTI15WEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15wen{}; 
        namespace Exti15wenValC{
        }
        ///EVWUPIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> evwupien{}; 
        namespace EvwupienValC{
        }
    }
    namespace NoneextiWakuppolr{    ///<EXTI_WAKUPPOLR
        using Addr = Register::Address<0x40024054,0xffff0000,0,unsigned>;
        ///EXTI0POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0pol{}; 
        namespace Exti0polValC{
        }
        ///EXTI1POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1pol{}; 
        namespace Exti1polValC{
        }
        ///EXTI2POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2pol{}; 
        namespace Exti2polValC{
        }
        ///EXTI3POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3pol{}; 
        namespace Exti3polValC{
        }
        ///EXTI4POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4pol{}; 
        namespace Exti4polValC{
        }
        ///EXTI5POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5pol{}; 
        namespace Exti5polValC{
        }
        ///EXTI6POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6pol{}; 
        namespace Exti6polValC{
        }
        ///EXTI7POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7pol{}; 
        namespace Exti7polValC{
        }
        ///EXTI8POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8pol{}; 
        namespace Exti8polValC{
        }
        ///EXTI9POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9pol{}; 
        namespace Exti9polValC{
        }
        ///EXTI10POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10pol{}; 
        namespace Exti10polValC{
        }
        ///EXTI11POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11pol{}; 
        namespace Exti11polValC{
        }
        ///EXTI12POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12pol{}; 
        namespace Exti12polValC{
        }
        ///EXTI13POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13pol{}; 
        namespace Exti13polValC{
        }
        ///EXTI14POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14pol{}; 
        namespace Exti14polValC{
        }
        ///EXTI15POL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15pol{}; 
        namespace Exti15polValC{
        }
    }
    namespace NoneextiWakupflg{    ///<EXTI_WAKUPFLG
        using Addr = Register::Address<0x40024058,0xffff0000,0,unsigned>;
        ///EXTI0WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> exti0wfl{}; 
        namespace Exti0wflValC{
        }
        ///EXTI1WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> exti1wfl{}; 
        namespace Exti1wflValC{
        }
        ///EXTI2WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> exti2wfl{}; 
        namespace Exti2wflValC{
        }
        ///EXTI3WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> exti3wfl{}; 
        namespace Exti3wflValC{
        }
        ///EXTI4WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> exti4wfl{}; 
        namespace Exti4wflValC{
        }
        ///EXTI5WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> exti5wfl{}; 
        namespace Exti5wflValC{
        }
        ///EXTI6WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> exti6wfl{}; 
        namespace Exti6wflValC{
        }
        ///EXTI7WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> exti7wfl{}; 
        namespace Exti7wflValC{
        }
        ///EXTI8WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> exti8wfl{}; 
        namespace Exti8wflValC{
        }
        ///EXTI9WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> exti9wfl{}; 
        namespace Exti9wflValC{
        }
        ///EXTI10WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> exti10wfl{}; 
        namespace Exti10wflValC{
        }
        ///EXTI11WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> exti11wfl{}; 
        namespace Exti11wflValC{
        }
        ///EXTI12WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> exti12wfl{}; 
        namespace Exti12wflValC{
        }
        ///EXTI13WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> exti13wfl{}; 
        namespace Exti13wflValC{
        }
        ///EXTI14WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> exti14wfl{}; 
        namespace Exti14wflValC{
        }
        ///EXTI15WFL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> exti15wfl{}; 
        namespace Exti15wflValC{
        }
    }
}
