#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonedata{
        using Addr = Register::Address<0x50003ffc,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DATA0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DATA1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> DATA2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> DATA3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> DATA4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> DATA5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> DATA6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> DATA7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DATA8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> DATA9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> DATA10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> DATA11; 
    }
    namespace Nonedir{
        using Addr = Register::Address<0x50008000,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IO0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IO1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IO2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IO3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IO4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IO5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IO6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IO7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IO8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IO9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IO10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IO11; 
    }
    namespace Noneis{
        using Addr = Register::Address<0x50008004,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ISENSE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ISENSE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ISENSE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ISENSE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ISENSE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ISENSE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ISENSE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ISENSE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ISENSE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ISENSE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ISENSE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ISENSE11; 
    }
    namespace Noneibe{
        using Addr = Register::Address<0x50008008,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IBE0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IBE1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IBE2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IBE3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IBE4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IBE5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IBE6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IBE7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IBE8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IBE9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IBE10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IBE11; 
    }
    namespace Noneiev{
        using Addr = Register::Address<0x5000800c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> IEV0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> IEV1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> IEV2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> IEV3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> IEV4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> IEV5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> IEV6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> IEV7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> IEV8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> IEV9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> IEV10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> IEV11; 
    }
    namespace Noneie{
        using Addr = Register::Address<0x50008010,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK11; 
    }
    namespace Noneris{
        using Addr = Register::Address<0x50008014,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> RAWST0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RAWST1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RAWST2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> RAWST3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> RAWST4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RAWST5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RAWST6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> RAWST7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> RAWST8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> RAWST9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> RAWST10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RAWST11; 
    }
    namespace Nonemis{
        using Addr = Register::Address<0x50008018,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MASK0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MASK1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MASK2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> MASK3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> MASK4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> MASK5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> MASK6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> MASK7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> MASK8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> MASK9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> MASK10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> MASK11; 
    }
    namespace Noneic{
        using Addr = Register::Address<0x5000801c,0xfffff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CLR0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CLR1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CLR2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CLR3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CLR4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> CLR5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CLR6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CLR7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CLR8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CLR9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CLR10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CLR11; 
    }
}
