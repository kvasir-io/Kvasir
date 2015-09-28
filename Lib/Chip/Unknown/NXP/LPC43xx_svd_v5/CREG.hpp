#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Nonecreg0{
        using Addr = Register::Address<0x40043004,0xfffc3010>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EN1KHZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EN32KHZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> RESET32KHZ; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> 32KHZPD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> USB0PHY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> ALARMCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> BODLVL1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> BODLVL2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> WAKEUP0CTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> WAKEUP1CTRL; 
    }
    namespace Nonem4memmap{
        using Addr = Register::Address<0x40043100,0x00000fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> M4MAP; 
    }
    namespace Nonecreg5{
        using Addr = Register::Address<0x40043118,0xffffffbf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> M4TAPSEL; 
    }
    namespace Nonedmamux{
        using Addr = Register::Address<0x4004311c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> DMAMUXCH0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> DMAMUXCH1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> DMAMUXCH2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> DMAMUXCH3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> DMAMUXCH4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> DMAMUXCH5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> DMAMUXCH6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> DMAMUXCH7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16)> DMAMUXCH8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,18)> DMAMUXCH9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> DMAMUXCH10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> DMAMUXCH11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> DMAMUXCH12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> DMAMUXCH13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,28)> DMAMUXCH14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> DMAMUXCH15; 
    }
    namespace Noneetbcfg{
        using Addr = Register::Address<0x40043128,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ETB; 
    }
    namespace Nonecreg6{
        using Addr = Register::Address<0x4004312c,0xfffe0fe8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> ETHMODE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TIMCTRL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> I2S0_TX_SCK_IN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> I2S0_RX_SCK_IN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> I2S1_TX_SCK_IN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> I2S1_RX_SCK_IN_SEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> EMC_CLK_SEL; 
    }
    namespace Nonem4txevent{
        using Addr = Register::Address<0x40043130,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXEVCLR; 
    }
    namespace Nonechipid{
        using Addr = Register::Address<0x40043200,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,0)> ID; 
    }
    namespace Nonem0txevent{
        using Addr = Register::Address<0x40043400,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> TXEVCLR; 
    }
    namespace Nonem0appmemmap{
        using Addr = Register::Address<0x40043404,0x00000fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,12)> M0APPMAP; 
    }
}
