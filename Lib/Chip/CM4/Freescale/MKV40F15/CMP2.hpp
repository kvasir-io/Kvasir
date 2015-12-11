#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
    namespace Cmp2Cr0{    ///<CMP Control Register 0
        using Addr = Register::Address<0x40073010,0xffffff8c,0,unsigned char>;
        ///Comparator hard block hysteresis control
        enum class HystctrVal {
            v00=0x00000000,     ///<Level 0
            v01=0x00000001,     ///<Level 1
            v10=0x00000002,     ///<Level 2
            v11=0x00000003,     ///<Level 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,HystctrVal> hystctr{}; 
        namespace HystctrValC{
            constexpr Register::FieldValue<decltype(hystctr)::Type,HystctrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(hystctr)::Type,HystctrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(hystctr)::Type,HystctrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(hystctr)::Type,HystctrVal::v11> v11{};
        }
        }
        ///Filter Sample Count
        enum class FiltercntVal {
            v000=0x00000000,     ///<Filter is disabled. If SE = 1, then COUT is a logic 0. This is not a legal state, and is not recommended. If SE = 0, COUT = COUTA.
            v001=0x00000001,     ///<One sample must agree. The comparator output is simply sampled.
            v010=0x00000002,     ///<2 consecutive samples must agree.
            v011=0x00000003,     ///<3 consecutive samples must agree.
            v100=0x00000004,     ///<4 consecutive samples must agree.
            v101=0x00000005,     ///<5 consecutive samples must agree.
            v110=0x00000006,     ///<6 consecutive samples must agree.
            v111=0x00000007,     ///<7 consecutive samples must agree.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,FiltercntVal> filterCnt{}; 
        namespace FiltercntValC{
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v000> v000{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v001> v001{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v010> v010{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v011> v011{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v100> v100{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v101> v101{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v110> v110{};
            constexpr Register::FieldValue<decltype(filterCnt)::Type,FiltercntVal::v111> v111{};
        }
        }
    }
    namespace Cmp2Cr1{    ///<CMP Control Register 1
        using Addr = Register::Address<0x40073011,0xffffff00,0,unsigned char>;
        ///Comparator Module Enable
        enum class EnVal {
            v0=0x00000000,     ///<Analog Comparator is disabled.
            v1=0x00000001,     ///<Analog Comparator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v1> v1{};
        }
        }
        ///Comparator Output Pin Enable
        enum class OpeVal {
            v0=0x00000000,     ///<CMPO is not available on the associated CMPO output pin. If the comparator does not own the pin, this field has no effect.
            v1=0x00000001,     ///<CMPO is available on the associated CMPO output pin. The comparator output (CMPO) is driven out on the associated CMPO output pin if the comparator owns the pin. If the comparator does not own the field, this bit has no effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OpeVal> ope{}; 
        namespace OpeValC{
            constexpr Register::FieldValue<decltype(ope)::Type,OpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ope)::Type,OpeVal::v1> v1{};
        }
        }
        ///Comparator Output Select
        enum class CosVal {
            v0=0x00000000,     ///<Set the filtered comparator output (CMPO) to equal COUT.
            v1=0x00000001,     ///<Set the unfiltered comparator output (CMPO) to equal COUTA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CosVal> cos{}; 
        namespace CosValC{
            constexpr Register::FieldValue<decltype(cos)::Type,CosVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cos)::Type,CosVal::v1> v1{};
        }
        }
        ///Comparator INVERT
        enum class InvVal {
            v0=0x00000000,     ///<Does not invert the comparator output.
            v1=0x00000001,     ///<Inverts the comparator output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inv)::Type,InvVal::v1> v1{};
        }
        }
        ///Power Mode Select
        enum class PmodeVal {
            v0=0x00000000,     ///<Low-Speed (LS) Comparison mode selected. In this mode, CMP has slower output propagation delay and lower current consumption.
            v1=0x00000001,     ///<High-Speed (HS) Comparison mode selected. In this mode, CMP has faster output propagation delay and higher current consumption.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PmodeVal> pmode{}; 
        namespace PmodeValC{
            constexpr Register::FieldValue<decltype(pmode)::Type,PmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pmode)::Type,PmodeVal::v1> v1{};
        }
        }
        ///Trigger Mode Enable
        enum class TrigmVal {
            v0=0x00000000,     ///<Trigger mode is disabled.
            v1=0x00000001,     ///<Trigger mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigmVal> trigm{}; 
        namespace TrigmValC{
            constexpr Register::FieldValue<decltype(trigm)::Type,TrigmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trigm)::Type,TrigmVal::v1> v1{};
        }
        }
        ///Windowing Enable
        enum class WeVal {
            v0=0x00000000,     ///<Windowing mode is not selected.
            v1=0x00000001,     ///<Windowing mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WeVal> we{}; 
        namespace WeValC{
            constexpr Register::FieldValue<decltype(we)::Type,WeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(we)::Type,WeVal::v1> v1{};
        }
        }
        ///Sample Enable
        enum class SeVal {
            v0=0x00000000,     ///<Sampling mode is not selected.
            v1=0x00000001,     ///<Sampling mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SeVal> se{}; 
        namespace SeValC{
            constexpr Register::FieldValue<decltype(se)::Type,SeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(se)::Type,SeVal::v1> v1{};
        }
        }
    }
    namespace Cmp2Fpr{    ///<CMP Filter Period Register
        using Addr = Register::Address<0x40073012,0xffffff00,0,unsigned char>;
        ///Filter Sample Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
    }
    namespace Cmp2Scr{    ///<CMP Status and Control Register
        using Addr = Register::Address<0x40073013,0xffffffa0,0,unsigned char>;
        ///Analog Comparator Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cout{}; 
        ///Analog Comparator Flag Falling
        enum class CffVal {
            v0=0x00000000,     ///<Falling-edge on COUT has not been detected.
            v1=0x00000001,     ///<Falling-edge on COUT has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CffVal> cff{}; 
        namespace CffValC{
            constexpr Register::FieldValue<decltype(cff)::Type,CffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cff)::Type,CffVal::v1> v1{};
        }
        }
        ///Analog Comparator Flag Rising
        enum class CfrVal {
            v0=0x00000000,     ///<Rising-edge on COUT has not been detected.
            v1=0x00000001,     ///<Rising-edge on COUT has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CfrVal> cfr{}; 
        namespace CfrValC{
            constexpr Register::FieldValue<decltype(cfr)::Type,CfrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cfr)::Type,CfrVal::v1> v1{};
        }
        }
        ///Comparator Interrupt Enable Falling
        enum class IefVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IefVal> ief{}; 
        namespace IefValC{
            constexpr Register::FieldValue<decltype(ief)::Type,IefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ief)::Type,IefVal::v1> v1{};
        }
        }
        ///Comparator Interrupt Enable Rising
        enum class IerVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IerVal> ier{}; 
        namespace IerValC{
            constexpr Register::FieldValue<decltype(ier)::Type,IerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ier)::Type,IerVal::v1> v1{};
        }
        }
        ///DMA Enable Control
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA is disabled.
            v1=0x00000001,     ///<DMA is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        }
    }
    namespace Cmp2Daccr{    ///<DAC Control Register
        using Addr = Register::Address<0x40073014,0xffffff00,0,unsigned char>;
        ///DAC Output Voltage Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vosel{}; 
        ///Supply Voltage Reference Source Select
        enum class VrselVal {
            v0=0x00000000,     ///<Vin1 is selected as resistor ladder network supply reference.
            v1=0x00000001,     ///<Vin2 is selected as resistor ladder network supply reference.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,VrselVal> vrsel{}; 
        namespace VrselValC{
            constexpr Register::FieldValue<decltype(vrsel)::Type,VrselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrsel)::Type,VrselVal::v1> v1{};
        }
        }
        ///DAC Enable
        enum class DacenVal {
            v0=0x00000000,     ///<DAC is disabled.
            v1=0x00000001,     ///<DAC is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DacenVal> dacen{}; 
        namespace DacenValC{
            constexpr Register::FieldValue<decltype(dacen)::Type,DacenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacen)::Type,DacenVal::v1> v1{};
        }
        }
    }
    namespace Cmp2Muxcr{    ///<MUX Control Register
        using Addr = Register::Address<0x40073015,0xffffffc0,0,unsigned char>;
        ///Minus Input Mux Control
        enum class MselVal {
            v000=0x00000000,     ///<IN0
            v001=0x00000001,     ///<IN1
            v010=0x00000002,     ///<IN2
            v011=0x00000003,     ///<IN3
            v100=0x00000004,     ///<IN4
            v101=0x00000005,     ///<IN5
            v110=0x00000006,     ///<IN6
            v111=0x00000007,     ///<IN7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,MselVal> msel{}; 
        namespace MselValC{
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v111> v111{};
        }
        }
        ///Plus Input Mux Control
        enum class PselVal {
            v000=0x00000000,     ///<IN0
            v001=0x00000001,     ///<IN1
            v010=0x00000002,     ///<IN2
            v011=0x00000003,     ///<IN3
            v100=0x00000004,     ///<IN4
            v101=0x00000005,     ///<IN5
            v110=0x00000006,     ///<IN6
            v111=0x00000007,     ///<IN7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v111> v111{};
        }
        }
    }
}
