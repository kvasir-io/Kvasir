#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//General purpose I/Os
    namespace NonegpioaCrl{    ///<Port A configuration register
          (Low)
        using Addr = Register::Address<0x4000b000,0xffff0000,0,unsigned>;
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
    namespace NonegpioaCrh{    ///<Port A configuration register
          (High)
        using Addr = Register::Address<0x4000b004,0xffff0000,0,unsigned>;
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
    namespace NonegpioaIdr{    ///<Port A input data register
        using Addr = Register::Address<0x4000b008,0xffffff00,0,unsigned>;
        ///IDR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> idr7{}; 
        namespace Idr7ValC{
        }
        ///IDR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> idr6{}; 
        namespace Idr6ValC{
        }
        ///IDR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> idr5{}; 
        namespace Idr5ValC{
        }
        ///IDR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> idr4{}; 
        namespace Idr4ValC{
        }
        ///IDR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> idr3{}; 
        namespace Idr3ValC{
        }
        ///IDR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> idr2{}; 
        namespace Idr2ValC{
        }
        ///IDR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> idr1{}; 
        namespace Idr1ValC{
        }
        ///IDR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> idr0{}; 
        namespace Idr0ValC{
        }
    }
    namespace NonegpioaOdr{    ///<Port A output data register
        using Addr = Register::Address<0x4000b00c,0xffffff00,0,unsigned>;
        ///ODR7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> odr7{}; 
        namespace Odr7ValC{
        }
        ///ODR6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> odr6{}; 
        namespace Odr6ValC{
        }
        ///ODR5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> odr5{}; 
        namespace Odr5ValC{
        }
        ///ODR4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> odr4{}; 
        namespace Odr4ValC{
        }
        ///ODR3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> odr3{}; 
        namespace Odr3ValC{
        }
        ///ODR2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> odr2{}; 
        namespace Odr2ValC{
        }
        ///ODR1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> odr1{}; 
        namespace Odr1ValC{
        }
        ///ODR0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> odr0{}; 
        namespace Odr0ValC{
        }
    }
    namespace NonegpioaBsr{    ///<Port A bit set register
        using Addr = Register::Address<0x4000b010,0xffffff00,0,unsigned>;
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
    namespace NonegpioaBrr{    ///<Port A output clear register
        using Addr = Register::Address<0x4000b014,0xffffff00,0,unsigned>;
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
