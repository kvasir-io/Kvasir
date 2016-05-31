#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Analog-to-digital converter
    namespace Adc1Sc1{    ///<Status and Control Register 1
        using Addr = Register::Address<0x4003c000,0xffff0000,0x00000000,unsigned>;
        ///Input Channel Select
        enum class AdchVal {
            v00000=0x00000000,     ///<AD0
            v00001=0x00000001,     ///<AD1
            v00010=0x00000002,     ///<AD2
            v00011=0x00000003,     ///<AD3
            v00100=0x00000004,     ///<AD4
            v00101=0x00000005,     ///<AD5
            v00110=0x00000006,     ///<AD6
            v00111=0x00000007,     ///<AD7
            v01000=0x00000008,     ///<AD8
            v01001=0x00000009,     ///<AD9
            v01010=0x0000000a,     ///<AD10
            v01011=0x0000000b,     ///<AD11
            v11111=0x0000001f,     ///<Module disabled Reset FIFO in FIFO mode.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,AdchVal> adch{}; 
        namespace AdchValC{
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00000> v00000{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00001> v00001{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00010> v00010{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00011> v00011{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00100> v00100{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00101> v00101{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00110> v00110{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v00111> v00111{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v01000> v01000{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v01001> v01001{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v01010> v01010{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v01011> v01011{};
            constexpr Register::FieldValue<decltype(adch)::Type,AdchVal::v11111> v11111{};
        }
        ///Continuous Conversion Enable
        enum class AdcoVal {
            v0=0x00000000,     ///<One conversion following a write to the ADCSC1 when software triggered operation is selected, or one conversion following assertion of ADHWT when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are triggerd.
            v1=0x00000001,     ///<Continuous conversions initiated following a write to ADCSC1 when software triggered operation is selected. Continuous conversions are initiated by an ADHWT event when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are loop triggered.
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Adc1Sc2{    ///<Status and Control Register 2
        using Addr = Register::Address<0x4003c002,0xffff0000,0x00000000,unsigned>;
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
        ///Result FIFO full
        enum class FfullVal {
            v0=0x00000000,     ///<Indicates that ADC result fifo is not full and next conversion data still can be stored into fifo.
            v1=0x00000001,     ///<Indicates that ADC result fifo is full and next conversion will override old data if no read action.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FfullVal> ffull{}; 
        namespace FfullValC{
            constexpr Register::FieldValue<decltype(ffull)::Type,FfullVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ffull)::Type,FfullVal::v1> v1{};
        }
        ///Result FIFO empty
        enum class FemptyVal {
            v0=0x00000000,     ///<Indicates that ADC result fifo have at least one valid new data.
            v1=0x00000001,     ///<Indicates that ADC result fifo have no valid new data.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,FemptyVal> fempty{}; 
        namespace FemptyValC{
            constexpr Register::FieldValue<decltype(fempty)::Type,FemptyVal::v0> v0{};
            constexpr Register::FieldValue<decltype(fempty)::Type,FemptyVal::v1> v1{};
        }
        ///Compare Data Selection
        enum class AcdselVal {
            v0=0x00000000,     ///<Compare value is from the conversion result and ADC_CVA.
            v1=0x00000001,     ///<Compare value is from the conversion result and ADC_CVB.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,AcdselVal> acdsel{}; 
        namespace AcdselValC{
            constexpr Register::FieldValue<decltype(acdsel)::Type,AcdselVal::v0> v0{};
            constexpr Register::FieldValue<decltype(acdsel)::Type,AcdselVal::v1> v1{};
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
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Adc1Sc3{    ///<Status and Control Register 3
        using Addr = Register::Address<0x4003c004,0xffff0000,0x00000000,unsigned>;
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
            v00=0x00000000,     ///<8-bit conversion (N=8)
            v01=0x00000001,     ///<10-bit conversion (N=10)
            v10=0x00000002,     ///<12-bit conversion (N=12)
            v11=0x00000003,     ///<Reserved
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v00> v00{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v01> v01{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v10> v10{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::v11> v11{};
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
            v1=0x00000001,     ///<Low power configuration:The power is reduced at the expense of maximum clock speed..
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,AdlpcVal> adlpc{}; 
        namespace AdlpcValC{
            constexpr Register::FieldValue<decltype(adlpc)::Type,AdlpcVal::v0> v0{};
            constexpr Register::FieldValue<decltype(adlpc)::Type,AdlpcVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Adc1Sc4{    ///<Status and Control Register 4
        using Addr = Register::Address<0x4003c006,0xffff0000,0x00000000,unsigned>;
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
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
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
        ///no description available
        enum class AscaneVal {
            v0=0x00000000,     ///<FIFO scan mode disabled.
            v1=0x00000001,     ///<FIFO scan mode enabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,AscaneVal> ascane{}; 
        namespace AscaneValC{
            constexpr Register::FieldValue<decltype(ascane)::Type,AscaneVal::v0> v0{};
            constexpr Register::FieldValue<decltype(ascane)::Type,AscaneVal::v1> v1{};
        }
        ///DMA Enable
        enum class DmaenVal {
            v0=0x00000000,     ///<DMA read request is disabled.
            v1=0x00000001,     ///<DMA read request is enabled, the conversion complete flag will assert the DMA request signal.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,DmaenVal> dmaen{}; 
        namespace DmaenValC{
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v0> v0{};
            constexpr Register::FieldValue<decltype(dmaen)::Type,DmaenVal::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
    namespace Adc1R{    ///<Conversion Result Register
        using Addr = Register::Address<0x4003c008,0xffff0000,0x00000000,unsigned>;
        ///Conversion Result
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> adr{}; 
    }
    namespace Adc1Cva{    ///<Compare Value Register A
        using Addr = Register::Address<0x4003c00a,0xffff0000,0x00000000,unsigned>;
        ///Lower limit compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> va{}; 
    }
    namespace Adc1Cvb{    ///<Compare Value Register B
        using Addr = Register::Address<0x4003c00c,0xffff0000,0x00000000,unsigned>;
        ///Upper limit compare value
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vb{}; 
    }
    namespace Adc1Apctl{    ///<Pin Control Register
        using Addr = Register::Address<0x4003c00e,0xffff0000,0x00000000,unsigned>;
        ///ADC Pin Control 0
        enum class Adpc0Val {
            v0=0x00000000,     ///<AD0 pin I/O control enabled.
            v1=0x00000001,     ///<AD0 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adpc0Val> adpc0{}; 
        namespace Adpc0ValC{
            constexpr Register::FieldValue<decltype(adpc0)::Type,Adpc0Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc0)::Type,Adpc0Val::v1> v1{};
        }
        ///ADC Pin Control 1
        enum class Adpc1Val {
            v0=0x00000000,     ///<AD1 pin I/O control enabled.
            v1=0x00000001,     ///<AD1 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adpc1Val> adpc1{}; 
        namespace Adpc1ValC{
            constexpr Register::FieldValue<decltype(adpc1)::Type,Adpc1Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc1)::Type,Adpc1Val::v1> v1{};
        }
        ///ADC Pin Control 2
        enum class Adpc2Val {
            v0=0x00000000,     ///<AD2 pin I/O control enabled.
            v1=0x00000001,     ///<AD2 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adpc2Val> adpc2{}; 
        namespace Adpc2ValC{
            constexpr Register::FieldValue<decltype(adpc2)::Type,Adpc2Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc2)::Type,Adpc2Val::v1> v1{};
        }
        ///ADC Pin Control 3
        enum class Adpc3Val {
            v0=0x00000000,     ///<AD3 pin I/O control enabled.
            v1=0x00000001,     ///<AD3 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adpc3Val> adpc3{}; 
        namespace Adpc3ValC{
            constexpr Register::FieldValue<decltype(adpc3)::Type,Adpc3Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc3)::Type,Adpc3Val::v1> v1{};
        }
        ///ADC Pin Control 4
        enum class Adpc4Val {
            v0=0x00000000,     ///<AD4 pin I/O control enabled.
            v1=0x00000001,     ///<AD4 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adpc4Val> adpc4{}; 
        namespace Adpc4ValC{
            constexpr Register::FieldValue<decltype(adpc4)::Type,Adpc4Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc4)::Type,Adpc4Val::v1> v1{};
        }
        ///ADC Pin Control 5
        enum class Adpc5Val {
            v0=0x00000000,     ///<AD5 pin I/O control enabled.
            v1=0x00000001,     ///<AD5 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adpc5Val> adpc5{}; 
        namespace Adpc5ValC{
            constexpr Register::FieldValue<decltype(adpc5)::Type,Adpc5Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc5)::Type,Adpc5Val::v1> v1{};
        }
        ///ADC Pin Control 6
        enum class Adpc6Val {
            v0=0x00000000,     ///<AD6 pin I/O control enabled.
            v1=0x00000001,     ///<AD6 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adpc6Val> adpc6{}; 
        namespace Adpc6ValC{
            constexpr Register::FieldValue<decltype(adpc6)::Type,Adpc6Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc6)::Type,Adpc6Val::v1> v1{};
        }
        ///ADC Pin Control 7
        enum class Adpc7Val {
            v0=0x00000000,     ///<AD7 pin I/O control enabled.
            v1=0x00000001,     ///<AD7 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adpc7Val> adpc7{}; 
        namespace Adpc7ValC{
            constexpr Register::FieldValue<decltype(adpc7)::Type,Adpc7Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc7)::Type,Adpc7Val::v1> v1{};
        }
        ///ADC Pin Control 8
        enum class Adpc8Val {
            v0=0x00000000,     ///<AD8 pin I/O control enabled.
            v1=0x00000001,     ///<AD8 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Adpc8Val> adpc8{}; 
        namespace Adpc8ValC{
            constexpr Register::FieldValue<decltype(adpc8)::Type,Adpc8Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc8)::Type,Adpc8Val::v1> v1{};
        }
        ///ADC Pin Control 9
        enum class Adpc9Val {
            v0=0x00000000,     ///<AD9 pin I/O control enabled.
            v1=0x00000001,     ///<AD9 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Adpc9Val> adpc9{}; 
        namespace Adpc9ValC{
            constexpr Register::FieldValue<decltype(adpc9)::Type,Adpc9Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc9)::Type,Adpc9Val::v1> v1{};
        }
        ///ADC Pin Control 10
        enum class Adpc10Val {
            v0=0x00000000,     ///<AD10 pin I/O control enabled.
            v1=0x00000001,     ///<AD10 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Adpc10Val> adpc10{}; 
        namespace Adpc10ValC{
            constexpr Register::FieldValue<decltype(adpc10)::Type,Adpc10Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc10)::Type,Adpc10Val::v1> v1{};
        }
        ///ADC Pin Control 11
        enum class Adpc11Val {
            v0=0x00000000,     ///<AD11 pin I/O control enabled.
            v1=0x00000001,     ///<AD11 pin I/O control disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Adpc11Val> adpc11{}; 
        namespace Adpc11ValC{
            constexpr Register::FieldValue<decltype(adpc11)::Type,Adpc11Val::v0> v0{};
            constexpr Register::FieldValue<decltype(adpc11)::Type,Adpc11Val::v1> v1{};
        }
        ///no description available
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,12),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> reserved{}; 
    }
}
