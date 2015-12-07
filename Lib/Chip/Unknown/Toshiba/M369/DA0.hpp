#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-Analog Converter (DA)
    namespace Nonecnt{    ///<DAC Control Register1
        using Addr = Register::Address<0x40054000,0xfffffffc,0,unsigned>;
        ///OP
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> op{}; 
        namespace OpValC{
        }
        ///REFON
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> refon{}; 
        namespace RefonValC{
        }
    }
    namespace Nonereg{    ///<DAC Data Register
        using Addr = Register::Address<0x40054004,0xffff003f,0,unsigned>;
        ///DAC
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> dac{}; 
        namespace DacValC{
        }
    }
    namespace Nonedctl{    ///<DAC Output Register
        using Addr = Register::Address<0x40054008,0xffe0f07c,0,unsigned>;
        ///WAVE
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wave{}; 
        namespace WaveValC{
        }
        ///DMAEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmaen{}; 
        namespace DmaenValC{
        }
        ///TRGEN
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> trgen{}; 
        namespace TrgenValC{
        }
        ///TRGSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> trgsel{}; 
        namespace TrgselValC{
        }
        ///AMPSEL
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ampsel{}; 
        namespace AmpselValC{
        }
        ///OFFSET
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> offset{}; 
        namespace OffsetValC{
        }
    }
    namespace Nonetctl{    ///<DAC Trigger Register
        using Addr = Register::Address<0x4005400c,0xffff7ffe,0,unsigned>;
        ///SWTRG
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrg{}; 
        namespace SwtrgValC{
        }
        ///DACCLR
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dacclr{}; 
        namespace DacclrValC{
        }
    }
    namespace Nonevctl{    ///<DAC Control Register2
        using Addr = Register::Address<0x40054010,0xffffff00,0,unsigned>;
        ///VHOLDCTF
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> vholdctf{}; 
        namespace VholdctfValC{
        }
        ///VHOLDCTB
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vholdctb{}; 
        namespace VholdctbValC{
        }
    }
}
