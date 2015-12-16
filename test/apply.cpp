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
	constexpr auto w = write(Kvasir::Adc0Cfg2::AdlstsValC::v00);
	int i = Kvasir::MPL::FlattenT<Kvasir::MPL::List<decltype(w)>>::Type{};
	//static_assert(Kvasir::Register::Detail::ArgsToApplyArePlausible<decltype(w)>::value, "one of the supplied arguments is not supported");
	//apply(w);
	if (Kvasir::Register::actions_.front().address_ == 0x4003b00c)
		return 0;
	return 1;
}
