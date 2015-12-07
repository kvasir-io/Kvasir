#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral FLASH_IF 
    namespace Nonefaszr{    ///< register FASZR 
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        /// bitfield ASZ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
        namespace AszValC{
        }
    }
    namespace Nonefrwtr{    ///< register FRWTR 
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        /// bitfield RWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
        namespace RwtValC{
        }
    }
    namespace Nonefstr{    ///< register FSTR 
        using Addr = Register::Address<0x40000008,0xfffffff8,0,unsigned>;
        /// bitfield ERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        namespace ErrValC{
        }
        /// bitfield HNG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        namespace HngValC{
        }
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
        namespace RdyValC{
        }
    }
    namespace Nonefsyndn{    ///< register FSYNDN 
        using Addr = Register::Address<0x40000010,0xfffffff8,0,unsigned>;
        /// bitfield SD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
        namespace SdValC{
        }
    }
    namespace Nonefbfcr{    ///< register FBFCR 
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        /// bitfield BS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        namespace BsValC{
        }
        /// bitfield BE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
        namespace BeValC{
        }
    }
    namespace Noneficr{    ///< register FICR 
        using Addr = Register::Address<0x40000020,0xfffffff8,0,unsigned>;
        /// bitfield ERRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        namespace ErrieValC{
        }
        /// bitfield HANGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        namespace HangieValC{
        }
        /// bitfield RDYIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
        namespace RdyieValC{
        }
    }
    namespace Nonefisr{    ///< register FISR 
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        /// bitfield ERRIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errif{}; 
        namespace ErrifValC{
        }
        /// bitfield HANGIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        namespace HangifValC{
        }
        /// bitfield RDYIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
        namespace RdyifValC{
        }
    }
    namespace Noneficlr{    ///< register FICLR 
        using Addr = Register::Address<0x40000028,0xfffffff8,0,unsigned>;
        /// bitfield ERRIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erric{}; 
        namespace ErricValC{
        }
        /// bitfield HANGIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangic{}; 
        namespace HangicValC{
        }
        /// bitfield RDYIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyic{}; 
        namespace RdyicValC{
        }
    }
    namespace Nonecrtrmm{    ///< register CRTRMM 
        using Addr = Register::Address<0x40000100,0xffe0fc00,0,unsigned>;
        /// bitfield TTRMM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ttrmm{}; 
        namespace TtrmmValC{
        }
        /// bitfield TRMM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
        namespace TrmmValC{
        }
    }
}
