#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Slow Clock Controller
    namespace SckcCr{    ///<Slow Clock Configuration Register
        using Addr = Register::Address<0xfffffe50,0xfffffff0,0,unsigned>;
        ///Internal 32 kHz RC Oscillator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> rcen{}; 
        ///32768 Hz Oscillator
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> osc32en{}; 
        ///32768Hz Oscillator Bypass
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> osc32byp{}; 
        ///Slow Clock Selector
        enum class OscselVal {
            rc=0x00000000,     ///<Slow clock is internal 32 kHz RC oscillator.
            xtal=0x00000001,     ///<Slow clock is 32768 Hz oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,OscselVal> oscsel{}; 
        namespace OscselValC{
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::rc> rc{};
            constexpr Register::FieldValue<decltype(oscsel)::Type,OscselVal::xtal> xtal{};
        }
    }
}
