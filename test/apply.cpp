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

#define BRIGAND_NO_BOOST_SUPPORT 1
#include "Mpl\brigand.hpp"
#include <utility>


int main()
{
	constexpr auto w = write(Kvasir::Adc0Cfg2::AdlstsValC::v00);
	apply(w);
	apply(write(Kvasir::Adc0Ra::d, 100));
	auto it = Kvasir::Register::actions_.begin();
	if (it->address_ != 0x4003b00c)
		return 1;
	++it;
	if (it->address_ != 0x4003b010 || it->value_ != 100 || it->mask_ != 0xffff0000)
		return 1;
	return 0;
}
