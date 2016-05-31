#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral HWWDT 
    namespace HwwdtWdgLdr{    ///< register WDG_LDR 
        using Addr = Register::Address<0x40011000,0xffffffff,0x00000000,unsigned>;
    }
    namespace HwwdtWdgVlr{    ///< register WDG_VLR 
        using Addr = Register::Address<0x40011004,0xffffffff,0x00000000,unsigned>;
    }
    namespace HwwdtWdgCtl{    ///< register WDG_CTL 
        using Addr = Register::Address<0x40011008,0xfffffffc,0x00000000,unsigned char>;
        /// bitfield RESEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> resen{}; 
        /// bitfield INTEN 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> inten{}; 
    }
    namespace HwwdtWdgIcl{    ///< register WDG_ICL 
        using Addr = Register::Address<0x4001100c,0xffffffff,0x00000000,unsigned char>;
    }
    namespace HwwdtWdgRis{    ///< register WDG_RIS 
        using Addr = Register::Address<0x40011010,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RIS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ris{}; 
    }
    namespace HwwdtWdgLck{    ///< register WDG_LCK 
        using Addr = Register::Address<0x40011c00,0xffffffff,0x00000000,unsigned>;
    }
}
