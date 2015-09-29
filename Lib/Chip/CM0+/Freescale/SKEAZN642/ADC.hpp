#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Analog-to-digital converter
    namespace AdcSc1{    ///<Status and Control Register 1
        using Addr = Register::Address<0x4003b000,0xffffff00,0,unsigned>;
        ///Input Channel Select
        enum class adchVal {
            v10110=0x00000016,     ///<Temperature Sensor
            v10111=0x00000017,     ///<Bandgap
            v11101=0x0000001d,     ///<VREFH
            v11110=0x0000001e,     ///<VREFL
            v11111=0x0000001f,     ///<Module disabled Reset FIFO in FIFO mode.
        };
        namespace adchValC{
            constexpr MPL::Value<adchVal,adchVal::v10110> v10110{};
            constexpr MPL::Value<adchVal,adchVal::v10111> v10111{};
            constexpr MPL::Value<adchVal,adchVal::v11101> v11101{};
            constexpr MPL::Value<adchVal,adchVal::v11110> v11110{};
            constexpr MPL::Value<adchVal,adchVal::v11111> v11111{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,adchVal> adch{}; 
        ///Continuous Conversion Enable
        enum class adcoVal {
            v0=0x00000000,     ///<One conversion following a write to the ADC_SC1 when software triggered operation is selected, or one conversion following assertion of ADHWT when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are triggered.
            v1=0x00000001,     ///<Continuous conversions are initiated following a write to ADC_SC1 when software triggered operation is selected. Continuous conversions are initiated by an ADHWT event when hardware triggered operation is selected. When the FIFO function is enabled (AFDEP > 0), a set of conversions are loop triggered.
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
    namespace AdcSc2{    ///<Status and Control Register 2
        using Addr = Register::Address<0x4003b004,0xffffff00,0,unsigned>;
        ///Voltage Reference Selection
        enum class refselVal {
            v00=0x00000000,     ///<Default voltage reference pin pair (VREFH/VREFL).
            v01=0x00000001,     ///<Analog supply pin pair (VDDA/VSSA).
            v11=0x00000003,     ///<Reserved - Selects default voltage reference (VREFH/VREFL) pin pair.
        };
        namespace refselValC{
            constexpr MPL::Value<refselVal,refselVal::v00> v00{};
            constexpr MPL::Value<refselVal,refselVal::v01> v01{};
            constexpr MPL::Value<refselVal,refselVal::v11> v11{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,0),Register::ReadWriteAccess,refselVal> refsel{}; 
        ///Result FIFO full
        enum class ffullVal {
            v0=0x00000000,     ///<Indicates that ADC result FIFO is not full and next conversion data still can be stored into FIFO.
            v1=0x00000001,     ///<Indicates that ADC result FIFO is full and next conversion will override old data in case of no read action.
        };
        namespace ffullValC{
            constexpr MPL::Value<ffullVal,ffullVal::v0> v0{};
            constexpr MPL::Value<ffullVal,ffullVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,ffullVal> ffull{}; 
        ///Result FIFO empty
        enum class femptyVal {
            v0=0x00000000,     ///<Indicates that ADC result FIFO have at least one valid new data.
            v1=0x00000001,     ///<Indicates that ADC result FIFO have no valid new data.
        };
        namespace femptyValC{
            constexpr MPL::Value<femptyVal,femptyVal::v0> v0{};
            constexpr MPL::Value<femptyVal,femptyVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,femptyVal> fempty{}; 
        ///Compare Function Greater Than Enable
        enum class acfgtVal {
            v0=0x00000000,     ///<Compare triggers when input is less than compare level.
            v1=0x00000001,     ///<Compare triggers when input is greater than or equal to compare level.
        };
        namespace acfgtValC{
            constexpr MPL::Value<acfgtVal,acfgtVal::v0> v0{};
            constexpr MPL::Value<acfgtVal,acfgtVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,acfgtVal> acfgt{}; 
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
    namespace AdcSc3{    ///<Status and Control Register 3
        using Addr = Register::Address<0x4003b008,0xffffff00,0,unsigned>;
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
            v00=0x00000000,     ///<8-bit conversion (N = 8)
            v01=0x00000001,     ///<10-bit conversion (N = 10)
            v10=0x00000002,     ///<12-bit conversion (N = 12)
        };
        namespace modeValC{
            constexpr MPL::Value<modeVal,modeVal::v00> v00{};
            constexpr MPL::Value<modeVal,modeVal::v01> v01{};
            constexpr MPL::Value<modeVal,modeVal::v10> v10{};
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
            v1=0x00000001,     ///<Low power configuration:The power is reduced at the expense of maximum clock speed.
        };
        namespace adlpcValC{
            constexpr MPL::Value<adlpcVal,adlpcVal::v0> v0{};
            constexpr MPL::Value<adlpcVal,adlpcVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adlpcVal> adlpc{}; 
    }
    namespace AdcSc4{    ///<Status and Control Register 4
        using Addr = Register::Address<0x4003b00c,0xffffff98,0,unsigned>;
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
        ///FIFO Scan Mode Enable
        enum class ascaneVal {
            v0=0x00000000,     ///<FIFO scan mode disabled.
            v1=0x00000001,     ///<FIFO scan mode enabled.
        };
        namespace ascaneValC{
            constexpr MPL::Value<ascaneVal,ascaneVal::v0> v0{};
            constexpr MPL::Value<ascaneVal,ascaneVal::v1> v1{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,ascaneVal> ascane{}; 
    }
    namespace AdcR{    ///<Conversion Result Register
        using Addr = Register::Address<0x4003b010,0xfffff000,0,unsigned>;
        ///Conversion Result
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> adr{}; 
    }
    namespace AdcCv{    ///<Compare Value Register
        using Addr = Register::Address<0x4003b014,0xfffff000,0,unsigned>;
        ///Conversion Result[11:0]
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,0),Register::ReadWriteAccess,unsigned> cv{}; 
    }
    namespace AdcApctl1{    ///<Pin Control 1 Register
        using Addr = Register::Address<0x4003b018,0xffff0000,0,unsigned>;
        ///ADC Pin Control
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> adpc{}; 
    }
}
