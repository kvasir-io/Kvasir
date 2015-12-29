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


int main()
{
	constexpr auto w = write(Kvasir::Adc0Cfg2::AdlstsValC::v01);
	apply(w);
	apply(write(Kvasir::Adc0Ra::d, 100));
	apply(write(Kvasir::Adc0Cfg2::AdlstsValC::v10, Kvasir::Adc0Cfg2::AdhscValC::v1),
		write(Kvasir::Adc0Cfg2::adacken, Kvasir::Adc0Cfg2::AdackenVal::v1));
	auto it = Kvasir::Register::actions_.begin();
	if (it->address_ != 0x4003b00c || it->value_ != 1)
		return 1;
	++it;
	if (it->address_ != 0x4003b010 || it->value_ != 100 || it->mask_ != 0x0000ffff)
		return 1;
	++it;
	if (it->address_ != 0x4003b00c || it->value_ != 0x08 || it->mask_ != 0x00000008)  //this should merge with the next line once that is implemented
		return 1;
	++it;
	if (it->address_ != 0x4003b00c || it->value_ != 0x06 || it->mask_ != 0x00000007)
		return 1;
	return 0;
}
