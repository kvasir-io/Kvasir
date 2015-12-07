#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-analog converter
    namespace Nonecr{    ///<control register
        using Addr = Register::Address<0x40009800,0xffffc000,0,unsigned>;
        ///DAC channel1 DMA Underrun Interrupt
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudrie1{}; 
        namespace Dmaudrie1ValC{
        }
        ///DAC channel1 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        namespace Dmaen1ValC{
        }
        ///DAC channel1 mask/amplitude
              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> mamp13{}; 
        namespace Mamp13ValC{
        }
        ///MAMP12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> mamp12{}; 
        namespace Mamp12ValC{
        }
        ///MAMP11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> mamp11{}; 
        namespace Mamp11ValC{
        }
        ///MAMP10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> mamp10{}; 
        namespace Mamp10ValC{
        }
        ///DAC channel1 noise/triangle wave
              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> wave1{}; 
        namespace Wave1ValC{
        }
        ///WAVE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> wave2{}; 
        namespace Wave2ValC{
        }
        ///DAC channel1 trigger
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tsel1{}; 
        namespace Tsel1ValC{
        }
        ///DAC channel1 trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ten1{}; 
        namespace Ten1ValC{
        }
        ///DAC channel1 output buffer
              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> boff1{}; 
        namespace Boff1ValC{
        }
        ///DAC channel1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
        namespace En1ValC{
        }
    }
    namespace Noneswtrigr{    ///<software trigger register
        using Addr = Register::Address<0x40009804,0xfffffffe,0,unsigned>;
        ///DAC channel1 software
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        namespace Swtrig1ValC{
        }
    }
    namespace Nonedhr12r1{    ///<channel1 12-bit right-aligned data holding
          register
        using Addr = Register::Address<0x40009808,0xfffff000,0,unsigned>;
        ///DAC channel1 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
    }
    namespace Nonedhr12l1{    ///<DAC channel1 12-bit left aligned data
          holding register
        using Addr = Register::Address<0x4000980c,0xffff000f,0,unsigned>;
        ///DAC channel1 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
    }
    namespace Nonedhr8r1{    ///<DAC channel1 8-bit right aligned data
          holding register
        using Addr = Register::Address<0x40009810,0xffffff00,0,unsigned>;
        ///DAC channel1 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
    }
    namespace Nonedor1{    ///<DAC channel1 data output
          register
        using Addr = Register::Address<0x4000982c,0xfffff000,0,unsigned>;
        ///DAC channel1 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
        namespace Dacc1dorValC{
        }
    }
    namespace Nonesr{    ///<DAC status register
        using Addr = Register::Address<0x40009834,0xffffdfff,0,unsigned>;
        ///DAC channel1 DMA underrun
              flag
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> dmaudr1{}; 
        namespace Dmaudr1ValC{
        }
    }
}
