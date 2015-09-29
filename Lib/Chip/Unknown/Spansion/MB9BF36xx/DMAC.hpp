#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DMAC 
    namespace Nonedmacr{    ///< register DMACR 
        using Addr = Register::Address<0x40060000,0x20ffffff,0,unsigned>;
        /// bitfield DE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> de{}; 
        /// bitfield DS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> ds{}; 
        /// bitfield PR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> pr{}; 
        /// bitfield DH 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> dh{}; 
    }
    namespace Nonedmaca0{    ///< register DMACA0 
        using Addr = Register::Address<0x40060010,0x00700000,0,unsigned>;
        /// bitfield EB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> eb{}; 
        /// bitfield PB 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> pb{}; 
        /// bitfield ST 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> st{}; 
        /// bitfield IS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,23),Register::ReadWriteAccess,unsigned> is{}; 
        /// bitfield BC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16),Register::ReadWriteAccess,unsigned> bc{}; 
        /// bitfield TC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> tc{}; 
    }
    namespace Nonedmacb0{    ///< register DMACB0 
        using Addr = Register::Address<0x40060014,0xc000fffe,0,unsigned>;
        /// bitfield MS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28),Register::ReadWriteAccess,unsigned> ms{}; 
        /// bitfield TW 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,unsigned> tw{}; 
        /// bitfield FS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> fs{}; 
        /// bitfield FD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> fd{}; 
        /// bitfield RC 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> rc{}; 
        /// bitfield RS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> rs{}; 
        /// bitfield RD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> rd{}; 
        /// bitfield EI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> ei{}; 
        /// bitfield CI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> ci{}; 
        /// bitfield SS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> ss{}; 
        /// bitfield EM 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> em{}; 
    }
    namespace Nonedmacsa0{    ///< register DMACSA0 
        using Addr = Register::Address<0x40060018,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda0{    ///< register DMACDA0 
        using Addr = Register::Address<0x4006001c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca1{    ///< register DMACA1 
        using Addr = Register::Address<0x40060020,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb1{    ///< register DMACB1 
        using Addr = Register::Address<0x40060024,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa1{    ///< register DMACSA1 
        using Addr = Register::Address<0x40060028,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda1{    ///< register DMACDA1 
        using Addr = Register::Address<0x4006002c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca2{    ///< register DMACA2 
        using Addr = Register::Address<0x40060030,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb2{    ///< register DMACB2 
        using Addr = Register::Address<0x40060034,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa2{    ///< register DMACSA2 
        using Addr = Register::Address<0x40060038,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda2{    ///< register DMACDA2 
        using Addr = Register::Address<0x4006003c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca3{    ///< register DMACA3 
        using Addr = Register::Address<0x40060040,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb3{    ///< register DMACB3 
        using Addr = Register::Address<0x40060044,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa3{    ///< register DMACSA3 
        using Addr = Register::Address<0x40060048,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda3{    ///< register DMACDA3 
        using Addr = Register::Address<0x4006004c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca4{    ///< register DMACA4 
        using Addr = Register::Address<0x40060050,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb4{    ///< register DMACB4 
        using Addr = Register::Address<0x40060054,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa4{    ///< register DMACSA4 
        using Addr = Register::Address<0x40060058,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda4{    ///< register DMACDA4 
        using Addr = Register::Address<0x4006005c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca5{    ///< register DMACA5 
        using Addr = Register::Address<0x40060060,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb5{    ///< register DMACB5 
        using Addr = Register::Address<0x40060064,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa5{    ///< register DMACSA5 
        using Addr = Register::Address<0x40060068,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda5{    ///< register DMACDA5 
        using Addr = Register::Address<0x4006006c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca6{    ///< register DMACA6 
        using Addr = Register::Address<0x40060070,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb6{    ///< register DMACB6 
        using Addr = Register::Address<0x40060074,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa6{    ///< register DMACSA6 
        using Addr = Register::Address<0x40060078,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda6{    ///< register DMACDA6 
        using Addr = Register::Address<0x4006007c,0xffffffff,0,unsigned>;
    }
    namespace Nonedmaca7{    ///< register DMACA7 
        using Addr = Register::Address<0x40060080,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacb7{    ///< register DMACB7 
        using Addr = Register::Address<0x40060084,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacsa7{    ///< register DMACSA7 
        using Addr = Register::Address<0x40060088,0xffffffff,0,unsigned>;
    }
    namespace Nonedmacda7{    ///< register DMACDA7 
        using Addr = Register::Address<0x4006008c,0xffffffff,0,unsigned>;
    }
}
