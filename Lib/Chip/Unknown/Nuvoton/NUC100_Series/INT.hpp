#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace IntIrq0Src{    ///<MCU IRQ0 (BOD) interrupt source identify
        using Addr = Register::Address<0x50000300,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: BOD_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq1Src{    ///<MCU IRQ1 (WDG) interrupt source identify
        using Addr = Register::Address<0x50000304,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: WDG_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq2Src{    ///<MCU IRQ2 (EINT0) interrupt source identify
        using Addr = Register::Address<0x50000308,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: EINT0 - external interrupt 0 from PB.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq3Src{    ///<MCU IRQ3 (EINT1) interrupt source identify
        using Addr = Register::Address<0x5000030c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: EINT1 - external interrupt 1 from PB.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq4Src{    ///<MCU IRQ4 (GPA/B) interrupt source identify
        using Addr = Register::Address<0x50000310,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: GPB_INTBit0: GPA_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq5Src{    ///<MCU IRQ5 (GPC/D/E) interrupt source identify
        using Addr = Register::Address<0x50000314,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: GPE_INTBit1: GPD_INTBit0: GPC_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq6Src{    ///<MCU IRQ6 (PWMA) interrupt source identify
        using Addr = Register::Address<0x50000318,0xfffffff8,0x00000000,unsigned>;
        ///Bit3: PWM3_INTBit2: PWM2_INTBit1: PWM1_INTBit0: PWM0_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq7Src{    ///<MCU IRQ7 (PWMB) interrupt source identify
        using Addr = Register::Address<0x5000031c,0xfffffff8,0x00000000,unsigned>;
        ///Bit3: PWM7_INTBit2: PWM6_INTBit1: PWM5_INTBit0: PWM4_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq8Src{    ///<MCU IRQ8 (TMR0) interrupt source identify
        using Addr = Register::Address<0x50000320,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: TMR0_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq9Src{    ///<MCU IRQ9 (TMR1) interrupt source identify
        using Addr = Register::Address<0x50000324,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: TMR1_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq10Src{    ///<MCU IRQ10 (TMR2) interrupt source identify
        using Addr = Register::Address<0x50000328,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: TMR2_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq11Src{    ///<MCU IRQ11 (TMR3) interrupt source identify
        using Addr = Register::Address<0x5000032c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: TMR3_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq12Src{    ///<MCU IRQ12 (URT0) interrupt source identify
        using Addr = Register::Address<0x50000330,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: URT0_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq13Src{    ///<MCU IRQ13 (URT1) interrupt source identify
        using Addr = Register::Address<0x50000334,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: URT1_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq14Src{    ///<MCU IRQ14 (SPI0) interrupt source identify
        using Addr = Register::Address<0x50000338,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: SPI0_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq15Src{    ///<MCU IRQ15 (SPI1) interrupt source identify
        using Addr = Register::Address<0x5000033c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: SPI1_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq16Src{    ///<MCU IRQ16 (SPI2) interrupt source identify
        using Addr = Register::Address<0x50000340,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: SPI2_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq17Src{    ///<MCU IRQ17 (SPI3) interrupt source identify
        using Addr = Register::Address<0x50000344,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: SPI3_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq18Src{    ///<MCU IRQ18 (I2C0) interrupt source identify
        using Addr = Register::Address<0x50000348,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: I2C0_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq19Src{    ///<MCU IRQ19 (I2C1) interrupt source identify
        using Addr = Register::Address<0x5000034c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: I2C1_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq20Src{    ///<MCU IRQ20 (CAN0) interrupt source identify
        using Addr = Register::Address<0x50000350,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: CAN0_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq21Src{    ///<MCU IRQ21 (Reserved) interrupt source identity
        using Addr = Register::Address<0x50000354,0xfffffff8,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq22Src{    ///<MCU IRQ22 (Reserved) interrupt source identify
        using Addr = Register::Address<0x50000358,0xfffffff8,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq23Src{    ///<MCU IRQ23 (USBD) interrupt source identify
        using Addr = Register::Address<0x5000035c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: USBD_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq24Src{    ///<MCU IRQ24 (PS2) interrupt source identify
        using Addr = Register::Address<0x50000360,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: PS2_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq25Src{    ///<MCU IRQ25 (ACMP) interrupt source identify
        using Addr = Register::Address<0x50000364,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0 Bit0: ACMP_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq26Src{    ///<MCU IRQ26 (PDMA) interrupt source identify
        using Addr = Register::Address<0x50000368,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: PDMA_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq27Src{    ///<MCU IRQ27 (Reserved) interrupt source identify
        using Addr = Register::Address<0x5000036c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: I2S_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq28Src{    ///<MCU IRQ28 (PWRWU) interrupt source identify
        using Addr = Register::Address<0x50000370,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: PWRWU_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq29Src{    ///<MCU IRQ29 (ADC) interrupt source identify
        using Addr = Register::Address<0x50000374,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: ADC_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq30Src{    ///<MCU IRQ30 (Reserved) interrupt source identify
        using Addr = Register::Address<0x50000378,0xfffffff8,0x00000000,unsigned>;
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntIrq31Src{    ///<MCU IRQ31 (RTC) interrupt source identify
        using Addr = Register::Address<0x5000037c,0xfffffff8,0x00000000,unsigned>;
        ///Bit2: 0Bit1: 0Bit0: RTC_INT
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> intSrc{}; 
    }
    namespace IntNmiSel{    ///<NMI source interrupt select control register
        using Addr = Register::Address<0x50000380,0xffffffe0,0x00000000,unsigned>;
        ///The NMI interrupt to Cortex-M0 can be selected from one of the peripheral interrupt by setting NMI_SEL.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> nmiSel{}; 
    }
    namespace IntMcuIrq{    ///<MCU IRQ Number identify register
        using Addr = Register::Address<0x50000384,0x00000000,0x00000000,unsigned>;
        ///MCU IRQ Source Register The MCU_IRQ collect all the interrupts from the peripherals and generate the synchronous interrupt to MCU Cortex-M0. There are two modes to generate interrupt to MCU Cortex-M0, the normal mode and test mode.The MCU_IRQ collect all interrupt from each peripheral and synchronize them then interrupt the Cortex-M0.When the MCU_IRQ[n] is "0": Set MCU_IRQ[n] "1" will generate a interrupt to Cortex_M0 NVIC[n].When the MCU_IRQ[n] is "1" (mean a interrupt is assert) set "1" to the MCU_bit[n] will clear the interrupt. Set MCU_IRQ[n] "0": no any effect
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> mcuIrq{}; 
    }
}
