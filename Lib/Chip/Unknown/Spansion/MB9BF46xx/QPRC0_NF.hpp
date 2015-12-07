#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral QPRC0_NF 
    namespace Nonenfctla{    ///< register NFCTLA 
        using Addr = Register::Address<0x40026100,0xffffffc8,0,unsigned char>;
        /// bitfield AINMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ainmd{}; 
        namespace AinmdValC{
        }
        /// bitfield AINLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ainlv{}; 
        namespace AinlvValC{
        }
        /// bitfield AINNWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ainnws{}; 
        namespace AinnwsValC{
        }
    }
    namespace Nonenfctlb{    ///< register NFCTLB 
        using Addr = Register::Address<0x40026104,0xffffffc8,0,unsigned char>;
        /// bitfield BINMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> binmd{}; 
        namespace BinmdValC{
        }
        /// bitfield BINLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> binlv{}; 
        namespace BinlvValC{
        }
        /// bitfield BINNWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> binnws{}; 
        namespace BinnwsValC{
        }
    }
    namespace Nonenfctlz{    ///< register NFCTLZ 
        using Addr = Register::Address<0x40026108,0xffffffc8,0,unsigned char>;
        /// bitfield ZINMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> zinmd{}; 
        namespace ZinmdValC{
        }
        /// bitfield ZINLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> zinlv{}; 
        namespace ZinlvValC{
        }
        /// bitfield ZINNWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> zinnws{}; 
        namespace ZinnwsValC{
        }
    }
}
