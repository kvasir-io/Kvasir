#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Switch Matrix (SWM)
    namespace Nonepinassign0{    ///<Pin assign register 0. Assign movable functions U0_TXD, U0_RXD, U0_RTS, U0_CTS.
        using Addr = Register::Address<0x40038000,0x00000000,0,unsigned>;
        ///UART0_TXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart0TxdO{}; 
        ///UART0_RXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> uart0RxdI{}; 
        ///UART0_RTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> uart0RtsO{}; 
        ///UART0_CTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> uart0CtsI{}; 
    }
    namespace Nonepinassign1{    ///<Pin assign register 1. Assign movable functions U0_SCLK, U1_TXD, U1_RXD, U1_RTS.
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///UART0_SCLK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart0SclkIo{}; 
        ///UART1_TXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> uart1TxdO{}; 
        ///UART1_RXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> uart1RxdI{}; 
        ///UART1_RTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> uart1RtsO{}; 
    }
    namespace Nonepinassign2{    ///<Pin assign register 2. Assign movable functions U1_CTS, U1_SCLK, U2_TXD, U2_RXD.
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///UART1_CTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart1CtsI{}; 
        ///UART1_SCLK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> uart1SclkIo{}; 
        ///UART2_TXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> uart2TxdO{}; 
        ///UART2_RXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> uart2RxdI{}; 
    }
    namespace Nonepinassign3{    ///<Pin assign register 3. Assign movable function .
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///UART2_SCLK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart2SclkIo{}; 
        ///SSP0_SCK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ssp0SckIo{}; 
        ///SSP0_MOSI function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ssp0MosiIo{}; 
        ///SSP0_MISO function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ssp0MisoIo{}; 
    }
    namespace Nonepinassign4{    ///<Pin assign register 4. Assign movable functions
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///SSP0_SSELSN_0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssp0Sselsn0Io{}; 
        ///SSP0_SSELSN_1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ssp0Sselsn1Io{}; 
        ///SSP0_SSELSN_2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ssp0Sselsn2Io{}; 
        ///SSP0_SSELSN_3 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ssp0Sselsn3Io{}; 
    }
    namespace Nonepinassign5{    ///<Pin assign register 5. Assign movable functions
        using Addr = Register::Address<0x40038014,0x00000000,0,unsigned>;
        ///SSP1_SCK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssp1SckIo{}; 
        ///SSP1_MOSI function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ssp1MosiIo{}; 
        ///SSP1_MISO function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ssp1MisoIo{}; 
        ///SSP1_SSELSN_0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ssp1Sselsn0Io{}; 
    }
    namespace Nonepinassign6{    ///<Pin assign register 6. Assign movable functions
        using Addr = Register::Address<0x40038018,0x00000000,0,unsigned>;
        ///SSP1_SSELSN_1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssp1Sselsn1Io{}; 
        ///CAN_TD1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> canTd1O{}; 
        ///CAN_RD1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> canRd1I{}; 
        ///USB_CONNECTN function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> usbConnectnO{}; 
    }
    namespace Nonepinassign7{    ///<Pin assign register 7. Assign movable functions
        using Addr = Register::Address<0x4003801c,0x00000000,0,unsigned>;
        ///USB_VBUS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usbVbusI{}; 
        ///SCT0_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sct0Out0O{}; 
        ///SCT0_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sct0Out1O{}; 
        ///SCT0_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sct0Out2O{}; 
    }
    namespace Nonepinassign8{    ///<Pin assign register 8. Assign movable functions
        using Addr = Register::Address<0x40038020,0x00000000,0,unsigned>;
        ///SCT1_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sct1Out0O{}; 
        ///SCT1_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sct1Out1O{}; 
        ///SCT1_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sct1Out2O{}; 
        ///SCT2_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sct2Out0O{}; 
    }
    namespace Nonepinassign9{    ///<Pin assign register 9. Assign movable functions
        using Addr = Register::Address<0x40038024,0x00000000,0,unsigned>;
        ///SCT2_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sct2Out1O{}; 
        ///SCT2_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sct2Out2O{}; 
        ///SCT3_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sct3Out0O{}; 
        ///SCT3_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sct3Out1O{}; 
    }
    namespace Nonepinassign10{    ///<Pin assign register 10. Assign movable functions
        using Addr = Register::Address<0x40038028,0x00000000,0,unsigned>;
        ///SCT3_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sct3Out2O{}; 
        ///SCT_ABORT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sctAbort0I{}; 
        ///SCT_ABORT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sctAbort1I{}; 
        ///ADC0_PIN_TRIG0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> adc0PinTrig0I{}; 
    }
    namespace Nonepinassign11{    ///<Pin assign register 11. Assign movable functions
        using Addr = Register::Address<0x4003802c,0x00000000,0,unsigned>;
        ///ADC0_PIN_TRIG1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adc0PinTrig1I{}; 
        ///ADC1_PIN_TRIG0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> adc1PinTrig0I{}; 
        ///ADC1_PIN_TRIG1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> adc1PinTrig1I{}; 
        ///DAC_PIN_TRIG function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dacPinTrigI{}; 
    }
    namespace Nonepinassign12{    ///<Pin assign register 12. Assign movable functions
        using Addr = Register::Address<0x40038030,0x00000000,0,unsigned>;
        ///DAC_SHUTOFF function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacShutoffI{}; 
        ///ACMP0_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> acmp0OutO{}; 
        ///ACMP1_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> acmp1OutO{}; 
        ///ACMP2_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> acmp2OutO{}; 
    }
    namespace Nonepinassign13{    ///<Pin assign register 13. Assign movable functions
        using Addr = Register::Address<0x40038034,0x00000000,0,unsigned>;
        ///ACMP3_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> acmp3OutO{}; 
        ///CLK_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkOutO{}; 
        ///ROSC0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rosc0O{}; 
        ///ROSC_RST0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> roscRst0I{}; 
    }
    namespace Nonepinassign14{    ///<Pin assign register 14. Assign movable functions
        using Addr = Register::Address<0x40038038,0x00000000,0,unsigned>;
        ///USB_FRAME_TOG function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usbFrameTogO{}; 
        ///QEI0_PHA function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> qei0PhaI{}; 
        ///QEI0_PHB function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> qei0PhbI{}; 
        ///QEI0_IDX function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> qei0IdxI{}; 
    }
    namespace Nonepinassign15{    ///<Pin assign register 15. Assign movable functions
        using Addr = Register::Address<0x4003803c,0xffff0000,0,unsigned>;
        ///GPIO_INT_BMATCH function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpioIntBmatchO{}; 
        ///SWO function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> swoO{}; 
    }
    namespace Nonepinenable0{    ///<Pin enable register 0. Enables fixed-pin functions
        using Addr = Register::Address<0x400381c0,0x00000000,0,unsigned>;
        ///ADC0_0 pin enable.
        enum class adc00Val {
            enabledOnPinP008=0x00000000,     ///<Enabled on pin P0_08.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc00ValC{
            constexpr MPL::Value<adc00Val,adc00Val::enabledOnPinP008> enabledOnPinP008{};
            constexpr MPL::Value<adc00Val,adc00Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,adc00Val> adc00{}; 
        ///ADC0_1 pin enable.
        enum class adc01Val {
            enabledOnPinP007=0x00000000,     ///<Enabled on pin P0_07.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc01ValC{
            constexpr MPL::Value<adc01Val,adc01Val::enabledOnPinP007> enabledOnPinP007{};
            constexpr MPL::Value<adc01Val,adc01Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,adc01Val> adc01{}; 
        ///ADC0_2 pin enable.
        enum class adc02Val {
            enabledOnPinP006=0x00000000,     ///<Enabled on pin P0_06.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc02ValC{
            constexpr MPL::Value<adc02Val,adc02Val::enabledOnPinP006> enabledOnPinP006{};
            constexpr MPL::Value<adc02Val,adc02Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,adc02Val> adc02{}; 
        ///ADC0_3 pin enable.
        enum class adc03Val {
            enabledOnPinP005=0x00000000,     ///<Enabled on pin P0_05.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc03ValC{
            constexpr MPL::Value<adc03Val,adc03Val::enabledOnPinP005> enabledOnPinP005{};
            constexpr MPL::Value<adc03Val,adc03Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,adc03Val> adc03{}; 
        ///ADC0_4 pin enable.
        enum class adc04Val {
            enabledOnPinP004=0x00000000,     ///<Enabled on pin P0_04.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc04ValC{
            constexpr MPL::Value<adc04Val,adc04Val::enabledOnPinP004> enabledOnPinP004{};
            constexpr MPL::Value<adc04Val,adc04Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,adc04Val> adc04{}; 
        ///ADC0_5 pin enable.
        enum class adc05Val {
            enabledOnPinP003=0x00000000,     ///<Enabled on pin P0_03.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc05ValC{
            constexpr MPL::Value<adc05Val,adc05Val::enabledOnPinP003> enabledOnPinP003{};
            constexpr MPL::Value<adc05Val,adc05Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,adc05Val> adc05{}; 
        ///ADC0_6 pin enable.
        enum class adc06Val {
            enabledOnPinP002=0x00000000,     ///<Enabled on pin P0_02.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc06ValC{
            constexpr MPL::Value<adc06Val,adc06Val::enabledOnPinP002> enabledOnPinP002{};
            constexpr MPL::Value<adc06Val,adc06Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,adc06Val> adc06{}; 
        ///ADC0_7 pin enable.
        enum class adc07Val {
            enabledOnPinP001=0x00000000,     ///<Enabled on pin P0_01.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc07ValC{
            constexpr MPL::Value<adc07Val,adc07Val::enabledOnPinP001> enabledOnPinP001{};
            constexpr MPL::Value<adc07Val,adc07Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,adc07Val> adc07{}; 
        ///ADC0_8 pin enable.
        enum class adc08Val {
            enabledOnPinP100=0x00000000,     ///<Enabled on pin P1_00 .
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc08ValC{
            constexpr MPL::Value<adc08Val,adc08Val::enabledOnPinP100> enabledOnPinP100{};
            constexpr MPL::Value<adc08Val,adc08Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,adc08Val> adc08{}; 
        ///ADC0_9 pin enable.
        enum class adc09Val {
            enabledOnPinP031=0x00000000,     ///<Enabled on pin P0_31.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc09ValC{
            constexpr MPL::Value<adc09Val,adc09Val::enabledOnPinP031> enabledOnPinP031{};
            constexpr MPL::Value<adc09Val,adc09Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,adc09Val> adc09{}; 
        ///ADC0_10 pin enable.
        enum class adc010Val {
            enabledOnPinP000=0x00000000,     ///<Enabled on pin P0_00.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc010ValC{
            constexpr MPL::Value<adc010Val,adc010Val::enabledOnPinP000> enabledOnPinP000{};
            constexpr MPL::Value<adc010Val,adc010Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,adc010Val> adc010{}; 
        ///ADC0_11 pin enable.
        enum class adc011Val {
            enabledOnPinP030=0x00000000,     ///<Enabled on pin P0_30.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc011ValC{
            constexpr MPL::Value<adc011Val,adc011Val::enabledOnPinP030> enabledOnPinP030{};
            constexpr MPL::Value<adc011Val,adc011Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,adc011Val> adc011{}; 
        ///ADC1_0 pin enable.
        enum class adc10Val {
            enabledOnPinP101=0x00000000,     ///<Enabled on pin P1_01.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc10ValC{
            constexpr MPL::Value<adc10Val,adc10Val::enabledOnPinP101> enabledOnPinP101{};
            constexpr MPL::Value<adc10Val,adc10Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,adc10Val> adc10{}; 
        ///ADC1_1 pin enable.
        enum class adc11Val {
            enabledOnPinP009=0x00000000,     ///<Enabled on pin P0_09.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc11ValC{
            constexpr MPL::Value<adc11Val,adc11Val::enabledOnPinP009> enabledOnPinP009{};
            constexpr MPL::Value<adc11Val,adc11Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,adc11Val> adc11{}; 
        ///ADC1_2 pin enable.
        enum class adc12Val {
            enabledOnPinP010=0x00000000,     ///<Enabled on pin P0_10.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc12ValC{
            constexpr MPL::Value<adc12Val,adc12Val::enabledOnPinP010> enabledOnPinP010{};
            constexpr MPL::Value<adc12Val,adc12Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,adc12Val> adc12{}; 
        ///ADC1_3 pin enable.
        enum class adc13Val {
            enabledOnPinP011=0x00000000,     ///<Enabled on pin P0_11.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc13ValC{
            constexpr MPL::Value<adc13Val,adc13Val::enabledOnPinP011> enabledOnPinP011{};
            constexpr MPL::Value<adc13Val,adc13Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,adc13Val> adc13{}; 
        ///ADC1_4 pin enable.
        enum class adc14Val {
            enabledOnPinP102=0x00000000,     ///<Enabled on pin P1_02.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc14ValC{
            constexpr MPL::Value<adc14Val,adc14Val::enabledOnPinP102> enabledOnPinP102{};
            constexpr MPL::Value<adc14Val,adc14Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,adc14Val> adc14{}; 
        ///ADC1_5 pin enable.
        enum class adc15Val {
            enabledOnPinP103=0x00000000,     ///<Enabled on pin P1_03.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc15ValC{
            constexpr MPL::Value<adc15Val,adc15Val::enabledOnPinP103> enabledOnPinP103{};
            constexpr MPL::Value<adc15Val,adc15Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,adc15Val> adc15{}; 
        ///ADC1_6 pin enable.
        enum class adc16Val {
            enabledOnPinP013=0x00000000,     ///<Enabled on pin P0_13.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc16ValC{
            constexpr MPL::Value<adc16Val,adc16Val::enabledOnPinP013> enabledOnPinP013{};
            constexpr MPL::Value<adc16Val,adc16Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,adc16Val> adc16{}; 
        ///ADC1_7 pin enable.
        enum class adc17Val {
            enabledOnPinP014=0x00000000,     ///<Enabled on pin P0_14.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc17ValC{
            constexpr MPL::Value<adc17Val,adc17Val::enabledOnPinP014> enabledOnPinP014{};
            constexpr MPL::Value<adc17Val,adc17Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,adc17Val> adc17{}; 
        ///ADC1_8 pin enable.
        enum class adc18Val {
            enabledOnPinP015=0x00000000,     ///<Enabled on pin P0_15.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc18ValC{
            constexpr MPL::Value<adc18Val,adc18Val::enabledOnPinP015> enabledOnPinP015{};
            constexpr MPL::Value<adc18Val,adc18Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,adc18Val> adc18{}; 
        ///ADC1_9 pin enable.
        enum class adc19Val {
            enabledOnPinP016=0x00000000,     ///<Enabled on pin P0_16.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc19ValC{
            constexpr MPL::Value<adc19Val,adc19Val::enabledOnPinP016> enabledOnPinP016{};
            constexpr MPL::Value<adc19Val,adc19Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,adc19Val> adc19{}; 
        ///ADC1_10 pin enable.
        enum class adc110Val {
            enabledOnPinP104=0x00000000,     ///<Enabled on pin P1_04.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc110ValC{
            constexpr MPL::Value<adc110Val,adc110Val::enabledOnPinP104> enabledOnPinP104{};
            constexpr MPL::Value<adc110Val,adc110Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,adc110Val> adc110{}; 
        ///ADC1_11 pin enable.
        enum class adc111Val {
            enabledOnPinP105=0x00000000,     ///<Enabled on pin P1_05.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace adc111ValC{
            constexpr MPL::Value<adc111Val,adc111Val::enabledOnPinP105> enabledOnPinP105{};
            constexpr MPL::Value<adc111Val,adc111Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,adc111Val> adc111{}; 
        ///DAC_OUT pin enable.
        enum class dacOutVal {
            enabledOnPinP012=0x00000000,     ///<Enabled on pin P0_12.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace dacOutValC{
            constexpr MPL::Value<dacOutVal,dacOutVal::enabledOnPinP012> enabledOnPinP012{};
            constexpr MPL::Value<dacOutVal,dacOutVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,dacOutVal> dacOut{}; 
        ///ACMP input 1 (common input) pin enable.
        enum class acmpI1Val {
            enabledOnPinP027=0x00000000,     ///<Enabled on pin P0_27.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmpI1ValC{
            constexpr MPL::Value<acmpI1Val,acmpI1Val::enabledOnPinP027> enabledOnPinP027{};
            constexpr MPL::Value<acmpI1Val,acmpI1Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,acmpI1Val> acmpI1{}; 
        ///ACMP input 2 (common input) pin enable.
        enum class acmpI2Val {
            enabledOnPinP106=0x00000000,     ///<Enabled on pin P1_06.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmpI2ValC{
            constexpr MPL::Value<acmpI2Val,acmpI2Val::enabledOnPinP106> enabledOnPinP106{};
            constexpr MPL::Value<acmpI2Val,acmpI2Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,acmpI2Val> acmpI2{}; 
        ///Analog comparator 0 input 3 pin enable.
        enum class acmp0I3Val {
            enabledOnPinP026=0x00000000,     ///<Enabled on pin P0_26.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp0I3ValC{
            constexpr MPL::Value<acmp0I3Val,acmp0I3Val::enabledOnPinP026> enabledOnPinP026{};
            constexpr MPL::Value<acmp0I3Val,acmp0I3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,acmp0I3Val> acmp0I3{}; 
        ///Analog comparator 0 input 4 pin enable.
        enum class acmp0I4Val {
            enabledOnPinP025=0x00000000,     ///<Enabled on pin P0_25.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp0I4ValC{
            constexpr MPL::Value<acmp0I4Val,acmp0I4Val::enabledOnPinP025> enabledOnPinP025{};
            constexpr MPL::Value<acmp0I4Val,acmp0I4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,acmp0I4Val> acmp0I4{}; 
        ///Analog comparator 1 input 3 pin enable.
        enum class acmp1I3Val {
            enabledOnPinP028=0x00000000,     ///<Enabled on pin P0_28.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp1I3ValC{
            constexpr MPL::Value<acmp1I3Val,acmp1I3Val::enabledOnPinP028> enabledOnPinP028{};
            constexpr MPL::Value<acmp1I3Val,acmp1I3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,acmp1I3Val> acmp1I3{}; 
        ///Analog comparator 1 input 4 pin enable.
        enum class acmp1I4Val {
            enabledOnPinP110=0x00000000,     ///<Enabled on pin P1_10.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp1I4ValC{
            constexpr MPL::Value<acmp1I4Val,acmp1I4Val::enabledOnPinP110> enabledOnPinP110{};
            constexpr MPL::Value<acmp1I4Val,acmp1I4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,acmp1I4Val> acmp1I4{}; 
        ///Analog comparator 2 input 3 pin enable.
        enum class acmp2I3Val {
            enabledOnPinP029=0x00000000,     ///<Enabled on pin P0_29.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp2I3ValC{
            constexpr MPL::Value<acmp2I3Val,acmp2I3Val::enabledOnPinP029> enabledOnPinP029{};
            constexpr MPL::Value<acmp2I3Val,acmp2I3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,acmp2I3Val> acmp2I3{}; 
    }
    namespace Nonepinenable1{    ///<Pin enable register 0. Enables fixed-pin functions
        using Addr = Register::Address<0x400381c4,0xff000000,0,unsigned>;
        ///Analog comparator 2 input 4 pin enable.
        enum class acmp2I4Val {
            enabledOnPinP109=0x00000000,     ///<Enabled on pin P1_09.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp2I4ValC{
            constexpr MPL::Value<acmp2I4Val,acmp2I4Val::enabledOnPinP109> enabledOnPinP109{};
            constexpr MPL::Value<acmp2I4Val,acmp2I4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,acmp2I4Val> acmp2I4{}; 
        ///Analog comparator 3 input 3 pin enable.
        enum class acmp3I3Val {
            enabledOnPinP108=0x00000000,     ///<Enabled on pin P1_08.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp3I3ValC{
            constexpr MPL::Value<acmp3I3Val,acmp3I3Val::enabledOnPinP108> enabledOnPinP108{};
            constexpr MPL::Value<acmp3I3Val,acmp3I3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,acmp3I3Val> acmp3I3{}; 
        ///Analog comparator 3 input 4 pin enable.
        enum class acmp3I4Val {
            enabledOnPinP107=0x00000000,     ///<Enabled on pin P1_07.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace acmp3I4ValC{
            constexpr MPL::Value<acmp3I4Val,acmp3I4Val::enabledOnPinP107> enabledOnPinP107{};
            constexpr MPL::Value<acmp3I4Val,acmp3I4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,acmp3I4Val> acmp3I4{}; 
        ///I2C0_SDA pin enable.
        enum class i2c0SdaVal {
            enabledOnPinP023=0x00000000,     ///<Enabled on pin P0_23.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace i2c0SdaValC{
            constexpr MPL::Value<i2c0SdaVal,i2c0SdaVal::enabledOnPinP023> enabledOnPinP023{};
            constexpr MPL::Value<i2c0SdaVal,i2c0SdaVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,i2c0SdaVal> i2c0Sda{}; 
        ///I2C0_SCL pin enable.
        enum class i2c0SclVal {
            enabledOnPinP022=0x00000000,     ///<Enabled on pin P0_22.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace i2c0SclValC{
            constexpr MPL::Value<i2c0SclVal,i2c0SclVal::enabledOnPinP022> enabledOnPinP022{};
            constexpr MPL::Value<i2c0SclVal,i2c0SclVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,i2c0SclVal> i2c0Scl{}; 
        ///SCT0_OUT3 pin enable.
        enum class sct0Out3Val {
            enabledOnPinP000=0x00000000,     ///<Enabled on pin P0_00.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct0Out3ValC{
            constexpr MPL::Value<sct0Out3Val,sct0Out3Val::enabledOnPinP000> enabledOnPinP000{};
            constexpr MPL::Value<sct0Out3Val,sct0Out3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,sct0Out3Val> sct0Out3{}; 
        ///SCT0_OUT4 pin enable.
        enum class sct0Out4Val {
            enabledOnPinP001=0x00000000,     ///<Enabled on pin P0_01.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct0Out4ValC{
            constexpr MPL::Value<sct0Out4Val,sct0Out4Val::enabledOnPinP001> enabledOnPinP001{};
            constexpr MPL::Value<sct0Out4Val,sct0Out4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,sct0Out4Val> sct0Out4{}; 
        ///SCT0_OUT5 pin enable.
        enum class sct0Out5Val {
            enabledOnPinP018=0x00000000,     ///<Enabled on pin P0_18.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct0Out5ValC{
            constexpr MPL::Value<sct0Out5Val,sct0Out5Val::enabledOnPinP018> enabledOnPinP018{};
            constexpr MPL::Value<sct0Out5Val,sct0Out5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,sct0Out5Val> sct0Out5{}; 
        ///SCT0_OUT6 pin enable.
        enum class sct0Out6Val {
            enabledOnPinP024=0x00000000,     ///<Enabled on pin P0_24.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct0Out6ValC{
            constexpr MPL::Value<sct0Out6Val,sct0Out6Val::enabledOnPinP024> enabledOnPinP024{};
            constexpr MPL::Value<sct0Out6Val,sct0Out6Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,sct0Out6Val> sct0Out6{}; 
        ///SCT0_OUT7 pin enable.
        enum class sct0Out7Val {
            enabledOnPinP114=0x00000000,     ///<Enabled on pin P1_14.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct0Out7ValC{
            constexpr MPL::Value<sct0Out7Val,sct0Out7Val::enabledOnPinP114> enabledOnPinP114{};
            constexpr MPL::Value<sct0Out7Val,sct0Out7Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,sct0Out7Val> sct0Out7{}; 
        ///SCT1_OUT3 pin enable.
        enum class sct1Out3Val {
            enabledOnPinP002=0x00000000,     ///<Enabled on pin P0_02.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct1Out3ValC{
            constexpr MPL::Value<sct1Out3Val,sct1Out3Val::enabledOnPinP002> enabledOnPinP002{};
            constexpr MPL::Value<sct1Out3Val,sct1Out3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,sct1Out3Val> sct1Out3{}; 
        ///SCT1_OUT4 pin enable.
        enum class sct1Out4Val {
            enabledOnPinP003=0x00000000,     ///<Enabled on pin P0_03.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct1Out4ValC{
            constexpr MPL::Value<sct1Out4Val,sct1Out4Val::enabledOnPinP003> enabledOnPinP003{};
            constexpr MPL::Value<sct1Out4Val,sct1Out4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,sct1Out4Val> sct1Out4{}; 
        ///SCT1_OUT5 pin enable.
        enum class sct1Out5Val {
            enabledOnPinP014=0x00000000,     ///<Enabled on pin P0_14.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct1Out5ValC{
            constexpr MPL::Value<sct1Out5Val,sct1Out5Val::enabledOnPinP014> enabledOnPinP014{};
            constexpr MPL::Value<sct1Out5Val,sct1Out5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,sct1Out5Val> sct1Out5{}; 
        ///SCT1_OUT6 pin enable.
        enum class sct1Out6Val {
            enabledOnPinP020=0x00000000,     ///<Enabled on pin P0_20.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct1Out6ValC{
            constexpr MPL::Value<sct1Out6Val,sct1Out6Val::enabledOnPinP020> enabledOnPinP020{};
            constexpr MPL::Value<sct1Out6Val,sct1Out6Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,sct1Out6Val> sct1Out6{}; 
        ///SCT1_OUT7 pin enable.
        enum class sct1Out7Val {
            enabledOnPinP117=0x00000000,     ///<Enabled on pin P1_17.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct1Out7ValC{
            constexpr MPL::Value<sct1Out7Val,sct1Out7Val::enabledOnPinP117> enabledOnPinP117{};
            constexpr MPL::Value<sct1Out7Val,sct1Out7Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,sct1Out7Val> sct1Out7{}; 
        ///SCT2_OUT3 pin enable.
        enum class sct2Out3Val {
            enabledOnPinP006=0x00000000,     ///<Enabled on pin P0_06.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct2Out3ValC{
            constexpr MPL::Value<sct2Out3Val,sct2Out3Val::enabledOnPinP006> enabledOnPinP006{};
            constexpr MPL::Value<sct2Out3Val,sct2Out3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,sct2Out3Val> sct2Out3{}; 
        ///SCT2_OUT4 pin enable.
        enum class sct2Out4Val {
            enabledOnPinP029=0x00000000,     ///<Enabled on pin P0_29.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct2Out4ValC{
            constexpr MPL::Value<sct2Out4Val,sct2Out4Val::enabledOnPinP029> enabledOnPinP029{};
            constexpr MPL::Value<sct2Out4Val,sct2Out4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,sct2Out4Val> sct2Out4{}; 
        ///SCT2_OUT5 pin enable.
        enum class sct2Out5Val {
            enabledOnPinP120=0x00000000,     ///<Enabled on pin P1_20.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct2Out5ValC{
            constexpr MPL::Value<sct2Out5Val,sct2Out5Val::enabledOnPinP120> enabledOnPinP120{};
            constexpr MPL::Value<sct2Out5Val,sct2Out5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,sct2Out5Val> sct2Out5{}; 
        ///SCT3_OUT3 pin enable.
        enum class sct3Out3Val {
            enabledOnPinP026=0x00000000,     ///<Enabled on pin P0_26.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct3Out3ValC{
            constexpr MPL::Value<sct3Out3Val,sct3Out3Val::enabledOnPinP026> enabledOnPinP026{};
            constexpr MPL::Value<sct3Out3Val,sct3Out3Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,sct3Out3Val> sct3Out3{}; 
        ///SCT3_OUT4 pin enable.
        enum class sct3Out4Val {
            enabledOnPinP108=0x00000000,     ///<Enabled on pin P1_08.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct3Out4ValC{
            constexpr MPL::Value<sct3Out4Val,sct3Out4Val::enabledOnPinP108> enabledOnPinP108{};
            constexpr MPL::Value<sct3Out4Val,sct3Out4Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,sct3Out4Val> sct3Out4{}; 
        ///SCT3_OUT5 pin enable.
        enum class sct3Out5Val {
            enabledOnPinP124=0x00000000,     ///<Enabled on pin P1_24.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace sct3Out5ValC{
            constexpr MPL::Value<sct3Out5Val,sct3Out5Val::enabledOnPinP124> enabledOnPinP124{};
            constexpr MPL::Value<sct3Out5Val,sct3Out5Val::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,sct3Out5Val> sct3Out5{}; 
        ///RESETN pin enable.
        enum class resetnVal {
            enabledOnPinP021=0x00000000,     ///<Enabled on pin P0_21.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace resetnValC{
            constexpr MPL::Value<resetnVal,resetnVal::enabledOnPinP021> enabledOnPinP021{};
            constexpr MPL::Value<resetnVal,resetnVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,resetnVal> resetn{}; 
        ///SWCLK_TCK pin enable.
        enum class swclkTckVal {
            enabledOnPinP019=0x00000000,     ///<Enabled on pin P0_19.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace swclkTckValC{
            constexpr MPL::Value<swclkTckVal,swclkTckVal::enabledOnPinP019> enabledOnPinP019{};
            constexpr MPL::Value<swclkTckVal,swclkTckVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,swclkTckVal> swclkTck{}; 
        ///SWDIO pin enable.
        enum class swdioVal {
            enabledOnPinP020=0x00000000,     ///<Enabled on pin P0_20.
            disabled=0x00000001,     ///<Disabled.
        };
        namespace swdioValC{
            constexpr MPL::Value<swdioVal,swdioVal::enabledOnPinP020> enabledOnPinP020{};
            constexpr MPL::Value<swdioVal,swdioVal::disabled> disabled{};
        }
        constexpr Register::BitLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,swdioVal> swdio{}; 
    }
}
