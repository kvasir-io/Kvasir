#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//0
    namespace PcrcPrgcrcPoly{    ///<CRC Computing Generator Polynomial Register
        using Addr = Register::Address<0x40080000,0xffffffff,0x00000000,unsigned>;
    }
    namespace PcrcPrgcrcSeed{    ///<CRC Computing Initial Value Register
        using Addr = Register::Address<0x40080004,0xffffffff,0x00000000,unsigned>;
    }
    namespace PcrcPrgcrcFxor{    ///<CRC Computing Resault XOR Value Register
        using Addr = Register::Address<0x40080008,0xffffffff,0x00000000,unsigned>;
    }
    namespace PcrcPrgcrcCfg{    ///<CRC Computing Configuration Register
        using Addr = Register::Address<0x4008000c,0xe800f0fe,0x00000000,unsigned>;
        ///Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> lock{}; 
        ///DMA request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cden{}; 
        ///Interrupt request enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cien{}; 
        ///Interrupt request
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cirq{}; 
        ///Input data size
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sz{}; 
        ///Test
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> test{}; 
        ///Input data format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> fi{}; 
        ///output data format
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> fo{}; 
        ///Interrupt request clear
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cirqclr{}; 
    }
    namespace PcrcPrgcrcWr{    ///<CRC Computing Input Data Register
        using Addr = Register::Address<0x40080010,0xffffffff,0x00000000,unsigned>;
    }
    namespace PcrcPrgcrcRd{    ///<CRC Computing Output Data Register
        using Addr = Register::Address<0x40080014,0xffffffff,0x00000000,unsigned>;
    }
}
