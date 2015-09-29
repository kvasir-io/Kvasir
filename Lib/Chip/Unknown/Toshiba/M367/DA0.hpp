#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Digital-to-Analog Converter (DA)
    namespace Nonecnt{    ///<DAC Control Register1
        using Addr = Register::Address<0x40054000,0xfffffffc,0,unsigned>;
        ///OP
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> op{}; 
        ///REFON
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> refon{}; 
    }
    namespace Nonereg{    ///<DAC Data Register
        using Addr = Register::Address<0x40054004,0xffff003f,0,unsigned>;
        ///DAC
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,6),Register::ReadWriteAccess,unsigned> dac{}; 
    }
    namespace Nonedctl{    ///<DAC Output Register
        using Addr = Register::Address<0x40054008,0xffe0f07c,0,unsigned>;
        ///WAVE
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,unsigned> wave{}; 
        ///DMAEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> dmaen{}; 
        ///TRGEN
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> trgen{}; 
        ///TRGSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9),Register::ReadWriteAccess,unsigned> trgsel{}; 
        ///AMPSEL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,unsigned> ampsel{}; 
        ///OFFSET
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18),Register::ReadWriteAccess,unsigned> offset{}; 
    }
    namespace Nonetctl{    ///<DAC Trigger Register
        using Addr = Register::Address<0x4005400c,0xffff7ffe,0,unsigned>;
        ///SWTRG
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swtrg{}; 
        ///DACCLR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> dacclr{}; 
    }
    namespace Nonevctl{    ///<DAC Control Register2
        using Addr = Register::Address<0x40054010,0xffffff00,0,unsigned>;
        ///VHOLDCTF
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> vholdctf{}; 
        ///VHOLDCTB
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> vholdctb{}; 
    }
}
