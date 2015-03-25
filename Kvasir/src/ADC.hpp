#pragma once
#include "Tags.hpp"

namespace Kvasir{
namespace ADC{
	template<typename TDerived, typename TConfig>
	class Base{
	protected:
		void onConversion(int, Tag::ADCChannel){}
	using Config = TConfig;

	public:

	};
}
}
