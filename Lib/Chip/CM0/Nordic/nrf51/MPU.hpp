#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneperr0{
        using Addr = Register::Address<0x40000528,0x3ff00020>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> POWER_CLOCK; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> RADIO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> UART0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> SPI0_TWI0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> SPI1_TWI1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> GPIOTE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ADC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> TIMER0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TIMER1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> TIMER2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> RTC0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TEMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> RNG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ECB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> CCM_AAR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> WDT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> RTC1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> QDEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> LPCOMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> NVMC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PPI; 
    }
    namespace Nonerlenr0{
        using Addr = Register::Address<0x4000052c,0xffffffff>;
    }
    namespace Noneprotenset0{
        using Addr = Register::Address<0x40000600,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROTREG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PROTREG1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PROTREG2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PROTREG3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PROTREG4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PROTREG5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PROTREG6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PROTREG7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PROTREG8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PROTREG9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PROTREG10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PROTREG11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PROTREG12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PROTREG13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PROTREG14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PROTREG15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PROTREG16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PROTREG17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PROTREG18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PROTREG19; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PROTREG20; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PROTREG21; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PROTREG22; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PROTREG23; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PROTREG24; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PROTREG25; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PROTREG26; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PROTREG27; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROTREG28; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROTREG29; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROTREG30; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PROTREG31; 
    }
    namespace Noneprotenset1{
        using Addr = Register::Address<0x40000604,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PROTREG32; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PROTREG33; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PROTREG34; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PROTREG35; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PROTREG36; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PROTREG37; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PROTREG38; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PROTREG39; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PROTREG40; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PROTREG41; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PROTREG42; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PROTREG43; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PROTREG44; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PROTREG45; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PROTREG46; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PROTREG47; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> PROTREG48; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> PROTREG49; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> PROTREG50; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> PROTREG51; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> PROTREG52; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> PROTREG53; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> PROTREG54; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> PROTREG55; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> PROTREG56; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> PROTREG57; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> PROTREG58; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> PROTREG59; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> PROTREG60; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> PROTREG61; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> PROTREG62; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> PROTREG63; 
    }
    namespace Nonedisableindebug{
        using Addr = Register::Address<0x40000608,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DISABLEINDEBUG; 
    }
    namespace Noneprotblocksize{
        using Addr = Register::Address<0x4000060c,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PROTBLOCKSIZE; 
    }
}
