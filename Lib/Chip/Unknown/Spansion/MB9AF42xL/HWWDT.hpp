#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral HWWDT 
    namespace NonewdgLdr{    ///< register WDG_LDR 
        using Addr = Register::Address<0x40011000,0xffffffff,0,unsigned>;
    }
    namespace NonewdgVlr{    ///< register WDG_VLR 
        using Addr = Register::Address<0x40011004,0xffffffff,0,unsigned>;
    }
    namespace NonewdgCtl{    ///< register WDG_CTL 
        using Addr = Register::Address<0x40011008,0xfffffffc,0,unsigned char>;
        /// bitfield RESEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        /// bitfield INTEN 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace NonewdgIcl{    ///< register WDG_ICL 
        using Addr = Register::Address<0x4001100c,0xffffffff,0,unsigned char>;
    }
    namespace NonewdgRis{    ///< register WDG_RIS 
        using Addr = Register::Address<0x40011010,0xfffffffe,0,unsigned char>;
        /// bitfield RIS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ris{}; 
    }
    namespace NonewdgLck{    ///< register WDG_LCK 
        using Addr = Register::Address<0x40011c00,0xffffffff,0,unsigned>;
    }
}
