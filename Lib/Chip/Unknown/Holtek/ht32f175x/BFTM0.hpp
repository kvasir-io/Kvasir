#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//BFTM0
    namespace Bftm0Bftm0Cr{    ///<BFTM0_CR
        using Addr = Register::Address<0x40076000,0x00000000,0x00000000,unsigned>;
        ///MIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mien{}; 
        ///OSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osm{}; 
        ///CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Bftm0Bftm0Sr{    ///<BFTM0_SR
        using Addr = Register::Address<0x40076004,0x00000000,0x00000000,unsigned>;
        ///MIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mif{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Bftm0Bftm0Cntr{    ///<BFTM0_CNTR
        using Addr = Register::Address<0x40076008,0x00000000,0x00000000,unsigned>;
        ///CNTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cntr{}; 
    }
    namespace Bftm0Bftm0Cmpr{    ///<BFTM0_CMPR
        using Addr = Register::Address<0x4007600c,0x00000000,0x00000000,unsigned>;
        ///CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
