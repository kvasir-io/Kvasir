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
        using Addr = Register::Address<0x40045004,0xf0f000e0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0)> AMPSC; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3)> AMCLKS; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8)> SMOD; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,16)> EXTCHRG; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,24)> REFCHRG; 
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
    namespace TSI0_wucntr{
        using Addr = Register::Address<0x4004500c,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> WUCNT; 
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
    namespace TSI0_threshold{
        using Addr = Register::Address<0x40045120,0x00000000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0)> HTHH; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,16)> LTHH; 
    }
}
