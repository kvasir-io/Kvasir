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
	apply(write(Kvasir::Adc0Cfg2::AdlstsValC::v00));
	if (Kvasir::Register::actions_.front().address_ == 0x4003b00c)
		return 0;
	return 1;
}
