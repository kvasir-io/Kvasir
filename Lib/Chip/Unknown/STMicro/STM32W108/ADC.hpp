#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to Digital Converter
    namespace NoneadcIsr{    ///<ADC interrupt status register
        using Addr = Register::Address<0x4000a810,0xffffffe1,0,unsigned>;
        ///DMAOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaovf{}; 
        ///SAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sat{}; 
        ///DMABF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabf{}; 
        ///DMABHF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmabhf{}; 
    }
    namespace NoneadcIer{    ///<ADC interrupt enable register
        using Addr = Register::Address<0x4000a850,0xffffffe1,0,unsigned>;
        ///DMAOVFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaovfie{}; 
        ///SATIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> satie{}; 
        ///DMABFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabfie{}; 
        ///DMABHFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmabhfie{}; 
    }
    namespace NoneadcCr{    ///<ADC control register
        using Addr = Register::Address<0x4000d004,0xffff0002,0,unsigned>;
        ///SMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> smp{}; 
        ///HVSELP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hvselp{}; 
        ///HVSELN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hvseln{}; 
        ///CHSELP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> chselp{}; 
        ///CHSELN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> chseln{}; 
        ///CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clk{}; 
        ///ADON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
    }
    namespace NoneadcOffsetr{    ///<ADC offset register
        using Addr = Register::Address<0x4000d008,0xffff0000,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace NoneadcGainr{    ///<ADC gain register
        using Addr = Register::Address<0x4000d00c,0xffff0000,0,unsigned>;
        ///GAIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gain{}; 
    }
    namespace NoneadcDmacr{    ///<ADC DMA control register
        using Addr = Register::Address<0x4000d010,0xffffffec,0,unsigned>;
        ///Write 1 to reset the ADC
              DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rst{}; 
        ///Selects DMA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autowrap{}; 
        ///Loads the DMA buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> load{}; 
    }
    namespace NoneadcDmasr{    ///<ADC DMA status register
        using Addr = Register::Address<0x4000d014,0xfffffffc,0,unsigned>;
        ///AOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aovf{}; 
        ///ACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> act{}; 
    }
    namespace NoneadcDmamsar{    ///<ADC DMA memory start address
          register
        using Addr = Register::Address<0x4000d018,0xffffe000,0,unsigned>;
        ///MSA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msa{}; 
    }
    namespace NoneadcDmandtr{    ///<ADC DMA number of data to transfer
          register
        using Addr = Register::Address<0x4000d01c,0xffffe000,0,unsigned>;
        ///NDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> ndt{}; 
    }
    namespace NoneadcDmamnar{    ///<ADC DMA memory next address
          register
        using Addr = Register::Address<0x4000d020,0xffffc001,0,unsigned>;
        ///MNA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,1),Register::ReadWriteAccess,unsigned> mna{}; 
    }
    namespace NoneadcDmacndtr{    ///<ADC DMA count number of data transferred
          register
        using Addr = Register::Address<0x4000d024,0xffffe000,0,unsigned>;
        ///CNDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cndt{}; 
    }
}
