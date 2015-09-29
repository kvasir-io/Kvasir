#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonectl{    ///<Comparator control register
        using Addr = Register::Address<0x40028000,0xf94fc0a7,0,unsigned>;
        ///This field controls which edges on the comparator output set the COMPEDGE bit (bit 23 below): 00 = Falling edges 01 = Rising edges 1x = Both edges
        enum class edgeselVal {
            falling=0x00000000,     ///<Falling edges
            rising=0x00000001,     ///<Rising edges
            dualedge=0x00000002,     ///<Both edges
            dualedge=0x00000003,     ///<Both edges
        };
        namespace edgeselValC{
            constexpr MPL::Value<edgeselVal,edgeselVal::falling> falling{};
            constexpr MPL::Value<edgeselVal,edgeselVal::rising> rising{};
            constexpr MPL::Value<edgeselVal,edgeselVal::dualedge> dualedge{};
            constexpr MPL::Value<edgeselVal,edgeselVal::dualedge> dualedge{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,edgeselVal> edgesel{}; 
        ///Comarator output control
        enum class compsaVal {
            direct=0x00000000,     ///<Uses the comparator output directly.
            synch=0x00000001,     ///<Synchronizes the comparator output to the bus clock for output to other modules.
        };
        namespace compsaValC{
            constexpr MPL::Value<compsaVal,compsaVal::direct> direct{};
            constexpr MPL::Value<compsaVal,compsaVal::synch> synch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,compsaVal> compsa{}; 
        ///Selects positive voltage input
        enum class compVpSelVal {
            vladout=0x00000000,     ///<voltage ladder output
            acmpi1=0x00000001,     ///<ACMPI1
            acmpi2=0x00000002,     ///<ACMPI2
            acmpi3=0x00000003,     ///<ACMPI3
            acmpi4=0x00000004,     ///<ACMPI4
            acmpi5=0x00000005,     ///<ACMPI5
            intvoltageref=0x00000006,     ///<internal reference voltage
            tempsensor=0x00000007,     ///<temperature sensor
        };
        namespace compVpSelValC{
            constexpr MPL::Value<compVpSelVal,compVpSelVal::vladout> vladout{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpi1> acmpi1{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpi2> acmpi2{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpi3> acmpi3{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpi4> acmpi4{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpi5> acmpi5{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::intvoltageref> intvoltageref{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::tempsensor> tempsensor{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,compVpSelVal> compVpSel{}; 
        ///Selects negative voltage input
        enum class compVmSelVal {
            vladdout=0x00000000,     ///<voltage ladder output
            acmpi1=0x00000001,     ///<ACMPI1
            acmpi2=0x00000002,     ///<ACMPI2
            acmpi3=0x00000003,     ///<ACMPI3
            acmpi4=0x00000004,     ///<ACMPI4
            acmpi5=0x00000005,     ///<ACMPI5
            intvoltageref=0x00000006,     ///<internal reference voltage
        };
        namespace compVmSelValC{
            constexpr MPL::Value<compVmSelVal,compVmSelVal::vladdout> vladdout{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpi1> acmpi1{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpi2> acmpi2{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpi3> acmpi3{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpi4> acmpi4{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpi5> acmpi5{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::intvoltageref> intvoltageref{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,compVmSelVal> compVmSel{}; 
        ///Interrupt clear bit. Writing a 1 to this bit clears the COMPEDGE bit (bit 23 below) and thus negates the interrupt request.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> edgeclr{}; 
        ///Comparator status. This bit reflects the state of the comparator output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> compstat{}; 
        ///Comparator edge-detect status.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> compedge{}; 
        ///Controls the hysteresis of the comparator. When the comparator is outputting a certain state, this is the difference between the selected signals, in the opposite direction from the state being output, that will switch the output.
        enum class hysVal {
            nohysteresis=0x00000000,     ///<None (the output will switch as the voltages cross)
            hys5mv=0x00000001,     ///<5 mV
            hsy10mv=0x00000002,     ///<10 mV
            hsy20mv=0x00000003,     ///<20 mV
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::nohysteresis> nohysteresis{};
            constexpr MPL::Value<hysVal,hysVal::hys5mv> hys5mv{};
            constexpr MPL::Value<hysVal,hysVal::hsy10mv> hsy10mv{};
            constexpr MPL::Value<hysVal,hysVal::hsy20mv> hsy20mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,hysVal> hys{}; 
    }
    namespace Nonelad{    ///<Voltage ladder register
        using Addr = Register::Address<0x40028004,0xffffff80,0,unsigned>;
        ///Voltage ladder enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> laden{}; 
        ///Voltage ladder value. The reference voltage Vref depends on the LADREF bit below. 00000 = VSS 00001 = 1  Vref/31 00010 = 2  Vref/31 ... 11111 = Vref
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> ladsel{}; 
        ///Selects the reference voltage for the voltage ladder
        enum class ladrefVal {
            vddpin=0x00000000,     ///<VDD pin
            vddcmppin=0x00000001,     ///<VDDCMP pin
        };
        namespace ladrefValC{
            constexpr MPL::Value<ladrefVal,ladrefVal::vddpin> vddpin{};
            constexpr MPL::Value<ladrefVal,ladrefVal::vddcmppin> vddcmppin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ladrefVal> ladref{}; 
    }
}
