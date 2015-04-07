#pragma once
/**************************************************************************
Copyright 2015 Odin Holmes
Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at
http://www.apache.org/licenses/LICENSE-2.0
Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
****************************************************************************/
namespace Kvasir{
namespace Nvic{
	using IsrFunctionPointer = void(*)(void);

	template<int I>
	struct Index{
		static constexpr unsigned value = I;
	};

	//type wrapper around a function pointer including an ISR type
	template<IsrFunctionPointer F, typename T>
	struct Isr;
	template<IsrFunctionPointer F, int I>
	struct Isr<F,Index<I>>{
		static constexpr IsrFunctionPointer value = F;
		using Type = Isr<F, Index<I>>;
		using IType = Index<I>;
	};

	class DefaultIsrs{
	public:
		static void Unused(){
			while(1);
		}
	};

	using UnusedIsr = Isr<&DefaultIsrs::Unused,Index<0>>;

}
}
