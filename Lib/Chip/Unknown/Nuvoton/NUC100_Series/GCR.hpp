#pragma once 
#include <Register/Utility.hpp>
namespace Kvasir {
//Registers group
    namespace GcrPdid{    ///<Part Device Identification Number Register
        using Addr = Register::Address<0x50000000,0x00000000,0x00000000,unsigned>;
        ///Part Device Identification NumberThis register reflects device part number code. S/W can read this register to identify which device is used.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> pdid{}; 
    }
    namespace GcrRstsrc{    ///<System Reset Source Register
        using Addr = Register::Address<0x50000004,0xffffffff,0x00000000,unsigned>;
        ///The RSTS_POR flag is set by the "reset signal" from the Power-On Reset (POR) module or bit CHIP_RST (IPRSTC1[0]) to indicate the previous reset source1= The Power-On Reset (POR) or CHIP_RST had issued the reset signal to reset the system.0= No reset from POR or CHIP_RSSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsPor{}; 
        ///The RSTS_RESET flag is set by the "reset signal" from the /RESET pin to indicate the previous reset source.1 = The Pin /RESET had issued the reset signal to reset the system.0 = No reset from /RESET pinSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsReset{}; 
        ///The The RSTS_WDT flag is set by the "reset signal" from the watchdog timer to indicate the previous reset source.1 = The watchdog timer had issued the reset signal to reset the system.0 = No reset from watchdog timerSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsWdt{}; 
        ///The RSTS_LVR flag is set by the "reset signal" from the Low-Voltage-Reset controller to indicate the previous reset source.1 = The LVR controller had issued the reset signal to reset the system.0 = No reset from LVRSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsLvr{}; 
        ///The RSTS_BOD flag is set by the "reset signal" from the Brown-Out-Detector controller to indicate the previous reset source.1 = The BOD had issued the reset signal to reset the system.0 = No reset from BODSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsBod{}; 
        ///The RSTS_SYS flag is set by the "reset signal" from the Cortex_M0 kernel to indicate the previous reset source.1 = The Cortex_M0 had issued the reset signal to reset the system by software writing 1 to bit SYSRESTREQ(AIRCR[2], Application Interrupt and Reset Control Register, address = 0xE000ED0C) in system control registers of Cortex_M0 kernel.0 = No reset from Cortex_M0Software can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsSys{}; 
        ///The RSTS_CPU flag is set by hardware if software writes CPU_RST (IPRSTC1[1]) 1 to reset Cortex-M0 CPU kernel and Flash memory controller (FMC).1 = The Cortex-M0 CPU kernel and FMC are reset by software setting CPU_RST to 10 = No reset from CPUSoftware can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> rstsCpu{}; 
    }
    namespace GcrIprstc1{    ///<IP Reset Control Resister1
        using Addr = Register::Address<0x50000008,0xfffffff0,0x00000000,unsigned>;
        ///CHIP one shot reset (write-protection bit)Setting this bit will reset the whole chip, including CPU kernel and all peripherals, and this bit will automatically return to 0 after the 2 clock cycles.The CHIP_RST is same as the POR reset, all the chip controllers is reset and the chip setting from flash are also reload. About the difference between CHIP_RST and SYSRESETREQ, please refer to section 5.2.2 of TRM.This bit is the protected bit. It means programming this bit needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.1 = CHIP one shot reset0 = CHIP normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> chipRst{}; 
        ///CPU kernel one shot reset (write-protection bit)Setting this bit will only reset the CPU kernel and Flash Memory Controller(FMC), and this bit will automatically return to 0 after the 2 clock cyclesThis bit is the protected bit, It means programming this bit needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.1 = CPU one shot reset0 = CPU normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::modify>,unsigned> cpuRst{}; 
        ///PDMA Controller Reset (write-protection bit in NUC100/NUC120/NUC130/NUC140 Low Density and NUC101)Setting this bit to 1 will generate a reset signal to the PDMA. User need to set this bit to 0 to release from reset stateThis bit is the protected bit, It means programming this bit needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x1001 = PDMA controller reset0 = PDMA controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pdmaRst{}; 
        ///EBI Controller Reset (write-protection bit in NUC100/NUC120/NUC130/NUC140 Low Density 64-pin package)Set this bit to 1 will generate a reset signal to the EBI. User need to set this bit to 0 to release from the reset state.This bit is the protected bit, It means programming this bit needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.1 = EBI controller reset0 = EBI controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> ebiRst{}; 
    }
    namespace GcrIprstc2{    ///<IP Reset Control Resister 2
        using Addr = Register::Address<0x5000000c,0xc6080cc1,0x00000000,unsigned>;
        ///GPIO controller Reset1 = GPIO controller reset0 = GPIO controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpioRst{}; 
        ///Timer0 controller Reset1 = Timer0 controller reset0 = Timer0 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> tmr0Rst{}; 
        ///Timer1 controller Reset1 = Timer1 controller reset0 = Timer1 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> tmr1Rst{}; 
        ///Timer2 controller Reset1 = Timer2 controller reset0 = Timer2 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> tmr2Rst{}; 
        ///Timer3 controller Reset1 = Timer3 controller reset0 = Timer3 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> tmr3Rst{}; 
        ///I2C0 controller Reset1 = I2C0 controller reset0 = I2C0 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> i2c0Rst{}; 
        ///I2C1 controller Reset1 = I2C1 controller reset0 = I2C1 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> i2c1Rst{}; 
        ///SPI0 controller Reset1 = SPI0 controller reset0 = SPI0 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi0Rst{}; 
        ///SPI1 controller Reset1 = SPI1 controller reset0 = SPI1 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi1Rst{}; 
        ///SPI2 controller Reset (Medium Density Only)1 = SPI2 controller reset0 = SPI2 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> spi2Rst{}; 
        ///SPI3 controller Reset (Medium Density Only)1 = SPI3 controller reset0 = SPI3 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> spi3Rst{}; 
        ///UART0 controller Reset1 = UART0 controller reset0 = UART0 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(16,16),Register::ReadWriteAccess,unsigned> uart0Rst{}; 
        ///UART1 controller Reset1 = UART1 controller reset0 = UART1 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(17,17),Register::ReadWriteAccess,unsigned> uart1Rst{}; 
        ///UART2 controller Reset (Medium Density Only)1 = UART2 controller reset0 = UART2 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(18,18),Register::ReadWriteAccess,unsigned> uart2Rst{}; 
        ///PWM03 controller Reset1 = PWM03 controller reset0 = PWM03 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(20,20),Register::ReadWriteAccess,unsigned> pwm03Rst{}; 
        ///PWM47 controller Reset (Medium Density Only)1 = PWM47 controller reset0 = PWM47 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(21,21),Register::ReadWriteAccess,unsigned> pwm47Rst{}; 
        ///Analog Comparator Controller Reset1 = Analog Comparator controller reset0 = Analog Comparator controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(22,22),Register::ReadWriteAccess,unsigned> acmpRst{}; 
        ///PS2 Controller Reset1 = PS2 controller reset0 = PS2 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,23),Register::ReadWriteAccess,unsigned> ps2Rst{}; 
        ///CAN0 Controller Reset1 = CAN0 controller reset0 = CAN0 controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(24,24),Register::ReadWriteAccess,unsigned> can0Rst{}; 
        ///USB Device Controller Reset1 = USB device controller reset0 = USB devide controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(27,27),Register::ReadWriteAccess,unsigned> usbdRst{}; 
        ///ADC Controller Reset1 = ADC controller reset0 = ADC controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(28,28),Register::ReadWriteAccess,unsigned> adcRst{}; 
        ///I2S Controller Reset1 = I2S controller reset0 = I2S controller normal operation
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(29,29),Register::ReadWriteAccess,unsigned> i2sRst{}; 
    }
    namespace GcrBodcr{    ///<Brown Out Detector Control Register
        using Addr = Register::Address<0x50000018,0xffffff10,0x00000000,unsigned>;
        ///Brown Out Detector EnableThe default value is set by flash controller user configuration register config0 bit[23].1 = Brown Out Detector function is enabled0 = Brown Out Detector function is disabledThis bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> bodEn{}; 
        ///Brown Out Detector Threshold Voltage SelectionThe default value is set by flash controller user configuration register config0 bit[22:21].This bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.BOV_VL[1]	BOV_VL[0]	Brown out voltage	1	1	4.5V	1	0	3.8V	0	1	2.7V	0	0	2.2V	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,1),Register::ReadWriteAccess,unsigned> bodVl{}; 
        ///Brown Out Reset 1 = Enable the Brown Out "RESET" function.While the Brown Out Detector function is enabled (BOD_EN high) and BOD reset function is enabled (BOD_RSTEN high), BOD will assert a signal to reset chip when the detected voltage is lower than the threshold (BOD_OUT high).0 = Enable the Brown Out "INTERRUPT" functionWhile the BOD function is enabled (BOD_EN high) and BOD interrupt function is enabled (BOD_RSTEN low), BOD will assert an interrupt if BOD_OUT is high. BOD interrupt will keep till to the BOD_EN set to 0. BOD interrupt can be blocked by disabling the NVIC BOD interrupt or disabling BOD function (set BOD_EN low).The default value is set by flash controller user configuration register config0 bit[20].This bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> bodRsten{}; 
        ///Brown Out Detector Interrupt Flag1 = When Brown Out Detector detects the VDD is dropped down through the voltage of BOD_VL setting or the VDD is raised up through the voltage of BOD_VL setting, this bit is set to 1 and the brown out interrupt is requested if brown out interrupt is enabled.0 = Brown Out Detector does not detect any voltage draft at VDD down through or up through the voltage of BOD_VL setting.Software can write 1 to clear this bit to zero.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::Access<Register::AccessType::readWrite,Register::ReadActionType::normal,Register::ModifiedWriteValueType::oneToClear>,unsigned> bodIntf{}; 
        ///Brown Out Detector Low power Mode1 = Enable the BOD low power mode0 = BOD operate in normal mode (default)The BOD consumes about 100uA in normal mode, the low power mode can reduce the current to about 1/10 but slow the BOD response.This bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> bodLpm{}; 
        ///Brown Out Detector output status1 = Brown Out Detector output status is 1. It means the detected voltage is lower than BOD_VL setting. If the BOD_EN is 0, BOD function disabled , this bit always responds 00 = Brown Out Detector output status is 0. It means the detected voltage is higher than BOD_VL setting or BOD_EN is 0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> bodOut{}; 
        ///Low Voltage Reset EnableThe LVR function reset the chip when the input power voltage is lower than LVR circuit setting. LVR function is enabled in default.1 = Enabled Low Voltage Reset function. After enabling the bit, the LVR function will be active with 100uS delay for LVR output stable (default)0 = Disabled Low Voltage Reset functionThis bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> lvrEn{}; 
    }
    namespace GcrTempcr{    ///<Temperature Sensor Control Register
        using Addr = Register::Address<0x5000001c,0xfffffffe,0x00000000,unsigned>;
        ///Temperature sensor EnableThis bit is used to enable/disable temperature sensor function.1 = Enabled temperature sensor function0 = Disabled temperature sensor function (default)After this bit is set to 1, the value of temperature can get from ADC conversion result by ADC channel selecting channel 7 and alternative multiplexer channel selecting temperature sensor. Detail ADC conversion function please reference ADC function chapter.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> vtempEn{}; 
    }
    namespace GcrPorcr{    ///<Power-On-Reset Controller Register
        using Addr = Register::Address<0x50000024,0xffff0000,0x00000000,unsigned>;
        ///The register is used for the Power-On-Reset enable controlWhen power on, the POR circuit generates a reset signal to reset the whole chip function, but noise on the power may cause the POR active again. User can disable internal POR circuit to avoid unpredictable noise to cause chip reset by writing 0x5AA5 to this field.The POR function will be active again when this field is set to another value or chip is reset by other reset source, including: /RESET, Watch dog, LVR reset, BOD reset, ICE reset command and the software-chip reset functionThis bit is the protected bit. It means programming this needs to write "59h", "16h", "88h" to address 0x5000_0100 to disable register protection. Reference the register REGWRPROT at address GCR_BA+0x100.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,0),Register::ReadWriteAccess,unsigned> porDisCode{}; 
    }
    namespace GcrGpaMfp{    ///<GPIOA multiple function and input type control register
        using Addr = Register::Address<0x50000030,0x00000000,0x00000000,unsigned>;
        ///PA.0 Pin Function Selection1 = The ADC0 (Analog-to-Digital converter channel 0) function is selected to the pin PA.00 = The GPIOA[0] is selected to the pin PA.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpaMfp0{}; 
        ///PA.1 Pin Function SelectionThe pin function depends on GPA_MFP1 and EBI_HB_EN[4] (ALT_MFP[20]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[4]	EBI_EN 	GPA_MFP[1]	PA.1 function 	x 	x 	0 	GPIO 	x 	0 	1 	ADC1 (ADC)	0 	1 	1 	ADC1 (ADC)	1 	1 	1 	AD12 (EBI AD bus bit 12)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpaMfp1{}; 
        ///PA.2 Pin Function SelectionThe pin function depends on GPA_MFP2 and EBI_HB_EN[3] (ALT_MFP[19]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[3]	EBI_EN 	GPA_MFP[2]	PA.2 function 	x 	x 	0 	GPIO 	x 	0 	1 	ADC2 (ADC)	0 	1 	1 	ADC2 (ADC)	1 	1 	1 	AD11 (EBI AD bus bit 11)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpaMfp2{}; 
        ///PA.3 Pin Function SelectionThe pin function depends on GPA_MFP3 and EBI_HB_EN[2] (ALT_MFP[18]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[2]	EBI_EN 	GPA_MFP[3]	PA.3 function 	x 	x 	0 	GPIO 	x 	0 	1 	ADC3 (ADC)	0 	1 	1 	ADC3 (ADC)	1 	1 	1 	AD10 (EBI AD bus bit 10)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpaMfp3{}; 
        ///PA.4 Pin Function SelectionThe pin function depends on GPA_MFP4 and EBI_HB_EN[1] (ALT_MFP[17]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[1]	EBI_EN 	GPA_MFP[4]	PA.4 function 	x 	x 	0 	GPIO 	x 	0 	1 	ADC4 (ADC)	0 	1 	1 	ADC4 (ADC)	1 	1 	1 	AD9 (EBI AD bus bit 9)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpaMfp4{}; 
        ///PA.5 Pin Function SelectionThe pin function depends on GPA_MFP5 and EBI_HB_EN[0] (ALT_MFP[16]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[0]	EBI_EN 	GPA_MFP[5]	PA.5 function 	x 	x 	0 	GPIO 	x 	0 	1 	ADC5 (ADC)	0 	1 	1 	ADC5 (ADC)	1 	1 	1 	AD8 (EBI AD bus bit 8)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpaMfp5{}; 
        ///PA.6 Pin Function SelectionThe pin function depends on GPA_MFP6 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPA_MFP[6]	PA.6 function 	x 	0 	GPIO 	0 	1 	ADC6 (ADC)	1 	1 	AD7 (EBI AD bus bit 7)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpaMfp6{}; 
        ///PA.7 Pin Function SelectionThe pin function depends on GPA_MFP7 and PA7_S21 (ALT_MFP[2]) and EBI_EN (ALT_MFP[11]).EBI_EN	PA7_S21	GPA_MFP[7]	PA.7 function 	x 	x 	0 	GPIO 	0 	0 	1 	ADC7 (ADC)	0 	1 	1 	SPISS21 (SPI2)	1 	x 	1 	AD6 (EBI AD bus bit 6)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpaMfp7{}; 
        ///PA.8 Pin Function Selection1 = The I2C0 SDA function is selected to the pin PA.80 = The GPIOA[8] is selected to the pin PA.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpaMfp8{}; 
        ///PA.9 Pin Function Selection1 = The I2C0 SCL function is selected to the pin PA.90 = The GPIOA[9] is selected to the pin PA.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpaMfp9{}; 
        ///PA.10 Pin Function SelectionThe pin function depends on GPA_MFP10 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPA_MFP[10]	PA.10 function 	x 	0 	GPIO 	0 	1 	SDA1 (I2C)	1 	1 	nWR (EBI)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpaMfp10{}; 
        ///PA.11 Pin Function SelectionThe pin function depends on GPA_MFP11 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPA_MFP[11]	PA.11 function 	x 	0 	GPIO 	0 	1 	SCL1 (I2C)	1 	1 	nRD (EBI)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpaMfp11{}; 
        ///PA.12 Pin Function SelectionThe pin function depends on GPA_MFP12 and EBI_HB_EN[5] (ALT_MFP[21]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[5]	EBI_EN 	GPA_MFP[12]	PA.12 function 	x 	x 	0 	GPIO 	x 	0 	1 	PWM0 (PWM)	0 	1 	1 	PWM0 (PWM)	1 	1 	1 	AD13 (EBI AD bus bit 13)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpaMfp12{}; 
        ///PA.13 Pin Function SelectionThe pin function depends on GPA_MFP13 and EBI_HB_EN[6] (ALT_MFP[22]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[6]	EBI_EN 	GPA_MFP[13]	PA.13 function 	x 	x 	0 	GPIO 	x 	0 	1 	PWM1 (PWM)	0 	1 	1 	PWM1 (PWM)	1 	1 	1 	AD14 (EBI AD bus bit 14)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpaMfp13{}; 
        ///PA.14 Pin Function SelectionThe pin function depends on GPA_MFP14 and EBI_HB_EN[7] (ALT_MFP[23]) and EBI_EN (ALT_MFP[11]).EBI_HB_EN[7]	EBI_EN 	GPA_MFP[14]	PA.14 function 	x 	x 	0 	GPIO 	x 	0 	1 	PWM2 (PWM)	0 	1 	1 	PWM2 (PWM)	1 	1 	1 	AD15 (EBI AD bus bit 15)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpaMfp14{}; 
        ///PA.14 Pin Function SelectionThe pin function depends on GPA_MFP15 and PA15_I2SMCLK (ALT_MFP[9]).PA15_I2SMCLK	GPA_MFP[15]	PA.15 function 	x 	0 	GPIO 	0 	1 	PWM3 (PWM) 	1 	1 	I2SMCLK (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpaMfp15{}; 
        ///1 = Enable GPIOA[15:0] I/O input Schmitt Trigger function0 = Disable GPIOA[15:0] I/O input Schmitt Trigger function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpaTypen{}; 
    }
    namespace GcrGpbMfp{    ///<GPIOB multiple function and input type control register
        using Addr = Register::Address<0x50000034,0x00000000,0x00000000,unsigned>;
        ///PB.0 Pin Function Selection1 = The UART0 RXD function is selected to the pin PB.00 = The GPIOB[0] is selected to the pin PB.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpbMfp0{}; 
        ///PB.1 Pin Function Selection1 = The UART0 TXD function is selected to the pin PB.10 = The GPIOB[1] is selected to the pin PB.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpbMfp1{}; 
        ///PB.2 Pin Function SelectionThe pin function depends on GPB_MFP2 and EBI_nWRL_EN (ALT_MFP[13]) and EBI_EN (ALT_MFP[11]).EBI_nWRL_EN 	EBI_EN 	GPB_MFP[2]	PB.2 function 	x 	x 	0 	GPIO 	x 	0 	1 	RTS0 (UART0)	0 	1 	1 	RTS0 (UART0)	1 	1 	1 	nWRL (EBI write low byte enable)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpbMfp2{}; 
        ///PB.3 Pin Function SelectionThe pin function depends on GPB_MFP3 and EBI_nWRH_EN (ALT_MFP[14]) and EBI_EN (ALT_MFP[11]).EBI_nWRH_EN 	EBI_EN 	GPB_MFP[3]	PB.3 function 	x 	x 	0 	GPIO 	x 	0 	1 	CTS0 (UART0)	0 	1 	1 	CTS0 (UART0)	1 	1 	1 	nWRH (EBI write high byte enable)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpbMfp3{}; 
        ///PB.4 Pin Function Selection1 = The UART1 RXD function is selected to the pin PB.40 = The GPIOB[4] is selected to the pin PB.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpbMfp4{}; 
        ///PB.5 Pin Function Selection1 = The UART1 TXD function is selected to the pin PB.50 = The GPIOB[5] is selected to the pin PB.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpbMfp5{}; 
        ///PB.6 Pin Function SelectionThe pin function depends on GPB_MFP6 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPB_MFP[6]	PB.6 function 	x 	0 	GPIO 	0 	1 	TRS1 (UART1)	1 	1 	ALE (EBI)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpbMfp6{}; 
        ///PB.7 Pin Function SelectionThe pin function depends on GPB_MFP7 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPB_MFP[7]	PB.7 function 	x 	0 	GPIO 	0 	1 	CTS1 (UART1)	1 	1 	nCS (EBI)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpbMfp7{}; 
        ///PB.8 Pin Function Selection1 = The TM0 (Timer/Counter external trigger clock input) function is selected to the pin PB.80 = The GPIOB[8] is selected to the pin PB.8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpbMfp8{}; 
        ///PB.9 Pin Function SelectionThe pin function depends on GPB_MFP9 and PB9_S11 (ALT_MFP[1]).PB9_S11	GPB_MFP[9]	PB.9 function 	x 	0 	GPIO 	0 	1 	TM1 	1 	1 	SPISS11 (SPI1)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpbMfp9{}; 
        ///PB.10 Pin Function SelectionThe pin function depends on GPB_MFP10 and PB10_S01 (ALT_MFP[0]).PB10_S01	GPB_MFP[10]	PB.10 function 	x 	0 	GPIO 	0 	1 	TM2 	1 	1 	SPISS01 (SPI0)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpbMfp10{}; 
        ///PB.11 Pin Function SelectionThe pin function depends on GPB_MFP11 and PB11_PWM4 (ALT_MFP[4]).PB11_PWM4	GPB_MFP[11]	PB.11 function 	x 	0 	GPIO 	0 	1 	TM3 	1 	1 	PWM4 (PWM)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpbMfp11{}; 
        ///PB.12 Pin Function SelectionThe pin function depends on GPB_MFP12 and PB12_CLKO (ALT_MFP[10]) and EBI_EN (ALT_MFP[11]).EBI_EN	PB12_CLKO	GPB_MFP[12]	PB.12 function 	x 	x 	0 	GPIO 	0 	0 	1 	CPO0(CMP) 	0 	1 	1 	CLKO (Clock Driver output)	1 	x 	1 	AD0(EBI AD bus bit 0) 	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpbMfp12{}; 
        ///PB.13 Pin Function SelectionThe pin function depends on GPB_MFP13 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPB_MFP[13]	PB.13 function 	x 	0 	GPIO 	0 	1 	CPO1 (CMP)	1 	1 	AD1 (EBI AD bus bit 1)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpbMfp13{}; 
        ///PB.14 Pin Function SelectionThe pin function depends on GPB_MFP14 and PB14_S31 (ALT_MFP[3]).PB14_S31	GPB_MFP[14]	PB.14 function 	x 	0 	GPIO 	0 	1 	/INT0 	1 	1 	SPISS31 (SPI3)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpbMfp14{}; 
        ///PB.15 Pin Function Selection1 = The External Interrupt INT1 function is selected to the pin PB.150 = The GPIOB[15] is selected to the pin PB.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpbMfp15{}; 
        ///1 = Enable GPIOB[15:0] I/O input Schmitt Trigger function0 = Disable GPIOB[15:0] I/O input Schmitt Trigger function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpbTypen{}; 
    }
    namespace GcrGpcMfp{    ///<GPIOC multiple function and input type control register
        using Addr = Register::Address<0x50000038,0x00000000,0x00000000,unsigned>;
        ///PC.0 Pin Function SelectionBits PC0_I2SLRCLK (ALT_MFP[5]) and GPC_MFP[0] determine the PC.0 function.PC0_I2SLRCLK	GPC_MFP[0]	PC.0 function 	x 	0 	GPIO 	0 	1 	SPISS00(SPI0) 	1 	1 	I2SLRCLK (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> spi0Ss0I2slrclk{}; 
        ///PC.1 Pin Function SelectionBits PC1_I2SBCLK (ALT_MFP[6]) and GPC_MFP[1] determine the PC.1 function.PC1_I2SBCLK	GPC_MFP[1]	PC.1 function 	x 	0 	GPIO 	0 	1 	SPICLK0 (SPI0) 	1 	1 	I2SBLK (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> spi0ClkI2sbclk{}; 
        ///PC.2 Pin Function SelectionBits PC2_I2SDI (ALT_MFP[7]) and GPC_MFP[2] determine the PC.2 function.PC2_I2SDI	GPC_MFP[2]	PC.2 function 	x 	0 	GPIO 	0 	1 	MISO00 (SPI0) 	1 	1 	I2SDI (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> spi0Miso0I2sdi{}; 
        ///PC.3 Pin Function SelectionBits PC3_I2SDO (ALT_MFP[8]) and GPC_MFP[3] determine the PC.3 function.PC3_I2SDO	GPC_MFP[3]	PC.3 function 	x 	0 	GPIO 	0 	1 	MOSI00 (SPI0) 	1 	1 	I2SDO (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> spi0Mosi0I2sdo{}; 
        ///PC.4 Pin Function Selection1 = The SPI0 MISO1 (master input, slave output pin-1) function is selected to the pin PC.40 = The GPIOC[4] is selected to the pin PC.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> spi0Miso1{}; 
        ///PC.5 Pin Function Selection1 = The SPI0 MOSI1 (master output, slave input pin-1) function is selected to the pin PC.50 = The GPIOC[5] is selected to the pin PC.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> spi0Mosi1{}; 
        ///PC.6 Pin Function SelectionThe pin function depends on GPC_MFP6 and EBI_EN (ALT_MFP[11]).EBI_EN	GPC_MFP[6]	PC.6 function 	x 	0 	GPIO 	0 	1 	CPP0 (CMP) 	1 	1 	AD4 (EBI AD bus bit 4)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> cpp0Ad4{}; 
        ///PC.7 Pin Function SelectionThe pin function depends on GPC_MFP7 and EBI_EN (ALT_MFP[11]).EBI_EN	GPC_MFP[7]	PC.7 function 	x 	0 	GPIO 	0 	1 	CPN0 (CMP) 	1 	1 	AD5 (EBI AD bus bit 5)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> cpn0Ad5{}; 
        ///PC.8 Pin Function SelectionThe pin function depends on GPC_MFP8 and EBI_MCLK_EN (ALT_MFP[12]) and EBI_EN (ALT_MFP[11]).EBI_MCLK_EN 	EBI_EN 	GPC_MFP[8]	PC.8 function 	x 	x 	0 	GPIO 	x 	0 	1 	SPISS10 (SPI1) 	0 	1 	1 	SPISS10 (SPI1) 	1 	1 	1 	MCLK (EBI Clock output)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> spi1Ss0Mclk{}; 
        ///PC.9 Pin Function Selection1 = The SPI1 SPICLK function is selected to the pin PC.90 = The GPIOC[9] is selected to the pin PC.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> spi1Clk{}; 
        ///PC.10 Pin Function Selection1 = The SPI1 MISO0 (master input, slave output pin-0) function is selected to the pin PC.100 = The GPIOC[10] is selected to the pin PC.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> spi1Miso0{}; 
        ///PC.11 Pin Function Selection1 = The SPI1 MOSI0 (master output, slave input pin-0) function is selected to the pin PC.110 = The GPIOC[11] is selected to the pin PC.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> spi1Mosi0{}; 
        ///PC.12 Pin Function Selection1 = The SPI1 MISO1 (master input, slave output pin-1) function is selected to the pin PC.120 = The GPIOC[12] is selected to the pin PC.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> spi1Miso1{}; 
        ///PC.13 Pin Function Selection1 = The SPI1 MOSI1 (master output, slave input pin-1) function is selected to the pin PC.130 = The GPIOC[13] is selected to the pin PC.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> spi1Mosi1{}; 
        ///PC.14 Pin Function SelectionThe pin function depends on GPC_MFP14 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPC_MFP[14]	PC.14 function 	x 	0 	GPIO 	0 	1 	CPP1 (CMP)	1 	1 	AD2 (EBI AD bus bit 2)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> cpp1Ad2{}; 
        ///PC.15 Pin Function SelectionThe pin function depends on GPC_MFP15 and EBI_EN (ALT_MFP[11]).EBI_EN 	GPC_MFP[15]	PC.15 function 	x 	0 	GPIO 	0 	1 	CPN1 (CMP)	1 	1 	AD3 (EBI AD bus bit 3)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> cpp1Ad3{}; 
        ///1 = Enable GPIOC[15:0] I/O input Schmitt Trigger function0 = Disable GPIOC[15:0] I/O input Schmitt Trigger function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> schmitt{}; 
    }
    namespace GcrGpdMfp{    ///<GPIOD multiple function and input type control register
        using Addr = Register::Address<0x5000003c,0x00000000,0x00000000,unsigned>;
        ///PD.0 Pin Function Selection (Medium Density Only)1 = The SPI2 SS20 function is selected to the pin PD.00 = The GPIOD[0] is selected to the pin PD.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpdMfp0{}; 
        ///PD.1 Pin Function SelectionFor NUC100/NUC120/NUC130/NUC140 Medium Density1 = The SPI2 SPICLK function is selected to the pin PD.10 = The GPIOD[1] is selected to the pin PD.1For NUC100/NUC120/NUC130/NUC140 Low Density and NUC101 LQFP48 packageReservedFor NUC101 QFN36 package1 = The SPI0 SS01 function is selected to the pin PD.10 = The GPIOD[1] is selected to the pin PD.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpdMfp1{}; 
        ///PD.2 Pin Function SelectionFor NUC100/NUC120/NUC130/NUC140 Medium Density1 = The SPI2 MISO0 (master input, slave output pin-0) function is selected to the pin PD.20 = The GPIOD[2] is selected to the pin PD.2For NUC100/NUC120/NUC130/NUC140 Low Density and NUC101 LQFP48 packageReservedFor NUC101 QFN36 package1 = The SPI0 MISO1 (master input, slave output pin-1) function is selected to the pin PD.20 = The GPIOD[2] is selected to the pin PD.2
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> gpdMfp2{}; 
        ///PD.3 Pin Function SelectionFor NUC100/NUC120/NUC130/NUC140 Medium Density1 = The SPI2 MOSI0 (master output, slave input pin-0) function is selected to the pin GPD30 = The GPIOD[3] is selected to the pin PD.3For NUC100/NUC120/NUC130/NUC140 Low Density and NUC101 LQFP48 packageReservedFor NUC101 QFN36 package1 = The SPI0 MOSI1 (master output, slave input pin-1) function is selected to the pin PD.30 = The GPIOD[3] is selected to the pin PD.3
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> gpdMfp3{}; 
        ///PD.4 Pin Function Selection (Medium Density Only)1 = The SPI2 MISO1 (master input, slave output pin-1) function is selected to the pin PD.40 = The GPIOD[4]is selected to the pin PD.4
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> gpdMfp4{}; 
        ///PD.5 Pin Function Selection (Medium Density Only)1 = The SPI2 MOSI1 (master output, slave input pin-1) function is selected to the pin PD.50 = The GPIOD[5] is selected to the pin PD.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpdMfp5{}; 
        ///PD.6 Pin Function Selection (Medium Density Only)1 = The CAN0 RX function is selected to the pin PD.60 = The GPIOD[6] is selected to the pin PD.6
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> gpdMfp6{}; 
        ///PD.7 Pin Function Selection (Medium Density Only)1 = The CAN0 TX function is selected to the pin PD.70 = The GPIOD[7] is selected to the pin PD.7
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> gpdMfp7{}; 
        ///PD.8 Pin Function Selection (Medium Density Only)1 = The SPI3 SS30 function is selected to the pin PD80 = The GPIOD[8] is selected to the pin PD8
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> gpdMfp8{}; 
        ///PD.9 Pin Function Selection (Medium Density Only)1 = The SPI3 SPICLK function is selected to the pin PD.90 = The GPIOD-9 is selected to the pin PD.9
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> gpdMfp9{}; 
        ///PD.10 Pin Function Selection (Medium Density Only)1 = The SPI3 MISO0 (master input, slave output pin-0) function is selected to the pin PD.100 = The GPIOD[10] is selected to the pin PD.10
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> gpdMfp10{}; 
        ///PD.11 Pin Function Selection (Medium Density Only)1 = The SPI3 MOSI0 (master output, slave input pin-0) function is selected to the pin PD.110 = The GPIOD[11] is selected to the pin PD.11
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> gpdMfp11{}; 
        ///PD.12 Pin Function Selection (Medium Density Only)1 = The SPI3 MISO1 (master input, slave output pin-1) function is selected to the pin PD.120 = The GPIOD[12] is selected to the pin PD.12
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> gpdMfp12{}; 
        ///PD.13 Pin Function Selection (Medium Density Only)1 = The SPI3 MOSI1 (master output, slave input pin-1) function is selected to the pin PD.130 = The GPIOD[13] is selected to the pin PD.13
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> gpdMfp13{}; 
        ///PD.14 Pin Function Selection (Medium Density Only)1 = The UART2 RXD function is selected to the pin PD.140 = The GPIOD[14] selected to the pin PD.14
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> gpdMfp14{}; 
        ///PD.15 Pin Function Selection (Medium Density Only)1 = The UART2 TXD function is selected to the pin PD.150 = The GPIOD[15] selected to the pin PD.15
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(15,15),Register::ReadWriteAccess,unsigned> gpdMfp15{}; 
        ///1 = Enable GPIOD[15:0] I/O input Schmitt Trigger function0 = Disable GPIOD[15:0] I/O input Schmitt Trigger function
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpdTypen{}; 
    }
    namespace GcrGpeMfp{    ///<GPIOE multiple function and input type control register
        using Addr = Register::Address<0x50000040,0x0000ffdc,0x00000000,unsigned>;
        ///PE.0 Pin Function Selection (Medium Density Only)1 = The PWM6 function is selected to the pin PE.00 = The GPIOE[0] is selected to the pin PE.0
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> gpeMfp0{}; 
        ///PE.1 Pin Function Selection (Medium Density Only)1 = The PWM7 function is selected to the pin PE.10 = The GPIOE[1] is selected to the pin PE.1
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> gpeMfp1{}; 
        ///PE.5 Pin Function Selection (Medium Density Only)1 = The PWM5 function is selected to the pin PE.50 = The GPIOE[5] is selected to the pin PE.5
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> gpeMfp5{}; 
        ///1 = Enable GPIOE[15:0] I/O input Schmitt Trigger function0 = Disable GPIOE[15:0] I/O input Schmitt Trigger functionNote: In this field, Low Density only has GPE_TYPE5 bit
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(31,16),Register::ReadWriteAccess,unsigned> gpeTypen{}; 
    }
    namespace GcrAltMfp{    ///<Alternative Multiple Function Pin Control Register
        using Addr = Register::Address<0x50000050,0xff008000,0x00000000,unsigned>;
        ///Bits PB10_S01 and GPB_MFP10 determine the PB.10 function.PB10_S01	GPB_MFP[10]	PB.10 function 	x 	0 	GPIO 	0 	1 	TM2 	1 	1 	SPISS01 (SPI0)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::ReadWriteAccess,unsigned> pb10S01{}; 
        ///Bits PB9_S11 and GPB_MFP9 determine the PB.9 function.PB9_S11	GPB_MFP[9]	PB.9 function 	x 	0 	GPIO 	0 	1 	TM1 	1 	1 	SPISS11 (SPI1)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(1,1),Register::ReadWriteAccess,unsigned> pb9S11{}; 
        ///Bits PA7_S21, PA_MFP7 and EBI_EN (ALT_MFP[11])determine the PA.7 function.EBI_EN	PA7_S21	GPA_MFP[7]	PA.7 function 	x 	x 	0 	GPIO 	0 	0 	1 	ADC7 (ADC)	0 	1 	1 	SPISS21 (SPI2)	1 	x 	1 	AD6 (EBI AD bus bit 6)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(2,2),Register::ReadWriteAccess,unsigned> pa7S21{}; 
        ///Bits PB14_S31 and GPB_MFP14 determine the GPB14 function.PB14_S31	GPB_MFP[14]	PB.14 function 	x 	0 	GPIO 	0 	1 	/INT0 	1 	1 	SPISS31 (SPI3)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(3,3),Register::ReadWriteAccess,unsigned> pb14S31{}; 
        ///Bits PB11_PWM4 and GPB_MFP[11] determine the PB.11 function.PB11_PWM4	GPB_MFP[11]	PB.11 function 	x 	0 	GPIO 	0 	1 	TM3 	1 	1 	PWM4 (PWM)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(4,4),Register::ReadWriteAccess,unsigned> pb11Pwm4{}; 
        ///Bits PC0_I2SLRCLK and GPC_MFP[0] determine the PC.0 function.PC0_I2SLRCLK	GPC_MFP[0]	PC.0 function 	x 	0 	GPIO 	0 	1 	SPISS00(SPI0) 	1 	1 	I2SLRCLK (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(5,5),Register::ReadWriteAccess,unsigned> pc0I2slrclk{}; 
        ///Bits PC1_I2SBCLK and GPC_MFP[1] determine the PC.1 function.PC1_I2SBCLK	GPC_MFP[1]	PC.1 function 	x 	0 	GPIO 	0 	1 	SPICLK0 (SPI0) 	1 	1 	I2SBLK (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(6,6),Register::ReadWriteAccess,unsigned> pc1I2sbclk{}; 
        ///Bits PC2_I2SDI and GPC_MFP[2] determine the PC.2 function.PC2_I2SDI	GPC_MFP[2]	PC.2 function 	x 	0 	GPIO 	0 	1 	MISO00 (SPI0) 	1 	1 	I2SDI (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,7),Register::ReadWriteAccess,unsigned> pc2I2sdi{}; 
        ///Bits PC3_I2SDO and GPC_MFP[3] determine the PC.3 function.PC3_I2SDO	GPC_MFP[3]	PC.3 function 	x 	0 	GPIO 	0 	1 	MOSI00 (SPI0) 	1 	1 	I2SDO (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(8,8),Register::ReadWriteAccess,unsigned> pc3I2sdo{}; 
        ///Bits PA15_I2SMCLK and GPA_MFP[15] determine the PA.15 function.PA15_I2SMCLK	GPA_MFP[15]	PA.15 function 	x 	0 	GPIO 	0 	1 	PWM3 (PWM) 	1 	1 	I2SMCLK (I2S)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(9,9),Register::ReadWriteAccess,unsigned> pa15I2smclk{}; 
        ///Bits PB12_CLKO and GPB_MFP[12] determine the PB.12 function.EBI_EN 	PB12_CLKO 	GPB_MFP[12]	PB.12 function 	x 	x 	0 	GPIO 	x 	0 	1 	CPO0 (CMP)	0 	1 	1 	CLKO (Clock Driver output)	1 	1 	1 	AD0 (EBI AD bus bit 0)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(10,10),Register::ReadWriteAccess,unsigned> pb12Clko{}; 
        ///EBI_EN is use to switch GPIO function to EBI function (AD[15:0], ALE, RE, WE, CS, MCLK), it need additional registers EBI_EN[7:0] and EBI_MCLK_EN for some GPIO to switch to EBI function(AD[15:8], MCLK)
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(11,11),Register::ReadWriteAccess,unsigned> ebiEn{}; 
        ///Bits EBI_MCLK_EN, EBI_EN and GPC_MFP[8] determine the PC.8 function.EBI_MCLK_EN 	EBI_EN 	GPC_MFP[8]	PC.8 function 	x 	x 	0 	GPIO 	x 	0 	1 	SPISS10 (SPI1) 	0 	1 	1 	SPISS10 (SPI1) 	1 	1 	1 	MCLK (EBI Clock output)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(12,12),Register::ReadWriteAccess,unsigned> ebiMclkEn{}; 
        ///Bits EBI_nWRL_EN, EBI_EN and GPB_MFP[2] determine the PB.2 function.EBI_nWRL_EN 	EBI_EN 	GPB_MFP[2]	PB.2 function 	x 	x 	0 	GPIO 	x 	0 	1 	RTS0 (UART0)	0 	1 	1 	RTS0 (UART0)	1 	1 	1 	nWRL (EBI write low byte enable)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(13,13),Register::ReadWriteAccess,unsigned> ebiNwrlEn{}; 
        ///Bits EBI_nWRH_EN, EBI_EN and GPB_MFP[3] determine the PB.3 functionEBI_nWRH_EN 	EBI_EN 	GPB_MFP[3]	PB.3 function 	x 	x 	0 	GPIO 	x 	0 	1 	CTS0 (UART0)	0 	1 	1 	CTS0 (UART0)	1 	1 	1 	nWRH (EBI write high byte enable)	
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(14,14),Register::ReadWriteAccess,unsigned> ebiNwrhEn{}; 
        ///EBI_HB_EN is use to switch GPIO function to EBI address/data bus high byte (AD[15:8]), EBI_HB_EN, EBI_EN and corresponding GPx_MFP[y] determine the Px.y function.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(23,16),Register::ReadWriteAccess,unsigned> ebiHbEn{}; 
    }
    namespace GcrRegwrprot{    ///<Register Write Protect Register
        using Addr = Register::Address<0x50000100,0xffffff00,0x00000000,unsigned>;
        ///Register Write Protection Disable Index (Read only)1 = Write-Protection is disabled for writing protected registers0 = Write-Protection is enabled for writing protected registers. Any write to the protected register is ignored.The Protected registers are:IPRST1: address 0x5000_0008BODCR: address 0x5000_0018PORCR: address 0x5000_0024PWRCON: address 0x5000_0200 (bit[6] is not protected for power wake-up interrupt clear)APBCLK bit[0]: address 0x5000_0208 (bit[0] is watchdog timer clock enable)CLK_SEL0: address 0x5000_0210 (for HCLK and CPU STCLK clock source select)CLK_SEL1 bit[1:0]: address 0x5000_0214 (for watch dog clock source select)ISPCON: address 0x5000_C000 (Flash ISP Control register)WTCR: address 0x4000_4000FATCON: address 0x5000_C018
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(0,0),Register::Access<Register::AccessType::readOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> regprotdis{}; 
        ///Register Write-Protection Code (Write only)Some write-protected registers have to be disabled the protected function by writing the sequence value "59h", "16h", "88h" to this field. After this sequence is completed, the REGPROTDIS bit will be set to 1 and write-protected registers can be normal write.
        constexpr Register::FieldLocation<Addr,Register::maskFromRange(7,0),Register::Access<Register::AccessType::writeOnly,Register::ReadActionType::normal,Register::ModifiedWriteValueType::normal>,unsigned> regwrprot{}; 
    }
}
