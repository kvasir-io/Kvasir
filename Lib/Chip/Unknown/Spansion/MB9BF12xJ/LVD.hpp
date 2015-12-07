#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral LVD 
    namespace NonelvdCtl{    ///< register LVD_CTL 
        using Addr = Register::Address<0x40035000,0xffff0303,0,unsigned>;
        /// bitfield LVDRE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> lvdre{}; 
        namespace LvdreValC{
        }
        /// bitfield SVHR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,10),Register::ReadWriteAccess,unsigned> svhr{}; 
        namespace SvhrValC{
        }
        /// bitfield LVDIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdie{}; 
        namespace LvdieValC{
        }
        /// bitfield SVHI 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,2),Register::ReadWriteAccess,unsigned> svhi{}; 
        namespace SvhiValC{
        }
    }
    namespace NonelvdStr{    ///< register LVD_STR 
        using Addr = Register::Address<0x40035004,0xffffff7f,0,unsigned char>;
        /// bitfield LVDIR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdir{}; 
        namespace LvdirValC{
        }
    }
    namespace NonelvdClr{    ///< register LVD_CLR 
        using Addr = Register::Address<0x40035008,0xffffff7f,0,unsigned char>;
        /// bitfield LVDCL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdcl{}; 
        namespace LvdclValC{
        }
    }
    namespace NonelvdRlr{    ///< register LVD_RLR 
        using Addr = Register::Address<0x4003500c,0x00000000,0,unsigned>;
        /// bitfield LVDLCK 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> lvdlck{}; 
        namespace LvdlckValC{
        }
    }
    namespace NonelvdStr2{    ///< register LVD_STR2 
        using Addr = Register::Address<0x40035010,0xffffff3f,0,unsigned char>;
        /// bitfield LVDIRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvdirdy{}; 
        namespace LvdirdyValC{
        }
        /// bitfield LVDRRDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> lvdrrdy{}; 
        namespace LvdrrdyValC{
        }
    }
}
