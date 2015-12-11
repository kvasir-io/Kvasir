#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-analog converter
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40007400,0xffffc000,0,unsigned>;
        ///DAC channel1 DMA Underrun Interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudrie1{}; 
        ///DAC channel1 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DAC channel1 mask/amplitude
              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mamp1{}; 
        ///DAC channel1 noise/triangle wave
              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> wave1{}; 
        ///DAC channel1 trigger
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tsel1{}; 
        ///DAC channel1 trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ten1{}; 
        ///DAC channel1 output buffer
              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> boff1{}; 
        ///DAC channel1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
    }
    namespace Noneswtrigr{    ///<software trigger register
        using Addr = Register::Address<0x40007404,0xfffffffe,0,unsigned>;
        ///DAC channel1 software
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
    }
    namespace Nonedhr12r1{    ///<channel1 12-bit right-aligned data holding
          register
        using Addr = Register::Address<0x40007408,0xfffff000,0,unsigned>;
        ///DAC channel1 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Nonedhr12l1{    ///<channel1 12-bit left-aligned data holding
          register
        using Addr = Register::Address<0x4000740c,0xffff000f,0,unsigned>;
        ///DAC channel1 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Nonedhr8r1{    ///<channel1 8-bit right-aligned data holding
          register
        using Addr = Register::Address<0x40007410,0xffffff00,0,unsigned>;
        ///DAC channel1 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
    }
    namespace Nonedor1{    ///<channel1 data output register
        using Addr = Register::Address<0x4000742c,0xfffff000,0,unsigned>;
        ///DAC channel1 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40007434,0xffffdfff,0,unsigned>;
        ///DAC channel1 DMA underrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudr1{}; 
    }
}
