#pragma once
#include "Tags.hpp"
#include "MPLUtility.hpp"
template<typename T>
struct KvasirSystemClock {
	static_assert(Kvasir::MPL::AlwaysFalse<T>::value,"You must define the system clock in every source file, put it in a header");
};
namespace Kvasir{
namespace SystemClock{
	template<typename TDerived, typename TTraits>
	struct ExternalOsciRawSettings{
	protected:
		using Config = TTraits;
	};
}
}


#define KVASIR_CLOCK(arg) \
	template<> \
	struct KvasirSystemClock<Kvasir::Tag::User>{ \
		using Type = arg; \
	}; \
	extern void KVASIR_START_must_only_be_defined_once_and_KVASIR_CLOCK_must_be_the_same_type_in_all_units(arg);

