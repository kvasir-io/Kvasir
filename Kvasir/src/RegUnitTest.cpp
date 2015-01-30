#pragma once
#include "Reg.hpp"

using namespace Kvasir;
using namespace MPL;

using ReadableTest = Register<Int<1>,Int<0xFFFFFFFF>,ReadableP,IntConversionP>;
using WriteableTest = Register<Int<1>,Int<0xFFFFFFFF>,WriteableP,IntConversionP>;
using PushableTest = Register<Int<1>,Int<0xFFFFFFFF>,PushableP,IntConversionP>;
using PopableTest = Register<Int<1>,Int<0xFFFFFFFF>,PopableP,IntConversionP>;
using ClearOnReadTest = Register<Int<1>,Int<0xFFFFFFFF>,ClearOnReadP,IntConversionP>;

enum class CAN1PinSelectOption {Port0Pin0=0};


using CAN1PinSelect = Register<Int<1234>,Int<0x0000000F>,List<ReadableP,WriteableP>,EnumConversionP<CAN1PinSelectOption>>;

using RegList = List<RegisterOptionT<1,1,2>,RegisterOptionT<3,4,8>,RegisterOptionT<1,8,16>,RegisterOptionT<4,1,1>>;

using SortedRegisters = SortT<RegList,::Kvasir::Detail::RegisterOptionLessP>;
using MergedRegisters = typename ::Kvasir::Detail::MergeRegisterOptions<SortedRegisters>::Type;

static_assert(IsSame<SortedRegisters,List<RegisterOptionT<1,8,16>,RegisterOptionT<1,1,2>,RegisterOptionT<3,4,8>,RegisterOptionT<4,1,1>>>::value,"");
static_assert(IsSame<MergedRegisters,List<RegisterOptionT<4,1,1>,RegisterOptionT<3,4,8>,RegisterOptionT<1,9,18>>>::value,"");

template<typename>
struct Print;

void FTest(){
	//Print<MergedRegisters> p;
	ReadableTest::read();
	WriteableTest::write(1);
	PushableTest::push(1);
	PopableTest::pop();
	ClearOnReadTest::readAndClear();
	CAN1PinSelect::write(CAN1PinSelectOption::Port0Pin0);
}
