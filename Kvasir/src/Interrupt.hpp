
/*********
 *
 *
 */
#pragma once

namespace Kvasir{
namespace Interrupt{
using IsrFunctionPointer = void(*)(void);

//type wrapper around a function pointer
template<IsrFunctionPointer F>
struct IsrFunction{
	static constexpr IsrFunctionPointer value = F;
	using Type = IsrFunction<F>;
};

template<int I>
struct Type{
	static constexpr unsigned value = I;
};

class DefaultIsrs{
public:
	static void Unused(){
		while(1);
	}
};

using UnusedIsr = IsrFunction<&DefaultIsrs::Unused>;

}
}
