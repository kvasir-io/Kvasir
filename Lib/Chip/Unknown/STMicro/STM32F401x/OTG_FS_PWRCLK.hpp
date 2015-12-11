#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//USB on the go full speed
    namespace NonefsPcgcctl{    ///<OTG_FS power and clock gating control           register
        using Addr = Register::Address<0x50000e00,0xffffffec,0,unsigned>;
        ///Stop PHY clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stppclk{}; 
        ///Gate HCLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gatehclk{}; 
        ///PHY Suspended
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> physusp{}; 
    }
}
