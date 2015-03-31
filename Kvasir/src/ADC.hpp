#pragma once
#include "Tags.hpp"
#include "Register.hpp"

namespace Kvasir{
namespace ADC{
	template<typename TDerived, typename TConfig>
	class Base{
	protected:
		void onConversion(int, Tag::ADCChannel){}
	using Config = TConfig;

	public:
		static constexpr auto init = MPL::list(
				Config::powerOn,
				Register::sequencePoint);

	};
}
}
