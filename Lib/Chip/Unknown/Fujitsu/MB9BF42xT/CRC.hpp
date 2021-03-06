#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//CRC Registers
    namespace CrcCrccr{    ///<CRC Control Register
        using Addr = Register::Address<0x40039000,0xffffff80,0x00000000,unsigned char>;
        ///Initialization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> fxor{}; 
        ///Final XOR control bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> crclsf{}; 
        ///CRC result bit-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> crclte{}; 
        ///CRC result byte-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lsbfst{}; 
        ///Bit-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ltlend{}; 
        ///Byte-order setting bit 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> crc32{}; 
        ///CRC mode selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> init{}; 
    }
    namespace CrcCrcinit{    ///<Initial Value Register
        using Addr = Register::Address<0x40039004,0x00000000,0x00000000,unsigned>;
        ///Initial value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace CrcCrcin{    ///<Input Data Register
        using Addr = Register::Address<0x40039008,0x00000000,0x00000000,unsigned>;
        ///Input data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> d{}; 
    }
    namespace CrcCrcr{    ///<CRC Register
        using Addr = Register::Address<0x4003900c,0x00000000,0x00000000,unsigned>;
        ///CRC Data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> d{}; 
    }
}
