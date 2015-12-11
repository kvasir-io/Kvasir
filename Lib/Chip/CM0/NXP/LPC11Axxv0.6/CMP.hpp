#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Comparator
    namespace Nonectl{    ///<Comparator control register
        using Addr = Register::Address<0x40028000,0xf94fc0a7,0,unsigned>;
        ///This field controls which edges on the comparator output set the COMPEDGE bit (bit 23 below): 00 = Falling edges 01 = Rising edges 1x = Both edges
        enum class EdgeselVal {
            falling=0x00000000,     ///<Falling edges
            rising=0x00000001,     ///<Rising edges
            dualedge=0x00000002,     ///<Both edges
            dualedge=0x00000003,     ///<Both edges
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,EdgeselVal> edgesel{}; 
        namespace EdgeselValC{
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::falling> falling{};
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::rising> rising{};
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::dualedge> dualedge{};
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::dualedge> dualedge{};
        }
        }
        ///Comarator output control
        enum class CompsaVal {
            direct=0x00000000,     ///<Uses the comparator output directly.
            synch=0x00000001,     ///<Synchronizes the comparator output to the bus clock for output to other modules.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CompsaVal> compsa{}; 
        namespace CompsaValC{
            constexpr Register::FieldValue<decltype(compsa)::Type,CompsaVal::direct> direct{};
            constexpr Register::FieldValue<decltype(compsa)::Type,CompsaVal::synch> synch{};
        }
        }
        ///Selects positive voltage input
        enum class CompvpselVal {
            vladout=0x00000000,     ///<voltage ladder output
            acmpi1=0x00000001,     ///<ACMPI1
            acmpi2=0x00000002,     ///<ACMPI2
            acmpi3=0x00000003,     ///<ACMPI3
            acmpi4=0x00000004,     ///<ACMPI4
            acmpi5=0x00000005,     ///<ACMPI5
            intvoltageref=0x00000006,     ///<internal reference voltage
            tempsensor=0x00000007,     ///<temperature sensor
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,CompvpselVal> compVpSel{}; 
        namespace CompvpselValC{
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::vladout> vladout{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpi1> acmpi1{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpi2> acmpi2{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpi3> acmpi3{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpi4> acmpi4{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpi5> acmpi5{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::intvoltageref> intvoltageref{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::tempsensor> tempsensor{};
        }
        }
        ///Selects negative voltage input
        enum class CompvmselVal {
            vladdout=0x00000000,     ///<voltage ladder output
            acmpi1=0x00000001,     ///<ACMPI1
            acmpi2=0x00000002,     ///<ACMPI2
            acmpi3=0x00000003,     ///<ACMPI3
            acmpi4=0x00000004,     ///<ACMPI4
            acmpi5=0x00000005,     ///<ACMPI5
            intvoltageref=0x00000006,     ///<internal reference voltage
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,CompvmselVal> compVmSel{}; 
        namespace CompvmselValC{
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::vladdout> vladdout{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpi1> acmpi1{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpi2> acmpi2{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpi3> acmpi3{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpi4> acmpi4{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpi5> acmpi5{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::intvoltageref> intvoltageref{};
        }
        }
        ///Interrupt clear bit. Writing a 1 to this bit clears the COMPEDGE bit (bit 23 below) and thus negates the interrupt request.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> edgeclr{}; 
        ///Comparator status. This bit reflects the state of the comparator output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> compstat{}; 
        ///Comparator edge-detect status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> compedge{}; 
        ///Controls the hysteresis of the comparator. When the comparator is outputting a certain state, this is the difference between the selected signals, in the opposite direction from the state being output, that will switch the output.
        enum class HysVal {
            nohysteresis=0x00000000,     ///<None (the output will switch as the voltages cross)
            hys5mv=0x00000001,     ///<5 mV
            hsy10mv=0x00000002,     ///<10 mV
            hsy20mv=0x00000003,     ///<20 mV
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::nohysteresis> nohysteresis{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hys5mv> hys5mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hsy10mv> hsy10mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::hsy20mv> hsy20mv{};
        }
        }
    }
    namespace Nonelad{    ///<Voltage ladder register
        using Addr = Register::Address<0x40028004,0xffffff80,0,unsigned>;
        ///Voltage ladder enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> laden{}; 
        ///Voltage ladder value. The reference voltage Vref depends on the LADREF bit below. 00000 = VSS 00001 = 1  Vref/31 00010 = 2  Vref/31 ... 11111 = Vref
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> ladsel{}; 
        ///Selects the reference voltage for the voltage ladder
        enum class LadrefVal {
            vddpin=0x00000000,     ///<VDD pin
            vddcmppin=0x00000001,     ///<VDDCMP pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LadrefVal> ladref{}; 
        namespace LadrefValC{
            constexpr Register::FieldValue<decltype(ladref)::Type,LadrefVal::vddpin> vddpin{};
            constexpr Register::FieldValue<decltype(ladref)::Type,LadrefVal::vddcmppin> vddcmppin{};
        }
        }
    }
}
