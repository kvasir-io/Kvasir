#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral DS 
    namespace NoneregCtl{    ///< register REG_CTL 
        using Addr = Register::Address<0x40035100,0xfffffff9,0,unsigned char>;
        /// bitfield ISUBSEL 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> isubsel{}; 
        namespace IsubselValC{
        }
    }
    namespace NonerckCtl{    ///< register RCK_CTL 
        using Addr = Register::Address<0x40035104,0xfffffffe,0,unsigned char>;
        /// bitfield RTCCKE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtccke{}; 
        namespace RtcckeValC{
        }
    }
    namespace NonepmdCtl{    ///< register PMD_CTL 
        using Addr = Register::Address<0x40035800,0xfffffffe,0,unsigned char>;
        /// bitfield RTCE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rtce{}; 
        namespace RtceValC{
        }
    }
}
