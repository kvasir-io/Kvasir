#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral LVD 
    namespace NonelvdCtl{    ///< register LVD_CTL 
        using Addr = Register::Address<0x40035000,0xffffff43,0,unsigned char>;
        /// bitfield LVDIE 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdie{}; 
        /// bitfield SVHI 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2),Register::ReadWriteAccess,unsigned> svhi{}; 
    }
    namespace NonelvdStr{    ///< register LVD_STR 
        using Addr = Register::Address<0x40035004,0xffffff7f,0,unsigned char>;
        /// bitfield LVDIR 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdir{}; 
    }
    namespace NonelvdClr{    ///< register LVD_CLR 
        using Addr = Register::Address<0x40035008,0xffffff7f,0,unsigned char>;
        /// bitfield LVDCL 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdcl{}; 
    }
    namespace NonelvdRlr{    ///< register LVD_RLR 
        using Addr = Register::Address<0x4003500c,0x00000000,0,unsigned>;
        /// bitfield LVDLCK 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lvdlck{}; 
    }
    namespace NonelvdStr2{    ///< register LVD_STR2 
        using Addr = Register::Address<0x40035010,0xffffff7f,0,unsigned char>;
        /// bitfield LVDIRDY 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdirdy{}; 
    }
}
