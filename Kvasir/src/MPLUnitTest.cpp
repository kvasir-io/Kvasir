#include "MPLUtility.hpp"
#include "Reg.hpp"

using namespace Kvasir;
using namespace MPL;

static_assert(IsSameT<int,int>::value,"");
static_assert(!IsSameT<int,float>::value,"");

using Test = List<int,bool,long,float,double,float>;

static_assert(FindT<bool,Test>::value == 1,"");
static_assert(FindT<float,Test>::value == 3,"");
static_assert(FindT<char,Test>::value == -1,"");
static_assert(FindT<int,Test>::value == 0,"");
static_assert(FindT<char,List<>>::value == -1,"");
static_assert(ContainsT<Test,float>::value,"");
static_assert(ContainsT<Test,char>::value == false,"");

using UnsortedInts = List<Int<9>,Int<1>,Int<5>,Int<2>,Int<99>,Int<3>>;

using SortedInts = SortT<UnsortedInts,LessP>;
static_assert(IsSameT<SortedInts,List<Int<1>,Int<2>,Int<3>,Int<5>,Int<9>,Int<99>>>::value,"");
static_assert(IsSameT<SortT<List<>>,List<>>::value,"");
static_assert(IsSameT< SortT<List<Int<1>>>, List<Int<1>> >::value,"");

using TestTree = List<List<List<>,List<int>>,List<List<List<bool,long>,float,double,List<float>>>,List<>>;
using FlatTree = FlattenT<TestTree>;
static_assert(IsSame<Test,FlatTree>::value,"");

using ReadableTest = Register<Int<1>,Int<0xFFFFFFFF>,ReadableP,IntConversionP>;
using WriteableTest = Register<Int<1>,Int<0xFFFFFFFF>,WriteableP,IntConversionP>;
using PushableTest = Register<Int<1>,Int<0xFFFFFFFF>,PushableP,IntConversionP>;
using PopableTest = Register<Int<1>,Int<0xFFFFFFFF>,PopableP,IntConversionP>;
using ClearOnReadTest = Register<Int<1>,Int<0xFFFFFFFF>,ClearOnReadP,IntConversionP>;

enum class CAN1PinSelectOption {Port0Pin0=0};


using CAN1PinSelect = Register<Int<1234>,Int<0x0000000F>,List<ReadableP,WriteableP>,EnumConversionP<CAN1PinSelectOption>>;

void FTest(){
	ReadableTest::read();
	WriteableTest::write(1);
	PushableTest::push(1);
	PopableTest::pop();
	ClearOnReadTest::readAndClear();
	CAN1PinSelect::write(CAN1PinSelectOption::Port0Pin0);
}


