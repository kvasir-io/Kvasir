#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Power Management Controller (PMC) Modification date=1/20/2011 Major revision=0 Minor revision=7 
    namespace Nonepd0Sleep0HwEna{    ///<Hardware sleep event enable register
        using Addr = Register::Address<0x40042000,0xfffffffe,0,unsigned>;
        ///Writing a 1 enables any sleep modes for Cortex-M3.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> enaEvent0{}; 
    }
    namespace Nonepd0Sleep0Mode{    ///<Sleep power mode register
        using Addr = Register::Address<0x4004201c,0x00000000,0,unsigned>;
        ///Selects between Deep-sleep, Power-down, and Deep power-down modes. Only one of the following three values can be programmed in this register: 0x0030 00AA = Deep-sleep mode 0x0030 FCBA = Power-down mode 0x003F FF7F = Deep power-down mode
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0),Register::ReadWriteAccess,unsigned> pwrState{}; 
    }
}
