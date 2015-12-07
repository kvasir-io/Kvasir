#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
    namespace Cmp0Cr0{    ///<CMP Control Register 0
        using Addr = Register::Address<0x40073000,0xffffff8c,0,unsigned char>;
        ///Comparator hard block hysteresis control
        enum class HystctrVal {
            v00=0x00000000,     ///<Level 0
            v01=0x00000001,     ///<Level 1
            v10=0x00000002,     ///<Level 2
            v11=0x00000003,     ///<Level 3
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,HystctrVal> hystctr{}; 
        namespace HystctrValC{
            constexpr Register::FieldValue<decltype(hystctr),HystctrVal::v00> v00{};
            constexpr Register::FieldValue<decltype(hystctr),HystctrVal::v01> v01{};
            constexpr Register::FieldValue<decltype(hystctr),HystctrVal::v10> v10{};
            constexpr Register::FieldValue<decltype(hystctr),HystctrVal::v11> v11{};
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
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v000> v000{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v001> v001{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v010> v010{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v011> v011{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v100> v100{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v101> v101{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v110> v110{};
            constexpr Register::FieldValue<decltype(filterCnt),FiltercntVal::v111> v111{};
        }
    }
    namespace Cmp0Cr1{    ///<CMP Control Register 1
        using Addr = Register::Address<0x40073001,0xffffff00,0,unsigned char>;
        ///Comparator Module Enable
        enum class EnVal {
            v0=0x00000000,     ///<Analog Comparator is disabled.
            v1=0x00000001,     ///<Analog Comparator is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en),EnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(en),EnVal::v1> v1{};
        }
        ///Comparator Output Pin Enable
        enum class OpeVal {
            v0=0x00000000,     ///<CMPO is not available on the associated CMPO output pin. If the comparator does not own the pin, this field has no effect.
            v1=0x00000001,     ///<CMPO is available on the associated CMPO output pin. The comparator output (CMPO) is driven out on the associated CMPO output pin if the comparator owns the pin. If the comparator does not own the field, this bit has no effect.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OpeVal> ope{}; 
        namespace OpeValC{
            constexpr Register::FieldValue<decltype(ope),OpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ope),OpeVal::v1> v1{};
        }
        ///Comparator Output Select
        enum class CosVal {
            v0=0x00000000,     ///<Set the filtered comparator output (CMPO) to equal COUT.
            v1=0x00000001,     ///<Set the unfiltered comparator output (CMPO) to equal COUTA.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CosVal> cos{}; 
        namespace CosValC{
            constexpr Register::FieldValue<decltype(cos),CosVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cos),CosVal::v1> v1{};
        }
        ///Comparator INVERT
        enum class InvVal {
            v0=0x00000000,     ///<Does not invert the comparator output.
            v1=0x00000001,     ///<Inverts the comparator output.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,InvVal> inv{}; 
        namespace InvValC{
            constexpr Register::FieldValue<decltype(inv),InvVal::v0> v0{};
            constexpr Register::FieldValue<decltype(inv),InvVal::v1> v1{};
        }
        ///Power Mode Select
        enum class PmodeVal {
            v0=0x00000000,     ///<Low-Speed (LS) Comparison mode selected. In this mode, CMP has slower output propagation delay and lower current consumption.
            v1=0x00000001,     ///<High-Speed (HS) Comparison mode selected. In this mode, CMP has faster output propagation delay and higher current consumption.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PmodeVal> pmode{}; 
        namespace PmodeValC{
            constexpr Register::FieldValue<decltype(pmode),PmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pmode),PmodeVal::v1> v1{};
        }
        ///Trigger Mode Enable
        enum class TrigmVal {
            v0=0x00000000,     ///<Trigger mode is disabled.
            v1=0x00000001,     ///<Trigger mode is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,TrigmVal> trigm{}; 
        namespace TrigmValC{
            constexpr Register::FieldValue<decltype(trigm),TrigmVal::v0> v0{};
            constexpr Register::FieldValue<decltype(trigm),TrigmVal::v1> v1{};
        }
        ///Windowing Enable
        enum class WeVal {
            v0=0x00000000,     ///<Windowing mode is not selected.
            v1=0x00000001,     ///<Windowing mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WeVal> we{}; 
        namespace WeValC{
            constexpr Register::FieldValue<decltype(we),WeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(we),WeVal::v1> v1{};
        }
        ///Sample Enable
        enum class SeVal {
            v0=0x00000000,     ///<Sampling mode is not selected.
            v1=0x00000001,     ///<Sampling mode is selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SeVal> se{}; 
        namespace SeValC{
            constexpr Register::FieldValue<decltype(se),SeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(se),SeVal::v1> v1{};
        }
    }
    namespace Cmp0Fpr{    ///<CMP Filter Period Register
        using Addr = Register::Address<0x40073002,0xffffff00,0,unsigned char>;
        ///Filter Sample Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
        namespace FiltperValC{
        }
    }
    namespace Cmp0Scr{    ///<CMP Status and Control Register
        using Addr = Register::Address<0x40073003,0xffffffe0,0,unsigned char>;
        ///Analog Comparator Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cout{}; 
        namespace CoutValC{
        }
        ///Analog Comparator Flag Falling
        enum class CffVal {
            v0=0x00000000,     ///<Falling-edge on COUT has not been detected.
            v1=0x00000001,     ///<Falling-edge on COUT has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CffVal> cff{}; 
        namespace CffValC{
            constexpr Register::FieldValue<decltype(cff),CffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cff),CffVal::v1> v1{};
        }
        ///Analog Comparator Flag Rising
        enum class CfrVal {
            v0=0x00000000,     ///<Rising-edge on COUT has not been detected.
            v1=0x00000001,     ///<Rising-edge on COUT has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CfrVal> cfr{}; 
        namespace CfrValC{
            constexpr Register::FieldValue<decltype(cfr),CfrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cfr),CfrVal::v1> v1{};
        }
        ///Comparator Interrupt Enable Falling
        enum class IefVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IefVal> ief{}; 
        namespace IefValC{
            constexpr Register::FieldValue<decltype(ief),IefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ief),IefVal::v1> v1{};
        }
        ///Comparator Interrupt Enable Rising
        enum class IerVal {
            v0=0x00000000,     ///<Interrupt is disabled.
            v1=0x00000001,     ///<Interrupt is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IerVal> ier{}; 
        namespace IerValC{
            constexpr Register::FieldValue<decltype(ier),IerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ier),IerVal::v1> v1{};
        }
    }
    namespace Cmp0Daccr{    ///<DAC Control Register
        using Addr = Register::Address<0x40073004,0xffffff00,0,unsigned char>;
        ///DAC Output Voltage Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vosel{}; 
        namespace VoselValC{
        }
        ///Supply Voltage Reference Source Select
        enum class VrselVal {
            v0=0x00000000,     ///<V is selected as resistor ladder network supply reference V. in1 in
            v1=0x00000001,     ///<V is selected as resistor ladder network supply reference V. in2 in
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,VrselVal> vrsel{}; 
        namespace VrselValC{
            constexpr Register::FieldValue<decltype(vrsel),VrselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrsel),VrselVal::v1> v1{};
        }
        ///DAC Enable
        enum class DacenVal {
            v0=0x00000000,     ///<DAC is disabled.
            v1=0x00000001,     ///<DAC is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DacenVal> dacen{}; 
        namespace DacenValC{
            constexpr Register::FieldValue<decltype(dacen),DacenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dacen),DacenVal::v1> v1{};
        }
    }
    namespace Cmp0Muxcr{    ///<MUX Control Register
        using Addr = Register::Address<0x40073005,0xffffffc0,0,unsigned char>;
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
            constexpr Register::FieldValue<decltype(msel),MselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(msel),MselVal::v111> v111{};
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
            constexpr Register::FieldValue<decltype(psel),PselVal::v000> v000{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v001> v001{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v010> v010{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v011> v011{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v100> v100{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v101> v101{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v110> v110{};
            constexpr Register::FieldValue<decltype(psel),PselVal::v111> v111{};
        }
    }
}
