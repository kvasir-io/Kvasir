#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Extosc0Control{    ///<Oscillator Control
        using Addr = Register::Address<0x4003c000,0xffffff80,0x00000000,unsigned>;
        ///Frequency Control. 
        enum class FreqcnVal {
            range0=0x00000000,     ///<Set the external oscillator to range 0.
            range1=0x00000001,     ///<Set the external oscillator to range 1.
            range2=0x00000002,     ///<Set the external oscillator to range 2.
            range3=0x00000003,     ///<Set the external oscillator to range 3.
            range4=0x00000004,     ///<Set the external oscillator to range 4.
            range5=0x00000005,     ///<Set the external oscillator to range 5.
            range6=0x00000006,     ///<Set the external oscillator to range 6.
            range7=0x00000007,     ///<Set the external oscillator to range 7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,FreqcnVal> freqcn{}; 
        namespace FreqcnValC{
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range0> range0{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range1> range1{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range2> range2{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range3> range3{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range4> range4{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range5> range5{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range6> range6{};
            constexpr Register::FieldValue<decltype(freqcn)::Type,FreqcnVal::range7> range7{};
        }
        ///Oscillator Valid Flag. 
        enum class OscvldfVal {
            notSet=0x00000000,     ///<The external oscillator is unused or not yet stable.
            set=0x00000001,     ///<The external oscillator is running and stable.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,OscvldfVal> oscvldf{}; 
        namespace OscvldfValC{
            constexpr Register::FieldValue<decltype(oscvldf)::Type,OscvldfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(oscvldf)::Type,OscvldfVal::set> set{};
        }
        ///Oscillator Mode. 
        enum class OscmdVal {
            off=0x00000000,     ///<External oscillator off.
            cmos=0x00000002,     ///<External CMOS clock mode.
            cmosdiv2=0x00000003,     ///<External CMOS with divide by 2 stage.
            rc=0x00000004,     ///<RC oscillator mode with divide by 2 stage.
            c=0x00000005,     ///<C oscillator mode with divide by 2 stage.
            xtal=0x00000006,     ///<Crystal oscillator mode.
            xtaldiv2=0x00000007,     ///<Crystal oscillator mode with divide by 2 stage.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,OscmdVal> oscmd{}; 
        namespace OscmdValC{
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::off> off{};
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::cmos> cmos{};
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::cmosdiv2> cmosdiv2{};
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::rc> rc{};
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::c> c{};
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::xtal> xtal{};
            constexpr Register::FieldValue<decltype(oscmd)::Type,OscmdVal::xtaldiv2> xtaldiv2{};
        }
    }
}
