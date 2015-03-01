#pragma once
#include "MPLUtility.hpp"
#include "Interrupt.hpp"
#include "Register.hpp"

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
		template<typename T, typename = void>
		struct GetInit : List<>{};
		template<typename T>
		struct GetInit<T,VoidT<typename T::Init>> : T::Init{};

		template<typename T, typename U>
		struct HasThisIsrHelper : FalseType{};
		template<typename T>
		struct HasThisIsrHelper<T, typename T::IsrType> : TrueType{};
		template<int I>
		struct HasThisIsr {
			template<typename T>
			struct Apply : HasThisIsrHelper<T,Core::Interrupt::Type<I>>::Type {};
		};
		template<int I, typename TList, int Index>
		struct GetIsrPointerHelper : MPL::At<TList,Int<Index>>::IsrFunction{};
		template<int I, typename TList>
		struct GetIsrPointerHelper<I,TList,-1> : Kvasir::Interrupt::UnusedIsr{};
		template<int I, typename TList>
		struct GetIsrPointer : GetIsrPointerHelper<I,TList,Find<TList,Template<HasThisIsr<I>::template Apply>>::value>{};
		template<int I, typename TList, typename TModList>
		struct CompileIsrPointerList;
		template<int I, typename...Ts, typename TModList>
		struct CompileIsrPointerList<I,List<Ts...>,TModList> : CompileIsrPointerList<
			I+1,
			List<Ts...,typename GetIsrPointer<I,TModList>::Type>,
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
			List<Os...,FlattenT<List<At<Ts,Int<0>>...>>>,
			List<RemoveT<Ts,Int<0>,Int<1>>...>>{};
		template<typename... Os>
		struct Merge<List<Os...>,List<>> : List<Os...>{};



	}
	template<typename...Ts>
	struct GetIsrPointers : Detail::CompileIsrPointerList<
		0,
		MPL::List<
			Interrupt::IsrFunction<&_vStackTop>,
			Interrupt::IsrFunction<ResetISR>,
			Interrupt::IsrFunction<nullptr>,  	//TODO give user the ability to change these
			Interrupt::IsrFunction<nullptr>,	//and use defaults based on traits from the CoreMX.hpp used
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>,
			Interrupt::IsrFunction<nullptr>
		>,
		MPL::List<Ts...>
		>{};
	template<typename...Ts>
	using GetIsrPointersT = typename GetIsrPointers<Ts...>::Type;

	template<typename...Ts>
	struct GetInit {
		using FlattenedSequencePieces = MPL::List<
				MPL::ExplodeT<MPL::FlattenT<typename Detail::GetInit<Ts>::Type>,Register::SequencePoint>...
				>;
		using Sorted = MPL::SortT<FlattenedSequencePieces,Detail::ListLengthLessP>;
		using Type = typename Detail::Merge<MPL::List<>,Sorted>::Type;
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
};
//*****************************************************************************
// Functions to carry out the initialization of RW and BSS data sections. These
// are written as separate functions rather than being inlined within the
// ResetISR() function in order to cope with MCUs with multiple banks of
// memory.
//*****************************************************************************
__attribute__ ((section(".after_vectors")))
void data_init(unsigned int romstart, unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int *pulSrc = (unsigned int*) romstart;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = *pulSrc++;
}

__attribute__ ((section(".after_vectors")))
void bss_init(unsigned int start, unsigned int len) {
    unsigned int *pulDest = (unsigned int*) start;
    unsigned int loop;
    for (loop = 0; loop < len; loop = loop + 4)
        *pulDest++ = 0;
}

//*****************************************************************************
// The following symbols are constructs generated by the linker, indicating
// the location of various points in the "Global Section Table". This table is
// created by the linker via the Code Red managed linker script mechanism. It
// contains the load address, execution address and length of each RW data
// section and the execution and length of each BSS (zero initialized) section.
//*****************************************************************************
extern unsigned int __data_section_table;
extern unsigned int __data_section_table_end;
extern unsigned int __bss_section_table;
extern unsigned int __bss_section_table_end;

//*****************************************************************************
// Reset entry point for your code.
// Sets up a simple runtime environment and initializes the C/C++
// library.
//*****************************************************************************
__attribute__ ((section(".after_vectors")))
void ResetISR(void) {

    // Optionally enable RAM banks that may be off by default at reset
#if !defined (DONT_ENABLE_DISABLED_RAMBANKS)
    volatile unsigned int *SYSCON_SYSAHBCLKCTRL = (unsigned int *) 0x40048080;
    // Ensure that RAM1(26) and USBSRAM(27) bits in SYSAHBCLKCTRL are set
    *SYSCON_SYSAHBCLKCTRL |= (1 << 26) | (1 <<27);
#endif

    // Copy the data sections from flash to SRAM.
    unsigned int LoadAddr, ExeAddr, SectionLen;
    unsigned int *SectionTableAddr;

    // Load base address of Global Section Table
    SectionTableAddr = &__data_section_table;

    // Copy the data sections from flash to SRAM.
    while (SectionTableAddr < &__data_section_table_end) {
        LoadAddr = *SectionTableAddr++;
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        data_init(LoadAddr, ExeAddr, SectionLen);
    }
    // At this point, SectionTableAddr = &__bss_section_table;
    // Zero fill the bss segment
    while (SectionTableAddr < &__bss_section_table_end) {
        ExeAddr = *SectionTableAddr++;
        SectionLen = *SectionTableAddr++;
        bss_init(ExeAddr, SectionLen);
    }


    // Call C++ library initialisation
    __libc_init_array();
    _kvasirInit();
    main();
    // block if main() returns
    while (1) {}
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
