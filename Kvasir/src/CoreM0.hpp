#pragma once
#include "CoreCommon.hpp"
#include "Gpio.hpp"

namespace Kvasir{
namespace Core{
	namespace Interrupt{
		template<int I>
		using Type = ::Kvasir::Interrupt::Type<I>;
		using PinInterrupt0 = Type<0>;
		using PinInterrupt1 = Type<1>;
		using PinInterrupt2 = Type<2>;
		using PinInterrupt3 = Type<3>;
		using PinInterrupt4 = Type<4>;
		using PinInterrupt5 = Type<5>;
		using PinInterrupt6 = Type<6>;
		using PinInterrupt7 = Type<7>;
		using GroupInterrupt0 = Type<8>;
		using GroupInterrupt1 = Type<9>;
		using I2C1 = Type<10>;
		using Uart1Or4 = Type<11>;
		using Uart2Or3 = Type<12>;
		using Sct0Or1 = Type<13>;
		using Ssp1 = Type<14>;
		using I2C0 = Type<15>;
		using CounterTimer16Bank0 = Type<16>;
		using CounterTimer16Bank1 = Type<17>;
		using CounterTimer32Bank0 = Type<18>;
		using CounterTimer32Bank1 = Type<19>;
		using Ssp0 = Type<20>;
		using Usart0 = Type<21>;
		using UsbIrq = Type<22>;
		using UsbFiq = Type<23>;
		using AdcA = Type<24>;
		using Rtc = Type<25>;
		using BodAndWdt = Type<26>;
		using Flash = Type<27>;
		using Dma = Type<28>;
		using AdcB = Type<29>;
		using UsbWakeup = Type<30>;
		constexpr PinInterrupt0 pinInterrupt0;
		constexpr PinInterrupt1 pinInterrupt1;
		constexpr PinInterrupt2 pinInterrupt2;
		constexpr PinInterrupt3 pinInterrupt3;
		constexpr PinInterrupt4 pinInterrupt4;
		constexpr PinInterrupt5 pinInterrupt5;
		constexpr PinInterrupt6 pinInterrupt6;
		constexpr PinInterrupt7 pinInterrupt7;
		constexpr GroupInterrupt0 groupInterrupt0;
		constexpr GroupInterrupt1 groupInterrupt1;
		constexpr I2C1 i2C1;
		constexpr Uart1Or4 uart1Or4;
		constexpr Uart2Or3 uart2Or3;
		constexpr Sct0Or1 sct0Or1;
		constexpr Ssp1 ssp1;
		constexpr I2C0 i2c0;
		constexpr CounterTimer16Bank0 counterTimer16Bank0;
		constexpr CounterTimer16Bank1 counterTimer16Bank1;
		constexpr CounterTimer32Bank0 counterTimer32Bank0;
		constexpr CounterTimer32Bank1 counterTimer32Bank1;
		constexpr Ssp0 ssp0;
		constexpr Usart0 usart0;
		constexpr UsbIrq usbIrq;
		constexpr UsbFiq usbFiq;
		constexpr AdcA adcA;
		constexpr Rtc rtc;
		constexpr BodAndWdt bodAndWdt;
		constexpr Flash flash;
		constexpr Dma dma;
		constexpr AdcB adcb;
		constexpr UsbWakeup usbWakeup;
	}
}
	namespace Gpio{
		template<int Port, int Pin>
		struct MakeAction<Action::Input,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0xA0002000 + Port*4),(1<<Pin),0>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Output,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::WriteActionT<(0xA0002000 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Set,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::BlindWriteActionT<(0xA0002200 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Clear,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::BlindWriteActionT<(0xA0002280 + Port*4),(1<<Pin),(1<<Pin)>{};
		template<int Port, int Pin>
		struct MakeAction<Action::Toggle,PinLocation<MPL::Int<Port>,MPL::Int<Pin>>> :
			Register::BlindWriteActionT<(0xA0002300 + Port*4),(1<<Pin),(1<<Pin)>{};
	}

	struct Timer0 {
		using IsrType = Core::Interrupt::CounterTimer16Bank0;
	};
}
