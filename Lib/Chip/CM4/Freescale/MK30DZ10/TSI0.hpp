#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace TSI0_gencs{
        using Addr = Register::Address<0x40045000,0xe0000c0c>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> STPE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> STM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ESOR; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ERIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> TSIIE; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> TSIEN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> SWTS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> SCNIP; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> OVRF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> EXTERF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> OUTRGF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> EOSF; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> PS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> NSCN; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> LPSCNITV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> LPCLKS; 
    }
    namespace TSI0_scanc{
        using Addr = Register::Address<0x40045004,0x000000c0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AMPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> AMCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> AMCLKDIV; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,16)> DELVOL; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,19)> EXTCHRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,24)> CAPTRM; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,27)> REFCHRG; 
    }
    namespace TSI0_pen{
        using Addr = Register::Address<0x40045008,0xfff00000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PEN0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PEN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PEN2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> PEN3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> PEN4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> PEN5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> PEN6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> PEN7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> PEN8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> PEN9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> PEN10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> PEN11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> PEN12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> PEN13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> PEN14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> PEN15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> LPSP; 
    }
    namespace TSI0_status{
        using Addr = Register::Address<0x4004500c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ORNGF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ORNGF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ORNGF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ORNGF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> ORNGF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> ORNGF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> ORNGF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> ORNGF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> ORNGF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> ORNGF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> ORNGF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> ORNGF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> ORNGF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> ORNGF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> ORNGF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> ORNGF15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16)> ERROF0; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17)> ERROF1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18)> ERROF2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19)> ERROF3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20)> ERROF4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21)> ERROF5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22)> ERROF6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23)> ERROF7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24)> ERROF8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25)> ERROF9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26)> ERROF10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27)> ERROF11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28)> ERROF12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29)> ERROF13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30)> ERROF14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31)> ERROF15; 
    }
    namespace TSI0_cntr1{
        using Addr = Register::Address<0x40045100,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr3{
        using Addr = Register::Address<0x40045104,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr5{
        using Addr = Register::Address<0x40045108,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr7{
        using Addr = Register::Address<0x4004510c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr9{
        using Addr = Register::Address<0x40045110,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr11{
        using Addr = Register::Address<0x40045114,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr13{
        using Addr = Register::Address<0x40045118,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_cntr15{
        using Addr = Register::Address<0x4004511c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> CTN1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> CTN; 
    }
    namespace TSI0_threshld0{
        using Addr = Register::Address<0x40045120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld1{
        using Addr = Register::Address<0x40045124,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld2{
        using Addr = Register::Address<0x40045128,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld3{
        using Addr = Register::Address<0x4004512c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld4{
        using Addr = Register::Address<0x40045130,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld5{
        using Addr = Register::Address<0x40045134,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld6{
        using Addr = Register::Address<0x40045138,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld7{
        using Addr = Register::Address<0x4004513c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld8{
        using Addr = Register::Address<0x40045140,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld9{
        using Addr = Register::Address<0x40045144,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld10{
        using Addr = Register::Address<0x40045148,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld11{
        using Addr = Register::Address<0x4004514c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld12{
        using Addr = Register::Address<0x40045150,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld13{
        using Addr = Register::Address<0x40045154,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld14{
        using Addr = Register::Address<0x40045158,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
    namespace TSI0_threshld15{
        using Addr = Register::Address<0x4004515c,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
}
