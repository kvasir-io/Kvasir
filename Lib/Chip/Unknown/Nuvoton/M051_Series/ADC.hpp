#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace AdcAddr0{    ///<A/D Data Register 0
        using Addr = Register::Address<0x400e0000,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr1{    ///<A/D Data Register 1
        using Addr = Register::Address<0x400e0004,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr2{    ///<A/D Data Register 2
        using Addr = Register::Address<0x400e0008,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr3{    ///<A/D Data Register 3
        using Addr = Register::Address<0x400e000c,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr4{    ///<A/D Data Register 4
        using Addr = Register::Address<0x400e0010,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr5{    ///<A/D Data Register 5
        using Addr = Register::Address<0x400e0014,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr6{    ///<A/D Data Register 6
        using Addr = Register::Address<0x400e0018,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAddr7{    ///<A/D Data Register 7
        using Addr = Register::Address<0x400e001c,0xfffcf000,0x00000000,unsigned>;
        ///A/D Conversion ResultThis field contains 12 bits conversion result.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> rslt{}; 
        ///Over Run Flag1 = Data in RSLT[11:0] is overwrite.0 = Data in RSLT[11:0] is recent conversion result.If converted data in RSLT[11:0] has not been read before new conversion result is loaded to this register, OVERRUN is set to 1. It will be cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> overrun{}; 
        ///Valid Flag1 = Data in RSLT[11:0] bits is valid.0 = Data in RSLT[11:0] bits is not valid.This bit is set to 1 when corresponding channel analog input conversion is completed and cleared by hardware after ADDR register is read.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> valid{}; 
    }
    namespace AdcAdcr{    ///<A/D Control Register
        using Addr = Register::Address<0x400e0020,0xfffff200,0x00000000,unsigned>;
        ///A/D Converter Enable1 = Enable0 = DisableBefore starting A/D conversion function, this bit should be set to 1. Clear it to 0 to disable A/D converter analog circuit for saving power consumption.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> aden{}; 
        ///A/D Interrupt Enable1 = Enable A/D interrupt function0 = Disable A/D interrupt functionA/D conversion end interrupt request is generated if ADIE bit is set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> adie{}; 
        ///A/D Converter Operation Mode00 = Single conversion01 = Burst conversion10 = Single-cycle scan11 = Continuous scanWhen changing the operation mode, software should disable ADST bit firstly.Note: In Burst Mode, the A/D result data always at Data Register 0.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,2),Register::ReadWriteAccess,unsigned> admd{}; 
        ///Hardware Trigger Source00 = A/D conversion is started by external STADC pin.Others = ReservedSoftware should disable TRGE and ADST before change TRGS. In hardware trigger mode, the ADST bit is set by the external trigger from STADC.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,4),Register::ReadWriteAccess,unsigned> trgs{}; 
        ///External Trigger ConditionThese two bits decide external pin STADC trigger event is level or edge. The signal must be kept at stable state at least 8 PCLKs for level trigger and 4 PCLKs at high and low state.00 = Low level01 = High level10 = Falling edge11 = Rising edge
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,6),Register::ReadWriteAccess,unsigned> trgcond{}; 
        ///External Trigger EnableEnable or disable triggering of A/D conversion by external STADC pin.1= Enable0= Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> trge{}; 
        ///A/D Differential Input Mode Enable1 = A/D is in differential analog input mode0 = A/D is in single-end analog input modeDifferential input voltage (Vdiff) = Vplus - VminusThe Vplus of differential input paired channel 0 is from ADC0 pin; Vminus is from ADC1 pin.The Vplus of differential input paired channel 1 is from ADC2 pin; Vminus is from ADC3 pin.The Vplus of differential input paired channel 2 is from ADC4 pin; Vminus is from ADC5 pin.The Vplus of differential input paired channel 3 is from ADC6 pin; Vminus is from ADC7 pin.In differential input mode, only one of the two corresponding channels needs to be enabled in ADCHER. The conversion result will be placed to the corresponding data register of the enabled channel. If both channels of a differential input paired channel are enabled, the ADC will convert it twice in scan mode. And then write the conversion result to the two corresponding data registers.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> diffen{}; 
        ///A/D Conversion Start1 = Conversion start.0 = Conversion stopped and A/D converter enter idle state.ADST bit can be controlled by two sources: software write and external pin STADC. ADST is cleared to 0 by hardware automatically at the ends of single mode and single-cycle scan mode on specified channels. In continuous scan mode, A/D conversion is continuously performed sequentially until this bit is cleared to 0 or chip reset.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> adst{}; 
    }
    namespace AdcAdcher{    ///<A/D Channel Enable Register
        using Addr = Register::Address<0x400e0024,0xfffffc00,0x00000000,unsigned>;
        ///Analog Input Channel 0 Enable1 = Enable0 = DisableThis channel is the default enabled channel if CHEN0~7 are set as 0s.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> chen0{}; 
        ///Analog Input Channel 1 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> chen1{}; 
        ///Analog Input Channel 2 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> chen2{}; 
        ///Analog Input Channel 3 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> chen3{}; 
        ///Analog Input Channel 4 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> chen4{}; 
        ///Analog Input Channel 5 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> chen5{}; 
        ///Analog Input Channel 6 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> chen6{}; 
        ///Analog Input Channel 7 Enable1 = Enable0 = Disable
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> chen7{}; 
        ///Analog Input Channel 7 select00: External analog input01: Internal bandgap voltage1x: Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,unsigned> presel{}; 
    }
    namespace AdcAdcmpr0{    ///<A/D Compare Register 0
        using Addr = Register::Address<0x400e0028,0xf000f0c0,0x00000000,unsigned>;
        ///Compare Enable1 = Enable compare.0 = Disable compare.Set this bit to 1 to enable compare CMPD[11:0] with specified channel conversion result when converted data is loaded into ADDR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpen{}; 
        ///Compare Interrupt Enable1 = Enable compare function interrupt.0 = Disable compare function interrupt.If the compare function is enabled and the compare condition matches the settings of CMPCOND and CMPMATCNT, CMPF0 bit will be asserted. If CMPIE is set to 1, a compare interrupt request is generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///Compare Condition1= Set the compare condition as that when a 12-bit A/D conversion result is greater or equal to the 12-bit CMPD(ADCMPR0[27:16]), the internal match counter will increase one.0= Set the compare condition as that when a 12-bit A/D conversion result is less than the 12-bit CMPD(ADCMPR0[27:16]), the internal match counter will increase one.Note: When the internal counter reaches the value to (CMPMATCNT +1), the CMPF0 bit will be set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpcond{}; 
        ///Compare Channel Selection000 = Channel 0 conversion result is selected to be compared.001 = Channel 1 conversion result is selected to be compared.010 = Channel 2 conversion result is selected to be compared.011 = Channel 3 conversion result is selected to be compared.100 = Channel 4 conversion result is selected to be compared.101 = Channel 5 conversion result is selected to be compared.110 = Channel 6 conversion result is selected to be compared.111 = Channel 7 conversion result is selected to be compared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> cmpch{}; 
        ///Compare Match CountWhen the specified A/D channel analog conversion result matches the compare condition defined by CMPCOND[2], the internal match counter will increase 1. When the internal counter reaches the value to (CMPMATCNT +1), the CMPF0 bit will be set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpmatcnt{}; 
        ///Comparison DataThe 12 bits data is used to compare with conversion result of specified channel. Software can use it to monitor the external analog input pin voltage transition in scan mode without imposing a load on software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> cmpd{}; 
    }
    namespace AdcAdcmpr1{    ///<A/D Compare Register 1
        using Addr = Register::Address<0x400e002c,0xf000f0c0,0x00000000,unsigned>;
        ///Compare Enable1 = Enable compare.0 = Disable compare.Set this bit to 1 to enable compare CMPD[11:0] with specified channel conversion result when converted data is loaded into ADDR register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> cmpen{}; 
        ///Compare Interrupt Enable1 = Enable compare function interrupt.0 = Disable compare function interrupt.If the compare function is enabled and the compare condition matches the setting of CMPCOND and CMPMATCNT, CMPF1 bit will be asserted. If CMPIE is set to 1, a compare interrupt request is generated.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> cmpie{}; 
        ///Compare Condition1= Set the compare condition as that when a 12-bit A/D conversion result is greater or equal to the 12-bit CMPD(ADCMPR1[27:16]), the internal match counter will increase one.0= Set the compare condition as that when a 12-bit A/D conversion result is less than the 12-bit CMPD(ADCMPR1[27:16]), the internal match counter will increase one.Note: When the internal counter reaches the value to (CMPMATCNT +1), the CMPF1 bit will be set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> cmpcond{}; 
        ///Compare Channel Selection000 = Channel 0 conversion result is selected to be compared.001 = Channel 1 conversion result is selected to be compared.010 = Channel 2 conversion result is selected to be compared.011 = Channel 3 conversion result is selected to be compared.100 = Channel 4 conversion result is selected to be compared.101 = Channel 5 conversion result is selected to be compared.110 = Channel 6 conversion result is selected to be compared.111 = Channel 7 conversion result is selected to be compared.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,3),Register::ReadWriteAccess,unsigned> cmpch{}; 
        ///Compare Match CountWhen the specified A/D channel analog conversion result matches the compare condition defined by CMPCOND[2], the internal match counter will increase 1. When the internal counter reaches the value to (CMPMATCNT +1), the CMPF1 bit will be set.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,8),Register::ReadWriteAccess,unsigned> cmpmatcnt{}; 
        ///Comparison DataThe 12 bits data is used to compare with conversion result of specified channel. Software can use it to monitor the external analog input pin voltage transition in scan mode without imposing a load on software.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,16),Register::ReadWriteAccess,unsigned> cmpd{}; 
    }
    namespace AdcAdsr{    ///<A/D Status Register
        using Addr = Register::Address<0x400e0030,0xff000087,0x00000000,unsigned>;
        ///A/D Conversion End FlagA status flag that indicates the end of A/D conversion.ADF is set to 1 at these two conditions:When A/D conversion ends in single modeWhen A/D conversion ends on all specified channels in scan mode.When more than 4 samples in FIFO in Burst mode.This bit can be cleared by writing 1 to itself.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> adf{}; 
        ///Compare FlagWhen the selected channel A/D conversion result meets the setting conditions of ADCMPR0 then this bit will be set to 1. And it can be cleared by writing 1 to itself.1 = Conversion result in ADDR meets ADCMPR0 setting0 = Conversion result in ADDR does not meet ADCMPR0 setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> cmpf0{}; 
        ///Compare FlagWhen the selected channel A/D conversion result meets the setting conditions of ADCMPR1 then this bit will be set to 1. And it can be cleared by writing 1 to itself.1 = Conversion result in ADDR meets ADCMPR1 setting0 = Conversion result in ADDR does not meet ADCMPR1 setting
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> cmpf1{}; 
        ///BUSY/IDLE1 = A/D converter is busy at conversion.0 = A/D converter is in idle state.This bit is mirror of as ADST bit in ADCR.It is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> busy{}; 
        ///Current Conversion ChannelThis filed reflects current conversion channel when BUSY=1. When BUSY=0, it shows the next channel will be converted.It is read only.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> channel{}; 
        ///Data Valid flagIt is a mirror of VALID bit in ADDRxWhen ADC is in Burst Mode, and there is at least one valid conversion result in buffer, VALID[7:0] will all set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> valid{}; 
        ///Over Run flagIt is a mirror to OVERRUN bit in ADDRxWhen ADC is in Burst Mode, and the buffer is overrun, OVERRUN[7:0] will all set to 1.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> overrun{}; 
    }
    namespace AdcAdcalr{    ///<A/D Calibration Register
        using Addr = Register::Address<0x400e0034,0xfffffffc,0x00000000,unsigned>;
        ///Self Calibration Enable1 = Enable self calibration0 = Disable self calibrationSoftware can set this bit to 1 enables A/D converter to do self calibration function. It needs 127 ADC clocks to complete calibration. This bit must be kept at 1 after CALDONE asserted. Clearing this bit will disable self calibration function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> calen{}; 
        ///Calibration is Done1 = A/D converter self calibration is done.0 = A/D converter has not been calibrated or calibration is in progress if CALEN bit is set.When 0 is written to CALEN bit, CALDONE bit is cleared by hardware immediately. It is a read only bit.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> caldone{}; 
    }
}
