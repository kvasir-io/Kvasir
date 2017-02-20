#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Digital-to-analog converter
    namespace DacCr{    ///<control register
        using Addr = Register::Address<0x40007400,0xffffcfc0,0x00000000,unsigned>;
        ///DAC channel1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
        ///DAC channel1 output buffer              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> boff1{}; 
        ///DAC channel1 trigger              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ten1{}; 
        ///DAC channel1 trigger              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tsel10{}; 
        ///DAC channel1 trigger              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tsel11{}; 
        ///DAC channel1 trigger              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tsel12{}; 
        ///DAC channel1 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DAC channel1 DMA Underrun Interrupt              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudrie1{}; 
    }
    namespace DacSwtrigr{    ///<software trigger register
        using Addr = Register::Address<0x40007404,0xfffffffe,0x00000000,unsigned>;
        ///DAC channel1 software              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
    }
    namespace DacDhr12r1{    ///<channel1 12-bit right-aligned data holding          register
        using Addr = Register::Address<0x40007408,0xfffff000,0x00000000,unsigned>;
        ///DAC channel1 12-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace DacDhr12l1{    ///<channel1 12-bit left aligned data holding          register
        using Addr = Register::Address<0x4000740c,0xffff000f,0x00000000,unsigned>;
        ///DAC channel1 12-bit left-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace DacDhr8r1{    ///<channel1 8-bit right aligned data holding          register
        using Addr = Register::Address<0x40007410,0xffffff00,0x00000000,unsigned>;
        ///DAC channel1 8-bit right-aligned              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace DacDor1{    ///<channel1 data output register
        using Addr = Register::Address<0x4000742c,0xfffff000,0x00000000,unsigned>;
        ///DAC channel1 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
    }
    namespace DacSr{    ///<status register
        using Addr = Register::Address<0x40007434,0xdfffdfff,0x00000000,unsigned>;
        ///DAC channel2 DMA underrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudr2{}; 
        ///DAC channel1 DMA underrun              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudr1{}; 
    }
}
