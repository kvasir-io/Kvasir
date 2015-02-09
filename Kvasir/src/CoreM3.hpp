#pragma once
#include "CoreCommon.hpp"

namespace Kvasir{
namespace Core{
	namespace Interrupt{
		using WatchdogTimer = Type<0>;
		using Timer0 = Type<1>;
		using Timer1 = Type<2>;
		using Timer2 = Type<3>;
		using Timer3 = Type<4>;
		using Uart0 = Type<5>;
		using Uart1 = Type<6>;
		using Uart2 = Type<7>;
		using Uart3 = Type<8>;
		using Pwm = Type<9>;
		using I2C0 = Type<10>;
		using I2C1 = Type<11>;
		using I2C2 = Type<12>;
		using SPI = Type<13>;
		using SSP0 = Type<14>;
		using SSP1 = Type<15>;
		using PLL0 = Type<16>;
		using RTC = Type<17>;
		using ExternalInt0 = Type<18>;
		using ExternalInt1 = Type<19>;
		using ExternalInt2 = Type<20>;
		using ExternalInt3 = Type<21>;
		using AnalogDigitalConverter = Type<22>;
		using BrownOutDetect = Type<23>;
		using USB = Type<24>;
		using CAN = Type<25>;
		using DMA = Type<26>;
		using I2S = Type<27>;
		using Ethernet = Type<28>;
		using RepetitiveIinterruptTimer = Type<29>;
		using MotorControlPWM = Type<30>;
		using QEI = Type<31>;
		constexpr WatchdogTimer watchdogTimer;
		constexpr Timer0 timer0;
		constexpr Timer1 timer1;
		constexpr Timer2 timer2;
		constexpr Timer3 timer3;
		constexpr Uart0 uart0;
		constexpr Uart1 uart1;
		constexpr Uart2 uart2;
		constexpr Uart3 uart3;
		constexpr Pwm pwm;
		constexpr I2C0 i2C0;
		constexpr I2C1 i2C1;
		constexpr I2C2 i2C2;
		constexpr SPI spi;
		constexpr SSP0 ssp0;
		constexpr SSP1 ssp1;
		constexpr PLL0 pll0;
		constexpr RTC rtc;
		constexpr ExternalInt0 externalInt0;
		constexpr ExternalInt1 externalInt1;
		constexpr ExternalInt2 externalInt2;
		constexpr ExternalInt3 externalInt3;
		constexpr AnalogDigitalConverter analogDiditalConverter;
		constexpr BrownOutDetect brownOutDetect;
		constexpr USB usb;
		constexpr CAN can;
		constexpr DMA dma;
		constexpr I2S i2s;
		constexpr Ethernet ethernet;
		constexpr RepetitiveIinterruptTimer repetitiveInterruptTimer;
		constexpr MotorControlPWM motorControlPWM;
		constexpr QEI qei;
	}
}
}
