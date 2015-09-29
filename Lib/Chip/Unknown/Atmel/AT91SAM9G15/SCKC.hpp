#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Slow Clock Controller
    namespace SckcCr{    ///<Slow Clock Configuration Register
        using Addr = Register::Address<0xfffffe50,0xfffffff0,0,unsigned>;
        ///Internal 32 kHz RC Oscillator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcen{}; 
        ///32,768 Hz Oscillator
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osc32en{}; 
        ///32,768Hz Oscillator Bypass
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32byp{}; 
        ///Slow Clock Selector
        enum class oscselVal {
            rc=0x00000000,     ///<Slow clock is internal 32 kHz RC oscillator.
            xtal=0x00000001,     ///<Slow clock is 32,768 Hz oscillator.
        };
        namespace oscselValC{
            constexpr MPL::Value<oscselVal,oscselVal::rc> rc{};
            constexpr MPL::Value<oscselVal,oscselVal::xtal> xtal{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,oscselVal> oscsel{}; 
    }
}
