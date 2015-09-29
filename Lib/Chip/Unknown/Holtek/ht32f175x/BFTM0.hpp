#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//BFTM0
    namespace Nonebftm0Cr{    ///<BFTM0_CR
        using Addr = Register::Address<0x40076000,0xfffffff8,0,unsigned>;
        ///MIEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mien{}; 
        ///OSM
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osm{}; 
        ///CEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cen{}; 
    }
    namespace Nonebftm0Sr{    ///<BFTM0_SR
        using Addr = Register::Address<0x40076004,0xfffffffe,0,unsigned>;
        ///MIF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> mif{}; 
    }
    namespace Nonebftm0Cntr{    ///<BFTM0_CNTR
        using Addr = Register::Address<0x40076008,0x00000000,0,unsigned>;
        ///CNTR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cntr{}; 
    }
    namespace Nonebftm0Cmpr{    ///<BFTM0_CMPR
        using Addr = Register::Address<0x4007600c,0x00000000,0,unsigned>;
        ///CMP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> cmp{}; 
    }
}
