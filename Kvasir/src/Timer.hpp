#pragma once
#include "Interrupt.hpp"

namespace Kvasir{
namespace Timer{
template<typename TDerived, typename TConfig>
struct Base {
private:
	static void Isr(){
		//TODO implement interrupt handling here
	}
protected:
	using Config = TConfig;
public:
	using IsrType = typename TConfig::IsrType;
	using IsrFunction = Interrupt::IsrFunction<&Base::Isr>;
};
}
}
