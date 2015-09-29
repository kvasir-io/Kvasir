#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//0
    namespace NoneprgcrcPoly{    ///<CRC Computing Generator Polynomial Register
        using Addr = Register::Address<0x40080000,0xffffffff,0,unsigned>;
    }
    namespace NoneprgcrcSeed{    ///<CRC Computing Initial Value Register
        using Addr = Register::Address<0x40080004,0xffffffff,0,unsigned>;
    }
    namespace NoneprgcrcFxor{    ///<CRC Computing Resault XOR Value Register
        using Addr = Register::Address<0x40080008,0xffffffff,0,unsigned>;
    }
    namespace NoneprgcrcCfg{    ///<CRC Computing Configuration Register
        using Addr = Register::Address<0x4008000c,0xe800f0fe,0,unsigned>;
        ///Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> lock{}; 
        ///DMA request enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,unsigned> cden{}; 
        ///Interrupt request enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,unsigned> cien{}; 
        ///Interrupt request
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> cirq{}; 
        ///Input data size
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> sz{}; 
        ///Test
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> test{}; 
        ///Input data format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,unsigned> fi{}; 
        ///output data format
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> fo{}; 
        ///Interrupt request clear
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cirqclr{}; 
    }
    namespace NoneprgcrcWr{    ///<CRC Computing Input Data Register
        using Addr = Register::Address<0x40080010,0xffffffff,0,unsigned>;
    }
    namespace NoneprgcrcRd{    ///<CRC Computing Output Data Register
        using Addr = Register::Address<0x40080014,0xffffffff,0,unsigned>;
    }
}
