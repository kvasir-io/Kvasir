#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Product name title=UM10430 Chapter title=LPC18xx System Control Unit (SCU) Modification date=6/8/2011 Major revision=0 Minor revision=10 
    namespace ScuEnaio0{    ///<ADC0 function select register
        using Addr = Register::Address<0x40086c88,0xffffff80,0x00000000,unsigned>;
        ///Select ADC0_0
        enum class Adc00Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_0 selected on pin P4_3.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adc00Val> adc00{}; 
        namespace Adc00ValC{
            constexpr Register::FieldValue<decltype(adc00)::Type,Adc00Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc00)::Type,Adc00Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_1
        enum class Adc01Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_1 selected on pin P4_1.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adc01Val> adc01{}; 
        namespace Adc01ValC{
            constexpr Register::FieldValue<decltype(adc01)::Type,Adc01Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc01)::Type,Adc01Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_2
        enum class Adc02Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_2 selected on pin PF_8.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_8.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adc02Val> adc02{}; 
        namespace Adc02ValC{
            constexpr Register::FieldValue<decltype(adc02)::Type,Adc02Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc02)::Type,Adc02Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_3
        enum class Adc03Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_3 selected on pin P7_5.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adc03Val> adc03{}; 
        namespace Adc03ValC{
            constexpr Register::FieldValue<decltype(adc03)::Type,Adc03Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc03)::Type,Adc03Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_4
        enum class Adc04Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_4 selected on pin P7_4.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc04Val> adc04{}; 
        namespace Adc04ValC{
            constexpr Register::FieldValue<decltype(adc04)::Type,Adc04Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc04)::Type,Adc04Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_5
        enum class Adc05Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_5 selected on pin PF_10.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_10.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adc05Val> adc05{}; 
        namespace Adc05ValC{
            constexpr Register::FieldValue<decltype(adc05)::Type,Adc05Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc05)::Type,Adc05Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC0_6
        enum class Adc06Val {
            analogFunctionAdc0=0x00000000,     ///<Analog function ADC0_6 selected on pin PB_6.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PB_6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adc06Val> adc06{}; 
        namespace Adc06ValC{
            constexpr Register::FieldValue<decltype(adc06)::Type,Adc06Val::analogFunctionAdc0> analogFunctionAdc0{};
            constexpr Register::FieldValue<decltype(adc06)::Type,Adc06Val::digitalFunctionSel> digitalFunctionSel{};
        }
    }
    namespace ScuEnaio1{    ///<ADC1 function select register
        using Addr = Register::Address<0x40086c8c,0xffffff00,0x00000000,unsigned>;
        ///Select ADC1_0
        enum class Adc10Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_0 selected on pin PC_3.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PC_3.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,Adc10Val> adc10{}; 
        namespace Adc10ValC{
            constexpr Register::FieldValue<decltype(adc10)::Type,Adc10Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc10)::Type,Adc10Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_1
        enum class Adc11Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_1 selected on pin PC_0.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PC_0.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,Adc11Val> adc11{}; 
        namespace Adc11ValC{
            constexpr Register::FieldValue<decltype(adc11)::Type,Adc11Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc11)::Type,Adc11Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_2
        enum class Adc12Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_2 selected on pin PF_9.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_9.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,Adc12Val> adc12{}; 
        namespace Adc12ValC{
            constexpr Register::FieldValue<decltype(adc12)::Type,Adc12Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc12)::Type,Adc12Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_3
        enum class Adc13Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_3 selected on pin PF_6.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_6.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,Adc13Val> adc13{}; 
        namespace Adc13ValC{
            constexpr Register::FieldValue<decltype(adc13)::Type,Adc13Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc13)::Type,Adc13Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_4
        enum class Adc14Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_4 selected on pin PF_5.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_5.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,Adc14Val> adc14{}; 
        namespace Adc14ValC{
            constexpr Register::FieldValue<decltype(adc14)::Type,Adc14Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc14)::Type,Adc14Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_5
        enum class Adc15Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_5 selected on pin PF_11.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_11.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,Adc15Val> adc15{}; 
        namespace Adc15ValC{
            constexpr Register::FieldValue<decltype(adc15)::Type,Adc15Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc15)::Type,Adc15Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_6
        enum class Adc16Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_6 selected on pin P7_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P7_7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,Adc16Val> adc16{}; 
        namespace Adc16ValC{
            constexpr Register::FieldValue<decltype(adc16)::Type,Adc16Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc16)::Type,Adc16Val::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select ADC1_7
        enum class Adc17Val {
            analogFunctionAdc1=0x00000000,     ///<Analog function ADC1_7 selected on pin PF_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,Adc17Val> adc17{}; 
        namespace Adc17ValC{
            constexpr Register::FieldValue<decltype(adc17)::Type,Adc17Val::analogFunctionAdc1> analogFunctionAdc1{};
            constexpr Register::FieldValue<decltype(adc17)::Type,Adc17Val::digitalFunctionSel> digitalFunctionSel{};
        }
    }
    namespace ScuEnaio2{    ///<Analog function select register
        using Addr = Register::Address<0x40086c90,0xffffffee,0x00000000,unsigned>;
        ///Select DAC
        enum class DacVal {
            analogFunctionDac=0x00000000,     ///<Analog function DAC selected on pin P4_4.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin P4_4.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,DacVal> dac{}; 
        namespace DacValC{
            constexpr Register::FieldValue<decltype(dac)::Type,DacVal::analogFunctionDac> analogFunctionDac{};
            constexpr Register::FieldValue<decltype(dac)::Type,DacVal::digitalFunctionSel> digitalFunctionSel{};
        }
        ///Select bandgap output
        enum class BgVal {
            bandgapOutputSelec=0x00000000,     ///<Bandgap output selected for pin PF_7.
            digitalFunctionSel=0x00000001,     ///<Digital function selected on pin PF_7.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,BgVal> bg{}; 
        namespace BgValC{
            constexpr Register::FieldValue<decltype(bg)::Type,BgVal::bandgapOutputSelec> bandgapOutputSelec{};
            constexpr Register::FieldValue<decltype(bg)::Type,BgVal::digitalFunctionSel> digitalFunctionSel{};
        }
    }
    namespace ScuSfsusb{    ///<Pin configuration register for
        using Addr = Register::Address<0x40086c80,0x00000000,0x00000000,unsigned>;
        ///Differential data input AIP/AIM  0 = Going LOW with full speed edge rate 1 = Going HIGH with full speed edge rate
        enum class UsbaimVal {
            goingLowWithFull=0x00000000,     ///<Going LOW with full speed edge rate
            goingHighWithFull=0x00000001,     ///<Going HIGH with full speed edge rate
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,UsbaimVal> usbAim{}; 
        namespace UsbaimValC{
            constexpr Register::FieldValue<decltype(usbAim)::Type,UsbaimVal::goingLowWithFull> goingLowWithFull{};
            constexpr Register::FieldValue<decltype(usbAim)::Type,UsbaimVal::goingHighWithFull> goingHighWithFull{};
        }
        ///Control signal for differential input or single input
        enum class UsbeseaVal {
            reservedDoNotUse=0x00000000,     ///<Reserved. Do not use.
            singleInputAipEn=0x00000001,     ///<Single input AIP. Enables USB1.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,UsbeseaVal> usbEsea{}; 
        namespace UsbeseaValC{
            constexpr Register::FieldValue<decltype(usbEsea)::Type,UsbeseaVal::reservedDoNotUse> reservedDoNotUse{};
            constexpr Register::FieldValue<decltype(usbEsea)::Type,UsbeseaVal::singleInputAipEn> singleInputAipEn{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,2),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsi2c0{    ///<Pin configuration register for I 2C0-bus pins
        using Addr = Register::Address<0x40086c84,0x00000000,0x00000000,unsigned>;
        ///Configures I2C0-bus speed for SDA0 pin
        enum class SdaehsVal {
            standardfastMode=0x00000000,     ///<Standard/Fast mode (400 kbit/s)
            highSpeedMode34=0x00000001,     ///<High-speed mode (3.4 Mbit/s)
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,SdaehsVal> sdaEhs{}; 
        namespace SdaehsValC{
            constexpr Register::FieldValue<decltype(sdaEhs)::Type,SdaehsVal::standardfastMode> standardfastMode{};
            constexpr Register::FieldValue<decltype(sdaEhs)::Type,SdaehsVal::highSpeedMode34> highSpeedMode34{};
        }
        ///Configures I2C0-bus speed for SCL0 pin
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> sclEhs{}; 
        ///Direction (only applies if SCL_EHS = 1)
        enum class SclecsVal {
            receive=0x00000000,     ///<Receive
            transmit=0x00000001,     ///<Transmit
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,SclecsVal> sclEcs{}; 
        namespace SclecsValC{
            constexpr Register::FieldValue<decltype(sclEcs)::Type,SclecsVal::receive> receive{};
            constexpr Register::FieldValue<decltype(sclEcs)::Type,SclecsVal::transmit> transmit{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,3),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuEmcdelayclk{    ///<EMC clock delay register
        using Addr = Register::Address<0x40086d00,0x00000000,0x00000000,unsigned>;
        ///Delay of the EXTBUS_CLK0 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,unsigned> clk0Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CLK0 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,4),Register::ReadWriteAccess,unsigned> clk1Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CLK2 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,8),Register::ReadWriteAccess,unsigned> clk2Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CLK3 clock output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,12),Register::ReadWriteAccess,unsigned> clk3Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CKEOUT0 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,16),Register::ReadWriteAccess,unsigned> cke0Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(19,19),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CKEOUT1 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,20),Register::ReadWriteAccess,unsigned> cke1Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CKEOUT2 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(26,24),Register::ReadWriteAccess,unsigned> cke2Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Delay of the EXTBUS_CKEOUT3 clock enable output.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(30,28),Register::ReadWriteAccess,unsigned> cke3Delay{}; 
        ///Reserved.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,31),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuPintsel0{    ///<Pin interrupt select register for pin interrupts 0 to 3.
        using Addr = Register::Address<0x40086e00,0x00000000,0x00000000,unsigned>;
        ///Pint interrupt 0: Select the pin number within the GPIO port selected by the PORTSEL0 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin0{}; 
        ///Pin interrupt 0: Select the port for the pin number to be selected in the INTPIN0 bits of this register.
        enum class Portsel0Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,Portsel0Val> portsel0{}; 
        namespace Portsel0ValC{
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel0)::Type,Portsel0Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 1: Select the pin number within the GPIO port selected by the PORTSEL1 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> intpin1{}; 
        ///Pin interrupt 1: Select the port for the pin number to be selected in the INTPIN1 bits of this register.
        enum class Portsel1Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,Portsel1Val> portsel1{}; 
        namespace Portsel1ValC{
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel1)::Type,Portsel1Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 2: Select the pin number within the GPIO port selected by the PORTSEL2 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> intpin2{}; 
        ///Pin interrupt 2: Select the port for the pin number to be selected in the INTPIN2 bits of this register.
        enum class Portsel2Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,Portsel2Val> portsel2{}; 
        namespace Portsel2ValC{
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel2)::Type,Portsel2Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 3: Select the pin number within the GPIO port selected by the PORTSEL3 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> intpin3{}; 
        ///Pin interrupt 3: Select the port for the pin number to be selected in the INTPIN3 bits of this register.
        enum class Portsel3Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Portsel3Val> portsel3{}; 
        namespace Portsel3ValC{
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel3)::Type,Portsel3Val::gpioPort7> gpioPort7{};
        }
    }
    namespace ScuPintsel1{    ///<Pin interrupt select register for pin interrupts 4 to 7.
        using Addr = Register::Address<0x40086e04,0x00000000,0x00000000,unsigned>;
        ///Pint interrupt 4: Select the pin number within the GPIO port selected by the PORTSEL4 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,0),Register::ReadWriteAccess,unsigned> intpin4{}; 
        ///Pin interrupt 4: Select the port for the pin number to be selected in the INTPIN4 bits of this register.
        enum class Portsel4Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,5),Register::ReadWriteAccess,Portsel4Val> portsel4{}; 
        namespace Portsel4ValC{
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel4)::Type,Portsel4Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 5: Select the pin number within the GPIO port selected by the PORTSEL5 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,8),Register::ReadWriteAccess,unsigned> intpin5{}; 
        ///Pin interrupt 5: Select the port for the pin number to be selected in the INTPIN5 bits of this register.
        enum class Portsel5Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,13),Register::ReadWriteAccess,Portsel5Val> portsel5{}; 
        namespace Portsel5ValC{
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel5)::Type,Portsel5Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 6: Select the pin number within the GPIO port selected by the PORTSEL6 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,16),Register::ReadWriteAccess,unsigned> intpin6{}; 
        ///Pin interrupt 6: Select the port for the pin number to be selected in the INTPIN6 bits of this register.
        enum class Portsel6Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,21),Register::ReadWriteAccess,Portsel6Val> portsel6{}; 
        namespace Portsel6ValC{
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel6)::Type,Portsel6Val::gpioPort7> gpioPort7{};
        }
        ///Pint interrupt 7: Select the pin number within the GPIO port selected by the PORTSEL7 bit in this register.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,24),Register::ReadWriteAccess,unsigned> intpin7{}; 
        ///Pin interrupt 7: Select the port for the pin number to be selected in the INTPIN7 bits of this register.
        enum class Portsel7Val {
            gpioPort0=0x00000000,     ///<GPIO Port 0
            gpioPort1=0x00000001,     ///<GPIO Port 1
            gpioPort2=0x00000002,     ///<GPIO Port 2
            gpioPort3=0x00000003,     ///<GPIO Port 3
            gpioPort4=0x00000004,     ///<GPIO Port 4
            gpioPort5=0x00000005,     ///<GPIO Port 5
            gpioPort6=0x00000006,     ///<GPIO Port 6
            gpioPort7=0x00000007,     ///<GPIO Port 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,29),Register::ReadWriteAccess,Portsel7Val> portsel7{}; 
        namespace Portsel7ValC{
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort0> gpioPort0{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort1> gpioPort1{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort2> gpioPort2{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort3> gpioPort3{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort4> gpioPort4{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort5> gpioPort5{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort6> gpioPort6{};
            constexpr Register::FieldValue<decltype(portsel7)::Type,Portsel7Val::gpioPort7> gpioPort7{};
        }
    }
    namespace ScuSfsp00{    ///<Pin configuration register for pins P0
        using Addr = Register::Address<0x40086000,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp01{    ///<Pin configuration register for pins P0
        using Addr = Register::Address<0x40086004,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,7),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp10{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086080,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp11{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086084,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp12{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086088,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp13{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x4008608c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp14{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086090,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp15{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086094,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp16{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x40086098,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp17{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x4008609c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp18{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp19{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a4,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp110{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860a8,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp111{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860ac,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp112{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp113{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b4,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp114{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860b8,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp115{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860bc,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp116{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp117{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c4,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp118{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860c8,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp119{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860cc,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp120{    ///<Pin configuration register for pins P1
        using Addr = Register::Address<0x400860d0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp20{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086100,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp21{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086104,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp22{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086108,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp23{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008610c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp24{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086110,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp25{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086114,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp26{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086118,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp27{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008611c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp28{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086120,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp29{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086124,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp210{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086128,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp211{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x4008612c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp212{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086130,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp213{    ///<Pin configuration register for pins P2
        using Addr = Register::Address<0x40086134,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp30{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086180,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp31{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086184,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp32{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086188,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp33{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x4008618c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp34{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086190,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp35{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086194,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp36{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x40086198,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp37{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x4008619c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp38{    ///<Pin configuration register for pins P3
        using Addr = Register::Address<0x400861a0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp40{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086200,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp41{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086204,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp42{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086208,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp43{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x4008620c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp44{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086210,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp45{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086214,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp46{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086218,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp47{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x4008621c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp48{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086220,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp49{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086224,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp410{    ///<Pin configuration register for pins P4
        using Addr = Register::Address<0x40086228,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp50{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086280,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp51{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086284,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp52{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086288,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp53{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x4008628c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp54{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086290,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp55{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086294,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp56{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x40086298,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp57{    ///<Pin configuration register for pins P5
        using Addr = Register::Address<0x4008629c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp60{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086300,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp61{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086304,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp62{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086308,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp63{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008630c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp64{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086310,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp65{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086314,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp66{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086318,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp67{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008631c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp68{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086320,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp69{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086324,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp610{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086328,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp611{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x4008632c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp612{    ///<Pin configuration register for pins P6
        using Addr = Register::Address<0x40086330,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp70{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086380,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp71{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086384,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp72{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086388,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp73{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x4008638c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp74{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086390,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp75{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086394,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp76{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x40086398,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp77{    ///<Pin configuration register for pins P7
        using Addr = Register::Address<0x4008639c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp80{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086400,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp81{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086404,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp82{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086408,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp83{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x4008640c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp84{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086410,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp85{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086414,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp86{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086418,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp87{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x4008641c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp88{    ///<Pin configuration register for pins P8
        using Addr = Register::Address<0x40086420,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp90{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086480,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp91{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086484,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp92{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086488,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp93{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x4008648c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp94{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086490,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp95{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086494,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsp96{    ///<Pin configuration register for pins P9
        using Addr = Register::Address<0x40086498,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspa0{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086500,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspa1{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086504,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspa2{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086508,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspa3{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x4008650c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspa4{    ///<Pin configuration register for pins PA
        using Addr = Register::Address<0x40086510,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb0{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086580,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb1{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086584,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb2{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086588,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb3{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x4008658c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb4{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086590,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb5{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086594,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspb6{    ///<Pin configuration register for pins PB
        using Addr = Register::Address<0x40086598,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc0{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086600,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc1{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086604,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc2{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086608,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc3{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008660c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc4{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086610,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc5{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086614,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc6{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086618,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc7{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008661c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc8{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086620,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc9{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086624,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc10{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086628,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc11{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x4008662c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc12{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086630,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc13{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086634,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspc14{    ///<Pin configuration register for pins PC
        using Addr = Register::Address<0x40086638,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd0{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086680,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd1{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086684,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd2{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086688,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd3{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x4008668c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd4{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086690,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd5{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086694,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd6{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x40086698,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd7{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x4008669c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd8{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd9{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a4,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd10{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866a8,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd11{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866ac,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd12{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd13{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b4,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd14{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866b8,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd15{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866bc,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspd16{    ///<Pin configuration register for pins PD
        using Addr = Register::Address<0x400866c0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe0{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086700,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe1{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086704,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe2{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086708,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe3{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008670c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe4{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086710,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe5{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086714,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe6{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086718,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe7{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008671c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe8{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086720,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe9{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086724,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe10{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086728,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe11{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008672c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe12{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086730,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe13{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086734,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe14{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x40086738,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspe15{    ///<Pin configuration register for pins PE
        using Addr = Register::Address<0x4008673c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf0{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086780,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf1{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086784,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf2{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086788,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf3{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x4008678c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf4{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086790,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf5{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086794,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf6{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x40086798,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf7{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x4008679c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf8{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a0,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf9{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a4,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf10{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867a8,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfspf11{    ///<Pin configuration register for pins PF
        using Addr = Register::Address<0x400867ac,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsclk0{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c00,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsclk1{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c04,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsclk2{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c08,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
    namespace ScuSfsclk3{    ///<Pin configuration register for pins CLK
        using Addr = Register::Address<0x40086c0c,0x00000000,0x00000000,unsigned>;
        ///Select pin function
        enum class ModeVal {
            function0Default=0x00000000,     ///<Function 0 (default)
            function1=0x00000001,     ///<Function 1
            function2=0x00000002,     ///<Function 2
            function3=0x00000003,     ///<Function 3
            function4=0x00000004,     ///<Function 4
            function5=0x00000005,     ///<Function 5
            function6=0x00000006,     ///<Function 6
            function7=0x00000007,     ///<Function 7
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,0),Register::ReadWriteAccess,ModeVal> mode{}; 
        namespace ModeValC{
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function0Default> function0Default{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function1> function1{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function2> function2{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function3> function3{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function4> function4{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function5> function5{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function6> function6{};
            constexpr Register::FieldValue<decltype(mode)::Type,ModeVal::function7> function7{};
        }
        ///Enable pull-down resistor at pad
        enum class EpdVal {
            disablePullDown=0x00000000,     ///<Disable pull-down.
            enablePullDown=0x00000001,     ///<Enable pull-down.
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,EpdVal> epd{}; 
        namespace EpdValC{
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::disablePullDown> disablePullDown{};
            constexpr Register::FieldValue<decltype(epd)::Type,EpdVal::enablePullDown> enablePullDown{};
        }
        ///Disable pull-up resistor at pad. By default, the pull-up resistor is enabled at reset.
        enum class EpunVal {
            enablePullUp=0x00000000,     ///<Enable pull-up
            disablePullUp=0x00000001,     ///<Disable pull-up
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,EpunVal> epun{}; 
        namespace EpunValC{
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::enablePullUp> enablePullUp{};
            constexpr Register::FieldValue<decltype(epun)::Type,EpunVal::disablePullUp> disablePullUp{};
        }
        ///Slew rate
        enum class EhsVal {
            slow=0x00000000,     ///<Slow
            fast=0x00000001,     ///<Fast
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,EhsVal> ehs{}; 
        namespace EhsValC{
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::slow> slow{};
            constexpr Register::FieldValue<decltype(ehs)::Type,EhsVal::fast> fast{};
        }
        ///Input buffer enable. The input buffer is disabled by default at reset but must be enabled to transfer data from the I/O buffer to the pad.
        enum class EziVal {
            disableInputBuffer=0x00000000,     ///<Disable input buffer
            enableInputBuffer=0x00000001,     ///<Enable input buffer
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,EziVal> ezi{}; 
        namespace EziValC{
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::disableInputBuffer> disableInputBuffer{};
            constexpr Register::FieldValue<decltype(ezi)::Type,EziVal::enableInputBuffer> enableInputBuffer{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> reserved{}; 
        ///Select drive strength
        enum class EhdVal {
            standardDrive4Ma=0x00000000,     ///<Standard drive: 4 mA drive strength
            mediumDrive8MaD=0x00000001,     ///<Medium drive: 8 mA drive strength
            highDrive14MaDr=0x00000002,     ///<High drive: 14 mA drive strength
            ultraHighDrive20=0x00000003,     ///<Ultra-high drive: 20 mA drive strength
        };
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,8),Register::ReadWriteAccess,EhdVal> ehd{}; 
        namespace EhdValC{
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::standardDrive4Ma> standardDrive4Ma{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::mediumDrive8MaD> mediumDrive8MaD{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::highDrive14MaDr> highDrive14MaDr{};
            constexpr Register::FieldValue<decltype(ehd)::Type,EhdVal::ultraHighDrive20> ultraHighDrive20{};
        }
        ///Reserved
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,10),Register::ReadWriteAccess,unsigned> reserved{}; 
    }
}
