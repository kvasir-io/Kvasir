#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral LVD 
    namespace LvdLvdCtl{    ///< register LVD_CTL 
        using Addr = Register::Address<0x40035000,0xffff0303,0x00000000,unsigned>;
        /// bitfield LVDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lvdre{}; 
        /// bitfield SVHR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> svhr{}; 
        /// bitfield LVDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdie{}; 
        /// bitfield SVHI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> svhi{}; 
    }
    namespace LvdLvdStr{    ///< register LVD_STR 
        using Addr = Register::Address<0x40035004,0xffffff7f,0x00000000,unsigned char>;
        /// bitfield LVDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdir{}; 
    }
    namespace LvdLvdClr{    ///< register LVD_CLR 
        using Addr = Register::Address<0x40035008,0xffffff7f,0x00000000,unsigned char>;
        /// bitfield LVDCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdcl{}; 
    }
    namespace LvdLvdRlr{    ///< register LVD_RLR 
        using Addr = Register::Address<0x4003500c,0x00000000,0x00000000,unsigned>;
        /// bitfield LVDLCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lvdlck{}; 
    }
    namespace LvdLvdStr2{    ///< register LVD_STR2 
        using Addr = Register::Address<0x40035010,0xffffff3f,0x00000000,unsigned char>;
        /// bitfield LVDIRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdirdy{}; 
        /// bitfield LVDRRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lvdrrdy{}; 
    }
}
