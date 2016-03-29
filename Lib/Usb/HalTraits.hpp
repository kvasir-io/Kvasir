#pragma once
#include <Mpl/brigand.hpp>
#include <stdint.h>
namespace Kvasir
{
namespace Usb
{
	template<typename TDevice, typename...>		//called with device and Kvasir::Tag::User
	struct GetHal;
}
}