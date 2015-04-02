#pragma once

#include "Register.hpp"

namespace Kvasir{
	namespace Detail{
		template<int I>
		struct UsartN{

		};
	}
	struct Usart0{
		static constexpr int baseAddress = 0x40008000;
		//double registers
		struct LineControl{
			static constexpr int address = baseAddress + 0x0C;
		};
		struct ModemControl{
			static constexpr int address = baseAddress + 0x10;
		};
		struct LineStatus{
			static constexpr int address = baseAddress + 0x14;
		};
		struct ModemStatus{
			static constexpr int address = baseAddress + 0x0C;
		};
		struct AutobaudControl{
			static constexpr int address = baseAddress + 0x20;
		};
		struct IrdaControl{
			static constexpr int address = baseAddress + 0x24;
		};
		struct FunctionalDivider{
			static constexpr int address = baseAddress + 0x28;
		};
		struct Oversampling{
			static constexpr int address = baseAddress + 0x2C;
		};
		struct TransmitEnable{
			static constexpr int address = baseAddress + 0x30;
		};
		struct HalfDuplexEnable{
			static constexpr int address = baseAddress + 0x40;
		};
		struct SmartCardInterfaceControl{
			static constexpr int address = baseAddress + 0x48;
		};
		struct Rs485Control{
			static constexpr int address = baseAddress + 0x4C;
		};
		struct Rs485AddressMatch{
			static constexpr int address = baseAddress + 0x50;
		};
		struct Rs485DirectionControlDelay{
			static constexpr int address = baseAddress + 0x54;
		};
		struct SynchronousModeControl{
			static constexpr int address = baseAddress + 0x58;
		};
	};
	using Usart1 = UsartN<0>;
	using Usart2 = UsartN<1>;
	using Usart3 = UsartN<2>;
	using Usart4 = UsartN<3>;
}
