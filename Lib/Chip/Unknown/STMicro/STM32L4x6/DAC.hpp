#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-analog converter
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40007400,0x80028002,0,unsigned>;
        ///DAC channel1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
        ///DAC channel1 trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ten1{}; 
        ///DAC channel1 trigger
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tsel1{}; 
        ///DAC channel1 noise/triangle wave
              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> wave1{}; 
        ///DAC channel1 mask/amplitude
              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mamp1{}; 
        ///DAC channel1 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        ///DAC channel1 DMA Underrun Interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudrie1{}; 
        ///DAC Channel 1 calibration
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cen1{}; 
        ///DAC channel2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en2{}; 
        ///DAC channel2 trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ten2{}; 
        ///DAC channel2 trigger
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> tsel2{}; 
        ///DAC channel2 noise/triangle wave
              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> wave2{}; 
        ///DAC channel2 mask/amplitude
              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mamp2{}; 
        ///DAC channel2 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        ///DAC channel2 DMA underrun interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudrie2{}; 
        ///DAC Channel 2 calibration
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> cen2{}; 
    }
    namespace Noneswtrigr{    ///<software trigger register
        using Addr = Register::Address<0x40007404,0xfffffffc,0,unsigned>;
        ///DAC channel1 software
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        ///DAC channel2 software
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig2{}; 
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
    namespace Nonedhr12r2{    ///<channel2 12-bit right aligned data holding
          register
        using Addr = Register::Address<0x40007414,0xfffff000,0,unsigned>;
        ///DAC channel2 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Nonedhr12l2{    ///<channel2 12-bit left aligned data holding
          register
        using Addr = Register::Address<0x40007418,0xffff000f,0,unsigned>;
        ///DAC channel2 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Nonedhr8r2{    ///<channel2 8-bit right-aligned data holding
          register
        using Addr = Register::Address<0x4000741c,0xffffff00,0,unsigned>;
        ///DAC channel2 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Nonedhr12rd{    ///<Dual DAC 12-bit right-aligned data holding
          register
        using Addr = Register::Address<0x40007420,0xf000f000,0,unsigned>;
        ///DAC channel1 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        ///DAC channel2 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Nonedhr12ld{    ///<DUAL DAC 12-bit left aligned data holding
          register
        using Addr = Register::Address<0x40007424,0x000f000f,0,unsigned>;
        ///DAC channel1 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        ///DAC channel2 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Nonedhr8rd{    ///<DUAL DAC 8-bit right aligned data holding
          register
        using Addr = Register::Address<0x40007428,0xffff0000,0,unsigned>;
        ///DAC channel1 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        ///DAC channel2 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
    }
    namespace Nonedor1{    ///<channel1 data output register
        using Addr = Register::Address<0x4000742c,0xfffff000,0,unsigned>;
        ///DAC channel1 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
    }
    namespace Nonedor2{    ///<channel2 data output register
        using Addr = Register::Address<0x40007430,0xfffff000,0,unsigned>;
        ///DAC channel2 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dor{}; 
    }
    namespace Nonesr{    ///<status register
        using Addr = Register::Address<0x40007434,0x1fff1fff,0,unsigned>;
        ///DAC channel1 DMA underrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudr1{}; 
        ///DAC Channel 1 calibration offset
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> calFlag1{}; 
        ///DAC Channel 1 busy writing sample time
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> bwst1{}; 
        ///DAC channel2 DMA underrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> dmaudr2{}; 
        ///DAC Channel 2 calibration offset
              status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> calFlag2{}; 
        ///DAC Channel 2 busy writing sample time
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> bwst2{}; 
    }
    namespace Noneccr{    ///<calibration control register
        using Addr = Register::Address<0x40007438,0xffe0ffe0,0,unsigned>;
        ///DAC Channel 1 offset trimming
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> otrim1{}; 
        ///DAC Channel 2 offset trimming
              value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> otrim2{}; 
    }
    namespace Nonemcr{    ///<mode control register
        using Addr = Register::Address<0x4000743c,0xfff8fff8,0,unsigned>;
        ///DAC Channel 1 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> mode1{}; 
        ///DAC Channel 2 mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> mode2{}; 
    }
    namespace Noneshsr1{    ///<Sample and Hold sample time register
          1
        using Addr = Register::Address<0x40007440,0xfffffc00,0,unsigned>;
        ///DAC Channel 1 sample Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tsample1{}; 
    }
    namespace Noneshsr2{    ///<Sample and Hold sample time register
          2
        using Addr = Register::Address<0x40007444,0xfffffc00,0,unsigned>;
        ///DAC Channel 2 sample Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> tsample2{}; 
    }
    namespace Noneshhr{    ///<Sample and Hold hold time
          register
        using Addr = Register::Address<0x40007448,0xfc00fc00,0,unsigned>;
        ///DAC Channel 1 hold Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,0),Register::ReadWriteAccess,unsigned> thold1{}; 
        ///DAC Channel 2 hold time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,16),Register::ReadWriteAccess,unsigned> thold2{}; 
    }
    namespace Noneshrr{    ///<Sample and Hold refresh time
          register
        using Addr = Register::Address<0x4000744c,0xff00ff00,0,unsigned>;
        ///DAC Channel 1 refresh Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> trefresh1{}; 
        ///DAC Channel 2 refresh Time
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> trefresh2{}; 
    }
}
