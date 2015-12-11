#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DAC 
    namespace Nonedadr0{    ///< register DADR0 
        using Addr = Register::Address<0x40028000,0xfffffc00,0,unsigned>;
        /// bitfield DA9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> da9{}; 
        /// bitfield DA8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> da8{}; 
        /// bitfield DA7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> da7{}; 
        /// bitfield DA6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> da6{}; 
        /// bitfield DA5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> da5{}; 
        /// bitfield DA4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> da4{}; 
        /// bitfield DA3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> da3{}; 
        /// bitfield DA2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> da2{}; 
        /// bitfield DA1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da1{}; 
        /// bitfield DA0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> da0{}; 
    }
    namespace Nonedacr0{    ///< register DACR0 
        using Addr = Register::Address<0x40028002,0xfffffffe,0,unsigned char>;
        /// bitfield DAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
    namespace Nonedadr1{    ///< register DADR1 
        using Addr = Register::Address<0x40028004,0xfffffc00,0,unsigned>;
        /// bitfield DA9 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> da9{}; 
        /// bitfield DA8 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> da8{}; 
        /// bitfield DA7 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> da7{}; 
        /// bitfield DA6 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> da6{}; 
        /// bitfield DA5 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> da5{}; 
        /// bitfield DA4 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> da4{}; 
        /// bitfield DA3 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> da3{}; 
        /// bitfield DA2 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> da2{}; 
        /// bitfield DA1 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da1{}; 
        /// bitfield DA0 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> da0{}; 
    }
    namespace Nonedacr1{    ///< register DACR1 
        using Addr = Register::Address<0x40028006,0xfffffffe,0,unsigned char>;
        /// bitfield DAE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
}
