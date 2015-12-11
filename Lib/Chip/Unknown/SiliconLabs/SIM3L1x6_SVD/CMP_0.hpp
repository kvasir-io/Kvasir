#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4001f000,0x3fff9fff,0,unsigned>;
        ///Falling Edge Interrupt Flag. 
        enum class CmpfiVal {
            notSet=0x00000000,     ///<No comparator falling edge has occurred since this flag was last cleared.
            set=0x00000001,     ///<A comparator falling edge occurred since last flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,CmpfiVal> cmpfi{}; 
        namespace CmpfiValC{
            constexpr Register::FieldValue<decltype(cmpfi)::Type,CmpfiVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmpfi)::Type,CmpfiVal::set> set{};
        }
        }
        ///Rising Edge Interrupt Flag. 
        enum class CmpriVal {
            notSet=0x00000000,     ///<No comparator rising edge has occurred since this flag was last cleared.
            set=0x00000001,     ///<A comparator rising edge occurred since last flag was cleared.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,CmpriVal> cmpri{}; 
        namespace CmpriValC{
            constexpr Register::FieldValue<decltype(cmpri)::Type,CmpriVal::notSet> notSet{};
            constexpr Register::FieldValue<decltype(cmpri)::Type,CmpriVal::set> set{};
        }
        }
        ///Output State. 
        enum class CmpoutVal {
            posLtNeg=0x00000000,     ///<Voltage on CMP+ < CMP- (INVEN = 0).
            posGtNeg=0x00000001,     ///<Voltage on CMP+ > CMP- (INVEN = 0).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,CmpoutVal> cmpout{}; 
        namespace CmpoutValC{
            constexpr Register::FieldValue<decltype(cmpout)::Type,CmpoutVal::posLtNeg> posLtNeg{};
            constexpr Register::FieldValue<decltype(cmpout)::Type,CmpoutVal::posGtNeg> posGtNeg{};
        }
        }
        ///Comparator Enable. 
        enum class CmpenVal {
            disabled=0x00000000,     ///<Disable the comparator.
            enabled=0x00000001,     ///<Enable the comparator.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,CmpenVal> cmpen{}; 
        namespace CmpenValC{
            constexpr Register::FieldValue<decltype(cmpen)::Type,CmpenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmpen)::Type,CmpenVal::enabled> enabled{};
        }
        }
    }
    namespace Nonemode{    ///<Input and Module Mode
        using Addr = Register::Address<0x4001f010,0xb0009000,0,unsigned>;
        ///Negative Input Select. 
        enum class NmuxVal {
            cmpnn0=0x00000000,     ///<Select CMPnN.0 (PB0.1).
            cmpnn1=0x00000001,     ///<Select CMPnN.1 (PB0.8).
            cmpnn2=0x00000002,     ///<Select CMPnN.2 (PB1.1).
            cmpnn3=0x00000003,     ///<Select CMPnN.3 (PB1.8).
            cmpnn4=0x00000004,     ///<Select CMPnN.4 (RESERVED).
            cmpnn5=0x00000005,     ///<Select CMPnN.5 (PB2.5).
            cmpnn6=0x00000006,     ///<Select CMPnN.6 (PB3.3).
            cmpnn7=0x00000007,     ///<Select CMPnN.7 (PB3.5).
            cmpnn8=0x00000008,     ///<Select CMPnN.8 (VREF Pin).
            cmpnn9=0x00000009,     ///<Select CMPnN.9 (VBAT).
            cmpnn10=0x0000000a,     ///<Select CMPnN.10 (VDC).
            cmpnn11=0x0000000b,     ///<Select CMPnN.11 (Digital LDO Output).
            cmpnn12=0x0000000c,     ///<Select CMPnN.12 (Memory LDO Output).
            cmpnn13=0x0000000d,     ///<Select CMPnN.13 (Analog LDO Output).
            cmpnn14=0x0000000e,     ///<Select CMPnN.14 (VIO).
            cmpnn15=0x0000000f,     ///<Select CMPnN.15 (RESERVED).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,NmuxVal> nmux{}; 
        namespace NmuxValC{
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn0> cmpnn0{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn1> cmpnn1{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn2> cmpnn2{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn3> cmpnn3{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn4> cmpnn4{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn5> cmpnn5{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn6> cmpnn6{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn7> cmpnn7{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn8> cmpnn8{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn9> cmpnn9{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn10> cmpnn10{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn11> cmpnn11{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn12> cmpnn12{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn13> cmpnn13{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn14> cmpnn14{};
            constexpr Register::FieldValue<decltype(nmux)::Type,NmuxVal::cmpnn15> cmpnn15{};
        }
        }
        ///Positive Input Select. 
        enum class PmuxVal {
            cmpnp0=0x00000000,     ///<Select CMPnP.0 (PB0.0).
            cmpnp1=0x00000001,     ///<Select CMPnP.1 (PB0.3).
            cmpnp2=0x00000002,     ///<Select CMPnP.2 (PB1.0).
            cmpnp3=0x00000003,     ///<Select CMPnP.3 (PB1.7).
            cmpnp4=0x00000004,     ///<Select CMPnP.4 (PB2.0).
            cmpnp5=0x00000005,     ///<Select CMPnP.5 (PB2.4).
            cmpnp6=0x00000006,     ///<Select CMPnP.6 (PB3.2).
            cmpnp7=0x00000007,     ///<Select CMPnP.7 (PB3.4).
            cmpnp8=0x00000008,     ///<Select CMPnP.8 (VREF Pin).
            cmpnp9=0x00000009,     ///<Select CMPnP.9 (RESERVED).
            cmpnp10=0x0000000a,     ///<Select CMPnP.10 (Temperature Sensor Output).
            cmpnp11=0x0000000b,     ///<Select CMPnP.11 (Charge Pump / 2).
            cmpnp12=0x0000000c,     ///<Select CMPnP.12 (Digital LDO Output).
            cmpnp13=0x0000000d,     ///<Select CMPnP.13 (Memory LDO Output).
            cmpnp14=0x0000000e,     ///<Select CMPnP.14 (Analog LDO Output).
            cmpnp15=0x0000000f,     ///<Select CMPnP.15 (RESERVED).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,PmuxVal> pmux{}; 
        namespace PmuxValC{
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp0> cmpnp0{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp1> cmpnp1{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp2> cmpnp2{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp3> cmpnp3{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp4> cmpnp4{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp5> cmpnp5{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp6> cmpnp6{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp7> cmpnp7{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp8> cmpnp8{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp9> cmpnp9{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp10> cmpnp10{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp11> cmpnp11{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp12> cmpnp12{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp13> cmpnp13{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp14> cmpnp14{};
            constexpr Register::FieldValue<decltype(pmux)::Type,PmuxVal::cmpnp15> cmpnp15{};
        }
        }
        ///Input MUX Select. 
        enum class InmuxVal {
            direct=0x00000000,     ///<Connects the NMUX signal to CMP- and the PMUX signal to CMP+.
            cmppVss=0x00000001,     ///<Connects VSS to CMP- and the PMUX signal to CMP+.
            cmppDac=0x00000002,     ///<Connects the NMUX signal to CMP-, the PMUX signal to the Comparator DAC voltage reference, and the DAC output to CMP+.
            cmpnDac=0x00000003,     ///<Connects the PMUX signal to CMP+, the NMUX signal to the Comparator DAC voltage reference, and the DAC output to CMP-.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,InmuxVal> inmux{}; 
        namespace InmuxValC{
            constexpr Register::FieldValue<decltype(inmux)::Type,InmuxVal::direct> direct{};
            constexpr Register::FieldValue<decltype(inmux)::Type,InmuxVal::cmppVss> cmppVss{};
            constexpr Register::FieldValue<decltype(inmux)::Type,InmuxVal::cmppDac> cmppDac{};
            constexpr Register::FieldValue<decltype(inmux)::Type,InmuxVal::cmpnDac> cmpnDac{};
        }
        }
        ///Comparator Mode. 
        enum class CmpmdVal {
            mode0=0x00000000,     ///<Mode 0 (fastest response time, highest power consumption).
            mode1=0x00000001,     ///<Mode 1.
            mode2=0x00000002,     ///<Mode 2.
            mode3=0x00000003,     ///<Mode 3 (slowest response time, lowest power consumption).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,CmpmdVal> cmpmd{}; 
        namespace CmpmdValC{
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::mode0> mode0{};
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::mode1> mode1{};
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::mode2> mode2{};
            constexpr Register::FieldValue<decltype(cmpmd)::Type,CmpmdVal::mode3> mode3{};
        }
        }
        ///Falling Edge Interrupt Enable. 
        enum class FienVal {
            disabled=0x00000000,     ///<Disable the comparator falling edge interrupt.
            enabled=0x00000001,     ///<Enable the comparator falling edge interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,FienVal> fien{}; 
        namespace FienValC{
            constexpr Register::FieldValue<decltype(fien)::Type,FienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(fien)::Type,FienVal::enabled> enabled{};
        }
        }
        ///Rising Edge Interrupt Enable. 
        enum class RienVal {
            disabled=0x00000000,     ///<Disable the comparator rising edge interrupt.
            enabled=0x00000001,     ///<Enable the comparator rising edge interrupt.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,RienVal> rien{}; 
        namespace RienValC{
            constexpr Register::FieldValue<decltype(rien)::Type,RienVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(rien)::Type,RienVal::enabled> enabled{};
        }
        }
        ///Comparator DAC Output Level. 
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> daclvl{}; 
        ///Negative Input Weak Pullup Enable. 
        enum class NwpuenVal {
            disabled=0x00000000,     ///<Disable the negative input weak pull up.
            enabled=0x00000001,     ///<Enable the negative input weak pull up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,NwpuenVal> nwpuen{}; 
        namespace NwpuenValC{
            constexpr Register::FieldValue<decltype(nwpuen)::Type,NwpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(nwpuen)::Type,NwpuenVal::enabled> enabled{};
        }
        }
        ///Positive Input Weak Pullup Enable. 
        enum class PwpuenVal {
            disabled=0x00000000,     ///<Disable the positive input weak pull up.
            enabled=0x00000001,     ///<Enable the positive input weak pull up.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,PwpuenVal> pwpuen{}; 
        namespace PwpuenValC{
            constexpr Register::FieldValue<decltype(pwpuen)::Type,PwpuenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(pwpuen)::Type,PwpuenVal::enabled> enabled{};
        }
        }
        ///Negative Hysteresis Control. 
        enum class CmphynVal {
            disabled=0x00000000,     ///<Disable negative hysteresis.
            neg5Mv=0x00000001,     ///<Set negative hysteresis to 5 mV.
            neg10Mv=0x00000002,     ///<Set negative hysteresis to 10 mV.
            neg20Mv=0x00000003,     ///<Set negative hysteresis to 20 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,CmphynVal> cmphyn{}; 
        namespace CmphynValC{
            constexpr Register::FieldValue<decltype(cmphyn)::Type,CmphynVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmphyn)::Type,CmphynVal::neg5Mv> neg5Mv{};
            constexpr Register::FieldValue<decltype(cmphyn)::Type,CmphynVal::neg10Mv> neg10Mv{};
            constexpr Register::FieldValue<decltype(cmphyn)::Type,CmphynVal::neg20Mv> neg20Mv{};
        }
        }
        ///Positive Hysteresis Control. 
        enum class CmphypVal {
            disabled=0x00000000,     ///<Disable positive hysteresis.
            pos5Mv=0x00000001,     ///<Set positive hysteresis to 5 mV.
            pos10Mv=0x00000002,     ///<Set positive hysteresis to 10 mV.
            pos20Mv=0x00000003,     ///<Set positive hysteresis to 20 mV.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,CmphypVal> cmphyp{}; 
        namespace CmphypValC{
            constexpr Register::FieldValue<decltype(cmphyp)::Type,CmphypVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(cmphyp)::Type,CmphypVal::pos5Mv> pos5Mv{};
            constexpr Register::FieldValue<decltype(cmphyp)::Type,CmphypVal::pos10Mv> pos10Mv{};
            constexpr Register::FieldValue<decltype(cmphyp)::Type,CmphypVal::pos20Mv> pos20Mv{};
        }
        }
        ///Invert Comparator Output Enable. 
        enum class InvenVal {
            disabled=0x00000000,     ///<Do not invert the comparator output.
            enabled=0x00000001,     ///<Invert the comparator output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,InvenVal> inven{}; 
        namespace InvenValC{
            constexpr Register::FieldValue<decltype(inven)::Type,InvenVal::disabled> disabled{};
            constexpr Register::FieldValue<decltype(inven)::Type,InvenVal::enabled> enabled{};
        }
        }
    }
}
