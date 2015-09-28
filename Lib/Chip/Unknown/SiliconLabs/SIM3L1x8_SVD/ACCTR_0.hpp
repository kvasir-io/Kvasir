#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneconfig{
        using Addr = Register::Address<0x40042000,0x1cffff1e>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> UPDSTSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,5)> DBGSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> FLQDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> FLSTPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> TOPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,30)> PCMD; 
    }
    namespace Nonecontrol{
        using Addr = Register::Address<0x40042010,0x00007fff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,15)> CMPLTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,17)> CMPHTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> CALMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> CALPUMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> FPUPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FPDNEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,24)> PUVAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CALSEL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> CALRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> CALBUSYF; 
    }
    namespace Nonelcconfig{
        using Addr = Register::Address<0x40042020,0x80000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0)> PEMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,2)> CMP0FTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,5)> CMP0CTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMP0THR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> CMP1FTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,15)> CMP1CTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> CMP1THR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,22)> CMPLHYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24)> CMPHHYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> CMPMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CMP0CNT1EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> FCMP0EN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> FCMP1EN; 
    }
    namespace Nonetiming{
        using Addr = Register::Address<0x40042030,0x000001e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> B0OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> B1OEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,9)> ZONED; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,12)> ZONEC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,15)> ZONEB; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,18)> ZONEA; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,21)> ZONEP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> WAKEMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> START; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> PERIOD; 
    }
    namespace Nonelcmode{
        using Addr = Register::Address<0x40042040,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ATRKEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ACDEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2)> LCD0HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,4)> LCD1HYS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,6)> C0ZONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8)> C1ZONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10)> P0ZONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,12)> P1ZONE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,14)> PMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> B0ZONECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> B0ZONEBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> B0ZONEAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> B0ZONEPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> B0POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> B1ZONECEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> B1ZONEBEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> B1ZONEAEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> B1ZONEPEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> B1POL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26)> BMD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,28)> LCMD; 
    }
    namespace Nonelcclkcontrol{
        using Addr = Register::Address<0x40042050,0xf000e000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0)> CLKCYCLES; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> CLKCAL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,16)> RELOAD; 
    }
    namespace Nonelclimits{
        using Addr = Register::Address<0x40042060,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> MIN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> MAX0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> MIN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> MAX1; 
    }
    namespace Nonelccount{
        using Addr = Register::Address<0x40042070,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LCCOUNT0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> CD0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16)> LCCOUNT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24)> CD1; 
    }
    namespace Nonedbconfig{
        using Addr = Register::Address<0x40042080,0xfff80000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0)> LDBTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> HDBTH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> INTEGDCEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> INTEG0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> INTEG1; 
    }
    namespace Nonecount0{
        using Addr = Register::Address<0x40042090,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT0; 
    }
    namespace Nonecount1{
        using Addr = Register::Address<0x400420a0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COUNT1; 
    }
    namespace Nonecomp0{
        using Addr = Register::Address<0x400420b0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COMP0; 
    }
    namespace Nonecomp1{
        using Addr = Register::Address<0x400420c0,0xff000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,0)> COMP1; 
    }
    namespace Nonestatus{
        using Addr = Register::Address<0x400420d0,0xc0000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> DIRCHGI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OVFI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> CMP0I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> CMP1I; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> TRANSI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> QERRI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> FLSTOPI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> FLSTARTI; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> DIRCHGIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> OVFIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> CMP0IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> CMP1IEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> TRANSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> QERRIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> FLSTOPIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> FLSTARTIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> IN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> IN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> IN0PREV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> IN1PREV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20)> STATE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> DIRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> FLF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> DIRHIST; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> CMP0OUT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> CMP1OUT; 
    }
    namespace Nonedebugen{
        using Addr = Register::Address<0x400420e0,0xffffbfff>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> DBGOEN; 
    }
}
