#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//None
    namespace Nonecontrol{    ///<Module Control
        using Addr = Register::Address<0x4001f000,0x3fff9fff,0,unsigned>;
        ///Falling Edge Interrupt Flag. 
        enum class cmpfiVal {
            notSet=0x00000000,     ///<No comparator falling edge has occurred since this flag was last cleared.
            set=0x00000001,     ///<A comparator falling edge occurred since last flag was cleared.
        };
        namespace cmpfiValC{
            constexpr MPL::Value<cmpfiVal,cmpfiVal::notSet> notSet{};
            constexpr MPL::Value<cmpfiVal,cmpfiVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,cmpfiVal> cmpfi{}; 
        ///Rising Edge Interrupt Flag. 
        enum class cmpriVal {
            notSet=0x00000000,     ///<No comparator rising edge has occurred since this flag was last cleared.
            set=0x00000001,     ///<A comparator rising edge occurred since last flag was cleared.
        };
        namespace cmpriValC{
            constexpr MPL::Value<cmpriVal,cmpriVal::notSet> notSet{};
            constexpr MPL::Value<cmpriVal,cmpriVal::set> set{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,cmpriVal> cmpri{}; 
        ///Output State. 
        enum class cmpoutVal {
            posLtNeg=0x00000000,     ///<Voltage on CP+ < CP-.
            posGtNeg=0x00000001,     ///<Voltage on CP+ > CP-.
        };
        namespace cmpoutValC{
            constexpr MPL::Value<cmpoutVal,cmpoutVal::posLtNeg> posLtNeg{};
            constexpr MPL::Value<cmpoutVal,cmpoutVal::posGtNeg> posGtNeg{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,cmpoutVal> cmpout{}; 
        ///Comparator Enable. 
        enum class cmpenVal {
            disabled=0x00000000,     ///<Disable the comparator.
            enabled=0x00000001,     ///<Enable the comparator.
        };
        namespace cmpenValC{
            constexpr MPL::Value<cmpenVal,cmpenVal::disabled> disabled{};
            constexpr MPL::Value<cmpenVal,cmpenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,cmpenVal> cmpen{}; 
    }
    namespace Nonemode{    ///<Input and Module Mode
        using Addr = Register::Address<0x4001f010,0xb0009000,0,unsigned>;
        ///Negative Input Select. 
        enum class nmuxVal {
            cmpnn0=0x00000000,     ///<Select <dict>CMPnN.0</dict>.
            cmpnn1=0x00000001,     ///<Select <dict>CMPnN.1</dict>.
            cmpnn2=0x00000002,     ///<Select <dict>CMPnN.2</dict>.
            cmpnn3=0x00000003,     ///<Select <dict>CMPnN.3</dict>.
            cmpnn4=0x00000004,     ///<Select <dict>CMPnN.4</dict>.
            cmpnn5=0x00000005,     ///<Select <dict>CMPnN.5</dict>.
            cmpnn6=0x00000006,     ///<Select <dict>CMPnN.6</dict>.
            cmpnn7=0x00000007,     ///<Select <dict>CMPnN.7</dict>.
            cmpnn8=0x00000008,     ///<Select <dict>CMPnN.8</dict>.
            cmpnn9=0x00000009,     ///<Select <dict>CMPnN.9</dict>.
            cmpnn10=0x0000000a,     ///<Select <dict>CMPnN.10</dict>.
            cmpnn11=0x0000000b,     ///<Select <dict>CMPnN.11</dict>.
            cmpnn12=0x0000000c,     ///<Select <dict>CMPnN.12</dict>.
            cmpnn13=0x0000000d,     ///<Select <dict>CMPnN.13</dict>.
            cmpnn14=0x0000000e,     ///<Select <dict>CMPnN.14</dict>.
            cmpnn15=0x0000000f,     ///<Select <dict>CMPnN.15</dict>.
        };
        namespace nmuxValC{
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn0> cmpnn0{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn1> cmpnn1{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn2> cmpnn2{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn3> cmpnn3{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn4> cmpnn4{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn5> cmpnn5{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn6> cmpnn6{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn7> cmpnn7{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn8> cmpnn8{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn9> cmpnn9{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn10> cmpnn10{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn11> cmpnn11{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn12> cmpnn12{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn13> cmpnn13{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn14> cmpnn14{};
            constexpr MPL::Value<nmuxVal,nmuxVal::cmpnn15> cmpnn15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,0),Register::ReadWriteAccess,nmuxVal> nmux{}; 
        ///Positive Input Select. 
        enum class pmuxVal {
            cmpnp0=0x00000000,     ///<Select <dict>CMPnP.0</dict>.
            cmpnp1=0x00000001,     ///<Select <dict>CMPnP.1</dict>.
            cmpnp2=0x00000002,     ///<Select <dict>CMPnP.2</dict>.
            cmpnp3=0x00000003,     ///<Select <dict>CMPnP.3</dict>.
            cmpnp4=0x00000004,     ///<Select <dict>CMPnP.4</dict>.
            cmpnp5=0x00000005,     ///<Select <dict>CMPnP.5</dict>.
            cmpnp6=0x00000006,     ///<Select <dict>CMPnP.6</dict>.
            cmpnp7=0x00000007,     ///<Select <dict>CMPnP.7</dict>.
            cmpnp8=0x00000008,     ///<Select <dict>CMPnP.8</dict>.
            cmpnp9=0x00000009,     ///<Select <dict>CMPnP.9</dict>.
            cmpnp10=0x0000000a,     ///<Select <dict>CMPnP.10</dict>.
            cmpnp11=0x0000000b,     ///<Select <dict>CMPnP.11</dict>.
            cmpnp12=0x0000000c,     ///<Select <dict>CMPnP.12</dict>.
            cmpnp13=0x0000000d,     ///<Select <dict>CMPnP.13</dict>.
            cmpnp14=0x0000000e,     ///<Select <dict>CMPnP.14</dict>.
            cmpnp15=0x0000000f,     ///<Select <dict>CMPnP.15</dict>.
        };
        namespace pmuxValC{
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp0> cmpnp0{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp1> cmpnp1{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp2> cmpnp2{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp3> cmpnp3{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp4> cmpnp4{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp5> cmpnp5{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp6> cmpnp6{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp7> cmpnp7{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp8> cmpnp8{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp9> cmpnp9{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp10> cmpnp10{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp11> cmpnp11{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp12> cmpnp12{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp13> cmpnp13{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp14> cmpnp14{};
            constexpr MPL::Value<pmuxVal,pmuxVal::cmpnp15> cmpnp15{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,4),Register::ReadWriteAccess,pmuxVal> pmux{}; 
        ///Input MUX Select. 
        enum class inmuxVal {
            direct=0x00000000,     ///<Connects the NMUX signal to CP- and the PMUX signal to CP+.
            cmppVss=0x00000001,     ///<Connects VSS to CP- and the PMUX signal to CP+.
            cmppDac=0x00000002,     ///<Connects the NMUX signal to CP-, the PMUX signal to the Comparator DAC voltage reference, and the DAC output to CP+.
            cmpnDac=0x00000003,     ///<Connects the PMUX signal to CP+, the NMUX signal to the Comparator DAC voltage reference, and the DAC output to CP-.
        };
        namespace inmuxValC{
            constexpr MPL::Value<inmuxVal,inmuxVal::direct> direct{};
            constexpr MPL::Value<inmuxVal,inmuxVal::cmppVss> cmppVss{};
            constexpr MPL::Value<inmuxVal,inmuxVal::cmppDac> cmppDac{};
            constexpr MPL::Value<inmuxVal,inmuxVal::cmpnDac> cmpnDac{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,inmuxVal> inmux{}; 
        ///Comparator Mode. 
        enum class cmpmdVal {
            mode0=0x00000000,     ///<Mode 0 (fastest response time, highest power consumption).
            mode1=0x00000001,     ///<Mode 1.
            mode2=0x00000002,     ///<Mode 2.
            mode3=0x00000003,     ///<Mode 3 (slowest response time, lowest power consumption).
        };
        namespace cmpmdValC{
            constexpr MPL::Value<cmpmdVal,cmpmdVal::mode0> mode0{};
            constexpr MPL::Value<cmpmdVal,cmpmdVal::mode1> mode1{};
            constexpr MPL::Value<cmpmdVal,cmpmdVal::mode2> mode2{};
            constexpr MPL::Value<cmpmdVal,cmpmdVal::mode3> mode3{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,10),Register::ReadWriteAccess,cmpmdVal> cmpmd{}; 
        ///Falling Edge Interrupt Enable. 
        enum class fienVal {
            disabled=0x00000000,     ///<Disable the comparator falling edge interrupt.
            enabled=0x00000001,     ///<Enable the comparator falling edge interrupt.
        };
        namespace fienValC{
            constexpr MPL::Value<fienVal,fienVal::disabled> disabled{};
            constexpr MPL::Value<fienVal,fienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,fienVal> fien{}; 
        ///Rising Edge Interrupt Enable. 
        enum class rienVal {
            disabled=0x00000000,     ///<Disable the comparator rising edge interrupt.
            enabled=0x00000001,     ///<Enable the comparator rising edge interrupt.
        };
        namespace rienValC{
            constexpr MPL::Value<rienVal,rienVal::disabled> disabled{};
            constexpr MPL::Value<rienVal,rienVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,rienVal> rien{}; 
        ///Comparator DAC Output Level. 
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,16),Register::ReadWriteAccess,unsigned> daclvl{}; 
        ///Negative Input Weak Pullup Enable. 
        enum class nwpuenVal {
            disabled=0x00000000,     ///<Disable the negative input weak pull up.
            enabled=0x00000001,     ///<Enable the negative input weak pull up.
        };
        namespace nwpuenValC{
            constexpr MPL::Value<nwpuenVal,nwpuenVal::disabled> disabled{};
            constexpr MPL::Value<nwpuenVal,nwpuenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,nwpuenVal> nwpuen{}; 
        ///Positive Input Weak Pullup Enable. 
        enum class pwpuenVal {
            disabled=0x00000000,     ///<Disable the positive input weak pull up.
            enabled=0x00000001,     ///<Enable the positive input weak pull up.
        };
        namespace pwpuenValC{
            constexpr MPL::Value<pwpuenVal,pwpuenVal::disabled> disabled{};
            constexpr MPL::Value<pwpuenVal,pwpuenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,pwpuenVal> pwpuen{}; 
        ///Negative Hysteresis Control. 
        enum class cmphynVal {
            disabled=0x00000000,     ///<Disable negative hysteresis.
            neg5Mv=0x00000001,     ///<Set negative hysteresis to 5 mV.
            neg10Mv=0x00000002,     ///<Set negative hysteresis to 10 mV.
            neg20Mv=0x00000003,     ///<Set negative hysteresis to 20 mV.
        };
        namespace cmphynValC{
            constexpr MPL::Value<cmphynVal,cmphynVal::disabled> disabled{};
            constexpr MPL::Value<cmphynVal,cmphynVal::neg5Mv> neg5Mv{};
            constexpr MPL::Value<cmphynVal,cmphynVal::neg10Mv> neg10Mv{};
            constexpr MPL::Value<cmphynVal,cmphynVal::neg20Mv> neg20Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,24),Register::ReadWriteAccess,cmphynVal> cmphyn{}; 
        ///Positive Hysteresis Control. 
        enum class cmphypVal {
            disabled=0x00000000,     ///<Disable positive hysteresis.
            pos5Mv=0x00000001,     ///<Set positive hysteresis to 5 mV.
            pos10Mv=0x00000002,     ///<Set positive hysteresis to 10 mV.
            pos20Mv=0x00000003,     ///<Set positive hysteresis to 20 mV.
        };
        namespace cmphypValC{
            constexpr MPL::Value<cmphypVal,cmphypVal::disabled> disabled{};
            constexpr MPL::Value<cmphypVal,cmphypVal::pos5Mv> pos5Mv{};
            constexpr MPL::Value<cmphypVal,cmphypVal::pos10Mv> pos10Mv{};
            constexpr MPL::Value<cmphypVal,cmphypVal::pos20Mv> pos20Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,26),Register::ReadWriteAccess,cmphypVal> cmphyp{}; 
        ///Invert Comparator Output Enable. 
        enum class invenVal {
            disabled=0x00000000,     ///<Do not invert the comparator output.
            enabled=0x00000001,     ///<Invert the comparator output.
        };
        namespace invenValC{
            constexpr MPL::Value<invenVal,invenVal::disabled> disabled{};
            constexpr MPL::Value<invenVal,invenVal::enabled> enabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,invenVal> inven{}; 
    }
}
