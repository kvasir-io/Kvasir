#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Generic Clock Generator
    namespace GclkClkctrl{    ///<Generic Clock Control
        using Addr = Register::Address<0x40000c02,0xffff30c0,0,unsigned>;
        ///Generic Clock Selection ID
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Generic Clock Generator
        enum class GenVal {
            gclk0=0x00000000,     ///<Generic clock generator 0
            gclk1=0x00000001,     ///<Generic clock generator 1
            gclk2=0x00000002,     ///<Generic clock generator 2
            gclk3=0x00000003,     ///<Generic clock generator 3
            gclk4=0x00000004,     ///<Generic clock generator 4
            gclk5=0x00000005,     ///<Generic clock generator 5
            gclk6=0x00000006,     ///<Generic clock generator 6
            gclk7=0x00000007,     ///<Generic clock generator 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,GenVal> gen{}; 
        namespace GenValC{
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk0> gclk0{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk1> gclk1{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk2> gclk2{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk3> gclk3{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk4> gclk4{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk5> gclk5{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk6> gclk6{};
            constexpr Register::FieldValue<decltype(gen)::Type,GenVal::gclk7> gclk7{};
        }
        ///Clock Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> clken{}; 
        ///Write Lock
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> wrtlock{}; 
    }
    namespace GclkCtrl{    ///<Control
        using Addr = Register::Address<0x40000c00,0xfffffffe,0,unsigned char>;
        ///Software Reset
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> swrst{}; 
    }
    namespace GclkGenctrl{    ///<Generic Clock Generator Control
        using Addr = Register::Address<0x40000c04,0xffc0e0f0,0,unsigned>;
        ///Generic Clock Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Source Select
        enum class SrcVal {
            xosc=0x00000000,     ///<XOSC oscillator output
            gclkin=0x00000001,     ///<Generator input pad
            gclkgen1=0x00000002,     ///<Generic clock generator 1 output
            osculp32k=0x00000003,     ///<OSCULP32K oscillator output
            osc32k=0x00000004,     ///<OSC32K oscillator output
            xosc32k=0x00000005,     ///<XOSC32K oscillator output
            osc8m=0x00000006,     ///<OSC8M oscillator output
            dfll48m=0x00000007,     ///<DFLL48M output
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,SrcVal> src{}; 
        namespace SrcValC{
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc> xosc{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkin> gclkin{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::gclkgen1> gclkgen1{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osculp32k> osculp32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osc32k> osc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::xosc32k> xosc32k{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::osc8m> osc8m{};
            constexpr Register::FieldValue<decltype(src)::Type,SrcVal::dfll48m> dfll48m{};
        }
        ///Generic Clock Generator Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> genen{}; 
        ///Improve Duty Cycle
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> idc{}; 
        ///Output Off Value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> oov{}; 
        ///Output Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> oe{}; 
        ///Divide Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> divsel{}; 
        ///Run in Standby
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> runstdby{}; 
    }
    namespace GclkGendiv{    ///<Generic Clock Generator Division
        using Addr = Register::Address<0x40000c08,0xff0000f0,0,unsigned>;
        ///Generic Clock Generator Selection
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,unsigned> id{}; 
        ///Division Factor
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,8),Register::ReadWriteAccess,unsigned> div{}; 
    }
    namespace GclkStatus{    ///<Status
        using Addr = Register::Address<0x40000c01,0xffffff7f,0,unsigned char>;
        ///Synchronization Busy Status
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> syncbusy{}; 
    }
}
