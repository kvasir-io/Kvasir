#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//General purpose I/Os
    namespace GpiobGpiobCrl{    ///<Port B configuration register          (Low)
        using Addr = Register::Address<0x4000b400,0xffff0000,0x00000000,unsigned>;
        ///CNFMODE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cnfmode3{}; 
        ///CNFMODE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cnfmode2{}; 
        ///CNFMODE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cnfmode1{}; 
        ///CNFMODE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cnfmode0{}; 
    }
    namespace GpiobGpiobCrh{    ///<Port B configuration register          (High)
        using Addr = Register::Address<0x4000b404,0xffff0000,0x00000000,unsigned>;
        ///CNFMODE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cnfmode7{}; 
        ///CNFMODE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cnfmode6{}; 
        ///CNFMODE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cnfmode5{}; 
        ///CNFMODE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cnfmode4{}; 
    }
    namespace GpiobGpiobIdr{    ///<Port B input data register
        using Addr = Register::Address<0x4000b408,0xffffff00,0x00000000,unsigned>;
        ///ID7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        ///ID6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        ///ID5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        ///ID4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        ///ID3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        ///ID2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        ///ID1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        ///ID0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
    }
    namespace GpiobGpiobOdr{    ///<Port B output data register
        using Addr = Register::Address<0x4000b40c,0xffffff00,0x00000000,unsigned>;
        ///OD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> od7{}; 
        ///OD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> od6{}; 
        ///OD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> od5{}; 
        ///OD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> od4{}; 
        ///OD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> od3{}; 
        ///OD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> od2{}; 
        ///OD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> od1{}; 
        ///OD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> od0{}; 
    }
    namespace GpiobGpiobBsr{    ///<Port B bit set register
        using Addr = Register::Address<0x4000b410,0xffffff00,0x00000000,unsigned>;
        ///BS7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        ///BS6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        ///BS5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        ///BS4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        ///BS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        ///BS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        ///BS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        ///BS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
    }
    namespace GpiobGpiobBrr{    ///<Port B output clear register
        using Addr = Register::Address<0x4000b414,0xffffff00,0x00000000,unsigned>;
        ///BR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        ///BR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        ///BR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        ///BR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        ///BR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        ///BR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        ///BR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        ///BR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
    }
}
