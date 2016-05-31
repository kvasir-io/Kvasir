#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx Alarm timer Modification date=1/7/2011 Major revision=0 Minor revision=6 
    namespace AtimerDowncounter{    ///<Downcounter register
        using Addr = Register::Address<0x40040000,0x00000000,0x00000000,unsigned>;
        ///When equal to zero an interrupt is raised. When equal to zero PRESET is loaded and counting continues.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> cval{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerPreset{    ///<Preset value register
        using Addr = Register::Address<0x40040004,0x00000000,0x00000000,unsigned>;
        ///Value loaded in DOWNCOUNTER when DOWNCOUNTER equals zero
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> presetval{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerClrEn{    ///<Interrupt clear enable register
        using Addr = Register::Address<0x40040fd8,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit clears the interrupt enable bit in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> clrEn{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerSetEn{    ///<Interrupt set enable register
        using Addr = Register::Address<0x40040fdc,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit sets the interrupt enable bit in the ENABLE register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> setEn{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerStatus{    ///<Status register
        using Addr = Register::Address<0x40040fe0,0x00000000,0x00000000,unsigned>;
        ///A 1 in this bit shows that the STATUS interrupt has been raised.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> stat{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerEnable{    ///<Enable register
        using Addr = Register::Address<0x40040fe4,0x00000000,0x00000000,unsigned>;
        ///A 1 in this bit shows that the STATUS interrupt has been enabled and that the STATUS interrupt request signal is asserted when STAT = 1 in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerClrStat{    ///<Clear register
        using Addr = Register::Address<0x40040fe8,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit clears the STATUS interrupt bit in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cstat{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace AtimerSetStat{    ///<Set register
        using Addr = Register::Address<0x40040fec,0x00000000,0x00000000,unsigned>;
        ///Writing a 1 to this bit sets the STATUS interrupt bit in the STATUS register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> sstat{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,1),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
