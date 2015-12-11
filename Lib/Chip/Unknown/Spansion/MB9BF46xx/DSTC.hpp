#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DSTC 
    namespace Nonedestp{    ///< register DESTP 
        using Addr = Register::Address<0x40061000,0xffffffff,0,unsigned>;
    }
    namespace Nonehwdesp{    ///< register HWDESP 
        using Addr = Register::Address<0x40061004,0xc000ff00,0,unsigned>;
        /// bitfield HWDESP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> hwdesp{}; 
        /// bitfield CHANNEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> channel{}; 
    }
    namespace Nonecmd{    ///< register CMD 
        using Addr = Register::Address<0x40061008,0xffffffff,0,unsigned char>;
    }
    namespace Nonecfg{    ///< register CFG 
        using Addr = Register::Address<0x40061009,0xffffff80,0,unsigned char>;
        /// bitfield SWPR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> swpr{}; 
        /// bitfield ESTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> este{}; 
        /// bitfield RBDIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> rbdis{}; 
        /// bitfield ERINTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> erinte{}; 
        /// bitfield SWINTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swinte{}; 
    }
    namespace Noneswtr{    ///< register SWTR 
        using Addr = Register::Address<0x4006100a,0xffff0000,0,unsigned>;
        /// bitfield SWST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> swst{}; 
        /// bitfield SWREQ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> swreq{}; 
        /// bitfield SWDESP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,0),Register::ReadWriteAccess,unsigned> swdesp{}; 
    }
    namespace Nonemoners{    ///< register MONERS 
        using Addr = Register::Address<0x4006100c,0xc00000a0,0,unsigned>;
        /// bitfield EDESP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,16),Register::ReadWriteAccess,unsigned> edesp{}; 
        /// bitfield ECH 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ech{}; 
        /// bitfield EHS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ehs{}; 
        /// bitfield ESTOP 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> estop{}; 
        /// bitfield DER 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> der{}; 
        /// bitfield EST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> est{}; 
    }
    namespace Nonedreqenb0{    ///< register DREQENB0 
        using Addr = Register::Address<0x40061010,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb1{    ///< register DREQENB1 
        using Addr = Register::Address<0x40061014,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb2{    ///< register DREQENB2 
        using Addr = Register::Address<0x40061018,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb3{    ///< register DREQENB3 
        using Addr = Register::Address<0x4006101c,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb4{    ///< register DREQENB4 
        using Addr = Register::Address<0x40061020,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb5{    ///< register DREQENB5 
        using Addr = Register::Address<0x40061024,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb6{    ///< register DREQENB6 
        using Addr = Register::Address<0x40061028,0xffffffff,0,unsigned>;
    }
    namespace Nonedreqenb7{    ///< register DREQENB7 
        using Addr = Register::Address<0x4006102c,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint0{    ///< register HWINT0 
        using Addr = Register::Address<0x40061030,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint1{    ///< register HWINT1 
        using Addr = Register::Address<0x40061034,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint2{    ///< register HWINT2 
        using Addr = Register::Address<0x40061038,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint3{    ///< register HWINT3 
        using Addr = Register::Address<0x4006103c,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint4{    ///< register HWINT4 
        using Addr = Register::Address<0x40061040,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint5{    ///< register HWINT5 
        using Addr = Register::Address<0x40061044,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint6{    ///< register HWINT6 
        using Addr = Register::Address<0x40061048,0xffffffff,0,unsigned>;
    }
    namespace Nonehwint7{    ///< register HWINT7 
        using Addr = Register::Address<0x4006104c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk0{    ///< register DQMSK0 
        using Addr = Register::Address<0x40061070,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk1{    ///< register DQMSK1 
        using Addr = Register::Address<0x40061074,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk2{    ///< register DQMSK2 
        using Addr = Register::Address<0x40061078,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk3{    ///< register DQMSK3 
        using Addr = Register::Address<0x4006107c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk4{    ///< register DQMSK4 
        using Addr = Register::Address<0x40061080,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk5{    ///< register DQMSK5 
        using Addr = Register::Address<0x40061084,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk6{    ///< register DQMSK6 
        using Addr = Register::Address<0x40061088,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmsk7{    ///< register DQMSK7 
        using Addr = Register::Address<0x4006108c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr0{    ///< register DQMSKCLR0 
        using Addr = Register::Address<0x40061090,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr1{    ///< register DQMSKCLR1 
        using Addr = Register::Address<0x40061094,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr2{    ///< register DQMSKCLR2 
        using Addr = Register::Address<0x40061098,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr3{    ///< register DQMSKCLR3 
        using Addr = Register::Address<0x4006109c,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr4{    ///< register DQMSKCLR4 
        using Addr = Register::Address<0x400610a0,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr5{    ///< register DQMSKCLR5 
        using Addr = Register::Address<0x400610a4,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr6{    ///< register DQMSKCLR6 
        using Addr = Register::Address<0x400610a8,0xffffffff,0,unsigned>;
    }
    namespace Nonedqmskclr7{    ///< register DQMSKCLR7 
        using Addr = Register::Address<0x400610ac,0xffffffff,0,unsigned>;
    }
}
