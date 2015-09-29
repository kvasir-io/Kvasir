#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog comparator
    namespace Nonectrl{    ///<Comparator control register
        using Addr = Register::Address<0x40024000,0xf94fc0a7,0,unsigned>;
        ///This field controls which edges on the comparator output set the COMPEDGE bit (bit 23 below): 00 = Falling edges 01 = Rising edges 1x = Both edges
        enum class edgeselVal {
            fallingEdges=0x00000000,     ///<Falling edges
            risingEdges=0x00000001,     ///<Rising edges
            bothEdges=0x00000002,     ///<Both edges
            bothEdges=0x00000003,     ///<Both edges
        };
        namespace edgeselValC{
            constexpr MPL::Value<edgeselVal,edgeselVal::fallingEdges> fallingEdges{};
            constexpr MPL::Value<edgeselVal,edgeselVal::risingEdges> risingEdges{};
            constexpr MPL::Value<edgeselVal,edgeselVal::bothEdges> bothEdges{};
            constexpr MPL::Value<edgeselVal,edgeselVal::bothEdges> bothEdges{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,3),Register::ReadWriteAccess,edgeselVal> edgesel{}; 
        ///Comparator output control
        enum class compsaVal {
            direct=0x00000000,     ///<Comparator output  is used directly.
            synch=0x00000001,     ///<Comparator output is synchronized to the bus clock for output to other modules.
        };
        namespace compsaValC{
            constexpr MPL::Value<compsaVal,compsaVal::direct> direct{};
            constexpr MPL::Value<compsaVal,compsaVal::synch> synch{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,compsaVal> compsa{}; 
        ///Selects positive voltage input
        enum class compVpSelVal {
            voltageLadderOutpu=0x00000000,     ///<Voltage ladder output
            acmpI1=0x00000001,     ///<ACMP_I1
            acmpI2=0x00000002,     ///<ACMP_I2
            reserved=0x00000003,     ///<Reserved
            reserved=0x00000004,     ///<Reserved
            reserved=0x00000005,     ///<Reserved
            internalReferenceV=0x00000006,     ///<Internal reference voltage
            reserved=0x00000007,     ///<Reserved
        };
        namespace compVpSelValC{
            constexpr MPL::Value<compVpSelVal,compVpSelVal::voltageLadderOutpu> voltageLadderOutpu{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpI1> acmpI1{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::acmpI2> acmpI2{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::reserved> reserved{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::reserved> reserved{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::reserved> reserved{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::internalReferenceV> internalReferenceV{};
            constexpr MPL::Value<compVpSelVal,compVpSelVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,compVpSelVal> compVpSel{}; 
        ///Selects negative voltage input
        enum class compVmSelVal {
            voltageLadderOutpu=0x00000000,     ///<voltage ladder output
            acmpI1=0x00000001,     ///<ACMP_I1
            acmpI2=0x00000002,     ///<ACMP_I2
            reserved=0x00000003,     ///<Reserved
            reserved=0x00000004,     ///<Reserved
            reserved=0x00000005,     ///<Reserved
            internalReferenceV=0x00000006,     ///<Internal reference voltage
            reserved=0x00000007,     ///<Reserved
        };
        namespace compVmSelValC{
            constexpr MPL::Value<compVmSelVal,compVmSelVal::voltageLadderOutpu> voltageLadderOutpu{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpI1> acmpI1{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::acmpI2> acmpI2{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::reserved> reserved{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::reserved> reserved{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::reserved> reserved{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::internalReferenceV> internalReferenceV{};
            constexpr MPL::Value<compVmSelVal,compVmSelVal::reserved> reserved{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,11),Register::ReadWriteAccess,compVmSelVal> compVmSel{}; 
        ///Interrupt clear bit. To clear the COMPEDGE bit and thus negate the interrupt request, toggle the EDGECLR bit by first writing a 1 and then a 0.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> edgeclr{}; 
        ///Comparator status. This bit reflects the state of the comparator output.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> compstat{}; 
        ///Comparator edge-detect status.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> compedge{}; 
        ///Controls the hysteresis of the comparator. When the comparator is outputting a certain state, this is the difference between the selected signals, in the opposite direction from the state being output, that will switch the output.
        enum class hysVal {
            noneTheOutputWil=0x00000000,     ///<None (the output will switch as the voltages cross)
            v5Mv=0x00000001,     ///<5 mV
            v10Mv=0x00000002,     ///<10 mV
            v20Mv=0x00000003,     ///<20 mV
        };
        namespace hysValC{
            constexpr MPL::Value<hysVal,hysVal::noneTheOutputWil> noneTheOutputWil{};
            constexpr MPL::Value<hysVal,hysVal::v5Mv> v5Mv{};
            constexpr MPL::Value<hysVal,hysVal::v10Mv> v10Mv{};
            constexpr MPL::Value<hysVal,hysVal::v20Mv> v20Mv{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,25),Register::ReadWriteAccess,hysVal> hys{}; 
    }
    namespace Nonelad{    ///<Voltage ladder register
        using Addr = Register::Address<0x40024004,0xffffff80,0,unsigned>;
        ///Voltage ladder enable
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> laden{}; 
        ///Voltage ladder value. The reference voltage Vref depends on the LADREF bit below. 00000 = VSS 00001 = 1 x Vref/31 00010 = 2 x Vref/31 ... 11111 = Vref
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,1),Register::ReadWriteAccess,unsigned> ladsel{}; 
        ///Selects the reference voltage Vref for the voltage ladder:
        enum class ladrefVal {
            supplyPinVdd=0x00000000,     ///<Supply pin VDD
            vddcmpPin=0x00000001,     ///<VDDCMP pin
        };
        namespace ladrefValC{
            constexpr MPL::Value<ladrefVal,ladrefVal::supplyPinVdd> supplyPinVdd{};
            constexpr MPL::Value<ladrefVal,ladrefVal::vddcmpPin> vddcmpPin{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ladrefVal> ladref{}; 
    }
}
