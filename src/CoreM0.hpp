#pragma once
#include "Reg.hpp"

namespace Kvasir{
namespace Core{
	namespace Interrupt{
		template<int I>
		struct Type{
			constexpr unsigned value = I;
		};
		using WatchdogTimer = Type<0>;
		constexpr WatchdowTimer watchdogTimer;
	}
	namespace detail{
		constexpr int getEnableIrqRegister(int IrqNum){
			return 0xE000E100 + (IrqNum >> 5);
		}
	}
	template<typename T>
	struct EnableIrq;
	template<int I>
	struct EnableIrq<Interrupt::Type<I>> : Register::Option<getEnableIrqRegister(I),0x0,(1<<I)>{};
}
}
