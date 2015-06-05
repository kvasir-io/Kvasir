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
	namespace Action{
		struct Enable{};
		struct Disable{};
		struct SetPending{};
		struct ClearPending{};
		template<int I>
		struct SetPriority{};
		struct TriggerInterrupt{};
		static constexpr Enable enable{};
		static constexpr Disable disable{};
		static constexpr SetPending setPending{};
		static constexpr ClearPending clearPending{};
		static constexpr SetPriority<0> setPriority0{};
		static constexpr SetPriority<1> setPriority1{};
		static constexpr SetPriority<2> setPriority2{};
		static constexpr SetPriority<3> setPriority3{};
		static constexpr SetPriority<4> setPriority4{};
		static constexpr SetPriority<5> setPriority5{};
		static constexpr SetPriority<6> setPriority6{};
		static constexpr SetPriority<7> setPriority7{};
		static constexpr TriggerInterrupt triggerInterrupt{};
	}

	template<int I>
	struct Index{
		static constexpr unsigned value = I;
	};

	template<typename TAction, typename TIndex>
	struct MakeAction{
		static_assert(MPL::AlwaysFalse<TAction>::value,"could not find this configuration in the included Core");
	};

	template<typename TAction, typename TIndex>
	using MakeActionT = typename MakeAction<TAction,TIndex>::Type;

	template<typename TAction, typename TIndex>
	constexpr MakeActionT<TAction,TIndex> action(TAction,TIndex){ return {}; };

	template<typename TIndex>
	constexpr MakeActionT<Action::Enable,TIndex> makeEnable(TIndex){ return MakeActionT<Action::Enable,TIndex>{}; };
	template<typename TIndex>
	constexpr MakeActionT<Action::Disable,TIndex> makeDisable(TIndex){ return MakeActionT<Action::Disable,TIndex>{}; };
	template<typename TIndex>
	constexpr MakeActionT<Action::SetPending,TIndex> makeSetPending(TIndex){ return MakeActionT<Action::SetPending,TIndex>{}; };
	template<typename TIndex>
	constexpr MakeActionT<Action::ClearPending,TIndex> makeClearPending(TIndex){ return MakeActionT<Action::ClearPending,TIndex>{}; };
	template<typename TIndex>
	constexpr MakeActionT<Action::TriggerInterrupt,TIndex> makeTriggerInterrupt(TIndex){ return MakeActionT<Action::TriggerInterrupt,TIndex>{}; };

	using IsrFunctionPointer = void(*)(void);

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

	template<typename T = void>
	struct InterruptOffsetTraits;   //must be specialized in a chipxxxInterrupt file

}
}
