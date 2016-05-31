#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//I2S Clock Generation
    namespace I2spreIccr{    ///<I2S Clock Control Register
        using Addr = Register::Address<0x4003d000,0xfffffffc,0x00000000,unsigned>;
        ///I2S clock selection bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> icsel{}; 
        ///I2S clock output enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> icen{}; 
    }
    namespace I2spreIpcr1{    ///<I2S-PLL Control Register 1
        using Addr = Register::Address<0x4003d004,0xfffffffe,0x00000000,unsigned>;
        ///I2S-PLL oscillation enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ipllen{}; 
    }
    namespace I2spreIpcr2{    ///<I2S-PLL Control Register 2
        using Addr = Register::Address<0x4003d008,0xfffffff8,0x00000000,unsigned>;
        ///I2S-PLL oscillation stabilization wait time setting bits
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> ipowt{}; 
    }
    namespace I2spreIpcr3{    ///<I2S-PLL Control Register 3
        using Addr = Register::Address<0x4003d00c,0xffffffe0,0x00000000,unsigned>;
        ///Frequency division ratio (K) setting bits of the I2S-PLL clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> ipllk{}; 
    }
    namespace I2spreIpcr4{    ///<I2S-PLL Control Register 4
        using Addr = Register::Address<0x4003d010,0xffffff80,0x00000000,unsigned>;
        ///Frequency division ratio (N) setting bits of the I2S-PLL clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> iplln{}; 
    }
    namespace I2spreIpStr{    ///<I2S-PLL Status Register
        using Addr = Register::Address<0x4003d014,0xfffffffe,0x00000000,unsigned>;
        ///I2S-PLL oscillation stabilization bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> iprdy{}; 
    }
    namespace I2spreIpintEnr{    ///<I2S-PLL Interrupt Factor Enable Register
        using Addr = Register::Address<0x4003d018,0xfffffffe,0x00000000,unsigned>;
        ///I2S-PLL oscillation stabilization wait complete interrupt enable bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ipcse{}; 
    }
    namespace I2spreIpintClr{    ///<I2S-PLL Interrupt Factor Status Register
        using Addr = Register::Address<0x4003d01c,0xfffffffe,0x00000000,unsigned>;
        ///I2S-PLL interrupt factor status bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ipcsc{}; 
    }
    namespace I2spreIpintStr{    ///<I2S-PLL Interrupt Factor Clear Register
        using Addr = Register::Address<0x4003d020,0xfffffffe,0x00000000,unsigned>;
        ///I2S-PLL oscillation stabilization interrupt factor clear bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> ipcsi{}; 
    }
    namespace I2spreIpcr5{    ///<I2S-PLL Control Register 5
        using Addr = Register::Address<0x4003d024,0xffffff80,0x00000000,unsigned>;
        ///Frequency division ratio (M) setting bits of the I2S-PLL clock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,0),Register::ReadWriteAccess,unsigned> ipllm{}; 
    }
}
