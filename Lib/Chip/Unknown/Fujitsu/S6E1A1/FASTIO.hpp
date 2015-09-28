#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonefpdir0{
        using Addr = Register::Address<0xf8000000,0xffff7fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonefpdir1{
        using Addr = Register::Address<0xf8000004,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonefpdir2{
        using Addr = Register::Address<0xf8000008,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
    }
    namespace Nonefpdir3{
        using Addr = Register::Address<0xf800000c,0xffff01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P39; 
    }
    namespace Nonefpdir4{
        using Addr = Register::Address<0xf8000010,0xfffff93f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
    }
    namespace Nonefpdir5{
        using Addr = Register::Address<0xf8000014,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P50; 
    }
    namespace Nonefpdir6{
        using Addr = Register::Address<0xf8000018,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonefpdir8{
        using Addr = Register::Address<0xf8000020,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonefpdire{
        using Addr = Register::Address<0xf8000038,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
    }
    namespace Nonefpdor0{
        using Addr = Register::Address<0xf8000040,0xffff7fe0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P0F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P04; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P03; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P02; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P01; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P00; 
    }
    namespace Nonefpdor1{
        using Addr = Register::Address<0xf8000044,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonefpdor2{
        using Addr = Register::Address<0xf8000048,0xfffffff1>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P21; 
    }
    namespace Nonefpdor3{
        using Addr = Register::Address<0xf800004c,0xffff01ff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P3A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P39; 
    }
    namespace Nonefpdor4{
        using Addr = Register::Address<0xf8000050,0xfffff93f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> P4A; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> P49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
    }
    namespace Nonefpdor5{
        using Addr = Register::Address<0xf8000054,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P50; 
    }
    namespace Nonefpdor6{
        using Addr = Register::Address<0xf8000058,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P60; 
    }
    namespace Nonefpdor8{
        using Addr = Register::Address<0xf8000060,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P82; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P81; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P80; 
    }
    namespace Nonefpdore{
        using Addr = Register::Address<0xf8000078,0xfffffff2>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PE0; 
    }
    namespace Nonem_fpdir0{
        using Addr = Register::Address<0xf8000080,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonem_fpdir1{
        using Addr = Register::Address<0xf8000084,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P3A; 
    }
    namespace Nonem_fpdor0{
        using Addr = Register::Address<0xf80000c0,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P10; 
    }
    namespace Nonem_fpdor1{
        using Addr = Register::Address<0xf80000c4,0xffffff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> P47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> P46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> P3F; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> P3E; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> P3D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> P3C; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> P3B; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> P3A; 
    }
}
