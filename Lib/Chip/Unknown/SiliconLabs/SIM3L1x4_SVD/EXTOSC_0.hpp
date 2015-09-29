#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Oscillator Control
        using Addr = Register::Address<0x4003c000,0xffffff80,0,unsigned>;
        ///Frequency Control. 
        enum class freqcnVal {
            range0=0x00000000,     ///<Set the external oscillator to range 0.
            range1=0x00000001,     ///<Set the external oscillator to range 1.
            range2=0x00000002,     ///<Set the external oscillator to range 2.
            range3=0x00000003,     ///<Set the external oscillator to range 3.
            range4=0x00000004,     ///<Set the external oscillator to range 4.
            range5=0x00000005,     ///<Set the external oscillator to range 5.
            range6=0x00000006,     ///<Set the external oscillator to range 6.
            range7=0x00000007,     ///<Set the external oscillator to range 7.
        };
        namespace freqcnValC{
            constexpr MPL::Value<freqcnVal,freqcnVal::range0> range0{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range1> range1{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range2> range2{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range3> range3{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range4> range4{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range5> range5{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range6> range6{};
            constexpr MPL::Value<freqcnVal,freqcnVal::range7> range7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,freqcnVal> freqcn{}; 
        ///Oscillator Valid Flag. 
        enum class oscvldfVal {
            notSet=0x00000000,     ///<The external oscillator is unused or not yet stable.
            set=0x00000001,     ///<The external oscillator is running and stable.
        };
        namespace oscvldfValC{
            constexpr MPL::Value<oscvldfVal,oscvldfVal::notSet> notSet{};
            constexpr MPL::Value<oscvldfVal,oscvldfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,oscvldfVal> oscvldf{}; 
        ///Oscillator Mode. 
        enum class oscmdVal {
            off=0x00000000,     ///<External oscillator off.
            cmos=0x00000002,     ///<External CMOS clock mode.
            cmosdiv2=0x00000003,     ///<External CMOS with divide by 2 stage.
            rc=0x00000004,     ///<RC oscillator mode with divide by 2 stage.
            c=0x00000005,     ///<C oscillator mode with divide by 2 stage.
            xtal=0x00000006,     ///<Crystal oscillator mode.
            xtaldiv2=0x00000007,     ///<Crystal oscillator mode with divide by 2 stage.
        };
        namespace oscmdValC{
            constexpr MPL::Value<oscmdVal,oscmdVal::off> off{};
            constexpr MPL::Value<oscmdVal,oscmdVal::cmos> cmos{};
            constexpr MPL::Value<oscmdVal,oscmdVal::cmosdiv2> cmosdiv2{};
            constexpr MPL::Value<oscmdVal,oscmdVal::rc> rc{};
            constexpr MPL::Value<oscmdVal,oscmdVal::c> c{};
            constexpr MPL::Value<oscmdVal,oscmdVal::xtal> xtal{};
            constexpr MPL::Value<oscmdVal,oscmdVal::xtaldiv2> xtaldiv2{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,oscmdVal> oscmd{}; 
    }
}
