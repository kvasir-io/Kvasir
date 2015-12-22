#include "Register/Apply.hpp"
#include "Chip/MKL27Z4.hpp"

#include "Register/Seam.hpp"
#include <iostream>
#include <sstream>
#include <iomanip>

namespace Kvasir {
	namespace Register {
		template<typename T>
		struct ExecuteSeam<T, ::Kvasir::Tag::User> : RecordActions<T> {};
	}
}


int main() {
	using namespace Kvasir::Register;
	constexpr auto w = write(Kvasir::Adc0Cfg2::AdlstsValC::v00);
	using Arg = typename std::remove_cv<decltype(w)>::type;
	static_assert(Detail::ArgsToApplyArePlausible<Arg>::value, "one of the supplied arguments is not supported");
	using namespace Kvasir::MPL;
	//unsigned a[] = { Detail::argToInt(args)... };
	using IndexedActions = TransformT < brigand::list<Arg>, BuildIndicesT<1>, Kvasir::MPL::Template < Kvasir::Register::Detail::MakeIndexedAction >> ;
	using FlattenedActions = brigand::flatten<IndexedActions>;
	using Steps = SplitT<FlattenedActions, SequencePoint>;
	using Merged = Kvasir::Register::Detail::MergeActionStepsT<Steps>;
	using Actions = brigand::flatten<Merged>;
	int i = Steps{};
	//static_assert(Kvasir::Register::Detail::ArgsToApplyArePlausible<typename std::remove_cv<decltype(w)>::type>::value, "one of the supplied arguments is not supported");
	apply(w);
	if (Kvasir::Register::actions_.front().address_ == 0x4003b00c)
		return 0;
	return 1;
}
