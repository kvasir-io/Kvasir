#pragma once
#include "Interrupt.hpp"

namespace Kvasir{
namespace Timer{
template<typename TDerived, typename TConfig>
struct Base {
protected:
	static void onMatch0() {};
	static void onMatch1() {};
	static void onMatch2() {};
	static void onMatch3() {};
	static void onCapture0() {};
	static void onCapture1() {};
	static void onCapture2() {};
private:
	static void Isr(){
		auto i = TConfig::InterruptStatusRegister::read();
		if(i & (1<<0)){
			TConfig::InterruptStatusRegister::write(1<<0);
			TDerived::onMatch0();
		}
		if(i & (1<<1)){
			TConfig::InterruptStatusRegister::write(1<<1);
			TDerived::onMatch1();
		}
		if(i & (1<<2)){
			TConfig::InterruptStatusRegister::write(1<<2);
			TDerived::onMatch2();
		}
		if(i & (1<<3)){
			TConfig::InterruptStatusRegister::write(1<<3);
			TDerived::onMatch3();
		}
		if(i & (1<<4)){
			TConfig::InterruptStatusRegister::write(1<<4);
			TDerived::onCapture0();
		}
		if(i & (1<<5)){
			TConfig::InterruptStatusRegister::write(1<<5);
			TDerived::onCapture1();
		}
		if(i & (1<<6)){
			TConfig::InterruptStatusRegister::write(1<<6);
			TDerived::onCapture2();
		}

	}
protected:
	using Config = TConfig;
public:
	using IsrType = typename TConfig::IsrType;
	using IsrFunction = Nvic::IsrFunction<&Base::Isr>;
	static constexpr auto init = MPL::list(
			Config::clockEnable,
			Register::sequencePoint,
			Config::template SetPrescaleT<Config::prescaleValue>::value,
			Config::matchReg0Init,
			Config::matchReg1Init,
			Config::matchReg2Init,
			Config::matchReg3Init,
			Config::captureReg0Init,
			Config::captureReg1Init,
			Config::captureReg2Init,
			Register::sequencePoint,
			Config::couterEnable,
			Config::enableIrq
			);
};
}
}
