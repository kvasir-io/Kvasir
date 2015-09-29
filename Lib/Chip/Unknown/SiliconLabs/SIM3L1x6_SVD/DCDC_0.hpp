#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4004e000,0x00a000f0,0,unsigned>;
        ///DC-DC Converter Ready Low Flag. 
        enum class rdylowfVal {
            notSet=0x00000000,     ///<The output voltage (VDC) is below the threshold set in the RDYLOWTH threshold field (RDYLOWTH).
            set=0x00000001,     ///<The output voltage (VDC) is above the threshold set in the RDYLOWTH threshold field (RDYLOWTH).
        };
        namespace rdylowfValC{
            constexpr MPL::Value<rdylowfVal,rdylowfVal::notSet> notSet{};
            constexpr MPL::Value<rdylowfVal,rdylowfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,rdylowfVal> rdylowf{}; 
        ///DC-DC Converter Ready High Flag. 
        enum class rdyhighfVal {
            notSet=0x00000000,     ///<The output voltage (VDC) has not exceeded 105% of the programmed output value.
            set=0x00000001,     ///<The output voltage (VDC) has exceeded 105% of the programmed output value.
        };
        namespace rdyhighfValC{
            constexpr MPL::Value<rdyhighfVal,rdyhighfVal::notSet> notSet{};
            constexpr MPL::Value<rdyhighfVal,rdyhighfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,rdyhighfVal> rdyhighf{}; 
        ///DC-DC Converter Dropout Flag. 
        enum class dropoutfVal {
            notSet=0x00000000,     ///<The input voltage (VBATDC) is more than 0.4 V above the output voltage (VDC). The DC-DC converter is not in dropout.
            set=0x00000001,     ///<The input voltage (VBATDC) is less than 0.4 V above the output voltage (VDC). The DC-DC converter is in dropout, and firmware should enable the bypass switch (BEN=1).
        };
        namespace dropoutfValC{
            constexpr MPL::Value<dropoutfVal,dropoutfVal::notSet> notSet{};
            constexpr MPL::Value<dropoutfVal,dropoutfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,dropoutfVal> dropoutf{}; 
        ///Bandgap Ready Flag. 
        enum class bgrdyfVal {
            notSet=0x00000000,     ///<The bandgap voltage is not above the threshold.
            set=0x00000001,     ///<The bandgap voltage is above the threshold.
        };
        namespace bgrdyfValC{
            constexpr MPL::Value<bgrdyfVal,bgrdyfVal::notSet> notSet{};
            constexpr MPL::Value<bgrdyfVal,bgrdyfVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,bgrdyfVal> bgrdyf{}; 
        ///Oscillator Disable. 
        enum class oscdisVal {
            inactive=0x00000000,     ///<Enable the DC-DC local oscillator.
            active=0x00000001,     ///<Disable the DC-DC local oscillator.
        };
        namespace oscdisValC{
            constexpr MPL::Value<oscdisVal,oscdisVal::inactive> inactive{};
            constexpr MPL::Value<oscdisVal,oscdisVal::active> active{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,oscdisVal> oscdis{}; 
        ///Clock Source Select. 
        enum class clkselVal {
            dcdcosc=0x00000000,     ///<Select the local DC-DC oscillator as the clock source.
            apb=0x00000001,     ///<Select the APB clock as the clock source.
        };
        namespace clkselValC{
            constexpr MPL::Value<clkselVal,clkselVal::dcdcosc> dcdcosc{};
            constexpr MPL::Value<clkselVal,clkselVal::apb> apb{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,clkselVal> clksel{}; 
        ///Clock Divider. 
        enum class clkdivVal {
            div1=0x00000000,     ///<Use the APB clock divided by 1 as the converter switching frequency.
            div2=0x00000001,     ///<Use the APB clock divided by 2 as the converter switching frequency.
            div4=0x00000002,     ///<Use the APB clock divided by 4 as the converter switching frequency.
            div8=0x00000003,     ///<Use the APB clock divided by 8 as the converter switching frequency.
            div16=0x00000004,     ///<Use the APB clock divided by 16 as the converter switching frequency.
        };
        namespace clkdivValC{
            constexpr MPL::Value<clkdivVal,clkdivVal::div1> div1{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div2> div2{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div4> div4{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div8> div8{};
            constexpr MPL::Value<clkdivVal,clkdivVal::div16> div16{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,clkdivVal> clkdiv{}; 
        ///ADC Synchronization Enable. 
        enum class adcsyncenVal {
            disabled=0x00000000,     ///<Do not synchronize the ADC to the DC-DC converter.
            enabled=0x00000001,     ///<Synchronize the ADC to the DC-DC converter.
        };
        namespace adcsyncenValC{
            constexpr MPL::Value<adcsyncenVal,adcsyncenVal::disabled> disabled{};
            constexpr MPL::Value<adcsyncenVal,adcsyncenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,adcsyncenVal> adcsyncen{}; 
        ///Clock Inversion Enable. 
        enum class clkinvenVal {
            disabled=0x00000000,     ///<Do not invert the APB clock input.
            enabled=0x00000001,     ///<Invert the APB clock input.
        };
        namespace clkinvenValC{
            constexpr MPL::Value<clkinvenVal,clkinvenVal::disabled> disabled{};
            constexpr MPL::Value<clkinvenVal,clkinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,clkinvenVal> clkinven{}; 
        ///ADC Clock Inversion Enable. 
        enum class adcclkinvenVal {
            disabled=0x00000000,     ///<Do not invert the ADC clock derived from the DC-DC switching frequency.
            enabled=0x00000001,     ///<Invert the ADC clock derived from the DC-DC switching frequency.
        };
        namespace adcclkinvenValC{
            constexpr MPL::Value<adcclkinvenVal,adcclkinvenVal::disabled> disabled{};
            constexpr MPL::Value<adcclkinvenVal,adcclkinvenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,adcclkinvenVal> adcclkinven{}; 
        ///Output Voltage Select. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> outvsel{}; 
        ///Module Interrupt Enable. 
        enum class mienVal {
            disabled=0x00000000,     ///<Disable DC-DC module interrupts.
            enabled=0x00000001,     ///<Enable DC-DC module interrupts.
        };
        namespace mienValC{
            constexpr MPL::Value<mienVal,mienVal::disabled> disabled{};
            constexpr MPL::Value<mienVal,mienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,mienVal> mien{}; 
        ///Minimum Pulse Width Select. 
        enum class minpwselVal {
            disabled=0x00000000,     ///<Disable pulse skipping.
            v10Ns=0x00000001,     ///<Set the minimum pulse width to 10 ns.
            v20Ns=0x00000002,     ///<Set the minimum pulse width to 20 ns.
            v40Ns=0x00000003,     ///<Set the minimum pulse width to 40 ns.
        };
        namespace minpwselValC{
            constexpr MPL::Value<minpwselVal,minpwselVal::disabled> disabled{};
            constexpr MPL::Value<minpwselVal,minpwselVal::v10Ns> v10Ns{};
            constexpr MPL::Value<minpwselVal,minpwselVal::v20Ns> v20Ns{};
            constexpr MPL::Value<minpwselVal,minpwselVal::v40Ns> v40Ns{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,minpwselVal> minpwsel{}; 
        ///Power Switch Mode. 
        enum class psmdVal {
            swsel0=0x00000000,     ///<Mode 0. Set the M1 and M2 power switches to each use one MOSFET only.
            swsel1=0x00000001,     ///<Mode 1. Set the M1 and M2 power switches to each use 2 MOSFETS in parallel.
            swsel2=0x00000002,     ///<Mode 2. Set the M1 and M2 power switches to each use 3 MOSFETS in parallel.
            swsel3=0x00000003,     ///<Mode 3. Set the M1 and M2 power switches to each use 4 MOSFETS in parallel.
        };
        namespace psmdValC{
            constexpr MPL::Value<psmdVal,psmdVal::swsel0> swsel0{};
            constexpr MPL::Value<psmdVal,psmdVal::swsel1> swsel1{};
            constexpr MPL::Value<psmdVal,psmdVal::swsel2> swsel2{};
            constexpr MPL::Value<psmdVal,psmdVal::swsel3> swsel3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,psmdVal> psmd{}; 
        ///Asynchronous Mode Enable. 
        enum class asyncenVal {
            disabled=0x00000000,     ///<Enable DC-DC synchronous mode.
            enabled=0x00000001,     ///<Enable DC-DC asynchronous mode.  This mode is more efficient for very light output loads.
        };
        namespace asyncenValC{
            constexpr MPL::Value<asyncenVal,asyncenVal::disabled> disabled{};
            constexpr MPL::Value<asyncenVal,asyncenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,asyncenVal> asyncen{}; 
        ///Automatic Bypass Enable. 
        enum class abenVal {
            disabled=0x00000000,     ///<Disable automatic bypass.
            enabled=0x00000001,     ///<Enable automatic bypass.
        };
        namespace abenValC{
            constexpr MPL::Value<abenVal,abenVal::disabled> disabled{};
            constexpr MPL::Value<abenVal,abenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,abenVal> aben{}; 
        ///Bypass Enable. 
        enum class benVal {
            disabled=0x00000000,     ///<Disable the MBYP bypass switch.
            enabled=0x00000001,     ///<Enable the MBYP bypass switch.
        };
        namespace benValC{
            constexpr MPL::Value<benVal,benVal::disabled> disabled{};
            constexpr MPL::Value<benVal,benVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,benVal> ben{}; 
        ///DC-DC Converter Enable. 
        enum class dcdcenVal {
            disabled=0x00000000,     ///<Disable the DC-DC converter.
            enabled=0x00000001,     ///<Enable the DC-DC converter.
        };
        namespace dcdcenValC{
            constexpr MPL::Value<dcdcenVal,dcdcenVal::disabled> disabled{};
            constexpr MPL::Value<dcdcenVal,dcdcenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,dcdcenVal> dcdcen{}; 
    }
    namespace Noneconfig{    ///<Module Configuration
        using Addr = Register::Address<0x4004e010,0xffccff8f,0,unsigned>;
        ///Inductor Peak Current Limit. 
        enum class ilimitVal {
            limit1=0x00000001,     ///<Limit the peak inductor current to 200 mA.
            limit2=0x00000002,     ///<Limit the peak inductor current to 300 mA.
            limit3=0x00000003,     ///<Limit the peak inductor current to 400 mA.
            limit4=0x00000004,     ///<Limit the peak inductor current to 500 mA.
            limit5=0x00000005,     ///<Limit the peak inductor current to 600 mA.
            limit6=0x00000006,     ///<Limit the peak inductor current to 700 mA.
            limit7=0x00000007,     ///<Limit the peak inductor current to 800 mA.
        };
        namespace ilimitValC{
            constexpr MPL::Value<ilimitVal,ilimitVal::limit1> limit1{};
            constexpr MPL::Value<ilimitVal,ilimitVal::limit2> limit2{};
            constexpr MPL::Value<ilimitVal,ilimitVal::limit3> limit3{};
            constexpr MPL::Value<ilimitVal,ilimitVal::limit4> limit4{};
            constexpr MPL::Value<ilimitVal,ilimitVal::limit5> limit5{};
            constexpr MPL::Value<ilimitVal,ilimitVal::limit6> limit6{};
            constexpr MPL::Value<ilimitVal,ilimitVal::limit7> limit7{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,ilimitVal> ilimit{}; 
        ///Interrupt Mode. 
        enum class intmdVal {
            outputTooLow=0x00000000,     ///<Generate an interrupt when the regulated converter output voltage is too low, according to the RDYLOWF flag.
            outputNotTooLow=0x00000001,     ///<Generate an interrupt when the regulated converter output voltage is not too low according to the RDYLOWF flag.
            outOfReg=0x00000002,     ///<Generate an interrupt when the output voltage is out of regulation. The converter output can be either too high or too low, according to the RDYLOWF and RDYHIGHF flags.
            inReg=0x00000003,     ///<Generate an interrupt when the output voltage is in regulation.
        };
        namespace intmdValC{
            constexpr MPL::Value<intmdVal,intmdVal::outputTooLow> outputTooLow{};
            constexpr MPL::Value<intmdVal,intmdVal::outputNotTooLow> outputNotTooLow{};
            constexpr MPL::Value<intmdVal,intmdVal::outOfReg> outOfReg{};
            constexpr MPL::Value<intmdVal,intmdVal::inReg> inReg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,intmdVal> intmd{}; 
        ///Converter Ready Low Threshold. 
        enum class rdylowthVal {
            v95Percent=0x00000000,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 95% of the programmed output voltage.
            v90Percent=0x00000001,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 90% of the programmed output voltage.
            v85Percent=0x00000002,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 85% of the programmed output voltage.
            v80Percent=0x00000003,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 80% of the programmed output voltage.
        };
        namespace rdylowthValC{
            constexpr MPL::Value<rdylowthVal,rdylowthVal::v95Percent> v95Percent{};
            constexpr MPL::Value<rdylowthVal,rdylowthVal::v90Percent> v90Percent{};
            constexpr MPL::Value<rdylowthVal,rdylowthVal::v85Percent> v85Percent{};
            constexpr MPL::Value<rdylowthVal,rdylowthVal::v80Percent> v80Percent{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,rdylowthVal> rdylowth{}; 
    }
}
