#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//External Interrupt and NMI Control
    namespace Noneenir{    ///<Enable Interrupt Request Register
        using Addr = Register::Address<0x40030000,0xffff7fb0,0,unsigned>;
        ///Bit15 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> en15{}; 
        ///Bit6 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> en6{}; 
        ///Bit3 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> en3{}; 
        ///Bit2 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> en2{}; 
        ///Bit1 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> en1{}; 
        ///Bit0 of ENIR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> en0{}; 
    }
    namespace Noneeirr{    ///<External Interrupt Request Register
        using Addr = Register::Address<0x40030004,0xffff7fb0,0,unsigned>;
        ///Bit15 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> er15{}; 
        ///Bit6 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> er6{}; 
        ///Bit3 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> er3{}; 
        ///Bit2 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> er2{}; 
        ///Bit1 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> er1{}; 
        ///Bit0 of EIRR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> er0{}; 
    }
    namespace Noneeicl{    ///<External Interrupt Clear Register
        using Addr = Register::Address<0x40030008,0xffff7fb0,0,unsigned>;
        ///Bit15 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> ecl15{}; 
        ///Bit6 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> ecl6{}; 
        ///Bit3 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ecl3{}; 
        ///Bit2 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> ecl2{}; 
        ///Bit1 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> ecl1{}; 
        ///Bit0 of EICL
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ecl0{}; 
    }
    namespace Noneelvr{    ///<External Interrupt Level Register
        using Addr = Register::Address<0x4003000c,0x3fffcf00,0,unsigned>;
        ///Bit31 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> lb15{}; 
        ///Bit30 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,unsigned> la15{}; 
        ///Bit13 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> lb6{}; 
        ///Bit12 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> la6{}; 
        ///Bit7 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lb3{}; 
        ///Bit6 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> la3{}; 
        ///Bit5 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> lb2{}; 
        ///Bit4 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> la2{}; 
        ///Bit3 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> lb1{}; 
        ///Bit2 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> la1{}; 
        ///Bit1 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> lb0{}; 
        ///Bit0 of ELVR
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> la0{}; 
    }
    namespace Nonenmirr{    ///<Non Maskable Interrupt Request Register
        using Addr = Register::Address<0x40030014,0xfffffffe,0,unsigned char>;
        ///NMI interrupt request detection bit 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> nr{}; 
    }
    namespace Nonenmicl{    ///<Non Maskable Interrupt Clear Register
        using Addr = Register::Address<0x40030018,0xfffffffe,0,unsigned char>;
        ///NMI interrupt cause clear bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> ncl{}; 
    }
}
