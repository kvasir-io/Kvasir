#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose I/Os
    namespace NonegpiobCrl{    ///<Port B configuration register
          (Low)
        using Addr = Register::Address<0x4000b400,0xffff0000,0,unsigned>;
        ///CNFMODE3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cnfmode3{}; 
        namespace Cnfmode3ValC{
        }
        ///CNFMODE2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cnfmode2{}; 
        namespace Cnfmode2ValC{
        }
        ///CNFMODE1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cnfmode1{}; 
        namespace Cnfmode1ValC{
        }
        ///CNFMODE0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cnfmode0{}; 
        namespace Cnfmode0ValC{
        }
    }
    namespace NonegpiobCrh{    ///<Port B configuration register
          (High)
        using Addr = Register::Address<0x4000b404,0xffff0000,0,unsigned>;
        ///CNFMODE7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::ReadWriteAccess,unsigned> cnfmode7{}; 
        namespace Cnfmode7ValC{
        }
        ///CNFMODE6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cnfmode6{}; 
        namespace Cnfmode6ValC{
        }
        ///CNFMODE5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,unsigned> cnfmode5{}; 
        namespace Cnfmode5ValC{
        }
        ///CNFMODE4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> cnfmode4{}; 
        namespace Cnfmode4ValC{
        }
    }
    namespace NonegpiobIdr{    ///<Port B input data register
        using Addr = Register::Address<0x4000b408,0xffffff00,0,unsigned>;
        ///ID7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> id7{}; 
        namespace Id7ValC{
        }
        ///ID6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> id6{}; 
        namespace Id6ValC{
        }
        ///ID5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> id5{}; 
        namespace Id5ValC{
        }
        ///ID4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> id4{}; 
        namespace Id4ValC{
        }
        ///ID3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> id3{}; 
        namespace Id3ValC{
        }
        ///ID2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> id2{}; 
        namespace Id2ValC{
        }
        ///ID1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> id1{}; 
        namespace Id1ValC{
        }
        ///ID0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> id0{}; 
        namespace Id0ValC{
        }
    }
    namespace NonegpiobOdr{    ///<Port B output data register
        using Addr = Register::Address<0x4000b40c,0xffffff00,0,unsigned>;
        ///OD7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> od7{}; 
        namespace Od7ValC{
        }
        ///OD6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> od6{}; 
        namespace Od6ValC{
        }
        ///OD5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> od5{}; 
        namespace Od5ValC{
        }
        ///OD4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> od4{}; 
        namespace Od4ValC{
        }
        ///OD3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> od3{}; 
        namespace Od3ValC{
        }
        ///OD2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> od2{}; 
        namespace Od2ValC{
        }
        ///OD1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> od1{}; 
        namespace Od1ValC{
        }
        ///OD0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> od0{}; 
        namespace Od0ValC{
        }
    }
    namespace NonegpiobBsr{    ///<Port B bit set register
        using Addr = Register::Address<0x4000b410,0xffffff00,0,unsigned>;
        ///BS7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> bs7{}; 
        namespace Bs7ValC{
        }
        ///BS6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> bs6{}; 
        namespace Bs6ValC{
        }
        ///BS5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bs5{}; 
        namespace Bs5ValC{
        }
        ///BS4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> bs4{}; 
        namespace Bs4ValC{
        }
        ///BS3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bs3{}; 
        namespace Bs3ValC{
        }
        ///BS2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> bs2{}; 
        namespace Bs2ValC{
        }
        ///BS1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> bs1{}; 
        namespace Bs1ValC{
        }
        ///BS0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bs0{}; 
        namespace Bs0ValC{
        }
    }
    namespace NonegpiobBrr{    ///<Port B output clear register
        using Addr = Register::Address<0x4000b414,0xffffff00,0,unsigned>;
        ///BR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> br7{}; 
        namespace Br7ValC{
        }
        ///BR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> br6{}; 
        namespace Br6ValC{
        }
        ///BR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> br5{}; 
        namespace Br5ValC{
        }
        ///BR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> br4{}; 
        namespace Br4ValC{
        }
        ///BR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> br3{}; 
        namespace Br3ValC{
        }
        ///BR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> br2{}; 
        namespace Br2ValC{
        }
        ///BR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> br1{}; 
        namespace Br1ValC{
        }
        ///BR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> br0{}; 
        namespace Br0ValC{
        }
    }
}
