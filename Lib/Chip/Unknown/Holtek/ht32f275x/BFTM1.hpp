#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//BFTM1
    namespace Bftm1Bftm1Cr{    ///<BFTM1_CR
        using Addr = Register::Address<0x40077000,0x00000000,0x00000000,unsigned>;
        ///MIEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mien{}; 
        ///OSM
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osm{}; 
        ///CEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cen{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Bftm1Bftm1Sr{    ///<BFTM1_SR
        using Addr = Register::Address<0x40077004,0x00000000,0x00000000,unsigned>;
        ///MIF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mif{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace Bftm1Bftm1Cntr{    ///<BFTM1_CNTR
        using Addr = Register::Address<0x40077008,0x00000000,0x00000000,unsigned>;
        ///CNTR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cntr{}; 
    }
    namespace Bftm1Bftm1Cmpr{    ///<BFTM1_CMPR
        using Addr = Register::Address<0x4007700c,0x00000000,0x00000000,unsigned>;
        ///CMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
