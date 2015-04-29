#pragma once
/**************************************************************************
 * This file contains the Kvasir start up code
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
#include "MPL/Utility.hpp"
#include "MPL/Algorithm.hpp"
#include "Interrupt.hpp"
#include "Register/Register.hpp"
#include "Tags.hpp"
#include "SystemClock.hpp"

// The entry point for the C++ library startup
extern "C" {
    extern void __libc_init_array(void);
    extern void ResetISR();
    extern void _vStackTop(void);
}

namespace Kvasir{
namespace Startup{
	namespace Detail{
		using namespace MPL;
		template<typename T>
		struct Listify{
			static_assert(AlwaysFalse<T>::value,"implausible type");
		};
		template<typename T, typename U>
		struct Listify<Register::Action<T,U>> : List<Register::Action<T,U>>{};
		template<typename... Ts>
		struct Listify<List<Ts...>> : List<Ts...>{};
		template<typename T, typename = void, typename = void>
		struct GetInit : List<>{};
		template<typename T>
		struct GetInit<T,void,VoidT<decltype(T::init)>> : Listify<RemoveCVT<decltype(T::init)>> {};

		template<typename T, typename = void>
		struct GetPCInit : List<>{};
		template<typename T>
		struct GetPCInit<T,VoidT<decltype(T::powerClockEnable)>> : Listify<RemoveCVT<decltype(T::powerClockEnable)>> {};

		template<int I>
		struct IsIsrByIndex{
			template<typename T>
			struct Apply : Bool<(T::IType::value == I)>::Type{};
		};

		template<int I, typename TList, typename TModList>
		struct CompileIsrPointerList;
		template<int I, typename...Ts, typename TModList>
		struct CompileIsrPointerList<I,List<Ts...>,TModList> : CompileIsrPointerList<
			I+1,
			List<Ts..., GetT<TModList,Template<IsIsrByIndex<I>::template Apply>,Nvic::UnusedIsr>>,
			TModList
			>{};
		template<typename...Ts, typename TModList>
		struct CompileIsrPointerList<Nvic::InterruptOffsetTraits<void>::end,List<Ts...>,TModList> : List<Ts...>{};

		//predecate retuning result of left < right for RegisterOptions
		template<typename TLeft, typename TRight>
		struct ListLengthLess : Bool<(SizeT<TLeft>::value < SizeT<TRight>::value)>{};
		using ListLengthLessP = Template<ListLengthLess>;

		template<typename TOut, typename TList>
		struct Merge;
		template<typename... Os, typename... Ts>
		struct Merge<List<Os...>,List<List<>,Ts...>> : Merge<  //if next is empty list remove it and continue
			List<Os...>,List<Ts...>>{};
		template<typename... Os, typename... Ts>
		struct Merge<List<Os...>,List<Ts...>> : Merge<
			List<Os...,FlattenT<List<AtT<Ts,Int<0>>...>>>,
			List<RemoveT<Ts,Int<0>,Int<1>>...>>{};
		template<typename... Os>
		struct Merge<List<Os...>,List<>> : List<Os...>{};

		template<typename T, typename = void, typename = void>
		struct ExtractIsr : MPL::List<>{};
		template<typename T, typename U>
		struct ExtractIsr<T, U, VoidT<typename T::Isr>> : T::Isr {};
		template<typename T>
		struct ExtractIsr<T, void, VoidT<decltype(T::isr)>> : decltype(T::isr) {};

	}
	template<typename...Ts>
	struct GetIsrPointers : Detail::CompileIsrPointerList<
		Nvic::InterruptOffsetTraits<void>::begin,
		MPL::List<
			Nvic::Isr<&_vStackTop,Nvic::Index<0>>,
			Nvic::Isr<ResetISR,Nvic::Index<0>>
		>,
		MPL::FlattenT<
			MPL::List<typename Detail::ExtractIsr<Ts>::Type...>
		>
		>{};
	template<typename...Ts>
	using GetIsrPointersT = typename GetIsrPointers<Ts...>::Type;

	template<typename...Ts>
	struct GetInit {
		//make list of lists of actions corresponding to each sequence for each module
		using FlattenedSequencePieces = MPL::List<
				MPL::SplitT<MPL::FlattenT<typename Detail::GetInit<Ts>::Type>,Register::SequencePoint>...
				>;
		//sort lists by length
		using Sorted = MPL::SortT<FlattenedSequencePieces,Detail::ListLengthLessP>;
		//merge lists
		using MergedSequencePieces = typename Detail::Merge<MPL::List<>,Sorted>::Type;
		using Type = MPL::JoinT<MergedSequencePieces,Register::SequencePoint>;
	};
	template<typename...Ts>
	using GetInitT = typename GetInit<Ts...>::Type;
	template<typename...Ts>
	struct GetPowerClockInit {
		//make list of lists of actions corresponding to each sequence for each module
		using FlattenedSequencePieces = MPL::List<
				MPL::SplitT<MPL::FlattenT<typename Detail::GetPCInit<Ts>::Type>,Register::SequencePoint>...
				>;
		//sort lists by length
		using Sorted = MPL::SortT<FlattenedSequencePieces,Detail::ListLengthLessP>;
		//merge lists
		using MergedSequencePieces = typename Detail::Merge<MPL::List<>,Sorted>::Type;
		using Type = MPL::JoinT<MergedSequencePieces,Register::SequencePoint>;
	};
	template<typename...Ts>
	using GetPowerClockInitT = typename GetPowerClockInit<Ts...>::Type;

	template<typename T>
	struct NvicVectorTable;
	template<typename... Ts>
	struct NvicVectorTable<MPL::List<Ts...>>{
		void (* const data[sizeof...(Ts)])(void) {Ts::value ...};
		constexpr NvicVectorTable(){};
	};
}
}




extern int main(void);

//*****************************************************************************
//
// The vector table.  Note that the proper constructs must be placed on this to
// ensure that it ends up at physical address 0x0000.0000.
//
//*****************************************************************************

using VoidFnc0T = void(*)(void);
template<VoidFnc0T F>
struct VoidFunction0{
	static constexpr auto value = F;
};

extern void (* const g_pfnVectors[])(void);

#define KVASIR_START(...) \
	void KVASIR_START_must_only_be_defined_once_and_KVASIR_CLOCK_must_be_the_same_type_in_all_units(typename KvasirSystemClock<Kvasir::Tag::User>::Type){} \
	using Pointers = ::Kvasir::Startup::GetIsrPointersT< __VA_ARGS__ >;\
	__attribute__ ((section(".isr_vector"))) Kvasir::Startup::NvicVectorTable<Pointers> nvicIsrVectors{};\
\
\
/*****************************************************************************
 Reset entry point for your code.
 Sets up a simple runtime environment and initializes the C/C++
 library.
*****************************************************************************/\
/*__attribute__ ((section(".after_vectors")))\*/\
void ResetISR(void) {\
	/*	this may be needed in order to activate ram for __libc_init_array(), it also
	 * 	gives the user the ability to put code directly after reset by specializing
	 * 	Kvasir::Startup::FirstInitStep<>, please don't specialize this unless you
	 * 	know what your doing!
	 */\
	Kvasir::Startup::FirstInitStep<Kvasir::Tag::User>{}();\
    /* Call C++ library initialization */ \
    __libc_init_array(); \
    /* note that powerClockInit has not yet run so in the system clock initialization
     * all power clock stuff related to the system clock must be done manually
     */\
    KvasirSystemClock<Kvasir::Tag::User>::Type::init();\
    /* The PowerClockInit step extracts all 'powerClockEnable' action lists from all modules
     * and executes them after merging.
     * This is done as a separate step because the power and clock init stuff
     * changes quite a bit between chips and Kvasir is usually capable of doing the right
     * thing. Therefore by doing it as an extra step we can save the user a lot of code
     */\
	using PowerClockInit = ::Kvasir::Startup::GetPowerClockInitT<__VA_ARGS__ >;\
	::Kvasir::Register::apply(PowerClockInit{}); \
	/* The RegInit step extracts all 'init' action lists from all modules and executes them
	 * after merging
	 */\
	constexpr ::Kvasir::Startup::GetInitT<__VA_ARGS__ > regInit{};\
	::Kvasir::Register::apply(regInit); \
    main(); \
    /* block if main() returns */ \
    while (1) {} \
}

//*****************************************************************************
// Default exception handlers. Override the ones here by defining your own
// handler routines in your application code.
//*****************************************************************************
__attribute__ ((section(".after_vectors")))
void NMI_Handler(void)
{   while(1) { }
}
__attribute__ ((section(".after_vectors")))
void HardFault_Handler(void)
{   while(1) { }
}

__attribute__ ((section(".after_vectors")))
void SVC_Handler(void)
{   while(1) { }
}

__attribute__ ((section(".after_vectors")))
void PendSV_Handler(void)
{   while(1) { }
}

__attribute__ ((section(".after_vectors")))
void SysTick_Handler(void)
{   while(1) { }
}

//*****************************************************************************
//
// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.
//
//*****************************************************************************
__attribute__ ((section(".after_vectors")))
void IntDefaultHandler(void)
{   while(1) { }
}
