#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral DS 
    namespace DsRegCtl{    ///< register REG_CTL 
        using Addr = Register::Address<0x40035100,0xfffffff9,0x00000000,unsigned char>;
        /// bitfield ISUBSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
    }
    namespace DsRckCtl{    ///< register RCK_CTL 
        using Addr = Register::Address<0x40035104,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RTCCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
    }
    namespace DsPmdCtl{    ///< register PMD_CTL 
        using Addr = Register::Address<0x40035800,0xfffffffe,0x00000000,unsigned char>;
        /// bitfield RTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
    }
}
