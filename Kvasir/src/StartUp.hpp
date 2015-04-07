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
#include "MPLUtility.hpp"
#include "Interrupt.hpp"
#include "Register.hpp"
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
		template<typename T, typename U, typename V>
		struct Listify<Register::Action<T,U,V>> : List<Register::Action<T,U,V>>{};
		template<typename... Ts>
		struct Listify<List<Ts...>> : List<Ts...>{};
		template<typename T, typename = void, typename = void>
		struct GetInit : List<>{};
		template<typename T>
		struct GetInit<T,void,VoidT<decltype(T::init)>> : Listify<RemoveCVT<decltype(T::init)>> {};

//		template<typename T, typename U>
//		struct HasThisIsrHelper : FalseType{};
//		template<typename T>
//		struct HasThisIsrHelper<T, RemoveCVT<typename decltype(T::isr)::IsrType>> : RemoveCVT<decltype(T::isr)>{};
//		template<typename... Ts, int I>
//		struct HasThisIsrHelper<MPL::List<Ts...>,Nvic::Index<I>> : Find<List<Ts...>,Template<HasThisIsr<I>>>{};
//		template<int I>
//		struct HasThisIsr {
//			template<typename T>
//			struct Apply : HasThisIsrHelper<T,Nvic::Index<I>>::Type {};
//			template<typename... T>
//			struct Apply : AnyOf<typename HasThisIsrHelper<Ts,Nvic::Index<I>>::Type...>::Type {};
//		};
//		template<int I, typename TList, int Index>
//		struct GetIsrPointerHelper : MPL::At<TList,Int<Index>>::IsrFunction{};
//		template<int I, typename TList>
//		struct GetIsrPointerHelper<I,TList,-1> : Kvasir::Nvic::UnusedIsr{};
//
//		template<int I, typename TList>
//		struct GetIsrPointer : GetIsrPointerHelper<I,TList,Find<TList,Template<HasThisIsr<I>::template Apply>>::value>{};

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
		struct CompileIsrPointerList<32,List<Ts...>,TModList> : List<Ts...>{};

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
		-14,
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
}
}




extern int main(void);
extern void _kvasirInit();

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
	void _kvasirInit(){ \
		using RegInit = ::Kvasir::Startup::GetInitT< __VA_ARGS__ >;\
		::Kvasir::Register::apply<RegInit>(); \
	} \
	using Init = ::Kvasir::Startup::GetIsrPointersT< __VA_ARGS__ >;\
__attribute__ ((section(".isr_vector")))\
void (* const g_pfnVectors[])(void) = {\
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<0>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<1>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<2>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<3>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<4>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<5>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<6>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<7>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<8>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<9>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<10>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<11>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<12>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<13>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<14>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<15>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<16>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<17>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<18>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<19>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<20>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<21>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<22>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<23>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<24>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<25>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<26>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<27>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<28>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<29>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<30>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<31>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<32>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<33>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<34>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<35>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<36>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<37>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<38>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<39>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<40>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<41>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<42>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<43>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<44>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<45>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<46>>::value, \
    Kvasir::MPL::At<Init,Kvasir::MPL::Int<47>>::value \
};\
\
\
/*****************************************************************************
 Reset entry point for your code.
 Sets up a simple runtime environment and initializes the C/C++
 library.
*****************************************************************************/\
__attribute__ ((section(".after_vectors")))\
void ResetISR(void) {\
	Kvasir::Startup::FirstInitStep<Kvasir::Tag::User>{}();\
    /* Call C++ library initialisation */ \
    __libc_init_array(); \
    KvasirSystemClock<Kvasir::Tag::User>::Type::init();\
    _kvasirInit(); \
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
