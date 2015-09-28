#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
    namespace Noneexc02mon{
        using Addr = Register::Address<0x40031010,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> HWINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> NMI; 
    }
    namespace Noneirq00mon{
        using Addr = Register::Address<0x40031014,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FCSINT; 
    }
    namespace Noneirq01mon{
        using Addr = Register::Address<0x40031018,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> SWWDTINT; 
    }
    namespace Noneirq02mon{
        using Addr = Register::Address<0x4003101c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> LVDINT; 
    }
    namespace Noneirq03mon{
        using Addr = Register::Address<0x40031020,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> WAVE0INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> WAVE0INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> WAVE0INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> WAVE0INT0; 
    }
    namespace Noneirq04mon{
        using Addr = Register::Address<0x40031024,0xffffff80>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> EXTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> EXTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> EXTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> EXTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> EXTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> EXTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> EXTINT0; 
    }
    namespace Noneirq05mon{
        using Addr = Register::Address<0x40031028,0xffffff7f>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> EXTINT15; 
    }
    namespace Noneirq06mon{
        using Addr = Register::Address<0x4003102c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq07mon{
        using Addr = Register::Address<0x40031030,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq08mon{
        using Addr = Register::Address<0x40031034,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq09mon{
        using Addr = Register::Address<0x40031038,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq10mon{
        using Addr = Register::Address<0x4003103c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq11mon{
        using Addr = Register::Address<0x40031040,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq12mon{
        using Addr = Register::Address<0x40031044,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq13mon{
        using Addr = Register::Address<0x40031048,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq14mon{
        using Addr = Register::Address<0x4003104c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq15mon{
        using Addr = Register::Address<0x40031050,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq16mon{
        using Addr = Register::Address<0x40031054,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq17mon{
        using Addr = Register::Address<0x40031058,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq18mon{
        using Addr = Register::Address<0x4003105c,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq19mon{
        using Addr = Register::Address<0x40031060,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq20mon{
        using Addr = Register::Address<0x40031064,0xfffffffe>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT; 
    }
    namespace Noneirq21mon{
        using Addr = Register::Address<0x40031068,0xfffffffc>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> MFSINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MFSINT0; 
    }
    namespace Noneirq22mon{
        using Addr = Register::Address<0x4003106c,0xfffffff8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> PPGINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> PPGINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> PPGINT0; 
    }
    namespace Noneirq23mon{
        using Addr = Register::Address<0x40031070,0xffffffd8>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RTCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> MPLLINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> SOSCINT; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> MOSCINT; 
    }
    namespace Noneirq24mon{
        using Addr = Register::Address<0x40031074,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ADCINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ADCINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ADCINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ADCINT0; 
    }
    namespace Noneirq25mon{
        using Addr = Register::Address<0x40031078,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> FRT0INT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> FRT0INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> FRT0INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> FRT0INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> FRT0INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> FRT0INT0; 
    }
    namespace Noneirq26mon{
        using Addr = Register::Address<0x4003107c,0xfffffff0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> ICU0INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> ICU0INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> ICU0INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> ICU0INT0; 
    }
    namespace Noneirq27mon{
        using Addr = Register::Address<0x40031080,0xffffffc0>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> OCU0INT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> OCU0INT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> OCU0INT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> OCU0INT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> OCU0INT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> OCU0INT0; 
    }
    namespace Noneirq28mon{
        using Addr = Register::Address<0x40031084,0xffff0000>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15)> BTINT15; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14)> BTINT14; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13)> BTINT13; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12)> BTINT12; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11)> BTINT11; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10)> BTINT10; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9)> BTINT9; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8)> BTINT8; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7)> BTINT7; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> BTINT6; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> BTINT5; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> BTINT4; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3)> BTINT3; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2)> BTINT2; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1)> BTINT1; 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0)> BTINT0; 
    }
    namespace Noneirq29mon{
        using Addr = Register::Address<0x40031088,0xffffffef>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4)> LCDCINT; 
    }
    namespace Noneirq30mon{
        using Addr = Register::Address<0x4003108c,0xffffffdf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5)> RCEC0INT; 
    }
    namespace Noneirq31mon{
        using Addr = Register::Address<0x40031090,0xffffffbf>;
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6)> RCEC1INT; 
    }
}
