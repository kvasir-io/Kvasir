#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral QPRC0_NF 
    namespace Qprc1NfNfctla{    ///< register NFCTLA 
        using Addr = Register::Address<0x40026110,0xffffffc8,0x00000000,unsigned char>;
        /// bitfield AINMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> ainmd{}; 
        /// bitfield AINLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> ainlv{}; 
        /// bitfield AINNWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ainnws{}; 
    }
    namespace Qprc1NfNfctlb{    ///< register NFCTLB 
        using Addr = Register::Address<0x40026114,0xffffffc8,0x00000000,unsigned char>;
        /// bitfield BINMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> binmd{}; 
        /// bitfield BINLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> binlv{}; 
        /// bitfield BINNWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> binnws{}; 
    }
    namespace Qprc1NfNfctlz{    ///< register NFCTLZ 
        using Addr = Register::Address<0x40026118,0xffffffc8,0x00000000,unsigned char>;
        /// bitfield ZINMD 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> zinmd{}; 
        /// bitfield ZINLV 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> zinlv{}; 
        /// bitfield ZINNWS 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> zinnws{}; 
    }
}
