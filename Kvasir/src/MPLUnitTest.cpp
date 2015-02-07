/**************************************************************************************************
 * Source file containing the unittests of the MPLUtility.hpp file
 *
 *
 * List of bugs:
 * 			- none :P
 *
 *
 * List of requested funtionalities:
 * 			- many
 *
 *

*/
#include "MPLUtility.hpp"

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
static_assert(ContainsT<float,Test>::value,"");
static_assert(ContainsT<char,Test>::value == false,"");

using UnsortedInts = List<Int<9>,Int<1>,Int<5>,Int<2>,Int<99>,Int<3>>;

using SortedInts = SortT<UnsortedInts,LessP>;
static_assert(IsSameT<SortedInts,List<Int<1>,Int<2>,Int<3>,Int<5>,Int<9>,Int<99>>>::value,"");
static_assert(IsSameT<SortT<List<>>,List<>>::value,"");
static_assert(IsSameT< SortT<List<Int<1>>>, List<Int<1>> >::value,"");

using TestTree = List<List<List<>,List<int>>,List<List<List<bool,long>,float,double,List<float>>>,List<>>;
using FlatTree = FlattenT<TestTree>;
static_assert(IsSame<Test,FlatTree>::value,"");




