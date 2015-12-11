#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog comparator
    namespace Nonectrl{    ///<Comparator control register
        using Addr = Register::Address<0x40024000,0xf94fc0a7,0,unsigned>;
        ///This field controls which edges on the comparator output set the COMPEDGE bit (bit 23 below): 00 = Falling edges 01 = Rising edges 1x = Both edges
        enum class EdgeselVal {
            fallingEdges=0x00000000,     ///<Falling edges
            risingEdges=0x00000001,     ///<Rising edges
            bothEdges=0x00000002,     ///<Both edges
            bothEdges=0x00000003,     ///<Both edges
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,EdgeselVal> edgesel{}; 
        namespace EdgeselValC{
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::fallingEdges> fallingEdges{};
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::risingEdges> risingEdges{};
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::bothEdges> bothEdges{};
            constexpr Register::FieldValue<decltype(edgesel)::Type,EdgeselVal::bothEdges> bothEdges{};
        }
        }
        ///Comparator output control
        enum class CompsaVal {
            direct=0x00000000,     ///<Comparator output  is used directly.
            synch=0x00000001,     ///<Comparator output is synchronized to the bus clock for output to other modules.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,CompsaVal> compsa{}; 
        namespace CompsaValC{
            constexpr Register::FieldValue<decltype(compsa)::Type,CompsaVal::direct> direct{};
            constexpr Register::FieldValue<decltype(compsa)::Type,CompsaVal::synch> synch{};
        }
        }
        ///Selects positive voltage input
        enum class CompvpselVal {
            voltageLadderOutpu=0x00000000,     ///<Voltage ladder output
            acmpI1=0x00000001,     ///<ACMP_I1
            acmpI2=0x00000002,     ///<ACMP_I2
            internalReferenceV=0x00000006,     ///<Internal reference voltage
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,CompvpselVal> compVpSel{}; 
        namespace CompvpselValC{
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::voltageLadderOutpu> voltageLadderOutpu{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(compVpSel)::Type,CompvpselVal::internalReferenceV> internalReferenceV{};
        }
        }
        ///Selects negative voltage input
        enum class CompvmselVal {
            voltageLadderOutpu=0x00000000,     ///<voltage ladder output
            acmpI1=0x00000001,     ///<ACMP_I1
            acmpI2=0x00000002,     ///<ACMP_I2
            internalReferenceV=0x00000006,     ///<Internal reference voltage
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,CompvmselVal> compVmSel{}; 
        namespace CompvmselValC{
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::voltageLadderOutpu> voltageLadderOutpu{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpI1> acmpI1{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::acmpI2> acmpI2{};
            constexpr Register::FieldValue<decltype(compVmSel)::Type,CompvmselVal::internalReferenceV> internalReferenceV{};
        }
        }
        ///Interrupt clear bit. To clear the COMPEDGE bit and thus negate the interrupt request, toggle the EDGECLR bit by first writing a 1 and then a 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> edgeclr{}; 
        ///Comparator status. This bit reflects the state of the comparator output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> compstat{}; 
        ///Comparator edge-detect status.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> compedge{}; 
        ///Controls the hysteresis of the comparator. When the comparator is outputting a certain state, this is the difference between the selected signals, in the opposite direction from the state being output, that will switch the output.
        enum class HysVal {
            noneTheOutputWil=0x00000000,     ///<None (the output will switch as the voltages cross)
            v5Mv=0x00000001,     ///<5 mV
            v10Mv=0x00000002,     ///<10 mV
            v20Mv=0x00000003,     ///<20 mV
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,HysVal> hys{}; 
        namespace HysValC{
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::noneTheOutputWil> noneTheOutputWil{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::v5Mv> v5Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::v10Mv> v10Mv{};
            constexpr Register::FieldValue<decltype(hys)::Type,HysVal::v20Mv> v20Mv{};
        }
        }
    }
    namespace Nonelad{    ///<Voltage ladder register
        using Addr = Register::Address<0x40024004,0xffffff80,0,unsigned>;
        ///Voltage ladder enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> laden{}; 
        ///Voltage ladder value. The reference voltage Vref depends on the LADREF bit below. 00000 = VSS 00001 = 1 x Vref/31 00010 = 2 x Vref/31 ... 11111 = Vref
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> ladsel{}; 
        ///Selects the reference voltage Vref for the voltage ladder:
        enum class LadrefVal {
            supplyPinVdd=0x00000000,     ///<Supply pin VDD
            vddcmpPin=0x00000001,     ///<VDDCMP pin
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,LadrefVal> ladref{}; 
        namespace LadrefValC{
            constexpr Register::FieldValue<decltype(ladref)::Type,LadrefVal::supplyPinVdd> supplyPinVdd{};
            constexpr Register::FieldValue<decltype(ladref)::Type,LadrefVal::vddcmpPin> vddcmpPin{};
        }
        }
    }
}
