#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral FLASH_IF 
    namespace Nonefaszr{    ///< register FASZR 
        using Addr = Register::Address<0x40000000,0xfffffffc,0,unsigned>;
        /// bitfield ASZ 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> asz{}; 
    }
    namespace Nonefrwtr{    ///< register FRWTR 
        using Addr = Register::Address<0x40000004,0xfffffffc,0,unsigned>;
        /// bitfield RWT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> rwt{}; 
    }
    namespace Nonefstr{    ///< register FSTR 
        using Addr = Register::Address<0x40000008,0xfffffff8,0,unsigned>;
        /// bitfield ERR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> err{}; 
        /// bitfield HNG 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hng{}; 
        /// bitfield RDY 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdy{}; 
    }
    namespace Nonefsyndn{    ///< register FSYNDN 
        using Addr = Register::Address<0x40000010,0xfffffff8,0,unsigned>;
        /// bitfield SD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> sd{}; 
    }
    namespace Nonefbfcr{    ///< register FBFCR 
        using Addr = Register::Address<0x40000014,0xfffffffc,0,unsigned>;
        /// bitfield BS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs{}; 
        /// bitfield BE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> be{}; 
    }
    namespace Noneficr{    ///< register FICR 
        using Addr = Register::Address<0x40000020,0xfffffff8,0,unsigned>;
        /// bitfield ERRIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errie{}; 
        /// bitfield HANGIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangie{}; 
        /// bitfield RDYIE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyie{}; 
    }
    namespace Nonefisr{    ///< register FISR 
        using Addr = Register::Address<0x40000024,0xfffffff8,0,unsigned>;
        /// bitfield ERRIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> errif{}; 
        /// bitfield HANGIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangif{}; 
        /// bitfield RDYIF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyif{}; 
    }
    namespace Noneficlr{    ///< register FICLR 
        using Addr = Register::Address<0x40000028,0xfffffff8,0,unsigned>;
        /// bitfield ERRIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> erric{}; 
        /// bitfield HANGIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> hangic{}; 
        /// bitfield RDYIC 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rdyic{}; 
    }
    namespace Nonecrtrmm{    ///< register CRTRMM 
        using Addr = Register::Address<0x40000100,0xffe0fc00,0,unsigned>;
        /// bitfield TTRMM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> ttrmm{}; 
        /// bitfield TRMM 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> trmm{}; 
    }
}
