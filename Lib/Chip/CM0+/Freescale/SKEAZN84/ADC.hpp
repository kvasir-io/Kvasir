#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-digital converter
    namespace AdcSc1{    ///<Status and Control Register 1
        using Addr = Register::Address<0x4003b000,0xffffff00,0x00000000,unsigned>;
        ///Input Channel Select
        enum class AdchVal {
            v10110=0x00000016,     ///<Temperature Sensor
            v10111=0x00000017,     ///<Bandgap
            v11101=0x0000001d,     ///<VREFH
            v11110=0x0000001e,     ///<VREFL
            v11111=0x0000001f,     ///<Module disabled Reset FIFO in FIFO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,AdchVal> adch{}; 
        namespace AdchValC{
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v10110> v10110{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v10111> v10111{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v11101> v11101{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v11110> v11110{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v11111> v11111{};
        }
        ///Continuous Conversion Enable
        enum class AdcoVal {
            v0=0x00000000,     ///<One conversion following a write to the ADC_SC1 when software triggered operation is selected, or one conversion following assertion of ADHWT when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversion are triggered when ADC_SC2[ADTRG]=0 or both ADC_SC2[ADTRG]=1 and ADC_SC4[HTRGME]=1.
            v1=0x00000001,     ///<Continuous conversions are initiated following a write to ADC_SC1 when software triggered operation is selected. Continuous conversions are initiated by an ADHWT event when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are loop triggered.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AdcoVal> adco{}; 
        namespace AdcoValC{
            constexpr Register::FieldValue<decltype(adco)::Type,AdcoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adco)::Type,AdcoVal::v1> v1{};
        }
        ///Interrupt Enable
        enum class AienVal {
            v0=0x00000000,     ///<Conversion complete interrupt disabled.
            v1=0x00000001,     ///<Conversion complete interrupt enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AienVal> aien{}; 
        namespace AienValC{
            constexpr Register::FieldValue<decltype(aien)::Type,AienVal::v0> v0{};
            constexpr Register::FieldValue<decltype(aien)::Type,AienVal::v1> v1{};
        }
        ///Conversion Complete Flag
        enum class CocoVal {
            v0=0x00000000,     ///<Conversion not completed.
            v1=0x00000001,     ///<Conversion completed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,CocoVal> coco{}; 
        namespace CocoValC{
            constexpr Register::FieldValue<decltype(coco)::Type,CocoVal::v0> v0{};
            constexpr Register::FieldValue<decltype(coco)::Type,CocoVal::v1> v1{};
        }
    }
    namespace AdcSc2{    ///<Status and Control Register 2
        using Addr = Register::Address<0x4003b004,0xffffff00,0x00000000,unsigned>;
        ///Voltage Reference Selection
        enum class RefselVal {
            v00=0x00000000,     ///<Default voltage reference pin pair (VREFH/VREFL).
            v01=0x00000001,     ///<Analog supply pin pair (VDDA/VSSA).
            v11=0x00000003,     ///<Reserved - Selects default voltage reference (VREFH/VREFL) pin pair.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,RefselVal> refsel{}; 
        namespace RefselValC{
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::v00> v00{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::v01> v01{};
            constexpr Register::FieldValue<decltype(refsel)::Type,RefselVal::v11> v11{};
        }
        ///Result FIFO full
        enum class FfullVal {
            v0=0x00000000,     ///<Indicates that ADC result FIFO is not full and next conversion data still can be stored into FIFO.
            v1=0x00000001,     ///<Indicates that ADC result FIFO is full and next conversion will override old data in case of no read action.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FfullVal> ffull{}; 
        namespace FfullValC{
            constexpr Register::FieldValue<decltype(ffull)::Type,FfullVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ffull)::Type,FfullVal::v1> v1{};
        }
        ///Result FIFO empty
        enum class FemptyVal {
            v0=0x00000000,     ///<Indicates that ADC result FIFO have at least one valid new data.
            v1=0x00000001,     ///<Indicates that ADC result FIFO have no valid new data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FemptyVal> fempty{}; 
        namespace FemptyValC{
            constexpr Register::FieldValue<decltype(fempty)::Type,FemptyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fempty)::Type,FemptyVal::v1> v1{};
        }
        ///Compare Function Greater Than Enable
        enum class AcfgtVal {
            v0=0x00000000,     ///<Compare triggers when input is less than compare level.
            v1=0x00000001,     ///<Compare triggers when input is greater than or equal to compare level.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AcfgtVal> acfgt{}; 
        namespace AcfgtValC{
            constexpr Register::FieldValue<decltype(acfgt)::Type,AcfgtVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acfgt)::Type,AcfgtVal::v1> v1{};
        }
        ///Compare Function Enable
        enum class AcfeVal {
            v0=0x00000000,     ///<Compare function disabled.
            v1=0x00000001,     ///<Compare function enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AcfeVal> acfe{}; 
        namespace AcfeValC{
            constexpr Register::FieldValue<decltype(acfe)::Type,AcfeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acfe)::Type,AcfeVal::v1> v1{};
        }
        ///Conversion Trigger Select
        enum class AdtrgVal {
            v0=0x00000000,     ///<Software trigger selected.
            v1=0x00000001,     ///<Hardware trigger selected.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AdtrgVal> adtrg{}; 
        namespace AdtrgValC{
            constexpr Register::FieldValue<decltype(adtrg)::Type,AdtrgVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adtrg)::Type,AdtrgVal::v1> v1{};
        }
        ///Conversion Active
        enum class AdactVal {
            v0=0x00000000,     ///<Conversion not in progress.
            v1=0x00000001,     ///<Conversion in progress.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,AdactVal> adact{}; 
        namespace AdactValC{
            constexpr Register::FieldValue<decltype(adact)::Type,AdactVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adact)::Type,AdactVal::v1> v1{};
        }
    }
    namespace AdcSc3{    ///<Status and Control Register 3
        using Addr = Register::Address<0x4003b008,0xffffff00,0x00000000,unsigned>;
        ///Input Clock Select
        enum class AdiclkVal {
            v00=0x00000000,     ///<Bus clock
            v01=0x00000001,     ///<Bus clock divided by 2
            v10=0x00000002,     ///<Alternate clock (ALTCLK)
            v11=0x00000003,     ///<Asynchronous clock (ADACK)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,AdiclkVal> adiclk{}; 
        namespace AdiclkValC{
            constexpr Register::FieldValue<decltype(adiclk)::Type,AdiclkVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adiclk)::Type,AdiclkVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adiclk)::Type,AdiclkVal::v10> v10{};
            constexpr Register::FieldValue<decltype(adiclk)::Type,AdiclkVal::v11> v11{};
        }
        ///Conversion Mode Selection
        enum class ModeVal {
            v00=0x00000000,     ///<8-bit conversion (N = 8)
            v01=0x00000001,     ///<10-bit conversion (N = 10)
            v10=0x00000002,     ///<12-bit conversion (N = 12)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v10> v10{};
        }
        ///Long Sample Time Configuration
        enum class AdlsmpVal {
            v0=0x00000000,     ///<Short sample time.
            v1=0x00000001,     ///<Long sample time.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AdlsmpVal> adlsmp{}; 
        namespace AdlsmpValC{
            constexpr Register::FieldValue<decltype(adlsmp)::Type,AdlsmpVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adlsmp)::Type,AdlsmpVal::v1> v1{};
        }
        ///Clock Divide Select
        enum class AdivVal {
            v00=0x00000000,     ///<Divide ration = 1, and clock rate = Input clock.
            v01=0x00000001,     ///<Divide ration = 2, and clock rate = Input clock * 2.
            v10=0x00000002,     ///<Divide ration = 3, and clock rate = Input clock * 4.
            v11=0x00000003,     ///<Divide ration = 4, and clock rate = Input clock * 8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,AdivVal> adiv{}; 
        namespace AdivValC{
            constexpr Register::FieldValue<decltype(adiv)::Type,AdivVal::v00> v00{};
            constexpr Register::FieldValue<decltype(adiv)::Type,AdivVal::v01> v01{};
            constexpr Register::FieldValue<decltype(adiv)::Type,AdivVal::v10> v10{};
            constexpr Register::FieldValue<decltype(adiv)::Type,AdivVal::v11> v11{};
        }
        ///Low-Power Configuration
        enum class AdlpcVal {
            v0=0x00000000,     ///<High speed configuration.
            v1=0x00000001,     ///<Low power configuration:The power is reduced at the expense of maximum clock speed.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdlpcVal> adlpc{}; 
        namespace AdlpcValC{
            constexpr Register::FieldValue<decltype(adlpc)::Type,AdlpcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adlpc)::Type,AdlpcVal::v1> v1{};
        }
    }
    namespace AdcSc4{    ///<Status and Control Register 4
        using Addr = Register::Address<0x4003b00c,0xfffffe98,0x00000000,unsigned>;
        ///no description available
        enum class AfdepVal {
            v000=0x00000000,     ///<FIFO is disabled.
            v001=0x00000001,     ///<2-level FIFO is enabled.
            v010=0x00000002,     ///<3-level FIFO is enabled..
            v011=0x00000003,     ///<4-level FIFO is enabled.
            v100=0x00000004,     ///<5-level FIFO is enabled.
            v101=0x00000005,     ///<6-level FIFO is enabled.
            v110=0x00000006,     ///<7-level FIFO is enabled.
            v111=0x00000007,     ///<8-level FIFO is enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,AfdepVal> afdep{}; 
        namespace AfdepValC{
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v000> v000{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v001> v001{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v010> v010{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v011> v011{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v100> v100{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v101> v101{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v110> v110{};
            constexpr Register::FieldValue<decltype(afdep)::Type,AfdepVal::v111> v111{};
        }
        ///no description available
        enum class AcfselVal {
            v0=0x00000000,     ///<OR all of compare trigger.
            v1=0x00000001,     ///<AND all of compare trigger.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,AcfselVal> acfsel{}; 
        namespace AcfselValC{
            constexpr Register::FieldValue<decltype(acfsel)::Type,AcfselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acfsel)::Type,AcfselVal::v1> v1{};
        }
        ///FIFO Scan Mode Enable
        enum class AscaneVal {
            v0=0x00000000,     ///<FIFO scan mode disabled.
            v1=0x00000001,     ///<FIFO scan mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AscaneVal> ascane{}; 
        namespace AscaneValC{
            constexpr Register::FieldValue<decltype(ascane)::Type,AscaneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ascane)::Type,AscaneVal::v1> v1{};
        }
        ///Hardware Trigger Multiple Conversion Enable
        enum class HtrgmeVal {
            v0=0x00000000,     ///<One hardware trigger pulse triggers one conversion.
            v1=0x00000001,     ///<One hardware trigger pulse triggers multiple conversions in fifo mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,HtrgmeVal> htrgme{}; 
        namespace HtrgmeValC{
            constexpr Register::FieldValue<decltype(htrgme)::Type,HtrgmeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(htrgme)::Type,HtrgmeVal::v1> v1{};
        }
    }
    namespace AdcR{    ///<Conversion Result Register
        using Addr = Register::Address<0x4003b010,0xfffff000,0x00000000,unsigned>;
        ///Conversion Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
    }
    namespace AdcCv{    ///<Compare Value Register
        using Addr = Register::Address<0x4003b014,0xfffff000,0x00000000,unsigned>;
        ///Conversion Result[11:0]
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> cv{}; 
    }
    namespace AdcApctl1{    ///<Pin Control 1 Register
        using Addr = Register::Address<0x4003b018,0xffff0000,0x00000000,unsigned>;
        ///ADC Pin Control
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> adpc{}; 
    }
    namespace AdcSc5{    ///<Status and Control Register 5
        using Addr = Register::Address<0x4003b01c,0xfffffffc,0x00000000,unsigned>;
        ///Hardware Trigger Mask Mode Select
        enum class HtrgmaskselVal {
            v0=0x00000000,     ///<Hardware trigger mask with HTRGMASKE.
            v1=0x00000001,     ///<Hardware trigger mask automatically when data fifo is not empty.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,HtrgmaskselVal> htrgmasksel{}; 
        namespace HtrgmaskselValC{
            constexpr Register::FieldValue<decltype(htrgmasksel)::Type,HtrgmaskselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(htrgmasksel)::Type,HtrgmaskselVal::v1> v1{};
        }
        ///Hardware Trigger Mask Enable
        enum class HtrgmaskeVal {
            v0=0x00000000,     ///<Hardware trigger mask disable.
            v1=0x00000001,     ///<Hardware trigger mask enable and hardware trigger cannot trigger ADC conversion..
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,HtrgmaskeVal> htrgmaske{}; 
        namespace HtrgmaskeValC{
            constexpr Register::FieldValue<decltype(htrgmaske)::Type,HtrgmaskeVal::v0> v0{};
            constexpr Register::FieldValue<decltype(htrgmaske)::Type,HtrgmaskeVal::v1> v1{};
        }
    }
}
