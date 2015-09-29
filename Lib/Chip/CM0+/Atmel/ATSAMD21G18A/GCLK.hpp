#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Generic Clock Generator
    namespace GclkClkctrl{    ///<Generic Clock Control
        using Addr = Register::Address<0x40000c02,0xffff30c0,0,unsigned>;
        ///Generic Clock Selection ID
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Generic Clock Generator
        enum class genVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
        };
        namespace genValC{
            constexpr MPL::Value<genVal,genVal::gclk0> gclk0{};
            constexpr MPL::Value<genVal,genVal::gclk1> gclk1{};
            constexpr MPL::Value<genVal,genVal::gclk2> gclk2{};
            constexpr MPL::Value<genVal,genVal::gclk3> gclk3{};
            constexpr MPL::Value<genVal,genVal::gclk4> gclk4{};
            constexpr MPL::Value<genVal,genVal::gclk5> gclk5{};
            constexpr MPL::Value<genVal,genVal::gclk6> gclk6{};
            constexpr MPL::Value<genVal,genVal::gclk7> gclk7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,genVal> gen{}; 
        ///Clock Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Write Lock
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkCtrl{    ///<Control
        using Addr = Register::Address<0x40000c00,0xfffffffe,0,unsigned char>;
        ///Software Reset
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace GclkGenctrl{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40000c04,0xffc0e0f0,0,unsigned>;
        ///Generic Clock Generator Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Source Select
        enum class srcVal {
            xosc=0x00000000,     ///<XOSC oscillator output
            gclkin=0x00000001,     ///<Generator input pad
            gclkgen1=0x00000002,     ///<Generic clock generator 1 output
            osculp32k=0x00000003,     ///<OSCULP32K oscillator output
            osc32k=0x00000004,     ///<OSC32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            osc8m=0x00000006,     ///<OSC8M oscillator output
            dfll48m=0x00000007,     ///<DFLL48M output
        };
        namespace srcValC{
            constexpr MPL::Value<srcVal,srcVal::xosc> xosc{};
            constexpr MPL::Value<srcVal,srcVal::gclkin> gclkin{};
            constexpr MPL::Value<srcVal,srcVal::gclkgen1> gclkgen1{};
            constexpr MPL::Value<srcVal,srcVal::osculp32k> osculp32k{};
            constexpr MPL::Value<srcVal,srcVal::osc32k> osc32k{};
            constexpr MPL::Value<srcVal,srcVal::xosc32k> xosc32k{};
            constexpr MPL::Value<srcVal,srcVal::osc8m> osc8m{};
            constexpr MPL::Value<srcVal,srcVal::dfll48m> dfll48m{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,srcVal> src{}; 
        ///Generic Clock Generator Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace GclkGendiv{    ///<Generic Clock Generator Division
        using Addr = Register::Address<0x40000c08,0xff0000f0,0,unsigned>;
        ///Generic Clock Generator Selection
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Division Factor
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkStatus{    ///<Status
        using Addr = Register::Address<0x40000c01,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy Status
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
}
