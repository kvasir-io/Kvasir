#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneisr{
        using Addr = Register::Address<0x50040000,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> JQOVF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AWD3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AWD2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AWD1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> JEOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JEOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOSMP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRDY; 
    }
    namespace Noneier{
        using Addr = Register::Address<0x50040004,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> JQOVFIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> AWD3IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> AWD2IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> AWD1IE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> JEOSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JEOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OVRIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EOSIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EOCIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EOSMPIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADRDYIE; 
    }
    namespace Nonecr{
        using Addr = Register::Address<0x50040008,0x0fffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ADCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ADCALDIF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> DEEPPWD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ADVREGEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> JADSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ADSTP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> JADSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADSTART; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADDIS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADEN; 
    }
    namespace Nonecfgr{
        using Addr = Register::Address<0x5004000c,0x80000004>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> AWDCH1CH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> JAUTO; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> JAWD1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> AWD1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> AWD1SGL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> JQM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> JDISCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,17)> DISCNUM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> DISCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> AUTOFF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> AUTDLY; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> CONT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> EXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,6)> EXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ALIGN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> RES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> DMACFG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DMAEN; 
    }
    namespace Nonecfgr2{
        using Addr = Register::Address<0x50040010,0xfffff800>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ROVSM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> TOVS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,5)> OVSS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> OVSR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> JOVSE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ROVSE; 
    }
    namespace Nonesmpr1{
        using Addr = Register::Address<0x50040014,0xc0000007>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,27)> SMP9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SMP8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> SMP7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SMP6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> SMP5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SMP4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> SMP3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> SMP2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> SMP1; 
    }
    namespace Nonesmpr2{
        using Addr = Register::Address<0x50040018,0xf8000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> SMP18; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> SMP17; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> SMP16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> SMP15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> SMP14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> SMP13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,6)> SMP12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,3)> SMP11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> SMP10; 
    }
    namespace Nonetr1{
        using Addr = Register::Address<0x50040020,0xf000f000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> HT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> LT1; 
    }
    namespace Nonetr2{
        using Addr = Register::Address<0x50040024,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LT2; 
    }
    namespace Nonetr3{
        using Addr = Register::Address<0x50040028,0xff00ff00>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> HT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LT3; 
    }
    namespace Nonesqr1{
        using Addr = Register::Address<0x50040030,0xe0820830>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> SQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> SQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12)> SQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> SQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0)> L3; 
    }
    namespace Nonesqr2{
        using Addr = Register::Address<0x50040034,0xe0820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> SQ9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> SQ8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12)> SQ7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> SQ6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ5; 
    }
    namespace Nonesqr3{
        using Addr = Register::Address<0x50040038,0xe0820820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> SQ14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,18)> SQ13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,12)> SQ12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> SQ11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ10; 
    }
    namespace Nonesqr4{
        using Addr = Register::Address<0x5004003c,0xfffff820>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,6)> SQ16; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0)> SQ15; 
    }
    namespace Nonedr{
        using Addr = Register::Address<0x50040040,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> regularDATA; 
    }
    namespace Nonejsqr{
        using Addr = Register::Address<0x5004004c,0x82082000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> JSQ4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,20)> JSQ3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,14)> JSQ2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8)> JSQ1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> JEXTEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,2)> JEXTSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> JL; 
    }
    namespace Noneofr1{
        using Addr = Register::Address<0x50040060,0x03fff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OFFSET1_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> OFFSET1_CH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET1; 
    }
    namespace Noneofr2{
        using Addr = Register::Address<0x50040064,0x03fff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OFFSET2_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> OFFSET2_CH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET2; 
    }
    namespace Noneofr3{
        using Addr = Register::Address<0x50040068,0x03fff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OFFSET3_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> OFFSET3_CH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET3; 
    }
    namespace Noneofr4{
        using Addr = Register::Address<0x5004006c,0x03fff000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> OFFSET4_EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,26)> OFFSET4_CH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> OFFSET4; 
    }
    namespace Nonejdr1{
        using Addr = Register::Address<0x50040080,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA1; 
    }
    namespace Nonejdr2{
        using Addr = Register::Address<0x50040084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA2; 
    }
    namespace Nonejdr3{
        using Addr = Register::Address<0x50040088,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA3; 
    }
    namespace Nonejdr4{
        using Addr = Register::Address<0x5004008c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> JDATA4; 
    }
    namespace Noneawd2cr{
        using Addr = Register::Address<0x500400a0,0xfff80001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,1)> AWD2CH; 
    }
    namespace Noneawd3cr{
        using Addr = Register::Address<0x500400a4,0xfff80001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,1)> AWD3CH; 
    }
    namespace Nonedifsel{
        using Addr = Register::Address<0x500400b0,0xfff80001>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,1)> DIFSEL_1_15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> DIFSEL_16_18; 
    }
    namespace Nonecalfact{
        using Addr = Register::Address<0x500400b4,0xff80ff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,16)> CALFACT_D; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,0)> CALFACT_S; 
    }
}
