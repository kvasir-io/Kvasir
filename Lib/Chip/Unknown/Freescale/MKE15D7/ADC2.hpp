#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-digital converter
    namespace Adc2Sc1{    ///<Status and Control Register 1
        using Addr = Register::Address<0x4003d000,0xffffff00,0,unsigned>;
        ///Input Channel Select
        enum class adchVal {
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
        namespace adchValC{
            constexpr MPL::Value<adchVal,adchVal::v00000> v00000{};
            constexpr MPL::Value<adchVal,adchVal::v00001> v00001{};
            constexpr MPL::Value<adchVal,adchVal::v00010> v00010{};
            constexpr MPL::Value<adchVal,adchVal::v00011> v00011{};
            constexpr MPL::Value<adchVal,adchVal::v00100> v00100{};
            constexpr MPL::Value<adchVal,adchVal::v00101> v00101{};
            constexpr MPL::Value<adchVal,adchVal::v00110> v00110{};
            constexpr MPL::Value<adchVal,adchVal::v00111> v00111{};
            constexpr MPL::Value<adchVal,adchVal::v01000> v01000{};
            constexpr MPL::Value<adchVal,adchVal::v01001> v01001{};
            constexpr MPL::Value<adchVal,adchVal::v01010> v01010{};
            constexpr MPL::Value<adchVal,adchVal::v01011> v01011{};
            constexpr MPL::Value<adchVal,adchVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,adchVal> adch{}; 
        ///Continuous Conversion Enable
        enum class adcoVal {
            v0=0x00000000,     ///<One conversion following a write to the ADCSC1 when software triggered operation is selected, or one conversion following assertion of ADHWT when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are triggerd.
            v1=0x00000001,     ///<Continuous conversions initiated following a write to ADCSC1 when software triggered operation is selected. Continuous conversions are initiated by an ADHWT event when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are loop triggered.
        };
        namespace adcoValC{
            constexpr MPL::Value<adcoVal,adcoVal::v0> v0{};
            constexpr MPL::Value<adcoVal,adcoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,adcoVal> adco{}; 
        ///Interrupt Enable
        enum class aienVal {
            v0=0x00000000,     ///<Conversion complete interrupt disabled.
            v1=0x00000001,     ///<Conversion complete interrupt enabled.
        };
        namespace aienValC{
            constexpr MPL::Value<aienVal,aienVal::v0> v0{};
            constexpr MPL::Value<aienVal,aienVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,aienVal> aien{}; 
        ///Conversion Complete Flag
        enum class cocoVal {
            v0=0x00000000,     ///<Conversion not completed.
            v1=0x00000001,     ///<Conversion completed.
        };
        namespace cocoValC{
            constexpr MPL::Value<cocoVal,cocoVal::v0> v0{};
            constexpr MPL::Value<cocoVal,cocoVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,cocoVal> coco{}; 
    }
    namespace Adc2Sc2{    ///<Status and Control Register 2
        using Addr = Register::Address<0x4003d002,0xffffff03,0,unsigned>;
        ///Result FIFO full
        enum class ffullVal {
            v0=0x00000000,     ///<Indicates that ADC result fifo is not full and next conversion data still can be stored into fifo.
            v1=0x00000001,     ///<Indicates that ADC result fifo is full and next conversion will override old data if no read action.
        };
        namespace ffullValC{
            constexpr MPL::Value<ffullVal,ffullVal::v0> v0{};
            constexpr MPL::Value<ffullVal,ffullVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ffullVal> ffull{}; 
        ///Result FIFO empty
        enum class femptyVal {
            v0=0x00000000,     ///<Indicates that ADC result fifo have at least one valid new data.
            v1=0x00000001,     ///<Indicates that ADC result fifo have no valid new data.
        };
        namespace femptyValC{
            constexpr MPL::Value<femptyVal,femptyVal::v0> v0{};
            constexpr MPL::Value<femptyVal,femptyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,femptyVal> fempty{}; 
        ///Compare Data Selection
        enum class acdselVal {
            v0=0x00000000,     ///<Compare value is from the conversion result and ADC_CVA.
            v1=0x00000001,     ///<Compare value is from the conversion result and ADC_CVB.
        };
        namespace acdselValC{
            constexpr MPL::Value<acdselVal,acdselVal::v0> v0{};
            constexpr MPL::Value<acdselVal,acdselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,acdselVal> acdsel{}; 
        ///Compare Function Enable
        enum class acfeVal {
            v0=0x00000000,     ///<Compare function disabled.
            v1=0x00000001,     ///<Compare function enabled.
        };
        namespace acfeValC{
            constexpr MPL::Value<acfeVal,acfeVal::v0> v0{};
            constexpr MPL::Value<acfeVal,acfeVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,acfeVal> acfe{}; 
        ///Conversion Trigger Select
        enum class adtrgVal {
            v0=0x00000000,     ///<Software trigger selected.
            v1=0x00000001,     ///<Hardware trigger selected.
        };
        namespace adtrgValC{
            constexpr MPL::Value<adtrgVal,adtrgVal::v0> v0{};
            constexpr MPL::Value<adtrgVal,adtrgVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adtrgVal> adtrg{}; 
        ///Conversion Active
        enum class adactVal {
            v0=0x00000000,     ///<Conversion not in progress.
            v1=0x00000001,     ///<Conversion in progress.
        };
        namespace adactValC{
            constexpr MPL::Value<adactVal,adactVal::v0> v0{};
            constexpr MPL::Value<adactVal,adactVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adactVal> adact{}; 
    }
    namespace Adc2Sc3{    ///<Status and Control Register 3
        using Addr = Register::Address<0x4003d004,0xffffff00,0,unsigned>;
        ///Input Clock Select
        enum class adiclkVal {
            v00=0x00000000,     ///<Bus clock
            v01=0x00000001,     ///<Bus clock divided by 2
            v10=0x00000002,     ///<Alternate clock (ALTCLK)
            v11=0x00000003,     ///<Asynchronous clock (ADACK)
        };
        namespace adiclkValC{
            constexpr MPL::Value<adiclkVal,adiclkVal::v00> v00{};
            constexpr MPL::Value<adiclkVal,adiclkVal::v01> v01{};
            constexpr MPL::Value<adiclkVal,adiclkVal::v10> v10{};
            constexpr MPL::Value<adiclkVal,adiclkVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,adiclkVal> adiclk{}; 
        ///Conversion Mode Selection
        enum class modeVal {
            v00=0x00000000,     ///<8-bit conversion (N=8)
            v01=0x00000001,     ///<10-bit conversion (N=10)
            v10=0x00000002,     ///<12-bit conversion (N=12)
            v11=0x00000003,     ///<Reserved
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::v00> v00{};
            constexpr MPL::Value<modeVal,modeVal::v01> v01{};
            constexpr MPL::Value<modeVal,modeVal::v10> v10{};
            constexpr MPL::Value<modeVal,modeVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,modeVal> mode{}; 
        ///Long Sample Time Configuration
        enum class adlsmpVal {
            v0=0x00000000,     ///<Short sample time.
            v1=0x00000001,     ///<Long sample time.
        };
        namespace adlsmpValC{
            constexpr MPL::Value<adlsmpVal,adlsmpVal::v0> v0{};
            constexpr MPL::Value<adlsmpVal,adlsmpVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adlsmpVal> adlsmp{}; 
        ///Clock Divide Select
        enum class adivVal {
            v00=0x00000000,     ///<Divide ration = 1, and clock rate = Input clock.
            v01=0x00000001,     ///<Divide ration = 2, and clock rate = Input clock * 2.
            v10=0x00000002,     ///<Divide ration = 3, and clock rate = Input clock * 4.
            v11=0x00000003,     ///<Divide ration = 4, and clock rate = Input clock * 8.
        };
        namespace adivValC{
            constexpr MPL::Value<adivVal,adivVal::v00> v00{};
            constexpr MPL::Value<adivVal,adivVal::v01> v01{};
            constexpr MPL::Value<adivVal,adivVal::v10> v10{};
            constexpr MPL::Value<adivVal,adivVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,5),Register::ReadWriteAccess,adivVal> adiv{}; 
        ///Low-Power Configuration
        enum class adlpcVal {
            v0=0x00000000,     ///<High speed configuration.
            v1=0x00000001,     ///<Low power configuration:The power is reduced at the expense of maximum clock speed..
        };
        namespace adlpcValC{
            constexpr MPL::Value<adlpcVal,adlpcVal::v0> v0{};
            constexpr MPL::Value<adlpcVal,adlpcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adlpcVal> adlpc{}; 
    }
    namespace Adc2Sc4{    ///<Status and Control Register 4
        using Addr = Register::Address<0x4003d006,0xffffff18,0,unsigned>;
        ///no description available
        enum class afdepVal {
            v000=0x00000000,     ///<FIFO is disabled.
            v001=0x00000001,     ///<2-level FIFO is enabled.
            v010=0x00000002,     ///<3-level FIFO is enabled..
            v011=0x00000003,     ///<4-level FIFO is enabled.
            v100=0x00000004,     ///<5-level FIFO is enabled.
            v101=0x00000005,     ///<6-level FIFO is enabled.
            v110=0x00000006,     ///<7-level FIFO is enabled.
            v111=0x00000007,     ///<8-level FIFO is enabled.
        };
        namespace afdepValC{
            constexpr MPL::Value<afdepVal,afdepVal::v000> v000{};
            constexpr MPL::Value<afdepVal,afdepVal::v001> v001{};
            constexpr MPL::Value<afdepVal,afdepVal::v010> v010{};
            constexpr MPL::Value<afdepVal,afdepVal::v011> v011{};
            constexpr MPL::Value<afdepVal,afdepVal::v100> v100{};
            constexpr MPL::Value<afdepVal,afdepVal::v101> v101{};
            constexpr MPL::Value<afdepVal,afdepVal::v110> v110{};
            constexpr MPL::Value<afdepVal,afdepVal::v111> v111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,afdepVal> afdep{}; 
        ///no description available
        enum class acfselVal {
            v0=0x00000000,     ///<OR all of compare trigger.
            v1=0x00000001,     ///<AND all of compare trigger.
        };
        namespace acfselValC{
            constexpr MPL::Value<acfselVal,acfselVal::v0> v0{};
            constexpr MPL::Value<acfselVal,acfselVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,acfselVal> acfsel{}; 
        ///no description available
        enum class ascaneVal {
            v0=0x00000000,     ///<FIFO scan mode disabled.
            v1=0x00000001,     ///<FIFO scan mode enabled.
        };
        namespace ascaneValC{
            constexpr MPL::Value<ascaneVal,ascaneVal::v0> v0{};
            constexpr MPL::Value<ascaneVal,ascaneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ascaneVal> ascane{}; 
        ///DMA Enable
        enum class dmaenVal {
            v0=0x00000000,     ///<DMA read request is disabled.
            v1=0x00000001,     ///<DMA read request is enabled, the conversion complete flag will assert the DMA request signal.
        };
        namespace dmaenValC{
            constexpr MPL::Value<dmaenVal,dmaenVal::v0> v0{};
            constexpr MPL::Value<dmaenVal,dmaenVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,dmaenVal> dmaen{}; 
    }
    namespace Adc2R{    ///<Conversion Result Register
        using Addr = Register::Address<0x4003d008,0xffff0000,0,unsigned>;
        ///Conversion Result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace Adc2Cva{    ///<Compare Value Register A
        using Addr = Register::Address<0x4003d00a,0xffff0000,0,unsigned>;
        ///Lower limit compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> va{}; 
    }
    namespace Adc2Cvb{    ///<Compare Value Register B
        using Addr = Register::Address<0x4003d00c,0xffff0000,0,unsigned>;
        ///Upper limit compare value
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> vb{}; 
    }
    namespace Adc2Apctl{    ///<Pin Control Register
        using Addr = Register::Address<0x4003d00e,0xfffff000,0,unsigned>;
        ///ADC Pin Control 0
        enum class adpc0Val {
            v0=0x00000000,     ///<AD0 pin I/O control enabled.
            v1=0x00000001,     ///<AD0 pin I/O control disabled.
        };
        namespace adpc0ValC{
            constexpr MPL::Value<adpc0Val,adpc0Val::v0> v0{};
            constexpr MPL::Value<adpc0Val,adpc0Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,adpc0Val> adpc0{}; 
        ///ADC Pin Control 1
        enum class adpc1Val {
            v0=0x00000000,     ///<AD1 pin I/O control enabled.
            v1=0x00000001,     ///<AD1 pin I/O control disabled.
        };
        namespace adpc1ValC{
            constexpr MPL::Value<adpc1Val,adpc1Val::v0> v0{};
            constexpr MPL::Value<adpc1Val,adpc1Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,adpc1Val> adpc1{}; 
        ///ADC Pin Control 2
        enum class adpc2Val {
            v0=0x00000000,     ///<AD2 pin I/O control enabled.
            v1=0x00000001,     ///<AD2 pin I/O control disabled.
        };
        namespace adpc2ValC{
            constexpr MPL::Value<adpc2Val,adpc2Val::v0> v0{};
            constexpr MPL::Value<adpc2Val,adpc2Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,adpc2Val> adpc2{}; 
        ///ADC Pin Control 3
        enum class adpc3Val {
            v0=0x00000000,     ///<AD3 pin I/O control enabled.
            v1=0x00000001,     ///<AD3 pin I/O control disabled.
        };
        namespace adpc3ValC{
            constexpr MPL::Value<adpc3Val,adpc3Val::v0> v0{};
            constexpr MPL::Value<adpc3Val,adpc3Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adpc3Val> adpc3{}; 
        ///ADC Pin Control 4
        enum class adpc4Val {
            v0=0x00000000,     ///<AD4 pin I/O control enabled.
            v1=0x00000001,     ///<AD4 pin I/O control disabled.
        };
        namespace adpc4ValC{
            constexpr MPL::Value<adpc4Val,adpc4Val::v0> v0{};
            constexpr MPL::Value<adpc4Val,adpc4Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adpc4Val> adpc4{}; 
        ///ADC Pin Control 5
        enum class adpc5Val {
            v0=0x00000000,     ///<AD5 pin I/O control enabled.
            v1=0x00000001,     ///<AD5 pin I/O control disabled.
        };
        namespace adpc5ValC{
            constexpr MPL::Value<adpc5Val,adpc5Val::v0> v0{};
            constexpr MPL::Value<adpc5Val,adpc5Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,adpc5Val> adpc5{}; 
        ///ADC Pin Control 6
        enum class adpc6Val {
            v0=0x00000000,     ///<AD6 pin I/O control enabled.
            v1=0x00000001,     ///<AD6 pin I/O control disabled.
        };
        namespace adpc6ValC{
            constexpr MPL::Value<adpc6Val,adpc6Val::v0> v0{};
            constexpr MPL::Value<adpc6Val,adpc6Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adpc6Val> adpc6{}; 
        ///ADC Pin Control 7
        enum class adpc7Val {
            v0=0x00000000,     ///<AD7 pin I/O control enabled.
            v1=0x00000001,     ///<AD7 pin I/O control disabled.
        };
        namespace adpc7ValC{
            constexpr MPL::Value<adpc7Val,adpc7Val::v0> v0{};
            constexpr MPL::Value<adpc7Val,adpc7Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adpc7Val> adpc7{}; 
        ///ADC Pin Control 8
        enum class adpc8Val {
            v0=0x00000000,     ///<AD8 pin I/O control enabled.
            v1=0x00000001,     ///<AD8 pin I/O control disabled.
        };
        namespace adpc8ValC{
            constexpr MPL::Value<adpc8Val,adpc8Val::v0> v0{};
            constexpr MPL::Value<adpc8Val,adpc8Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,adpc8Val> adpc8{}; 
        ///ADC Pin Control 9
        enum class adpc9Val {
            v0=0x00000000,     ///<AD9 pin I/O control enabled.
            v1=0x00000001,     ///<AD9 pin I/O control disabled.
        };
        namespace adpc9ValC{
            constexpr MPL::Value<adpc9Val,adpc9Val::v0> v0{};
            constexpr MPL::Value<adpc9Val,adpc9Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,adpc9Val> adpc9{}; 
        ///ADC Pin Control 10
        enum class adpc10Val {
            v0=0x00000000,     ///<AD10 pin I/O control enabled.
            v1=0x00000001,     ///<AD10 pin I/O control disabled.
        };
        namespace adpc10ValC{
            constexpr MPL::Value<adpc10Val,adpc10Val::v0> v0{};
            constexpr MPL::Value<adpc10Val,adpc10Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,adpc10Val> adpc10{}; 
        ///ADC Pin Control 11
        enum class adpc11Val {
            v0=0x00000000,     ///<AD11 pin I/O control enabled.
            v1=0x00000001,     ///<AD11 pin I/O control disabled.
        };
        namespace adpc11ValC{
            constexpr MPL::Value<adpc11Val,adpc11Val::v0> v0{};
            constexpr MPL::Value<adpc11Val,adpc11Val::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,adpc11Val> adpc11{}; 
    }
}
