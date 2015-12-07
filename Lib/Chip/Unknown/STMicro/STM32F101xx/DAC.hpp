#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital to analog converter
    namespace Nonecr{    ///<Control register (DAC_CR)
        using Addr = Register::Address<0x40007400,0xe000e000,0,unsigned>;
        ///DAC channel1 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en1{}; 
        namespace En1ValC{
        }
        ///DAC channel1 output buffer
              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> boff1{}; 
        namespace Boff1ValC{
        }
        ///DAC channel1 trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ten1{}; 
        namespace Ten1ValC{
        }
        ///DAC channel1 trigger
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> tsel1{}; 
        namespace Tsel1ValC{
        }
        ///DAC channel1 noise/triangle wave
              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> wave1{}; 
        namespace Wave1ValC{
        }
        ///DAC channel1 mask/amplitude
              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> mamp1{}; 
        namespace Mamp1ValC{
        }
        ///DAC channel1 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> dmaen1{}; 
        namespace Dmaen1ValC{
        }
        ///DAC channel2 enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> en2{}; 
        namespace En2ValC{
        }
        ///DAC channel2 output buffer
              disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> boff2{}; 
        namespace Boff2ValC{
        }
        ///DAC channel2 trigger
              enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> ten2{}; 
        namespace Ten2ValC{
        }
        ///DAC channel2 trigger
              selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,19),Register::ReadWriteAccess,unsigned> tsel2{}; 
        namespace Tsel2ValC{
        }
        ///DAC channel2 noise/triangle wave
              generation enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,22),Register::ReadWriteAccess,unsigned> wave2{}; 
        namespace Wave2ValC{
        }
        ///DAC channel2 mask/amplitude
              selector
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,24),Register::ReadWriteAccess,unsigned> mamp2{}; 
        namespace Mamp2ValC{
        }
        ///DAC channel2 DMA enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> dmaen2{}; 
        namespace Dmaen2ValC{
        }
    }
    namespace Noneswtrigr{    ///<DAC software trigger register
          (DAC_SWTRIGR)
        using Addr = Register::Address<0x40007404,0xfffffffc,0,unsigned>;
        ///DAC channel1 software
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrig1{}; 
        namespace Swtrig1ValC{
        }
        ///DAC channel2 software
              trigger
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> swtrig2{}; 
        namespace Swtrig2ValC{
        }
    }
    namespace Nonedhr12r1{    ///<DAC channel1 12-bit right-aligned data
          holding register(DAC_DHR12R1)
        using Addr = Register::Address<0x40007408,0xfffff000,0,unsigned>;
        ///DAC channel1 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
    }
    namespace Nonedhr12l1{    ///<DAC channel1 12-bit left aligned data
          holding register (DAC_DHR12L1)
        using Addr = Register::Address<0x4000740c,0xffff000f,0,unsigned>;
        ///DAC channel1 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
    }
    namespace Nonedhr8r1{    ///<DAC channel1 8-bit right aligned data
          holding register (DAC_DHR8R1)
        using Addr = Register::Address<0x40007410,0xffffff00,0,unsigned>;
        ///DAC channel1 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
    }
    namespace Nonedhr12r2{    ///<DAC channel2 12-bit right aligned data
          holding register (DAC_DHR12R2)
        using Addr = Register::Address<0x40007414,0xfffff000,0,unsigned>;
        ///DAC channel2 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        namespace Dacc2dhrValC{
        }
    }
    namespace Nonedhr12l2{    ///<DAC channel2 12-bit left aligned data
          holding register (DAC_DHR12L2)
        using Addr = Register::Address<0x40007418,0xffff000f,0,unsigned>;
        ///DAC channel2 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        namespace Dacc2dhrValC{
        }
    }
    namespace Nonedhr8r2{    ///<DAC channel2 8-bit right-aligned data
          holding register (DAC_DHR8R2)
        using Addr = Register::Address<0x4000741c,0xffffff00,0,unsigned>;
        ///DAC channel2 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        namespace Dacc2dhrValC{
        }
    }
    namespace Nonedhr12rd{    ///<Dual DAC 12-bit right-aligned data holding
          register (DAC_DHR12RD), Bits 31:28 Reserved, Bits 15:12
          Reserved
        using Addr = Register::Address<0x40007420,0xf000f000,0,unsigned>;
        ///DAC channel1 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
        ///DAC channel2 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        namespace Dacc2dhrValC{
        }
    }
    namespace Nonedhr12ld{    ///<DUAL DAC 12-bit left aligned data holding
          register (DAC_DHR12LD), Bits 19:16 Reserved, Bits 3:0
          Reserved
        using Addr = Register::Address<0x40007424,0x000f000f,0,unsigned>;
        ///DAC channel1 12-bit left-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,4),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
        ///DAC channel2 12-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,20),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        namespace Dacc2dhrValC{
        }
    }
    namespace Nonedhr8rd{    ///<DUAL DAC 8-bit right aligned data holding
          register (DAC_DHR8RD), Bits 31:16 Reserved
        using Addr = Register::Address<0x40007428,0xffff0000,0,unsigned>;
        ///DAC channel1 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacc1dhr{}; 
        namespace Dacc1dhrValC{
        }
        ///DAC channel2 8-bit right-aligned
              data
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> dacc2dhr{}; 
        namespace Dacc2dhrValC{
        }
    }
    namespace Nonedor1{    ///<DAC channel1 data output register
          (DAC_DOR1)
        using Addr = Register::Address<0x4000742c,0xfffff000,0,unsigned>;
        ///DAC channel1 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc1dor{}; 
        namespace Dacc1dorValC{
        }
    }
    namespace Nonedor2{    ///<DAC channel2 data output register
          (DAC_DOR2)
        using Addr = Register::Address<0x40007430,0xfffff000,0,unsigned>;
        ///DAC channel2 data output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> dacc2dor{}; 
        namespace Dacc2dorValC{
        }
    }
}
