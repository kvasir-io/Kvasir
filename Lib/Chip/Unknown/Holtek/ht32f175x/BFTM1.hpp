#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//BFTM1
    namespace Nonebftm1Cr{    ///<BFTM1_CR
        using Addr = Register::Address<0x40077000,0xfffffff8,0,unsigned>;
        ///MIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mien{}; 
        ///OSM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osm{}; 
        ///CEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Nonebftm1Sr{    ///<BFTM1_SR
        using Addr = Register::Address<0x40077004,0xfffffffe,0,unsigned>;
        ///MIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mif{}; 
    }
    namespace Nonebftm1Cntr{    ///<BFTM1_CNTR
        using Addr = Register::Address<0x40077008,0x00000000,0,unsigned>;
        ///CNTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cntr{}; 
    }
    namespace Nonebftm1Cmpr{    ///<BFTM1_CMPR
        using Addr = Register::Address<0x4007700c,0x00000000,0,unsigned>;
        ///CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
