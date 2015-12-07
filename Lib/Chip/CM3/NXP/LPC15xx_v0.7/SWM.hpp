#pragma once 
#include "Register/Utility.hpp"
namespace Kvasir {
//Switch Matrix (SWM)
    namespace Nonepinassign0{    ///<Pin assign register 0. Assign movable functions U0_TXD, U0_RXD, U0_RTS, U0_CTS.
        using Addr = Register::Address<0x40038000,0x00000000,0,unsigned>;
        ///UART0_TXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart0TxdO{}; 
        namespace Uart0txdoValC{
        }
        ///UART0_RXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> uart0RxdI{}; 
        namespace Uart0rxdiValC{
        }
        ///UART0_RTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> uart0RtsO{}; 
        namespace Uart0rtsoValC{
        }
        ///UART0_CTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> uart0CtsI{}; 
        namespace Uart0ctsiValC{
        }
    }
    namespace Nonepinassign1{    ///<Pin assign register 1. Assign movable functions U0_SCLK, U1_TXD, U1_RXD, U1_RTS.
        using Addr = Register::Address<0x40038004,0x00000000,0,unsigned>;
        ///UART0_SCLK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart0SclkIo{}; 
        namespace Uart0sclkioValC{
        }
        ///UART1_TXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> uart1TxdO{}; 
        namespace Uart1txdoValC{
        }
        ///UART1_RXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> uart1RxdI{}; 
        namespace Uart1rxdiValC{
        }
        ///UART1_RTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> uart1RtsO{}; 
        namespace Uart1rtsoValC{
        }
    }
    namespace Nonepinassign2{    ///<Pin assign register 2. Assign movable functions U1_CTS, U1_SCLK, U2_TXD, U2_RXD.
        using Addr = Register::Address<0x40038008,0x00000000,0,unsigned>;
        ///UART1_CTS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart1CtsI{}; 
        namespace Uart1ctsiValC{
        }
        ///UART1_SCLK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> uart1SclkIo{}; 
        namespace Uart1sclkioValC{
        }
        ///UART2_TXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> uart2TxdO{}; 
        namespace Uart2txdoValC{
        }
        ///UART2_RXD function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> uart2RxdI{}; 
        namespace Uart2rxdiValC{
        }
    }
    namespace Nonepinassign3{    ///<Pin assign register 3. Assign movable function .
        using Addr = Register::Address<0x4003800c,0x00000000,0,unsigned>;
        ///UART2_SCLK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> uart2SclkIo{}; 
        namespace Uart2sclkioValC{
        }
        ///SSP0_SCK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ssp0SckIo{}; 
        namespace Ssp0sckioValC{
        }
        ///SSP0_MOSI function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ssp0MosiIo{}; 
        namespace Ssp0mosiioValC{
        }
        ///SSP0_MISO function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ssp0MisoIo{}; 
        namespace Ssp0misoioValC{
        }
    }
    namespace Nonepinassign4{    ///<Pin assign register 4. Assign movable functions
        using Addr = Register::Address<0x40038010,0x00000000,0,unsigned>;
        ///SSP0_SSELSN_0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssp0Sselsn0Io{}; 
        namespace Ssp0sselsn0ioValC{
        }
        ///SSP0_SSELSN_1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ssp0Sselsn1Io{}; 
        namespace Ssp0sselsn1ioValC{
        }
        ///SSP0_SSELSN_2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ssp0Sselsn2Io{}; 
        namespace Ssp0sselsn2ioValC{
        }
        ///SSP0_SSELSN_3 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ssp0Sselsn3Io{}; 
        namespace Ssp0sselsn3ioValC{
        }
    }
    namespace Nonepinassign5{    ///<Pin assign register 5. Assign movable functions
        using Addr = Register::Address<0x40038014,0x00000000,0,unsigned>;
        ///SSP1_SCK function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssp1SckIo{}; 
        namespace Ssp1sckioValC{
        }
        ///SSP1_MOSI function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> ssp1MosiIo{}; 
        namespace Ssp1mosiioValC{
        }
        ///SSP1_MISO function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ssp1MisoIo{}; 
        namespace Ssp1misoioValC{
        }
        ///SSP1_SSELSN_0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> ssp1Sselsn0Io{}; 
        namespace Ssp1sselsn0ioValC{
        }
    }
    namespace Nonepinassign6{    ///<Pin assign register 6. Assign movable functions
        using Addr = Register::Address<0x40038018,0x00000000,0,unsigned>;
        ///SSP1_SSELSN_1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> ssp1Sselsn1Io{}; 
        namespace Ssp1sselsn1ioValC{
        }
        ///CAN_TD1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> canTd1O{}; 
        namespace Cantd1oValC{
        }
        ///CAN_RD1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> canRd1I{}; 
        namespace Canrd1iValC{
        }
        ///USB_CONNECTN function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> usbConnectnO{}; 
        namespace UsbconnectnoValC{
        }
    }
    namespace Nonepinassign7{    ///<Pin assign register 7. Assign movable functions
        using Addr = Register::Address<0x4003801c,0x00000000,0,unsigned>;
        ///USB_VBUS function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usbVbusI{}; 
        namespace UsbvbusiValC{
        }
        ///SCT0_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sct0Out0O{}; 
        namespace Sct0out0oValC{
        }
        ///SCT0_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sct0Out1O{}; 
        namespace Sct0out1oValC{
        }
        ///SCT0_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sct0Out2O{}; 
        namespace Sct0out2oValC{
        }
    }
    namespace Nonepinassign8{    ///<Pin assign register 8. Assign movable functions
        using Addr = Register::Address<0x40038020,0x00000000,0,unsigned>;
        ///SCT1_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sct1Out0O{}; 
        namespace Sct1out0oValC{
        }
        ///SCT1_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sct1Out1O{}; 
        namespace Sct1out1oValC{
        }
        ///SCT1_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sct1Out2O{}; 
        namespace Sct1out2oValC{
        }
        ///SCT2_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sct2Out0O{}; 
        namespace Sct2out0oValC{
        }
    }
    namespace Nonepinassign9{    ///<Pin assign register 9. Assign movable functions
        using Addr = Register::Address<0x40038024,0x00000000,0,unsigned>;
        ///SCT2_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sct2Out1O{}; 
        namespace Sct2out1oValC{
        }
        ///SCT2_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sct2Out2O{}; 
        namespace Sct2out2oValC{
        }
        ///SCT3_OUT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sct3Out0O{}; 
        namespace Sct3out0oValC{
        }
        ///SCT3_OUT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> sct3Out1O{}; 
        namespace Sct3out1oValC{
        }
    }
    namespace Nonepinassign10{    ///<Pin assign register 10. Assign movable functions
        using Addr = Register::Address<0x40038028,0x00000000,0,unsigned>;
        ///SCT3_OUT2 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> sct3Out2O{}; 
        namespace Sct3out2oValC{
        }
        ///SCT_ABORT0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> sctAbort0I{}; 
        namespace Sctabort0iValC{
        }
        ///SCT_ABORT1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> sctAbort1I{}; 
        namespace Sctabort1iValC{
        }
        ///ADC0_PIN_TRIG0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> adc0PinTrig0I{}; 
        namespace Adc0pintrig0iValC{
        }
    }
    namespace Nonepinassign11{    ///<Pin assign register 11. Assign movable functions
        using Addr = Register::Address<0x4003802c,0x00000000,0,unsigned>;
        ///ADC0_PIN_TRIG1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> adc0PinTrig1I{}; 
        namespace Adc0pintrig1iValC{
        }
        ///ADC1_PIN_TRIG0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> adc1PinTrig0I{}; 
        namespace Adc1pintrig0iValC{
        }
        ///ADC1_PIN_TRIG1 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> adc1PinTrig1I{}; 
        namespace Adc1pintrig1iValC{
        }
        ///DAC_PIN_TRIG function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> dacPinTrigI{}; 
        namespace DacpintrigiValC{
        }
    }
    namespace Nonepinassign12{    ///<Pin assign register 12. Assign movable functions
        using Addr = Register::Address<0x40038030,0x00000000,0,unsigned>;
        ///DAC_SHUTOFF function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> dacShutoffI{}; 
        namespace DacshutoffiValC{
        }
        ///ACMP0_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> acmp0OutO{}; 
        namespace Acmp0outoValC{
        }
        ///ACMP1_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> acmp1OutO{}; 
        namespace Acmp1outoValC{
        }
        ///ACMP2_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> acmp2OutO{}; 
        namespace Acmp2outoValC{
        }
    }
    namespace Nonepinassign13{    ///<Pin assign register 13. Assign movable functions
        using Addr = Register::Address<0x40038034,0x00000000,0,unsigned>;
        ///ACMP3_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> acmp3OutO{}; 
        namespace Acmp3outoValC{
        }
        ///CLK_OUT function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> clkOutO{}; 
        namespace ClkoutoValC{
        }
        ///ROSC0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> rosc0O{}; 
        namespace Rosc0oValC{
        }
        ///ROSC_RST0 function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> roscRst0I{}; 
        namespace Roscrst0iValC{
        }
    }
    namespace Nonepinassign14{    ///<Pin assign register 14. Assign movable functions
        using Addr = Register::Address<0x40038038,0x00000000,0,unsigned>;
        ///USB_FRAME_TOG function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> usbFrameTogO{}; 
        namespace UsbframetogoValC{
        }
        ///QEI0_PHA function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> qei0PhaI{}; 
        namespace Qei0phaiValC{
        }
        ///QEI0_PHB function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> qei0PhbI{}; 
        namespace Qei0phbiValC{
        }
        ///QEI0_IDX function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,24),Register::ReadWriteAccess,unsigned> qei0IdxI{}; 
        namespace Qei0idxiValC{
        }
    }
    namespace Nonepinassign15{    ///<Pin assign register 15. Assign movable functions
        using Addr = Register::Address<0x4003803c,0xffff0000,0,unsigned>;
        ///GPIO_INT_BMATCH function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::ReadWriteAccess,unsigned> gpioIntBmatchO{}; 
        namespace GpiointbmatchoValC{
        }
        ///SWO function assignment. The value is the pin number to be assigned to this function. PIO0_0 = 0, ..., PIO1_0 = 32, ..., PIO2_11 = 75.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,8),Register::ReadWriteAccess,unsigned> swoO{}; 
        namespace SwooValC{
        }
    }
    namespace Nonepinenable0{    ///<Pin enable register 0. Enables fixed-pin functions
        using Addr = Register::Address<0x400381c0,0x00000000,0,unsigned>;
        ///ADC0_0 pin enable.
        enum class Adc00Val {
            enabledOnPinP008=0x00000000,     ///<Enabled on pin P0_08.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adc00Val> adc00{}; 
        namespace Adc00ValC{
            constexpr Register::FieldValue<decltype(adc00),Adc00Val::enabledOnPinP008> enabledOnPinP008{};
            constexpr Register::FieldValue<decltype(adc00),Adc00Val::disabled> disabled{};
        }
        ///ADC0_1 pin enable.
        enum class Adc01Val {
            enabledOnPinP007=0x00000000,     ///<Enabled on pin P0_07.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adc01Val> adc01{}; 
        namespace Adc01ValC{
            constexpr Register::FieldValue<decltype(adc01),Adc01Val::enabledOnPinP007> enabledOnPinP007{};
            constexpr Register::FieldValue<decltype(adc01),Adc01Val::disabled> disabled{};
        }
        ///ADC0_2 pin enable.
        enum class Adc02Val {
            enabledOnPinP006=0x00000000,     ///<Enabled on pin P0_06.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adc02Val> adc02{}; 
        namespace Adc02ValC{
            constexpr Register::FieldValue<decltype(adc02),Adc02Val::enabledOnPinP006> enabledOnPinP006{};
            constexpr Register::FieldValue<decltype(adc02),Adc02Val::disabled> disabled{};
        }
        ///ADC0_3 pin enable.
        enum class Adc03Val {
            enabledOnPinP005=0x00000000,     ///<Enabled on pin P0_05.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adc03Val> adc03{}; 
        namespace Adc03ValC{
            constexpr Register::FieldValue<decltype(adc03),Adc03Val::enabledOnPinP005> enabledOnPinP005{};
            constexpr Register::FieldValue<decltype(adc03),Adc03Val::disabled> disabled{};
        }
        ///ADC0_4 pin enable.
        enum class Adc04Val {
            enabledOnPinP004=0x00000000,     ///<Enabled on pin P0_04.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc04Val> adc04{}; 
        namespace Adc04ValC{
            constexpr Register::FieldValue<decltype(adc04),Adc04Val::enabledOnPinP004> enabledOnPinP004{};
            constexpr Register::FieldValue<decltype(adc04),Adc04Val::disabled> disabled{};
        }
        ///ADC0_5 pin enable.
        enum class Adc05Val {
            enabledOnPinP003=0x00000000,     ///<Enabled on pin P0_03.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adc05Val> adc05{}; 
        namespace Adc05ValC{
            constexpr Register::FieldValue<decltype(adc05),Adc05Val::enabledOnPinP003> enabledOnPinP003{};
            constexpr Register::FieldValue<decltype(adc05),Adc05Val::disabled> disabled{};
        }
        ///ADC0_6 pin enable.
        enum class Adc06Val {
            enabledOnPinP002=0x00000000,     ///<Enabled on pin P0_02.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adc06Val> adc06{}; 
        namespace Adc06ValC{
            constexpr Register::FieldValue<decltype(adc06),Adc06Val::enabledOnPinP002> enabledOnPinP002{};
            constexpr Register::FieldValue<decltype(adc06),Adc06Val::disabled> disabled{};
        }
        ///ADC0_7 pin enable.
        enum class Adc07Val {
            enabledOnPinP001=0x00000000,     ///<Enabled on pin P0_01.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc07Val> adc07{}; 
        namespace Adc07ValC{
            constexpr Register::FieldValue<decltype(adc07),Adc07Val::enabledOnPinP001> enabledOnPinP001{};
            constexpr Register::FieldValue<decltype(adc07),Adc07Val::disabled> disabled{};
        }
        ///ADC0_8 pin enable.
        enum class Adc08Val {
            enabledOnPinP100=0x00000000,     ///<Enabled on pin P1_00 .
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Adc08Val> adc08{}; 
        namespace Adc08ValC{
            constexpr Register::FieldValue<decltype(adc08),Adc08Val::enabledOnPinP100> enabledOnPinP100{};
            constexpr Register::FieldValue<decltype(adc08),Adc08Val::disabled> disabled{};
        }
        ///ADC0_9 pin enable.
        enum class Adc09Val {
            enabledOnPinP031=0x00000000,     ///<Enabled on pin P0_31.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Adc09Val> adc09{}; 
        namespace Adc09ValC{
            constexpr Register::FieldValue<decltype(adc09),Adc09Val::enabledOnPinP031> enabledOnPinP031{};
            constexpr Register::FieldValue<decltype(adc09),Adc09Val::disabled> disabled{};
        }
        ///ADC0_10 pin enable.
        enum class Adc010Val {
            enabledOnPinP000=0x00000000,     ///<Enabled on pin P0_00.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Adc010Val> adc010{}; 
        namespace Adc010ValC{
            constexpr Register::FieldValue<decltype(adc010),Adc010Val::enabledOnPinP000> enabledOnPinP000{};
            constexpr Register::FieldValue<decltype(adc010),Adc010Val::disabled> disabled{};
        }
        ///ADC0_11 pin enable.
        enum class Adc011Val {
            enabledOnPinP030=0x00000000,     ///<Enabled on pin P0_30.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Adc011Val> adc011{}; 
        namespace Adc011ValC{
            constexpr Register::FieldValue<decltype(adc011),Adc011Val::enabledOnPinP030> enabledOnPinP030{};
            constexpr Register::FieldValue<decltype(adc011),Adc011Val::disabled> disabled{};
        }
        ///ADC1_0 pin enable.
        enum class Adc10Val {
            enabledOnPinP101=0x00000000,     ///<Enabled on pin P1_01.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Adc10Val> adc10{}; 
        namespace Adc10ValC{
            constexpr Register::FieldValue<decltype(adc10),Adc10Val::enabledOnPinP101> enabledOnPinP101{};
            constexpr Register::FieldValue<decltype(adc10),Adc10Val::disabled> disabled{};
        }
        ///ADC1_1 pin enable.
        enum class Adc11Val {
            enabledOnPinP009=0x00000000,     ///<Enabled on pin P0_09.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Adc11Val> adc11{}; 
        namespace Adc11ValC{
            constexpr Register::FieldValue<decltype(adc11),Adc11Val::enabledOnPinP009> enabledOnPinP009{};
            constexpr Register::FieldValue<decltype(adc11),Adc11Val::disabled> disabled{};
        }
        ///ADC1_2 pin enable.
        enum class Adc12Val {
            enabledOnPinP010=0x00000000,     ///<Enabled on pin P0_10.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Adc12Val> adc12{}; 
        namespace Adc12ValC{
            constexpr Register::FieldValue<decltype(adc12),Adc12Val::enabledOnPinP010> enabledOnPinP010{};
            constexpr Register::FieldValue<decltype(adc12),Adc12Val::disabled> disabled{};
        }
        ///ADC1_3 pin enable.
        enum class Adc13Val {
            enabledOnPinP011=0x00000000,     ///<Enabled on pin P0_11.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Adc13Val> adc13{}; 
        namespace Adc13ValC{
            constexpr Register::FieldValue<decltype(adc13),Adc13Val::enabledOnPinP011> enabledOnPinP011{};
            constexpr Register::FieldValue<decltype(adc13),Adc13Val::disabled> disabled{};
        }
        ///ADC1_4 pin enable.
        enum class Adc14Val {
            enabledOnPinP102=0x00000000,     ///<Enabled on pin P1_02.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Adc14Val> adc14{}; 
        namespace Adc14ValC{
            constexpr Register::FieldValue<decltype(adc14),Adc14Val::enabledOnPinP102> enabledOnPinP102{};
            constexpr Register::FieldValue<decltype(adc14),Adc14Val::disabled> disabled{};
        }
        ///ADC1_5 pin enable.
        enum class Adc15Val {
            enabledOnPinP103=0x00000000,     ///<Enabled on pin P1_03.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Adc15Val> adc15{}; 
        namespace Adc15ValC{
            constexpr Register::FieldValue<decltype(adc15),Adc15Val::enabledOnPinP103> enabledOnPinP103{};
            constexpr Register::FieldValue<decltype(adc15),Adc15Val::disabled> disabled{};
        }
        ///ADC1_6 pin enable.
        enum class Adc16Val {
            enabledOnPinP013=0x00000000,     ///<Enabled on pin P0_13.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Adc16Val> adc16{}; 
        namespace Adc16ValC{
            constexpr Register::FieldValue<decltype(adc16),Adc16Val::enabledOnPinP013> enabledOnPinP013{};
            constexpr Register::FieldValue<decltype(adc16),Adc16Val::disabled> disabled{};
        }
        ///ADC1_7 pin enable.
        enum class Adc17Val {
            enabledOnPinP014=0x00000000,     ///<Enabled on pin P0_14.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Adc17Val> adc17{}; 
        namespace Adc17ValC{
            constexpr Register::FieldValue<decltype(adc17),Adc17Val::enabledOnPinP014> enabledOnPinP014{};
            constexpr Register::FieldValue<decltype(adc17),Adc17Val::disabled> disabled{};
        }
        ///ADC1_8 pin enable.
        enum class Adc18Val {
            enabledOnPinP015=0x00000000,     ///<Enabled on pin P0_15.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Adc18Val> adc18{}; 
        namespace Adc18ValC{
            constexpr Register::FieldValue<decltype(adc18),Adc18Val::enabledOnPinP015> enabledOnPinP015{};
            constexpr Register::FieldValue<decltype(adc18),Adc18Val::disabled> disabled{};
        }
        ///ADC1_9 pin enable.
        enum class Adc19Val {
            enabledOnPinP016=0x00000000,     ///<Enabled on pin P0_16.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,Adc19Val> adc19{}; 
        namespace Adc19ValC{
            constexpr Register::FieldValue<decltype(adc19),Adc19Val::enabledOnPinP016> enabledOnPinP016{};
            constexpr Register::FieldValue<decltype(adc19),Adc19Val::disabled> disabled{};
        }
        ///ADC1_10 pin enable.
        enum class Adc110Val {
            enabledOnPinP104=0x00000000,     ///<Enabled on pin P1_04.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,Adc110Val> adc110{}; 
        namespace Adc110ValC{
            constexpr Register::FieldValue<decltype(adc110),Adc110Val::enabledOnPinP104> enabledOnPinP104{};
            constexpr Register::FieldValue<decltype(adc110),Adc110Val::disabled> disabled{};
        }
        ///ADC1_11 pin enable.
        enum class Adc111Val {
            enabledOnPinP105=0x00000000,     ///<Enabled on pin P1_05.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,Adc111Val> adc111{}; 
        namespace Adc111ValC{
            constexpr Register::FieldValue<decltype(adc111),Adc111Val::enabledOnPinP105> enabledOnPinP105{};
            constexpr Register::FieldValue<decltype(adc111),Adc111Val::disabled> disabled{};
        }
        ///DAC_OUT pin enable.
        enum class DacoutVal {
            enabledOnPinP012=0x00000000,     ///<Enabled on pin P0_12.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,DacoutVal> dacOut{}; 
        namespace DacoutValC{
            constexpr Register::FieldValue<decltype(dacOut),DacoutVal::enabledOnPinP012> enabledOnPinP012{};
            constexpr Register::FieldValue<decltype(dacOut),DacoutVal::disabled> disabled{};
        }
        ///ACMP input 1 (common input) pin enable.
        enum class Acmpi1Val {
            enabledOnPinP027=0x00000000,     ///<Enabled on pin P0_27.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(25,25),Register::ReadWriteAccess,Acmpi1Val> acmpI1{}; 
        namespace Acmpi1ValC{
            constexpr Register::FieldValue<decltype(acmpI1),Acmpi1Val::enabledOnPinP027> enabledOnPinP027{};
            constexpr Register::FieldValue<decltype(acmpI1),Acmpi1Val::disabled> disabled{};
        }
        ///ACMP input 2 (common input) pin enable.
        enum class Acmpi2Val {
            enabledOnPinP106=0x00000000,     ///<Enabled on pin P1_06.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,26),Register::ReadWriteAccess,Acmpi2Val> acmpI2{}; 
        namespace Acmpi2ValC{
            constexpr Register::FieldValue<decltype(acmpI2),Acmpi2Val::enabledOnPinP106> enabledOnPinP106{};
            constexpr Register::FieldValue<decltype(acmpI2),Acmpi2Val::disabled> disabled{};
        }
        ///Analog comparator 0 input 3 pin enable.
        enum class Acmp0i3Val {
            enabledOnPinP026=0x00000000,     ///<Enabled on pin P0_26.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,Acmp0i3Val> acmp0I3{}; 
        namespace Acmp0i3ValC{
            constexpr Register::FieldValue<decltype(acmp0I3),Acmp0i3Val::enabledOnPinP026> enabledOnPinP026{};
            constexpr Register::FieldValue<decltype(acmp0I3),Acmp0i3Val::disabled> disabled{};
        }
        ///Analog comparator 0 input 4 pin enable.
        enum class Acmp0i4Val {
            enabledOnPinP025=0x00000000,     ///<Enabled on pin P0_25.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,Acmp0i4Val> acmp0I4{}; 
        namespace Acmp0i4ValC{
            constexpr Register::FieldValue<decltype(acmp0I4),Acmp0i4Val::enabledOnPinP025> enabledOnPinP025{};
            constexpr Register::FieldValue<decltype(acmp0I4),Acmp0i4Val::disabled> disabled{};
        }
        ///Analog comparator 1 input 3 pin enable.
        enum class Acmp1i3Val {
            enabledOnPinP028=0x00000000,     ///<Enabled on pin P0_28.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,Acmp1i3Val> acmp1I3{}; 
        namespace Acmp1i3ValC{
            constexpr Register::FieldValue<decltype(acmp1I3),Acmp1i3Val::enabledOnPinP028> enabledOnPinP028{};
            constexpr Register::FieldValue<decltype(acmp1I3),Acmp1i3Val::disabled> disabled{};
        }
        ///Analog comparator 1 input 4 pin enable.
        enum class Acmp1i4Val {
            enabledOnPinP110=0x00000000,     ///<Enabled on pin P1_10.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,30),Register::ReadWriteAccess,Acmp1i4Val> acmp1I4{}; 
        namespace Acmp1i4ValC{
            constexpr Register::FieldValue<decltype(acmp1I4),Acmp1i4Val::enabledOnPinP110> enabledOnPinP110{};
            constexpr Register::FieldValue<decltype(acmp1I4),Acmp1i4Val::disabled> disabled{};
        }
        ///Analog comparator 2 input 3 pin enable.
        enum class Acmp2i3Val {
            enabledOnPinP029=0x00000000,     ///<Enabled on pin P0_29.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,Acmp2i3Val> acmp2I3{}; 
        namespace Acmp2i3ValC{
            constexpr Register::FieldValue<decltype(acmp2I3),Acmp2i3Val::enabledOnPinP029> enabledOnPinP029{};
            constexpr Register::FieldValue<decltype(acmp2I3),Acmp2i3Val::disabled> disabled{};
        }
    }
    namespace Nonepinenable1{    ///<Pin enable register 0. Enables fixed-pin functions
        using Addr = Register::Address<0x400381c4,0xff000000,0,unsigned>;
        ///Analog comparator 2 input 4 pin enable.
        enum class Acmp2i4Val {
            enabledOnPinP109=0x00000000,     ///<Enabled on pin P1_09.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Acmp2i4Val> acmp2I4{}; 
        namespace Acmp2i4ValC{
            constexpr Register::FieldValue<decltype(acmp2I4),Acmp2i4Val::enabledOnPinP109> enabledOnPinP109{};
            constexpr Register::FieldValue<decltype(acmp2I4),Acmp2i4Val::disabled> disabled{};
        }
        ///Analog comparator 3 input 3 pin enable.
        enum class Acmp3i3Val {
            enabledOnPinP108=0x00000000,     ///<Enabled on pin P1_08.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Acmp3i3Val> acmp3I3{}; 
        namespace Acmp3i3ValC{
            constexpr Register::FieldValue<decltype(acmp3I3),Acmp3i3Val::enabledOnPinP108> enabledOnPinP108{};
            constexpr Register::FieldValue<decltype(acmp3I3),Acmp3i3Val::disabled> disabled{};
        }
        ///Analog comparator 3 input 4 pin enable.
        enum class Acmp3i4Val {
            enabledOnPinP107=0x00000000,     ///<Enabled on pin P1_07.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Acmp3i4Val> acmp3I4{}; 
        namespace Acmp3i4ValC{
            constexpr Register::FieldValue<decltype(acmp3I4),Acmp3i4Val::enabledOnPinP107> enabledOnPinP107{};
            constexpr Register::FieldValue<decltype(acmp3I4),Acmp3i4Val::disabled> disabled{};
        }
        ///I2C0_SDA pin enable.
        enum class I2c0sdaVal {
            enabledOnPinP023=0x00000000,     ///<Enabled on pin P0_23.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,I2c0sdaVal> i2c0Sda{}; 
        namespace I2c0sdaValC{
            constexpr Register::FieldValue<decltype(i2c0Sda),I2c0sdaVal::enabledOnPinP023> enabledOnPinP023{};
            constexpr Register::FieldValue<decltype(i2c0Sda),I2c0sdaVal::disabled> disabled{};
        }
        ///I2C0_SCL pin enable.
        enum class I2c0sclVal {
            enabledOnPinP022=0x00000000,     ///<Enabled on pin P0_22.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,I2c0sclVal> i2c0Scl{}; 
        namespace I2c0sclValC{
            constexpr Register::FieldValue<decltype(i2c0Scl),I2c0sclVal::enabledOnPinP022> enabledOnPinP022{};
            constexpr Register::FieldValue<decltype(i2c0Scl),I2c0sclVal::disabled> disabled{};
        }
        ///SCT0_OUT3 pin enable.
        enum class Sct0out3Val {
            enabledOnPinP000=0x00000000,     ///<Enabled on pin P0_00.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Sct0out3Val> sct0Out3{}; 
        namespace Sct0out3ValC{
            constexpr Register::FieldValue<decltype(sct0Out3),Sct0out3Val::enabledOnPinP000> enabledOnPinP000{};
            constexpr Register::FieldValue<decltype(sct0Out3),Sct0out3Val::disabled> disabled{};
        }
        ///SCT0_OUT4 pin enable.
        enum class Sct0out4Val {
            enabledOnPinP001=0x00000000,     ///<Enabled on pin P0_01.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Sct0out4Val> sct0Out4{}; 
        namespace Sct0out4ValC{
            constexpr Register::FieldValue<decltype(sct0Out4),Sct0out4Val::enabledOnPinP001> enabledOnPinP001{};
            constexpr Register::FieldValue<decltype(sct0Out4),Sct0out4Val::disabled> disabled{};
        }
        ///SCT0_OUT5 pin enable.
        enum class Sct0out5Val {
            enabledOnPinP018=0x00000000,     ///<Enabled on pin P0_18.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Sct0out5Val> sct0Out5{}; 
        namespace Sct0out5ValC{
            constexpr Register::FieldValue<decltype(sct0Out5),Sct0out5Val::enabledOnPinP018> enabledOnPinP018{};
            constexpr Register::FieldValue<decltype(sct0Out5),Sct0out5Val::disabled> disabled{};
        }
        ///SCT0_OUT6 pin enable.
        enum class Sct0out6Val {
            enabledOnPinP024=0x00000000,     ///<Enabled on pin P0_24.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,Sct0out6Val> sct0Out6{}; 
        namespace Sct0out6ValC{
            constexpr Register::FieldValue<decltype(sct0Out6),Sct0out6Val::enabledOnPinP024> enabledOnPinP024{};
            constexpr Register::FieldValue<decltype(sct0Out6),Sct0out6Val::disabled> disabled{};
        }
        ///SCT0_OUT7 pin enable.
        enum class Sct0out7Val {
            enabledOnPinP114=0x00000000,     ///<Enabled on pin P1_14.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,Sct0out7Val> sct0Out7{}; 
        namespace Sct0out7ValC{
            constexpr Register::FieldValue<decltype(sct0Out7),Sct0out7Val::enabledOnPinP114> enabledOnPinP114{};
            constexpr Register::FieldValue<decltype(sct0Out7),Sct0out7Val::disabled> disabled{};
        }
        ///SCT1_OUT3 pin enable.
        enum class Sct1out3Val {
            enabledOnPinP002=0x00000000,     ///<Enabled on pin P0_02.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,Sct1out3Val> sct1Out3{}; 
        namespace Sct1out3ValC{
            constexpr Register::FieldValue<decltype(sct1Out3),Sct1out3Val::enabledOnPinP002> enabledOnPinP002{};
            constexpr Register::FieldValue<decltype(sct1Out3),Sct1out3Val::disabled> disabled{};
        }
        ///SCT1_OUT4 pin enable.
        enum class Sct1out4Val {
            enabledOnPinP003=0x00000000,     ///<Enabled on pin P0_03.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,Sct1out4Val> sct1Out4{}; 
        namespace Sct1out4ValC{
            constexpr Register::FieldValue<decltype(sct1Out4),Sct1out4Val::enabledOnPinP003> enabledOnPinP003{};
            constexpr Register::FieldValue<decltype(sct1Out4),Sct1out4Val::disabled> disabled{};
        }
        ///SCT1_OUT5 pin enable.
        enum class Sct1out5Val {
            enabledOnPinP014=0x00000000,     ///<Enabled on pin P0_14.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,Sct1out5Val> sct1Out5{}; 
        namespace Sct1out5ValC{
            constexpr Register::FieldValue<decltype(sct1Out5),Sct1out5Val::enabledOnPinP014> enabledOnPinP014{};
            constexpr Register::FieldValue<decltype(sct1Out5),Sct1out5Val::disabled> disabled{};
        }
        ///SCT1_OUT6 pin enable.
        enum class Sct1out6Val {
            enabledOnPinP020=0x00000000,     ///<Enabled on pin P0_20.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,Sct1out6Val> sct1Out6{}; 
        namespace Sct1out6ValC{
            constexpr Register::FieldValue<decltype(sct1Out6),Sct1out6Val::enabledOnPinP020> enabledOnPinP020{};
            constexpr Register::FieldValue<decltype(sct1Out6),Sct1out6Val::disabled> disabled{};
        }
        ///SCT1_OUT7 pin enable.
        enum class Sct1out7Val {
            enabledOnPinP117=0x00000000,     ///<Enabled on pin P1_17.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,Sct1out7Val> sct1Out7{}; 
        namespace Sct1out7ValC{
            constexpr Register::FieldValue<decltype(sct1Out7),Sct1out7Val::enabledOnPinP117> enabledOnPinP117{};
            constexpr Register::FieldValue<decltype(sct1Out7),Sct1out7Val::disabled> disabled{};
        }
        ///SCT2_OUT3 pin enable.
        enum class Sct2out3Val {
            enabledOnPinP006=0x00000000,     ///<Enabled on pin P0_06.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,Sct2out3Val> sct2Out3{}; 
        namespace Sct2out3ValC{
            constexpr Register::FieldValue<decltype(sct2Out3),Sct2out3Val::enabledOnPinP006> enabledOnPinP006{};
            constexpr Register::FieldValue<decltype(sct2Out3),Sct2out3Val::disabled> disabled{};
        }
        ///SCT2_OUT4 pin enable.
        enum class Sct2out4Val {
            enabledOnPinP029=0x00000000,     ///<Enabled on pin P0_29.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,Sct2out4Val> sct2Out4{}; 
        namespace Sct2out4ValC{
            constexpr Register::FieldValue<decltype(sct2Out4),Sct2out4Val::enabledOnPinP029> enabledOnPinP029{};
            constexpr Register::FieldValue<decltype(sct2Out4),Sct2out4Val::disabled> disabled{};
        }
        ///SCT2_OUT5 pin enable.
        enum class Sct2out5Val {
            enabledOnPinP120=0x00000000,     ///<Enabled on pin P1_20.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,Sct2out5Val> sct2Out5{}; 
        namespace Sct2out5ValC{
            constexpr Register::FieldValue<decltype(sct2Out5),Sct2out5Val::enabledOnPinP120> enabledOnPinP120{};
            constexpr Register::FieldValue<decltype(sct2Out5),Sct2out5Val::disabled> disabled{};
        }
        ///SCT3_OUT3 pin enable.
        enum class Sct3out3Val {
            enabledOnPinP026=0x00000000,     ///<Enabled on pin P0_26.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,Sct3out3Val> sct3Out3{}; 
        namespace Sct3out3ValC{
            constexpr Register::FieldValue<decltype(sct3Out3),Sct3out3Val::enabledOnPinP026> enabledOnPinP026{};
            constexpr Register::FieldValue<decltype(sct3Out3),Sct3out3Val::disabled> disabled{};
        }
        ///SCT3_OUT4 pin enable.
        enum class Sct3out4Val {
            enabledOnPinP108=0x00000000,     ///<Enabled on pin P1_08.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,Sct3out4Val> sct3Out4{}; 
        namespace Sct3out4ValC{
            constexpr Register::FieldValue<decltype(sct3Out4),Sct3out4Val::enabledOnPinP108> enabledOnPinP108{};
            constexpr Register::FieldValue<decltype(sct3Out4),Sct3out4Val::disabled> disabled{};
        }
        ///SCT3_OUT5 pin enable.
        enum class Sct3out5Val {
            enabledOnPinP124=0x00000000,     ///<Enabled on pin P1_24.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,Sct3out5Val> sct3Out5{}; 
        namespace Sct3out5ValC{
            constexpr Register::FieldValue<decltype(sct3Out5),Sct3out5Val::enabledOnPinP124> enabledOnPinP124{};
            constexpr Register::FieldValue<decltype(sct3Out5),Sct3out5Val::disabled> disabled{};
        }
        ///RESETN pin enable.
        enum class ResetnVal {
            enabledOnPinP021=0x00000000,     ///<Enabled on pin P0_21.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,ResetnVal> resetn{}; 
        namespace ResetnValC{
            constexpr Register::FieldValue<decltype(resetn),ResetnVal::enabledOnPinP021> enabledOnPinP021{};
            constexpr Register::FieldValue<decltype(resetn),ResetnVal::disabled> disabled{};
        }
        ///SWCLK_TCK pin enable.
        enum class SwclktckVal {
            enabledOnPinP019=0x00000000,     ///<Enabled on pin P0_19.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,SwclktckVal> swclkTck{}; 
        namespace SwclktckValC{
            constexpr Register::FieldValue<decltype(swclkTck),SwclktckVal::enabledOnPinP019> enabledOnPinP019{};
            constexpr Register::FieldValue<decltype(swclkTck),SwclktckVal::disabled> disabled{};
        }
        ///SWDIO pin enable.
        enum class SwdioVal {
            enabledOnPinP020=0x00000000,     ///<Enabled on pin P0_20.
            disabled=0x00000001,     ///<Disabled.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,SwdioVal> swdio{}; 
        namespace SwdioValC{
            constexpr Register::FieldValue<decltype(swdio),SwdioVal::enabledOnPinP020> enabledOnPinP020{};
            constexpr Register::FieldValue<decltype(swdio),SwdioVal::disabled> disabled{};
        }
    }
}
