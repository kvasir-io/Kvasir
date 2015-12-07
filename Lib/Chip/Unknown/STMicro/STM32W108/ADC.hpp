#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog to Digital Converter
    namespace NoneadcIsr{    ///<ADC interrupt status register
        using Addr = Register::Address<0x4000a810,0xffffffe1,0,unsigned>;
        ///DMAOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaovf{}; 
        namespace DmaovfValC{
        }
        ///SAT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> sat{}; 
        namespace SatValC{
        }
        ///DMABF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabf{}; 
        namespace DmabfValC{
        }
        ///DMABHF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmabhf{}; 
        namespace DmabhfValC{
        }
    }
    namespace NoneadcIer{    ///<ADC interrupt enable register
        using Addr = Register::Address<0x4000a850,0xffffffe1,0,unsigned>;
        ///DMAOVFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> dmaovfie{}; 
        namespace DmaovfieValC{
        }
        ///SATIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> satie{}; 
        namespace SatieValC{
        }
        ///DMABFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> dmabfie{}; 
        namespace DmabfieValC{
        }
        ///DMABHFIE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> dmabhfie{}; 
        namespace DmabhfieValC{
        }
    }
    namespace NoneadcCr{    ///<ADC control register
        using Addr = Register::Address<0x4000d004,0xffff0002,0,unsigned>;
        ///SMP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,unsigned> smp{}; 
        namespace SmpValC{
        }
        ///HVSELP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> hvselp{}; 
        namespace HvselpValC{
        }
        ///HVSELN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> hvseln{}; 
        namespace HvselnValC{
        }
        ///CHSELP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,7),Register::ReadWriteAccess,unsigned> chselp{}; 
        namespace ChselpValC{
        }
        ///CHSELN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,3),Register::ReadWriteAccess,unsigned> chseln{}; 
        namespace ChselnValC{
        }
        ///CLK
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> clk{}; 
        namespace ClkValC{
        }
        ///ADON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> adon{}; 
        namespace AdonValC{
        }
    }
    namespace NoneadcOffsetr{    ///<ADC offset register
        using Addr = Register::Address<0x4000d008,0xffff0000,0,unsigned>;
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
    }
    namespace NoneadcGainr{    ///<ADC gain register
        using Addr = Register::Address<0x4000d00c,0xffff0000,0,unsigned>;
        ///GAIN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> gain{}; 
        namespace GainValC{
        }
    }
    namespace NoneadcDmacr{    ///<ADC DMA control register
        using Addr = Register::Address<0x4000d010,0xffffffec,0,unsigned>;
        ///Write 1 to reset the ADC
              DMA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> rst{}; 
        namespace RstValC{
        }
        ///Selects DMA mode
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> autowrap{}; 
        namespace AutowrapValC{
        }
        ///Loads the DMA buffer
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> load{}; 
        namespace LoadValC{
        }
    }
    namespace NoneadcDmasr{    ///<ADC DMA status register
        using Addr = Register::Address<0x4000d014,0xfffffffc,0,unsigned>;
        ///AOVF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> aovf{}; 
        namespace AovfValC{
        }
        ///ACT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> act{}; 
        namespace ActValC{
        }
    }
    namespace NoneadcDmamsar{    ///<ADC DMA memory start address
          register
        using Addr = Register::Address<0x4000d018,0xffffe000,0,unsigned>;
        ///MSA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> msa{}; 
        namespace MsaValC{
        }
    }
    namespace NoneadcDmandtr{    ///<ADC DMA number of data to transfer
          register
        using Addr = Register::Address<0x4000d01c,0xffffe000,0,unsigned>;
        ///NDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> ndt{}; 
        namespace NdtValC{
        }
    }
    namespace NoneadcDmamnar{    ///<ADC DMA memory next address
          register
        using Addr = Register::Address<0x4000d020,0xffffc001,0,unsigned>;
        ///MNA
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,1),Register::ReadWriteAccess,unsigned> mna{}; 
        namespace MnaValC{
        }
    }
    namespace NoneadcDmacndtr{    ///<ADC DMA count number of data transferred
          register
        using Addr = Register::Address<0x4000d024,0xffffe000,0,unsigned>;
        ///CNDT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,0),Register::ReadWriteAccess,unsigned> cndt{}; 
        namespace CndtValC{
        }
    }
}
