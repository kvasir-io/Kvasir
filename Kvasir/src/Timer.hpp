#pragma once
#include "Interrupt.hpp"

namespace Kvasir{
namespace Timer{
template<typename TDerived, typename TConfig>
struct Base {
private:
	static void Isr(){
		auto i = TConfig::InterruptStatusRegister::read();
		if(i & (1<<0)){
			TConfig::InterruptStatusRegister::write(1);
			TDerived::onMatch0();
		}

	}
protected:
	using Config = TConfig;
public:
	using IsrType = typename TConfig::IsrType;
	using IsrFunction = Nvic::IsrFunction<&Base::Isr>;
};
}
}
