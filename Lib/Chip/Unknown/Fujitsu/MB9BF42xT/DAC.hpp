#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//D/A Converter
    namespace Nonedadr0{    ///<D/A Data Register
        using Addr = Register::Address<0x40028000,0xfffffc00,0,unsigned>;
        ///Bit9 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> da9{}; 
        ///Bit8 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> da8{}; 
        ///Bit7 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> da7{}; 
        ///Bit6 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> da6{}; 
        ///Bit5 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> da5{}; 
        ///Bit4 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> da4{}; 
        ///Bit3 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> da3{}; 
        ///Bit2 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> da2{}; 
        ///Bit1 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da1{}; 
        ///Bit0 of DADR0
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> da0{}; 
    }
    namespace Nonedacr0{    ///<D/A Control Register
        using Addr = Register::Address<0x40028002,0xfffffffe,0,unsigned char>;
        ///D/A converter operation enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
    namespace Nonedadr1{    ///<D/A Data Register
        using Addr = Register::Address<0x40028004,0xfffffc00,0,unsigned>;
        ///Bit9 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> da9{}; 
        ///Bit8 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> da8{}; 
        ///Bit7 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> da7{}; 
        ///Bit6 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> da6{}; 
        ///Bit5 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> da5{}; 
        ///Bit4 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> da4{}; 
        ///Bit3 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> da3{}; 
        ///Bit2 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> da2{}; 
        ///Bit1 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> da1{}; 
        ///Bit0 of DADR1
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> da0{}; 
    }
    namespace Nonedacr1{    ///<D/A Control Register
        using Addr = Register::Address<0x40028006,0xfffffffe,0,unsigned char>;
        ///D/A converter operation enable bit
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> dae{}; 
    }
}
