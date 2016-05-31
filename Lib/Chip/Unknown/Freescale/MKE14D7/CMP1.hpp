#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//High-Speed Comparator (CMP), Voltage Reference (VREF) Digital-to-Analog Converter (DAC), and Analog Mux (ANMUX)
    namespace Cmp1Cr0{    ///<CMP Control Register 0
        using Addr = Register::Address<0x40051000,0xffffff00,0x00000000,unsigned char>;
        ///Comparator hard block hysteresis control
        enum class HystctrVal {
            v0=0x00000000,     ///<Level 0
            v1=0x00000001,     ///<Level 1
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HystctrVal> hystctr{}; 
        namespace HystctrValC{
            constexpr Register::FieldValue<decltype(hystctr)::Type,HystctrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(hystctr)::Type,HystctrVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Filter Sample Count
        enum class FiltercntVal {
            v000=0x00000000,     ///<Filter is disabled. If SE = 1, then COUT is a logic zero (this is not a legal state, and is not recommended). If SE = 0, COUT = COUTA.
            v001=0x00000001,     ///<1 consecutive sample must agree (comparator output is simply sampled).
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Cmp1Cr1{    ///<CMP Control Register 1
        using Addr = Register::Address<0x40051001,0xffffff00,0x00000000,unsigned char>;
        ///Comparator Module Enable
        enum class EnVal {
            v0=0x00000000,     ///<Analog Comparator disabled.
            v1=0x00000001,     ///<Analog Comparator enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,EnVal> en{}; 
        namespace EnValC{
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v0> v0{};
            constexpr Register::FieldValue<decltype(en)::Type,EnVal::v1> v1{};
        }
        ///Comparator Output Pin Enable
        enum class OpeVal {
            v0=0x00000000,     ///<The comparator output (CMPO) is not available on the associated CMPO output pin. The pin is available for use by other on-chip functions.
            v1=0x00000001,     ///<The comparator output (CMPO) is available on the associated CMPO output pin. The comparator output (CMPO) is driven out on the associated CMPO output pin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,OpeVal> ope{}; 
        namespace OpeValC{
            constexpr Register::FieldValue<decltype(ope)::Type,OpeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ope)::Type,OpeVal::v1> v1{};
        }
        ///Comparator Output Select
        enum class CosVal {
            v0=0x00000000,     ///<Set CMPO to equal COUT (filtered comparator output).
            v1=0x00000001,     ///<Set CMPO to equal COUTA (unfiltered comparator output).
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CosVal> cos{}; 
        namespace CosValC{
            constexpr Register::FieldValue<decltype(cos)::Type,CosVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cos)::Type,CosVal::v1> v1{};
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
        ///Power Mode Select
        enum class PmodeVal {
            v0=0x00000000,     ///<Low Speed (LS) comparison mode selected.
            v1=0x00000001,     ///<High Speed (HS) comparison mode selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,PmodeVal> pmode{}; 
        namespace PmodeValC{
            constexpr Register::FieldValue<decltype(pmode)::Type,PmodeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(pmode)::Type,PmodeVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Windowing Enable
        enum class WeVal {
            v0=0x00000000,     ///<Windowing mode not selected.
            v1=0x00000001,     ///<Windowing mode selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,WeVal> we{}; 
        namespace WeValC{
            constexpr Register::FieldValue<decltype(we)::Type,WeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(we)::Type,WeVal::v1> v1{};
        }
        ///Sample Enable
        enum class SeVal {
            v0=0x00000000,     ///<Sampling mode not selected.
            v1=0x00000001,     ///<Sampling mode selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,SeVal> se{}; 
        namespace SeValC{
            constexpr Register::FieldValue<decltype(se)::Type,SeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(se)::Type,SeVal::v1> v1{};
        }
    }
    namespace Cmp1Fpr{    ///<CMP Filter Period Register
        using Addr = Register::Address<0x40051002,0xffffff00,0x00000000,unsigned char>;
        ///Filter Sample Period
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> filtPer{}; 
    }
    namespace Cmp1Scr{    ///<CMP Status and Control Register
        using Addr = Register::Address<0x40051003,0xffffff00,0x00000000,unsigned char>;
        ///Analog Comparator Output
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> cout{}; 
        ///Analog Comparator Flag Falling
        enum class CffVal {
            v0=0x00000000,     ///<Falling edge on COUT has not been detected.
            v1=0x00000001,     ///<Falling edge on COUT has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,CffVal> cff{}; 
        namespace CffValC{
            constexpr Register::FieldValue<decltype(cff)::Type,CffVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cff)::Type,CffVal::v1> v1{};
        }
        ///Analog Comparator Flag Rising
        enum class CfrVal {
            v0=0x00000000,     ///<Rising edge on COUT has not been detected.
            v1=0x00000001,     ///<Rising edge on COUT has occurred.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,CfrVal> cfr{}; 
        namespace CfrValC{
            constexpr Register::FieldValue<decltype(cfr)::Type,CfrVal::v0> v0{};
            constexpr Register::FieldValue<decltype(cfr)::Type,CfrVal::v1> v1{};
        }
        ///Comparator Interrupt Enable Falling
        enum class IefVal {
            v0=0x00000000,     ///<Interrupt disabled.
            v1=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,IefVal> ief{}; 
        namespace IefValC{
            constexpr Register::FieldValue<decltype(ief)::Type,IefVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ief)::Type,IefVal::v1> v1{};
        }
        ///Comparator Interrupt Enable Rising
        enum class IerVal {
            v0=0x00000000,     ///<Interrupt disabled.
            v1=0x00000001,     ///<Interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,IerVal> ier{}; 
        namespace IerValC{
            constexpr Register::FieldValue<decltype(ier)::Type,IerVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ier)::Type,IerVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///DMA Enable Control
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA disabled.
            v1=0x00000001,     ///<DMA enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Cmp1Daccr{    ///<DAC Control Register
        using Addr = Register::Address<0x40051004,0xffffff00,0x00000000,unsigned char>;
        ///DAC Output Voltage Select
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,0),Register::ReadWriteAccess,unsigned> vosel{}; 
        ///Supply Voltage Reference Source Select
        enum class VrselVal {
            v0=0x00000000,     ///<Vin1 is selected as resistor ladder network supply reference Vin.
            v1=0x00000001,     ///<Vin2 is selected as resistor ladder network supply reference Vin.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,VrselVal> vrsel{}; 
        namespace VrselValC{
            constexpr Register::FieldValue<decltype(vrsel)::Type,VrselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(vrsel)::Type,VrselVal::v1> v1{};
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
    namespace Cmp1Muxcr{    ///<MUX Control Register
        using Addr = Register::Address<0x40051005,0xffffff00,0x00000000,unsigned char>;
        ///Minus Input MUX Control
        enum class MselVal {
            v00=0x00000000,     ///<IN0
            v01=0x00000001,     ///<IN1
            v10=0x00000002,     ///<IN2
            v11=0x00000003,     ///<6-bit DAC output is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,MselVal> msel{}; 
        namespace MselValC{
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(msel)::Type,MselVal::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Plus Input MUX Control
        enum class PselVal {
            v00=0x00000000,     ///<IN0
            v01=0x00000001,     ///<IN1
            v10=0x00000002,     ///<IN2
            v11=0x00000003,     ///<6-bit DAC output is selected
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,PselVal> psel{}; 
        namespace PselValC{
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v10> v10{};
            constexpr Register::FieldValue<decltype(psel)::Type,PselVal::v11> v11{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Cmp1Muxpe{    ///<MUX Pin Enable Register
        using Addr = Register::Address<0x40051006,0xffffff00,0x00000000,unsigned char>;
        ///Positive Input Pin Enable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> inpe{}; 
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
