#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
// peripheral CRC 
    namespace CrcCrccr{    ///< register CRCCR 
        using Addr = Register::Address<0x40039000,0xffffff80,0x00000000,unsigned char>;
        /// bitfield FXOR 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fxor{}; 
        /// bitfield CRCLSF 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> crclsf{}; 
        /// bitfield CRCLTE 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crclte{}; 
        /// bitfield LSBFST 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lsbfst{}; 
        /// bitfield LTLEND 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ltlend{}; 
        /// bitfield CRC32 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc32{}; 
        /// bitfield INIT 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace CrcCrcinit{    ///< register CRCINIT 
        using Addr = Register::Address<0x40039004,0x00000000,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace CrcCrcin{    ///< register CRCIN 
        using Addr = Register::Address<0x40039008,0x00000000,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace CrcCrcr{    ///< register CRCR 
        using Addr = Register::Address<0x4003900c,0x00000000,0x00000000,unsigned>;
        /// bitfield D 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
}
