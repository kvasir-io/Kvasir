#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//None
    namespace Dcdc0Control{    ///<Module Control
        using Addr = Register::Address<0x4004e000,0x00a000f0,0x00000000,unsigned>;
        ///DC-DC Converter Ready Low Flag. 
        enum class RdylowfVal {
            notSet=0x00000000,     ///<The output voltage (VDC) is below the threshold set in the RDYLOWTH threshold field (RDYLOWTH).
            set=0x00000001,     ///<The output voltage (VDC) is above the threshold set in the RDYLOWTH threshold field (RDYLOWTH).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RdylowfVal> rdylowf{}; 
        namespace RdylowfValC{
            constexpr Register::FieldValue<decltype(rdylowf)::Type,RdylowfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rdylowf)::Type,RdylowfVal::set> set{};
        }
        ///DC-DC Converter Ready High Flag. 
        enum class RdyhighfVal {
            notSet=0x00000000,     ///<The output voltage (VDC) has not exceeded 105% of the programmed output value.
            set=0x00000001,     ///<The output voltage (VDC) has exceeded 105% of the programmed output value.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,RdyhighfVal> rdyhighf{}; 
        namespace RdyhighfValC{
            constexpr Register::FieldValue<decltype(rdyhighf)::Type,RdyhighfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(rdyhighf)::Type,RdyhighfVal::set> set{};
        }
        ///DC-DC Converter Dropout Flag. 
        enum class DropoutfVal {
            notSet=0x00000000,     ///<The input voltage (VBATDC) is more than 0.4 V above the output voltage (VDC). The DC-DC converter is not in dropout.
            set=0x00000001,     ///<The input voltage (VBATDC) is less than 0.4 V above the output voltage (VDC). The DC-DC converter is in dropout, and firmware should enable the bypass switch (BEN=1).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,DropoutfVal> dropoutf{}; 
        namespace DropoutfValC{
            constexpr Register::FieldValue<decltype(dropoutf)::Type,DropoutfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(dropoutf)::Type,DropoutfVal::set> set{};
        }
        ///Bandgap Ready Flag. 
        enum class BgrdyfVal {
            notSet=0x00000000,     ///< 
            set=0x00000001,     ///<The bandgap voltage is above the threshold.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,BgrdyfVal> bgrdyf{}; 
        namespace BgrdyfValC{
            constexpr Register::FieldValue<decltype(bgrdyf)::Type,BgrdyfVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(bgrdyf)::Type,BgrdyfVal::set> set{};
        }
        ///Oscillator Disable. 
        enum class OscdisVal {
            inactive=0x00000000,     ///<Enable the DC-DC local oscillator.
            active=0x00000001,     ///<Disable the DC-DC local oscillator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,OscdisVal> oscdis{}; 
        namespace OscdisValC{
            constexpr Register::FieldValue<decltype(oscdis)::Type,OscdisVal::inactive> inactive{};
            constexpr Register::FieldValue<decltype(oscdis)::Type,OscdisVal::active> active{};
        }
        ///Clock Source Select. 
        enum class ClkselVal {
            dcdcosc=0x00000000,     ///<Select the local DC-DC oscillator as the clock source.
            ahb=0x00000001,     ///<Select the AHB clock as the clock source.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,ClkselVal> clksel{}; 
        namespace ClkselValC{
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::dcdcosc> dcdcosc{};
            constexpr Register::FieldValue<decltype(clksel)::Type,ClkselVal::ahb> ahb{};
        }
        ///Clock Divider. 
        enum class ClkdivVal {
            div1=0x00000000,     ///<Use the AHB clock divided by 1 as the converter switching frequency.
            div2=0x00000001,     ///<Use the AHB clock divided by 2 as the converter switching frequency.
            div4=0x00000002,     ///<Use the AHB clock divided by 4 as the converter switching frequency.
            div8=0x00000003,     ///<Use the AHB clock divided by 8 as the converter switching frequency.
            div16=0x00000004,     ///<Use the AHB clock divided by 16 as the converter switching frequency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,10),Register::ReadWriteAccess,ClkdivVal> clkdiv{}; 
        namespace ClkdivValC{
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::div1> div1{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::div2> div2{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::div4> div4{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::div8> div8{};
            constexpr Register::FieldValue<decltype(clkdiv)::Type,ClkdivVal::div16> div16{};
        }
        ///ADC Synchronization Enable. 
        enum class AdcsyncenVal {
            disabled=0x00000000,     ///<Do not synchronize the ADC to the DC-DC converter.
            enabled=0x00000001,     ///<Synchronize the ADC to the DC-DC converter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,AdcsyncenVal> adcsyncen{}; 
        namespace AdcsyncenValC{
            constexpr Register::FieldValue<decltype(adcsyncen)::Type,AdcsyncenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcsyncen)::Type,AdcsyncenVal::enabled> enabled{};
        }
        ///Clock Inversion Enable. 
        enum class ClkinvenVal {
            disabled=0x00000000,     ///<Do not invert the AHB clock input.
            enabled=0x00000001,     ///<Invert the AHB clock input.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,ClkinvenVal> clkinven{}; 
        namespace ClkinvenValC{
            constexpr Register::FieldValue<decltype(clkinven)::Type,ClkinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(clkinven)::Type,ClkinvenVal::enabled> enabled{};
        }
        ///ADC Clock Inversion Enable. 
        enum class AdcclkinvenVal {
            disabled=0x00000000,     ///<Do not invert the ADC clock derived from the DC-DC switching frequency.
            enabled=0x00000001,     ///<Invert the ADC clock derived from the DC-DC switching frequency.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,AdcclkinvenVal> adcclkinven{}; 
        namespace AdcclkinvenValC{
            constexpr Register::FieldValue<decltype(adcclkinven)::Type,AdcclkinvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(adcclkinven)::Type,AdcclkinvenVal::enabled> enabled{};
        }
        ///Output Voltage Select. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> outvsel{}; 
        ///Module Interrupt Enable. 
        enum class MienVal {
            disabled=0x00000000,     ///<Disable DC-DC module interrupts.
            enabled=0x00000001,     ///<Enable DC-DC module interrupts.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,MienVal> mien{}; 
        namespace MienValC{
            constexpr Register::FieldValue<decltype(mien)::Type,MienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(mien)::Type,MienVal::enabled> enabled{};
        }
        ///Minimum Pulse Width Select. 
        enum class MinpwselVal {
            disabled=0x00000000,     ///<Disable pulse skipping.
            v10Ns=0x00000001,     ///<Set the minimum pulse width to 10 ns.
            v20Ns=0x00000002,     ///<Set the minimum pulse width to 20 ns.
            v40Ns=0x00000003,     ///<Set the minimum pulse width to 40 ns.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,MinpwselVal> minpwsel{}; 
        namespace MinpwselValC{
            constexpr Register::FieldValue<decltype(minpwsel)::Type,MinpwselVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(minpwsel)::Type,MinpwselVal::v10Ns> v10Ns{};
            constexpr Register::FieldValue<decltype(minpwsel)::Type,MinpwselVal::v20Ns> v20Ns{};
            constexpr Register::FieldValue<decltype(minpwsel)::Type,MinpwselVal::v40Ns> v40Ns{};
        }
        ///Power Switch Mode. 
        enum class PsmdVal {
            swsel0=0x00000000,     ///<Mode 0. Set the M1 and M2 power switches to each use one MOSFET only.
            swsel1=0x00000001,     ///<Mode 1. Set the M1 and M2 power switches to each use 2 MOSFETS in parallel.
            swsel2=0x00000002,     ///<Mode 2. Set the M1 and M2 power switches to each use 3 MOSFETS in parallel.
            swsel3=0x00000003,     ///<Mode 3. Set the M1 and M2 power switches to each use 4 MOSFETS in parallel.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,PsmdVal> psmd{}; 
        namespace PsmdValC{
            constexpr Register::FieldValue<decltype(psmd)::Type,PsmdVal::swsel0> swsel0{};
            constexpr Register::FieldValue<decltype(psmd)::Type,PsmdVal::swsel1> swsel1{};
            constexpr Register::FieldValue<decltype(psmd)::Type,PsmdVal::swsel2> swsel2{};
            constexpr Register::FieldValue<decltype(psmd)::Type,PsmdVal::swsel3> swsel3{};
        }
        ///Asynchronous Mode Enable. 
        enum class AsyncenVal {
            disabled=0x00000000,     ///<Enable DC-DC synchronous mode.
            enabled=0x00000001,     ///<Enable DC-DC asynchronous mode.  This mode is more efficient for very light output loads.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,AsyncenVal> asyncen{}; 
        namespace AsyncenValC{
            constexpr Register::FieldValue<decltype(asyncen)::Type,AsyncenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(asyncen)::Type,AsyncenVal::enabled> enabled{};
        }
        ///Automatic Bypass Enable. 
        enum class AbenVal {
            disabled=0x00000000,     ///<Disable automatic bypass.
            enabled=0x00000001,     ///<Enable automatic bypass.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,AbenVal> aben{}; 
        namespace AbenValC{
            constexpr Register::FieldValue<decltype(aben)::Type,AbenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(aben)::Type,AbenVal::enabled> enabled{};
        }
        ///Bypass Enable. 
        enum class BenVal {
            disabled=0x00000000,     ///<Disable the MBYP bypass switch.
            enabled=0x00000001,     ///<Enable the MBYP bypass switch.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,BenVal> ben{}; 
        namespace BenValC{
            constexpr Register::FieldValue<decltype(ben)::Type,BenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(ben)::Type,BenVal::enabled> enabled{};
        }
        ///DC-DC Converter Enable. 
        enum class DcdcenVal {
            disabled=0x00000000,     ///<Disable the DC-DC converter.
            enabled=0x00000001,     ///<Enable the DC-DC converter.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,DcdcenVal> dcdcen{}; 
        namespace DcdcenValC{
            constexpr Register::FieldValue<decltype(dcdcen)::Type,DcdcenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(dcdcen)::Type,DcdcenVal::enabled> enabled{};
        }
    }
    namespace Dcdc0Config{    ///<Module Configuration
        using Addr = Register::Address<0x4004e010,0xffccff8f,0x00000000,unsigned>;
        ///Inductor Peak Current Limit. 
        enum class IlimitVal {
            limit1=0x00000001,     ///<Limit the peak inductor current to 200 mA.
            limit2=0x00000002,     ///<Limit the peak inductor current to 300 mA.
            limit3=0x00000003,     ///<Limit the peak inductor current to 400 mA.
            limit4=0x00000004,     ///<Limit the peak inductor current to 500 mA.
            limit5=0x00000005,     ///<Limit the peak inductor current to 600 mA.
            limit6=0x00000006,     ///<Limit the peak inductor current to 700 mA.
            limit7=0x00000007,     ///<Limit the peak inductor current to 800 mA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,IlimitVal> ilimit{}; 
        namespace IlimitValC{
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit1> limit1{};
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit2> limit2{};
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit3> limit3{};
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit4> limit4{};
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit5> limit5{};
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit6> limit6{};
            constexpr Register::FieldValue<decltype(ilimit)::Type,IlimitVal::limit7> limit7{};
        }
        ///Interrupt Mode. 
        enum class IntmdVal {
            outputTooLow=0x00000000,     ///<Generate an interrupt when the regulated converter output voltage is too low.
            outputNotTooLow=0x00000001,     ///<Generate an interrupt when the regulated converter output voltage is not too low.
            outOfReg=0x00000002,     ///<Generate an interrupt when the output voltage is out of regulation. The converter output can be either too high or too low.
            inReg=0x00000003,     ///<Generate an interrupt when the output voltage is in regulation.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,16),Register::ReadWriteAccess,IntmdVal> intmd{}; 
        namespace IntmdValC{
            constexpr Register::FieldValue<decltype(intmd)::Type,IntmdVal::outputTooLow> outputTooLow{};
            constexpr Register::FieldValue<decltype(intmd)::Type,IntmdVal::outputNotTooLow> outputNotTooLow{};
            constexpr Register::FieldValue<decltype(intmd)::Type,IntmdVal::outOfReg> outOfReg{};
            constexpr Register::FieldValue<decltype(intmd)::Type,IntmdVal::inReg> inReg{};
        }
        ///Converter Ready Low Threshold. 
        enum class RdylowthVal {
            v95Percent=0x00000000,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 95% of the programmed output voltage.
            v90Percent=0x00000001,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 90% of the programmed output voltage.
            v85Percent=0x00000002,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 85% of the programmed output voltage.
            v80Percent=0x00000003,     ///<Hardware sets the RDYLOWF flag if the regulated output voltage is greater than 80% of the programmed output voltage.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,20),Register::ReadWriteAccess,RdylowthVal> rdylowth{}; 
        namespace RdylowthValC{
            constexpr Register::FieldValue<decltype(rdylowth)::Type,RdylowthVal::v95Percent> v95Percent{};
            constexpr Register::FieldValue<decltype(rdylowth)::Type,RdylowthVal::v90Percent> v90Percent{};
            constexpr Register::FieldValue<decltype(rdylowth)::Type,RdylowthVal::v85Percent> v85Percent{};
            constexpr Register::FieldValue<decltype(rdylowth)::Type,RdylowthVal::v80Percent> v80Percent{};
        }
    }
}
