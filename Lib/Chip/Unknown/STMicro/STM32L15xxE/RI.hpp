#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneicr{
        using Addr = Register::Address<0x40007c04,0xffc00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> IC4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> IC3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IC2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> TIM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,12)> IC4IOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8)> IC3IOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4)> IC2IOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> IC1IOS; 
    }
    namespace Noneascr1{
        using Addr = Register::Address<0x40007c08,0x00020000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> SCM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CH30GR11_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CH29GR11_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CH28GR11_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> CH27GR11_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> VCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> CH25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> CH24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> CH23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> CH22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CH21GR7_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> CH20GR7_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CH19GR7_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> CH18GR7_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> CH31GR7_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CH15GR9_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> CH14GR9_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CH13GR8_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CH12GR8_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CH11GR8_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CH10GR8_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> CH9GR3_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> CH8GR3_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> CH7GR2_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> CH6GR2_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> COMP1_SW1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> CH31GR11_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CH3GR1_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CH2GR1_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> CH1GR1_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> CH0GR1_1; 
    }
    namespace Noneascr2{
        using Addr = Register::Address<0x40007c0c,0xc000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> GR5_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> GR6_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> GR6_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> GR7_7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> GR7_6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> GR7_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> GR2_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> GR2_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> GR2_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> GR9_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> GR9_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> GR3_5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> GR3_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> GR3_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> GR4_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> GR4_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> GR4_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> GR5_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> GR5_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GR5_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> GR6_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> GR6_1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> GR10_4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> GR10_3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> GR10_2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> GR10_1; 
    }
    namespace Nonehyscr1{
        using Addr = Register::Address<0x40007c10,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PA; 
    }
    namespace Nonehyscr2{
        using Addr = Register::Address<0x40007c14,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PC; 
    }
    namespace Nonehyscr3{
        using Addr = Register::Address<0x40007c18,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> PF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PE; 
    }
    namespace Nonehyscr4{
        using Addr = Register::Address<0x40007c1c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace Noneasmr1{
        using Addr = Register::Address<0x40007c20,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PA; 
    }
    namespace Nonecmr1{
        using Addr = Register::Address<0x40007c24,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PA; 
    }
    namespace Nonecicr1{
        using Addr = Register::Address<0x40007c28,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PA; 
    }
    namespace Noneasmr2{
        using Addr = Register::Address<0x40007c2c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Nonecmr2{
        using Addr = Register::Address<0x40007c30,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Nonecicr2{
        using Addr = Register::Address<0x40007c34,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PB; 
    }
    namespace Noneasmr3{
        using Addr = Register::Address<0x40007c38,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PC; 
    }
    namespace Nonecmr3{
        using Addr = Register::Address<0x40007c3c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PC; 
    }
    namespace Nonecicr3{
        using Addr = Register::Address<0x40007c40,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PC; 
    }
    namespace Noneasmr4{
        using Addr = Register::Address<0x40007c44,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PF; 
    }
    namespace Nonecmr4{
        using Addr = Register::Address<0x40007c48,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PF; 
    }
    namespace Nonecicr4{
        using Addr = Register::Address<0x40007c4c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PF; 
    }
    namespace Noneasmr5{
        using Addr = Register::Address<0x40007c50,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace Nonecmr5{
        using Addr = Register::Address<0x40007c54,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
    namespace Nonecicr5{
        using Addr = Register::Address<0x40007c58,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> PG; 
    }
}
