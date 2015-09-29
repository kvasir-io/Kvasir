#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
// peripheral QPRC0_NF 
    namespace Nonenfctla{    ///< register NFCTLA 
        using Addr = Register::Address<0x40026100,0xffffffc8,0,unsigned char>;
        /// bitfield AINMD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ainmd{}; 
        /// bitfield AINLV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ainlv{}; 
        /// bitfield AINNWS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ainnws{}; 
    }
    namespace Nonenfctlb{    ///< register NFCTLB 
        using Addr = Register::Address<0x40026104,0xffffffc8,0,unsigned char>;
        /// bitfield BINMD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> binmd{}; 
        /// bitfield BINLV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> binlv{}; 
        /// bitfield BINNWS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> binnws{}; 
    }
    namespace Nonenfctlz{    ///< register NFCTLZ 
        using Addr = Register::Address<0x40026108,0xffffffc8,0,unsigned char>;
        /// bitfield ZINMD 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> zinmd{}; 
        /// bitfield ZINLV 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> zinlv{}; 
        /// bitfield ZINNWS 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> zinnws{}; 
    }
}
