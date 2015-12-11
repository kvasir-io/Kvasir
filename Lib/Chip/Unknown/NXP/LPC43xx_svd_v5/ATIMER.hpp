#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Alarm timer Modification date=1/7/2011 Major revision=0 Minor revision=6 
    namespace Nonedowncounter{    ///<Downcounter register
        using Addr = Register::Address<0x40040000,0xffff0000,0,unsigned>;
        ///When equal to zero an interrupt is raised. When equal to zero PRESET is loaded and counting continues.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cval{}; 
    }
    namespace Nonepreset{    ///<Preset value register
        using Addr = Register::Address<0x40040004,0xffff0000,0,unsigned>;
        ///Value loaded in DOWNCOUNTER when DOWNCOUNTER equals zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> presetval{}; 
    }
    namespace NoneclrEn{    ///<Interrupt clear enable register
        using Addr = Register::Address<0x40040fd8,0xfffffffe,0,unsigned>;
        ///Writing a 1 to this bit clears the interrupt enable bit in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEn{}; 
    }
    namespace NonesetEn{    ///<Interrupt set enable register
        using Addr = Register::Address<0x40040fdc,0xfffffffe,0,unsigned>;
        ///Writing a 1 to this bit sets the interrupt enable bit in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEn{}; 
    }
    namespace Nonestatus{    ///<Status register
        using Addr = Register::Address<0x40040fe0,0xfffffffe,0,unsigned>;
        ///A 1 in this bit shows that the STATUS interrupt has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stat{}; 
    }
    namespace Noneenable{    ///<Enable register
        using Addr = Register::Address<0x40040fe4,0xfffffffe,0,unsigned>;
        ///A 1 in this bit shows that the STATUS interrupt has been enabled and that the STATUS interrupt request signal is asserted when STAT = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
    }
    namespace NoneclrStat{    ///<Clear register
        using Addr = Register::Address<0x40040fe8,0xfffffffe,0,unsigned>;
        ///Writing a 1 to this bit clears the STATUS interrupt bit in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cstat{}; 
    }
    namespace NonesetStat{    ///<Set register
        using Addr = Register::Address<0x40040fec,0xfffffffe,0,unsigned>;
        ///Writing a 1 to this bit sets the STATUS interrupt bit in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstat{}; 
    }
}
